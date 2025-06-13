const forge = require('node-forge');
const fs = require('fs');
const path = require('path');

const keysDir = path.join(__dirname, '..', 'keys');
if (!fs.existsSync(keysDir)) fs.mkdirSync(keysDir);

const keypair = forge.pki.rsa.generateKeyPair(2048);

// Save private and public keys as PEM
fs.writeFileSync(path.join(keysDir, 'client_private.pem'), forge.pki.privateKeyToPem(keypair.privateKey));
fs.writeFileSync(path.join(keysDir, 'client_public.pem'), forge.pki.publicKeyToPem(keypair.publicKey));

// Extract modulus and print as hex
const modulusHex = keypair.publicKey.n.toString(16);

console.log('\n👇 Paste this modulus when prompted by MakeSignedClient:\n');
console.log(modulusHex);
console.log('\n✅ Keys saved to "keys/" folder.');
