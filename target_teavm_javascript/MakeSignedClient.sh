#!/bin/bash

cd "$(dirname "$0")"

if [ ! -d keys ] || [ ! -f keys/client_private.pem ] || [ ! -f keys/client_public.pem ]; then
  echo "Generating new RSA keypair..."
  node tools/keytool.js gen || { echo "Node.js or keytool.js failed"; exit 1; }
fi

java -cp "buildtools/MakeOfflineDownload.jar:buildtools/CompileEPK.jar" \
  net.lax1dude.eaglercraft.v1_8.buildtools.workspace.MakeSignedClient \
  "javascript/SignedBundleTemplate.txt" \
  "javascript/classes.js" \
  "javascript/assets.epk" \
  "javascript/lang" \
  "javascript/SignedClientTemplate.txt" \
  "javascript/UpdateDownloadSources.txt" \
  "javascript/EaglercraftX_1.8_Offline_Signed_Client.html"
