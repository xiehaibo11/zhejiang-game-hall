package org.bouncycastle.jce.provider;

public class JDKGOST3410Signer extends java.security.SignatureSpi implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers, org.bouncycastle.asn1.x509.X509ObjectIdentifiers {
    private org.bouncycastle.crypto.Digest digest;
    private java.security.SecureRandom random;
    private org.bouncycastle.crypto.DSA signer;

    public static class ecgost3410 extends org.bouncycastle.jce.provider.JDKGOST3410Signer {
        public ecgost3410() {
                r2 = this;
                org.bouncycastle.crypto.digests.GOST3411Digest r0 = new org.bouncycastle.crypto.digests.GOST3411Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECGOST3410Signer r1 = new org.bouncycastle.crypto.signers.ECGOST3410Signer
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class gost3410 extends org.bouncycastle.jce.provider.JDKGOST3410Signer {
        public gost3410() {
                r2 = this;
                org.bouncycastle.crypto.digests.GOST3411Digest r0 = new org.bouncycastle.crypto.digests.GOST3411Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.GOST3410Signer r1 = new org.bouncycastle.crypto.signers.GOST3410Signer
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    protected JDKGOST3410Signer(org.bouncycastle.crypto.Digest r1, org.bouncycastle.crypto.DSA r2) {
            r0 = this;
            r0.<init>()
            r0.digest = r1
            r0.signer = r2
            return
    }

    @Override
    protected java.lang.Object engineGetParameter(java.lang.String r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "engineSetParameter unsupported"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected void engineInitSign(java.security.PrivateKey r5) throws java.security.InvalidKeyException {
            r4 = this;
            boolean r0 = r5 instanceof org.bouncycastle.jce.interfaces.ECKey
            if (r0 == 0) goto L9
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r5 = org.bouncycastle.jce.provider.ECUtil.generatePrivateKeyParameter(r5)
            goto Ld
        L9:
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r5 = org.bouncycastle.jce.provider.GOST3410Util.generatePrivateKeyParameter(r5)
        Ld:
            org.bouncycastle.crypto.Digest r0 = r4.digest
            r0.reset()
            java.security.SecureRandom r0 = r4.random
            r1 = 1
            if (r0 == 0) goto L24
            org.bouncycastle.crypto.DSA r0 = r4.signer
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = new org.bouncycastle.crypto.params.ParametersWithRandom
            java.security.SecureRandom r3 = r4.random
            r2.<init>(r5, r3)
            r0.init(r1, r2)
            goto L29
        L24:
            org.bouncycastle.crypto.DSA r0 = r4.signer
            r0.init(r1, r5)
        L29:
            return
    }

    @Override
    protected void engineInitSign(java.security.PrivateKey r1, java.security.SecureRandom r2) throws java.security.InvalidKeyException {
            r0 = this;
            r0.random = r2
            r0.engineInitSign(r1)
            return
    }

    @Override
    protected void engineInitVerify(java.security.PublicKey r3) throws java.security.InvalidKeyException {
            r2 = this;
            java.lang.String r0 = "can't recognise key type in DSA based signer"
            boolean r1 = r3 instanceof org.bouncycastle.jce.interfaces.ECPublicKey
            if (r1 == 0) goto Lb
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r3 = org.bouncycastle.jce.provider.ECUtil.generatePublicKeyParameter(r3)
            goto L24
        Lb:
            boolean r1 = r3 instanceof org.bouncycastle.jce.interfaces.GOST3410Key
            if (r1 == 0) goto L14
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r3 = org.bouncycastle.jce.provider.GOST3410Util.generatePublicKeyParameter(r3)
            goto L24
        L14:
            byte[] r3 = r3.getEncoded()     // Catch: java.lang.Exception -> L36
            java.security.PublicKey r3 = org.bouncycastle.jce.provider.JDKKeyFactory.createPublicKeyFromDERStream(r3)     // Catch: java.lang.Exception -> L36
            boolean r1 = r3 instanceof org.bouncycastle.jce.interfaces.ECPublicKey     // Catch: java.lang.Exception -> L36
            if (r1 == 0) goto L30
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r3 = org.bouncycastle.jce.provider.ECUtil.generatePublicKeyParameter(r3)     // Catch: java.lang.Exception -> L36
        L24:
            org.bouncycastle.crypto.Digest r0 = r2.digest
            r0.reset()
            org.bouncycastle.crypto.DSA r0 = r2.signer
            r1 = 0
            r0.init(r1, r3)
            return
        L30:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException     // Catch: java.lang.Exception -> L36
            r3.<init>(r0)     // Catch: java.lang.Exception -> L36
            throw r3     // Catch: java.lang.Exception -> L36
        L36:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException
            r3.<init>(r0)
            throw r3
    }

    @Override
    protected void engineSetParameter(java.lang.String r1, java.lang.Object r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "engineSetParameter unsupported"
            r1.<init>(r2)
            throw r1
    }

    @Override
    protected void engineSetParameter(java.security.spec.AlgorithmParameterSpec r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "engineSetParameter unsupported"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected byte[] engineSign() throws java.security.SignatureException {
            r8 = this;
            org.bouncycastle.crypto.Digest r0 = r8.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Digest r1 = r8.digest
            r2 = 0
            r1.doFinal(r0, r2)
            r1 = 64
            byte[] r3 = new byte[r1]     // Catch: java.lang.Exception -> L4e
            org.bouncycastle.crypto.DSA r4 = r8.signer     // Catch: java.lang.Exception -> L4e
            java.math.BigInteger[] r0 = r4.generateSignature(r0)     // Catch: java.lang.Exception -> L4e
            r4 = r0[r2]     // Catch: java.lang.Exception -> L4e
            byte[] r4 = r4.toByteArray()     // Catch: java.lang.Exception -> L4e
            r5 = 1
            r0 = r0[r5]     // Catch: java.lang.Exception -> L4e
            byte[] r0 = r0.toByteArray()     // Catch: java.lang.Exception -> L4e
            r6 = r0[r2]     // Catch: java.lang.Exception -> L4e
            if (r6 == 0) goto L31
            int r6 = r0.length     // Catch: java.lang.Exception -> L4e
            int r6 = 32 - r6
            int r7 = r0.length     // Catch: java.lang.Exception -> L4e
            java.lang.System.arraycopy(r0, r2, r3, r6, r7)     // Catch: java.lang.Exception -> L4e
            goto L3a
        L31:
            int r6 = r0.length     // Catch: java.lang.Exception -> L4e
            int r6 = r6 - r5
            int r6 = 32 - r6
            int r7 = r0.length     // Catch: java.lang.Exception -> L4e
            int r7 = r7 - r5
            java.lang.System.arraycopy(r0, r5, r3, r6, r7)     // Catch: java.lang.Exception -> L4e
        L3a:
            r0 = r4[r2]     // Catch: java.lang.Exception -> L4e
            if (r0 == 0) goto L45
            int r0 = r4.length     // Catch: java.lang.Exception -> L4e
            int r1 = r1 - r0
            int r0 = r4.length     // Catch: java.lang.Exception -> L4e
            java.lang.System.arraycopy(r4, r2, r3, r1, r0)     // Catch: java.lang.Exception -> L4e
            goto L4d
        L45:
            int r0 = r4.length     // Catch: java.lang.Exception -> L4e
            int r0 = r0 - r5
            int r1 = r1 - r0
            int r0 = r4.length     // Catch: java.lang.Exception -> L4e
            int r0 = r0 - r5
            java.lang.System.arraycopy(r4, r5, r3, r1, r0)     // Catch: java.lang.Exception -> L4e
        L4d:
            return r3
        L4e:
            r0 = move-exception
            java.security.SignatureException r1 = new java.security.SignatureException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    protected void engineUpdate(byte r2) throws java.security.SignatureException {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2)
            return
    }

    @Override
    protected void engineUpdate(byte[] r2, int r3, int r4) throws java.security.SignatureException {
            r1 = this;
            org.bouncycastle.crypto.Digest r0 = r1.digest
            r0.update(r2, r3, r4)
            return
    }

    @Override
    protected boolean engineVerify(byte[] r7) throws java.security.SignatureException {
            r6 = this;
            org.bouncycastle.crypto.Digest r0 = r6.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Digest r1 = r6.digest
            r2 = 0
            r1.doFinal(r0, r2)
            r1 = 32
            byte[] r3 = new byte[r1]     // Catch: java.lang.Exception -> L37
            byte[] r4 = new byte[r1]     // Catch: java.lang.Exception -> L37
            java.lang.System.arraycopy(r7, r2, r4, r2, r1)     // Catch: java.lang.Exception -> L37
            java.lang.System.arraycopy(r7, r1, r3, r2, r1)     // Catch: java.lang.Exception -> L37
            r7 = 2
            java.math.BigInteger[] r7 = new java.math.BigInteger[r7]     // Catch: java.lang.Exception -> L37
            java.math.BigInteger r1 = new java.math.BigInteger     // Catch: java.lang.Exception -> L37
            r5 = 1
            r1.<init>(r5, r3)     // Catch: java.lang.Exception -> L37
            r7[r2] = r1     // Catch: java.lang.Exception -> L37
            java.math.BigInteger r1 = new java.math.BigInteger     // Catch: java.lang.Exception -> L37
            r1.<init>(r5, r4)     // Catch: java.lang.Exception -> L37
            r7[r5] = r1     // Catch: java.lang.Exception -> L37
            org.bouncycastle.crypto.DSA r1 = r6.signer
            r2 = r7[r2]
            r7 = r7[r5]
            boolean r7 = r1.verifySignature(r0, r2, r7)
            return r7
        L37:
            java.security.SignatureException r7 = new java.security.SignatureException
            java.lang.String r0 = "error decoding signature bytes."
            r7.<init>(r0)
            throw r7
    }
}
