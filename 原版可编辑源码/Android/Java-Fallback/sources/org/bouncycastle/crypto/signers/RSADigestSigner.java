package org.bouncycastle.crypto.signers;

public class RSADigestSigner implements org.bouncycastle.crypto.Signer {
    private static final java.util.Hashtable oidMap = null;
    private final org.bouncycastle.asn1.x509.AlgorithmIdentifier algId;
    private final org.bouncycastle.crypto.Digest digest;
    private boolean forSigning;
    private final org.bouncycastle.crypto.AsymmetricBlockCipher rsaEngine;

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.crypto.signers.RSADigestSigner.oidMap = r0
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd128
            java.lang.String r2 = "RIPEMD128"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd160
            java.lang.String r2 = "RIPEMD160"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd256
            java.lang.String r2 = "RIPEMD256"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509ObjectIdentifiers.id_SHA1
            java.lang.String r2 = "SHA-1"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            java.lang.String r2 = "SHA-224"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            java.lang.String r2 = "SHA-256"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            java.lang.String r2 = "SHA-384"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            java.lang.String r2 = "SHA-512"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md2
            java.lang.String r2 = "MD2"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md4
            java.lang.String r2 = "MD4"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5
            java.lang.String r2 = "MD5"
            r0.put(r2, r1)
            return
    }

    public RSADigestSigner(org.bouncycastle.crypto.Digest r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.crypto.encodings.PKCS1Encoding r0 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
            org.bouncycastle.crypto.engines.RSABlindedEngine r1 = new org.bouncycastle.crypto.engines.RSABlindedEngine
            r1.<init>()
            r0.<init>(r1)
            r2.rsaEngine = r0
            r2.digest = r3
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            java.util.Hashtable r1 = org.bouncycastle.crypto.signers.RSADigestSigner.oidMap
            java.lang.String r3 = r3.getAlgorithmName()
            java.lang.Object r3 = r1.get(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            org.bouncycastle.asn1.DERNull r1 = org.bouncycastle.asn1.DERNull.INSTANCE
            r0.<init>(r3, r1)
            r2.algId = r0
            return
    }

    private byte[] derEncode(byte[] r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.DigestInfo r0 = new org.bouncycastle.asn1.x509.DigestInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.algId
            r0.<init>(r1, r3)
            byte[] r3 = r0.getDEREncoded()
            return r3
    }

    @Override
    public byte[] generateSignature() throws org.bouncycastle.crypto.CryptoException, org.bouncycastle.crypto.DataLengthException {
            r4 = this;
            boolean r0 = r4.forSigning
            if (r0 == 0) goto L1e
            org.bouncycastle.crypto.Digest r0 = r4.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Digest r1 = r4.digest
            r2 = 0
            r1.doFinal(r0, r2)
            byte[] r0 = r4.derEncode(r0)
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r4.rsaEngine
            int r3 = r0.length
            byte[] r0 = r1.processBlock(r0, r2, r3)
            return r0
        L1e:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "RSADigestSigner not initialised for signature generation."
            r0.<init>(r1)
            throw r0
    }

    public java.lang.String getAlgorithmName() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.crypto.Digest r1 = r2.digest
            java.lang.String r1 = r1.getAlgorithmName()
            r0.append(r1)
            java.lang.String r1 = "withRSA"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public void init(boolean r3, org.bouncycastle.crypto.CipherParameters r4) {
            r2 = this;
            r2.forSigning = r3
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.ParametersWithRandom
            if (r0 == 0) goto L10
            r0 = r4
            org.bouncycastle.crypto.params.ParametersWithRandom r0 = (org.bouncycastle.crypto.params.ParametersWithRandom) r0
            org.bouncycastle.crypto.CipherParameters r0 = r0.getParameters()
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r0 = (org.bouncycastle.crypto.params.AsymmetricKeyParameter) r0
            goto L13
        L10:
            r0 = r4
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r0 = (org.bouncycastle.crypto.params.AsymmetricKeyParameter) r0
        L13:
            if (r3 == 0) goto L24
            boolean r1 = r0.isPrivate()
            if (r1 == 0) goto L1c
            goto L24
        L1c:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "signing requires private key"
            r3.<init>(r4)
            throw r3
        L24:
            if (r3 != 0) goto L35
            boolean r0 = r0.isPrivate()
            if (r0 != 0) goto L2d
            goto L35
        L2d:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "verification requires public key"
            r3.<init>(r4)
            throw r3
        L35:
            r2.reset()
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r2.rsaEngine
            r0.init(r3, r4)
            return
    }

    @Override
    public void reset() {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.reset()
            return
    }

    @Override
    public void update(byte r2) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2)
            return
    }

    @Override
    public void update(byte[] r2, int r3, int r4) {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2, r3, r4)
            return
    }

    @Override
    public boolean verifySignature(byte[] r10) {
            r9 = this;
            boolean r0 = r9.forSigning
            if (r0 != 0) goto L6d
            org.bouncycastle.crypto.Digest r0 = r9.digest
            int r0 = r0.getDigestSize()
            byte[] r1 = new byte[r0]
            org.bouncycastle.crypto.Digest r2 = r9.digest
            r3 = 0
            r2.doFinal(r1, r3)
            org.bouncycastle.crypto.AsymmetricBlockCipher r2 = r9.rsaEngine     // Catch: java.lang.Exception -> L6c
            int r4 = r10.length     // Catch: java.lang.Exception -> L6c
            byte[] r10 = r2.processBlock(r10, r3, r4)     // Catch: java.lang.Exception -> L6c
            byte[] r1 = r9.derEncode(r1)     // Catch: java.lang.Exception -> L6c
            int r2 = r10.length
            int r4 = r1.length
            r5 = 1
            if (r2 != r4) goto L30
            r0 = 0
        L23:
            int r2 = r10.length
            if (r0 >= r2) goto L6b
            r2 = r10[r0]
            r4 = r1[r0]
            if (r2 == r4) goto L2d
            return r3
        L2d:
            int r0 = r0 + 1
            goto L23
        L30:
            int r2 = r10.length
            int r4 = r1.length
            int r4 = r4 + (-2)
            if (r2 != r4) goto L6c
            int r2 = r10.length
            int r2 = r2 - r0
            int r2 = r2 + (-2)
            int r4 = r1.length
            int r4 = r4 - r0
            int r4 = r4 + (-2)
            r6 = r1[r5]
            int r6 = r6 + (-2)
            byte r6 = (byte) r6
            r1[r5] = r6
            r6 = 3
            r7 = r1[r6]
            int r7 = r7 + (-2)
            byte r7 = (byte) r7
            r1[r6] = r7
            r6 = 0
        L4e:
            if (r6 >= r0) goto L5e
            int r7 = r2 + r6
            r7 = r10[r7]
            int r8 = r4 + r6
            r8 = r1[r8]
            if (r7 == r8) goto L5b
            return r3
        L5b:
            int r6 = r6 + 1
            goto L4e
        L5e:
            r0 = 0
        L5f:
            if (r0 >= r2) goto L6b
            r4 = r10[r0]
            r6 = r1[r0]
            if (r4 == r6) goto L68
            return r3
        L68:
            int r0 = r0 + 1
            goto L5f
        L6b:
            return r5
        L6c:
            return r3
        L6d:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
            java.lang.String r0 = "RSADigestSigner not initialised for verification"
            r10.<init>(r0)
            throw r10
    }
}
