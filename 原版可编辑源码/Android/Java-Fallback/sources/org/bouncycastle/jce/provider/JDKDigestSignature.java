package org.bouncycastle.jce.provider;

public class JDKDigestSignature extends java.security.SignatureSpi implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers, org.bouncycastle.asn1.x509.X509ObjectIdentifiers {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier algId;
    private org.bouncycastle.crypto.AsymmetricBlockCipher cipher;
    private org.bouncycastle.crypto.Digest digest;

    public static class MD2WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public MD2WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.JDKDigestSignature.MD2WithRSAEncryption.md2
                org.bouncycastle.crypto.digests.MD2Digest r1 = new org.bouncycastle.crypto.digests.MD2Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class MD4WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public MD4WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.JDKDigestSignature.MD4WithRSAEncryption.md4
                org.bouncycastle.crypto.digests.MD4Digest r1 = new org.bouncycastle.crypto.digests.MD4Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class MD5WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public MD5WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.JDKDigestSignature.MD5WithRSAEncryption.md5
                org.bouncycastle.crypto.digests.MD5Digest r1 = new org.bouncycastle.crypto.digests.MD5Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class RIPEMD128WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public RIPEMD128WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd128
                org.bouncycastle.crypto.digests.RIPEMD128Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD128Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class RIPEMD160WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public RIPEMD160WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd160
                org.bouncycastle.crypto.digests.RIPEMD160Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD160Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class RIPEMD256WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public RIPEMD256WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd256
                org.bouncycastle.crypto.digests.RIPEMD256Digest r1 = new org.bouncycastle.crypto.digests.RIPEMD256Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class SHA1WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public SHA1WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.JDKDigestSignature.SHA1WithRSAEncryption.id_SHA1
                org.bouncycastle.crypto.digests.SHA1Digest r1 = new org.bouncycastle.crypto.digests.SHA1Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class SHA224WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public SHA224WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
                org.bouncycastle.crypto.digests.SHA224Digest r1 = new org.bouncycastle.crypto.digests.SHA224Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class SHA256WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public SHA256WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
                org.bouncycastle.crypto.digests.SHA256Digest r1 = new org.bouncycastle.crypto.digests.SHA256Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class SHA384WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public SHA384WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
                org.bouncycastle.crypto.digests.SHA384Digest r1 = new org.bouncycastle.crypto.digests.SHA384Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    public static class SHA512WithRSAEncryption extends org.bouncycastle.jce.provider.JDKDigestSignature {
        public SHA512WithRSAEncryption() {
                r4 = this;
                org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
                org.bouncycastle.crypto.digests.SHA512Digest r1 = new org.bouncycastle.crypto.digests.SHA512Digest
                r1.<init>()
                org.bouncycastle.crypto.encodings.PKCS1Encoding r2 = new org.bouncycastle.crypto.encodings.PKCS1Encoding
                org.bouncycastle.crypto.engines.RSABlindedEngine r3 = new org.bouncycastle.crypto.engines.RSABlindedEngine
                r3.<init>()
                r2.<init>(r3)
                r4.<init>(r0, r1, r2)
                return
        }
    }

    protected JDKDigestSignature(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.crypto.Digest r2, org.bouncycastle.crypto.AsymmetricBlockCipher r3) {
            r0 = this;
            r0.<init>()
            r0.digest = r2
            r0.cipher = r3
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            r3 = 0
            r2.<init>(r1, r3)
            r0.algId = r2
            return
    }

    private byte[] derEncode(byte[] r3) throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.x509.DigestInfo r0 = new org.bouncycastle.asn1.x509.DigestInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.algId
            r0.<init>(r1, r3)
            java.lang.String r3 = "DER"
            byte[] r3 = r0.getEncoded(r3)
            return r3
    }

    private java.lang.String getType(java.lang.Object r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            java.lang.Class r1 = r1.getClass()
            java.lang.String r1 = r1.getName()
            return r1
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
    protected void engineInitSign(java.security.PrivateKey r4) throws java.security.InvalidKeyException {
            r3 = this;
            boolean r0 = r4 instanceof java.security.interfaces.RSAPrivateKey
            if (r0 == 0) goto L16
            java.security.interfaces.RSAPrivateKey r4 = (java.security.interfaces.RSAPrivateKey) r4
            org.bouncycastle.crypto.params.RSAKeyParameters r4 = org.bouncycastle.jce.provider.RSAUtil.generatePrivateKeyParameter(r4)
            org.bouncycastle.crypto.Digest r0 = r3.digest
            r0.reset()
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r3.cipher
            r1 = 1
            r0.init(r1, r4)
            return
        L16:
            java.security.InvalidKeyException r0 = new java.security.InvalidKeyException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Supplied key ("
            r1.append(r2)
            java.lang.String r4 = r3.getType(r4)
            r1.append(r4)
            java.lang.String r4 = ") is not a RSAPrivateKey instance"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    @Override
    protected void engineInitVerify(java.security.PublicKey r4) throws java.security.InvalidKeyException {
            r3 = this;
            boolean r0 = r4 instanceof java.security.interfaces.RSAPublicKey
            if (r0 == 0) goto L16
            java.security.interfaces.RSAPublicKey r4 = (java.security.interfaces.RSAPublicKey) r4
            org.bouncycastle.crypto.params.RSAKeyParameters r4 = org.bouncycastle.jce.provider.RSAUtil.generatePublicKeyParameter(r4)
            org.bouncycastle.crypto.Digest r0 = r3.digest
            r0.reset()
            org.bouncycastle.crypto.AsymmetricBlockCipher r0 = r3.cipher
            r1 = 0
            r0.init(r1, r4)
            return
        L16:
            java.security.InvalidKeyException r0 = new java.security.InvalidKeyException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Supplied key ("
            r1.append(r2)
            java.lang.String r4 = r3.getType(r4)
            r1.append(r4)
            java.lang.String r4 = ") is not a RSAPublicKey instance"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
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
            r4 = this;
            org.bouncycastle.crypto.Digest r0 = r4.digest
            int r0 = r0.getDigestSize()
            byte[] r0 = new byte[r0]
            org.bouncycastle.crypto.Digest r1 = r4.digest
            r2 = 0
            r1.doFinal(r0, r2)
            byte[] r0 = r4.derEncode(r0)     // Catch: java.lang.Exception -> L1a java.lang.ArrayIndexOutOfBoundsException -> L25
            org.bouncycastle.crypto.AsymmetricBlockCipher r1 = r4.cipher     // Catch: java.lang.Exception -> L1a java.lang.ArrayIndexOutOfBoundsException -> L25
            int r3 = r0.length     // Catch: java.lang.Exception -> L1a java.lang.ArrayIndexOutOfBoundsException -> L25
            byte[] r0 = r1.processBlock(r0, r2, r3)     // Catch: java.lang.Exception -> L1a java.lang.ArrayIndexOutOfBoundsException -> L25
            return r0
        L1a:
            r0 = move-exception
            java.security.SignatureException r1 = new java.security.SignatureException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
        L25:
            java.security.SignatureException r0 = new java.security.SignatureException
            java.lang.String r1 = "key too small for signature type"
            r0.<init>(r1)
            throw r0
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
    protected boolean engineVerify(byte[] r10) throws java.security.SignatureException {
            r9 = this;
            org.bouncycastle.crypto.Digest r0 = r9.digest
            int r0 = r0.getDigestSize()
            byte[] r1 = new byte[r0]
            org.bouncycastle.crypto.Digest r2 = r9.digest
            r3 = 0
            r2.doFinal(r1, r3)
            org.bouncycastle.crypto.AsymmetricBlockCipher r2 = r9.cipher     // Catch: java.lang.Exception -> L68
            int r4 = r10.length     // Catch: java.lang.Exception -> L68
            byte[] r10 = r2.processBlock(r10, r3, r4)     // Catch: java.lang.Exception -> L68
            byte[] r1 = r9.derEncode(r1)     // Catch: java.lang.Exception -> L68
            int r2 = r10.length
            int r4 = r1.length
            r5 = 1
            if (r2 != r4) goto L2c
            r0 = 0
        L1f:
            int r2 = r10.length
            if (r0 >= r2) goto L67
            r2 = r10[r0]
            r4 = r1[r0]
            if (r2 == r4) goto L29
            return r3
        L29:
            int r0 = r0 + 1
            goto L1f
        L2c:
            int r2 = r10.length
            int r4 = r1.length
            int r4 = r4 + (-2)
            if (r2 != r4) goto L68
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
        L4a:
            if (r6 >= r0) goto L5a
            int r7 = r2 + r6
            r7 = r10[r7]
            int r8 = r4 + r6
            r8 = r1[r8]
            if (r7 == r8) goto L57
            return r3
        L57:
            int r6 = r6 + 1
            goto L4a
        L5a:
            r0 = 0
        L5b:
            if (r0 >= r2) goto L67
            r4 = r10[r0]
            r6 = r1[r0]
            if (r4 == r6) goto L64
            return r3
        L64:
            int r0 = r0 + 1
            goto L5b
        L67:
            return r5
        L68:
            return r3
    }
}
