package org.bouncycastle.jce.provider;

public class JDKDSASigner extends java.security.SignatureSpi implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers, org.bouncycastle.asn1.x509.X509ObjectIdentifiers {
    private org.bouncycastle.crypto.Digest digest;
    private java.security.SecureRandom random;
    private org.bouncycastle.crypto.DSA signer;

    static class 1 {
    }

    private static class NullDigest implements org.bouncycastle.crypto.Digest {
        private java.io.ByteArrayOutputStream bOut;

        private NullDigest() {
                r1 = this;
                r1.<init>()
                java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
                r0.<init>()
                r1.bOut = r0
                return
        }

        NullDigest(org.bouncycastle.jce.provider.JDKDSASigner.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public int doFinal(byte[] r4, int r5) {
                r3 = this;
                java.io.ByteArrayOutputStream r0 = r3.bOut
                byte[] r0 = r0.toByteArray()
                int r1 = r0.length
                r2 = 0
                java.lang.System.arraycopy(r0, r2, r4, r5, r1)
                int r4 = r0.length
                return r4
        }

        @Override
        public java.lang.String getAlgorithmName() {
                r1 = this;
                java.lang.String r0 = "NULL"
                return r0
        }

        @Override
        public int getDigestSize() {
                r1 = this;
                java.io.ByteArrayOutputStream r0 = r1.bOut
                int r0 = r0.size()
                return r0
        }

        @Override
        public void reset() {
                r1 = this;
                java.io.ByteArrayOutputStream r0 = r1.bOut
                r0.reset()
                return
        }

        @Override
        public void update(byte r2) {
                r1 = this;
                java.io.ByteArrayOutputStream r0 = r1.bOut
                r0.write(r2)
                return
        }

        @Override
        public void update(byte[] r2, int r3, int r4) {
                r1 = this;
                java.io.ByteArrayOutputStream r0 = r1.bOut
                r0.write(r2, r3, r4)
                return
        }
    }

    public static class dsa224 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public dsa224() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA224Digest r0 = new org.bouncycastle.crypto.digests.SHA224Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.DSASigner r1 = new org.bouncycastle.crypto.signers.DSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class dsa256 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public dsa256() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA256Digest r0 = new org.bouncycastle.crypto.digests.SHA256Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.DSASigner r1 = new org.bouncycastle.crypto.signers.DSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class dsa384 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public dsa384() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA384Digest r0 = new org.bouncycastle.crypto.digests.SHA384Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.DSASigner r1 = new org.bouncycastle.crypto.signers.DSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class dsa512 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public dsa512() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA512Digest r0 = new org.bouncycastle.crypto.digests.SHA512Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.DSASigner r1 = new org.bouncycastle.crypto.signers.DSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecDSA extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecDSA() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECDSASigner r1 = new org.bouncycastle.crypto.signers.ECDSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecDSA224 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecDSA224() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA224Digest r0 = new org.bouncycastle.crypto.digests.SHA224Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECDSASigner r1 = new org.bouncycastle.crypto.signers.ECDSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecDSA256 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecDSA256() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA256Digest r0 = new org.bouncycastle.crypto.digests.SHA256Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECDSASigner r1 = new org.bouncycastle.crypto.signers.ECDSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecDSA384 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecDSA384() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA384Digest r0 = new org.bouncycastle.crypto.digests.SHA384Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECDSASigner r1 = new org.bouncycastle.crypto.signers.ECDSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecDSA512 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecDSA512() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA512Digest r0 = new org.bouncycastle.crypto.digests.SHA512Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECDSASigner r1 = new org.bouncycastle.crypto.signers.ECDSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecDSARipeMD160 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecDSARipeMD160() {
                r2 = this;
                org.bouncycastle.crypto.digests.RIPEMD160Digest r0 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECDSASigner r1 = new org.bouncycastle.crypto.signers.ECDSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecNR extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecNR() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECNRSigner r1 = new org.bouncycastle.crypto.signers.ECNRSigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecNR224 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecNR224() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA224Digest r0 = new org.bouncycastle.crypto.digests.SHA224Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECNRSigner r1 = new org.bouncycastle.crypto.signers.ECNRSigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecNR256 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecNR256() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA256Digest r0 = new org.bouncycastle.crypto.digests.SHA256Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECNRSigner r1 = new org.bouncycastle.crypto.signers.ECNRSigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecNR384 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecNR384() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA384Digest r0 = new org.bouncycastle.crypto.digests.SHA384Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECNRSigner r1 = new org.bouncycastle.crypto.signers.ECNRSigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class ecNR512 extends org.bouncycastle.jce.provider.JDKDSASigner {
        public ecNR512() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA512Digest r0 = new org.bouncycastle.crypto.digests.SHA512Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.ECNRSigner r1 = new org.bouncycastle.crypto.signers.ECNRSigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class noneDSA extends org.bouncycastle.jce.provider.JDKDSASigner {
        public noneDSA() {
                r2 = this;
                org.bouncycastle.jce.provider.JDKDSASigner$NullDigest r0 = new org.bouncycastle.jce.provider.JDKDSASigner$NullDigest
                r1 = 0
                r0.<init>(r1)
                org.bouncycastle.crypto.signers.DSASigner r1 = new org.bouncycastle.crypto.signers.DSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    public static class stdDSA extends org.bouncycastle.jce.provider.JDKDSASigner {
        public stdDSA() {
                r2 = this;
                org.bouncycastle.crypto.digests.SHA1Digest r0 = new org.bouncycastle.crypto.digests.SHA1Digest
                r0.<init>()
                org.bouncycastle.crypto.signers.DSASigner r1 = new org.bouncycastle.crypto.signers.DSASigner
                r1.<init>()
                r2.<init>(r0, r1)
                return
        }
    }

    protected JDKDSASigner(org.bouncycastle.crypto.Digest r1, org.bouncycastle.crypto.DSA r2) {
            r0 = this;
            r0.<init>()
            r0.digest = r1
            r0.signer = r2
            return
    }

    private java.math.BigInteger[] derDecode(byte[] r4) throws java.io.IOException {
            r3 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r4)
            org.bouncycastle.asn1.DERObject r4 = r0.readObject()
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            r0 = 2
            java.math.BigInteger[] r0 = new java.math.BigInteger[r0]
            r1 = 0
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            java.math.BigInteger r2 = r2.getValue()
            r0[r1] = r2
            r1 = 1
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4
            java.math.BigInteger r4 = r4.getValue()
            r0[r1] = r4
            return r0
    }

    private byte[] derEncode(java.math.BigInteger r5, java.math.BigInteger r6) throws java.io.IOException {
            r4 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            org.bouncycastle.asn1.ASN1EncodableVector r2 = new org.bouncycastle.asn1.ASN1EncodableVector
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            r3.<init>(r5)
            r2.add(r3)
            org.bouncycastle.asn1.DERInteger r5 = new org.bouncycastle.asn1.DERInteger
            r5.<init>(r6)
            r2.add(r5)
            org.bouncycastle.asn1.DERSequence r5 = new org.bouncycastle.asn1.DERSequence
            r5.<init>(r2)
            r1.writeObject(r5)
            byte[] r5 = r0.toByteArray()
            return r5
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
            goto L16
        L9:
            boolean r0 = r5 instanceof org.bouncycastle.jce.interfaces.GOST3410Key
            if (r0 == 0) goto L12
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r5 = org.bouncycastle.jce.provider.GOST3410Util.generatePrivateKeyParameter(r5)
            goto L16
        L12:
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r5 = org.bouncycastle.jce.provider.DSAUtil.generatePrivateKeyParameter(r5)
        L16:
            org.bouncycastle.crypto.Digest r0 = r4.digest
            r0.reset()
            java.security.SecureRandom r0 = r4.random
            r1 = 1
            if (r0 == 0) goto L2d
            org.bouncycastle.crypto.DSA r0 = r4.signer
            org.bouncycastle.crypto.params.ParametersWithRandom r2 = new org.bouncycastle.crypto.params.ParametersWithRandom
            java.security.SecureRandom r3 = r4.random
            r2.<init>(r5, r3)
            r0.init(r1, r2)
            goto L32
        L2d:
            org.bouncycastle.crypto.DSA r0 = r4.signer
            r0.init(r1, r5)
        L32:
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
            goto L36
        Lb:
            boolean r1 = r3 instanceof org.bouncycastle.jce.interfaces.GOST3410Key
            if (r1 == 0) goto L14
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r3 = org.bouncycastle.jce.provider.GOST3410Util.generatePublicKeyParameter(r3)
            goto L36
        L14:
            boolean r1 = r3 instanceof java.security.interfaces.DSAKey
            if (r1 == 0) goto L1d
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r3 = org.bouncycastle.jce.provider.DSAUtil.generatePublicKeyParameter(r3)
            goto L36
        L1d:
            byte[] r3 = r3.getEncoded()     // Catch: java.lang.Exception -> L48
            java.security.PublicKey r3 = org.bouncycastle.jce.provider.JDKKeyFactory.createPublicKeyFromDERStream(r3)     // Catch: java.lang.Exception -> L48
            boolean r1 = r3 instanceof org.bouncycastle.jce.interfaces.ECPublicKey     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto L2e
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r3 = org.bouncycastle.jce.provider.ECUtil.generatePublicKeyParameter(r3)     // Catch: java.lang.Exception -> L48
            goto L36
        L2e:
            boolean r1 = r3 instanceof java.security.interfaces.DSAKey     // Catch: java.lang.Exception -> L48
            if (r1 == 0) goto L42
            org.bouncycastle.crypto.params.AsymmetricKeyParameter r3 = org.bouncycastle.jce.provider.DSAUtil.generatePublicKeyParameter(r3)     // Catch: java.lang.Exception -> L48
        L36:
            org.bouncycastle.crypto.Digest r0 = r2.digest
            r0.reset()
            org.bouncycastle.crypto.DSA r0 = r2.signer
            r1 = 0
            r0.init(r1, r3)
            return
        L42:
            java.security.InvalidKeyException r3 = new java.security.InvalidKeyException     // Catch: java.lang.Exception -> L48
            r3.<init>(r0)     // Catch: java.lang.Exception -> L48
            throw r3     // Catch: java.lang.Exception -> L48
        L48:
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
            r3 = this;
            org.bouncycastle.crypto.Digest r0 = r3.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Digest r1 = r3.digest
            r2 = 0
            r1.doFinal(r0, r2)
            org.bouncycastle.crypto.DSA r1 = r3.signer     // Catch: java.lang.Exception -> L1e
            java.math.BigInteger[] r0 = r1.generateSignature(r0)     // Catch: java.lang.Exception -> L1e
            r1 = r0[r2]     // Catch: java.lang.Exception -> L1e
            r2 = 1
            r0 = r0[r2]     // Catch: java.lang.Exception -> L1e
            byte[] r0 = r3.derEncode(r1, r0)     // Catch: java.lang.Exception -> L1e
            return r0
        L1e:
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
    protected boolean engineVerify(byte[] r5) throws java.security.SignatureException {
            r4 = this;
            org.bouncycastle.crypto.Digest r0 = r4.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Digest r1 = r4.digest
            r2 = 0
            r1.doFinal(r0, r2)
            java.math.BigInteger[] r5 = r4.derDecode(r5)     // Catch: java.lang.Exception -> L1e
            org.bouncycastle.crypto.DSA r1 = r4.signer
            r2 = r5[r2]
            r3 = 1
            r5 = r5[r3]
            boolean r5 = r1.verifySignature(r0, r2, r5)
            return r5
        L1e:
            java.security.SignatureException r5 = new java.security.SignatureException
            java.lang.String r0 = "error decoding signature bytes."
            r5.<init>(r0)
            throw r5
    }
}
