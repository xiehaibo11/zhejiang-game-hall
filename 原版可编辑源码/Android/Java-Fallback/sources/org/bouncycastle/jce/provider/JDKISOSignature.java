package org.bouncycastle.jce.provider;

public class JDKISOSignature extends java.security.SignatureSpi {
    private org.bouncycastle.crypto.signers.ISO9796d2Signer signer;

    public static class MD5WithRSAEncryption extends org.bouncycastle.jce.provider.JDKISOSignature {
        public MD5WithRSAEncryption() {
                r2 = this;
                org.bouncycastle.crypto.digests.MD5Digest r0 = new org.bouncycastle.crypto.digests.MD5Digest
                r0.<init>()
                org.bouncycastle.crypto.engines.RSABlindedEngine r1 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class RIPEMD160WithRSAEncryption extends org.bouncycastle.jce.provider.JDKISOSignature {
        public RIPEMD160WithRSAEncryption() {
                r2 = this;
                org.bouncycastle.crypto.digests.RIPEMD160Digest r0 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r0.<init>()
                org.bouncycastle.crypto.engines.RSABlindedEngine r1 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class SHA1WithRSAEncryption extends org.bouncycastle.jce.provider.JDKISOSignature {
        public SHA1WithRSAEncryption() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
                r0.<init>()
                org.bouncycastle.crypto.engines.RSABlindedEngine r1 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    protected JDKISOSignature(org.bouncycastle.crypto.Digest r3, org.bouncycastle.crypto.AsymmetricBlockCipher r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.crypto.signers.ISO9796d2Signer r0 = new org.bouncycastle.crypto.signers.ISO9796d2Signer
            r1 = 1
            r0.<init>(r4, r3, r1)
            r2.signer = r0
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
    protected void engineInitSign(java.security.PrivateKey r3) throws java.security.InvalidKeyException {
            r2 = this;
            java.security.interfaces.RSAPrivateKey r3 = (java.security.interfaces.RSAPrivateKey) r3
            org.bouncycastle.crypto.params.RSAKeyParameters r3 = org.bouncycastle.jce.provider.RSAUtil.generatePrivateKeyParameter(r3)
            org.bouncycastle.crypto.signers.ISO9796d2Signer r0 = r2.signer
            r1 = 1
            r0.init(r1, r3)
            return
    }

    @Override
    protected void engineInitVerify(java.security.PublicKey r3) throws java.security.InvalidKeyException {
            r2 = this;
            java.security.interfaces.RSAPublicKey r3 = (java.security.interfaces.RSAPublicKey) r3
            org.bouncycastle.crypto.params.RSAKeyParameters r3 = org.bouncycastle.jce.provider.RSAUtil.generatePublicKeyParameter(r3)
            org.bouncycastle.crypto.signers.ISO9796d2Signer r0 = r2.signer
            r1 = 0
            r0.init(r1, r3)
            return
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
            r2 = this;
            org.bouncycastle.crypto.signers.ISO9796d2Signer r0 = r2.signer     // Catch: java.lang.Exception -> L7
            byte[] r0 = r0.generateSignature()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = move-exception
            java.security.SignatureException r1 = new java.security.SignatureException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    @Override
    protected void engineUpdate(byte r2) throws java.security.SignatureException {
            r1 = this;
            org.bouncycastle.crypto.signers.ISO9796d2Signer r0 = r1.signer
            r0.update(r2)
            return
    }

    @Override
    protected void engineUpdate(byte[] r2, int r3, int r4) throws java.security.SignatureException {
            r1 = this;
            org.bouncycastle.crypto.signers.ISO9796d2Signer r0 = r1.signer
            r0.update(r2, r3, r4)
            return
    }

    @Override
    protected boolean engineVerify(byte[] r2) throws java.security.SignatureException {
            r1 = this;
            org.bouncycastle.crypto.signers.ISO9796d2Signer r0 = r1.signer
            boolean r2 = r0.verifySignature(r2)
            return r2
    }
}
