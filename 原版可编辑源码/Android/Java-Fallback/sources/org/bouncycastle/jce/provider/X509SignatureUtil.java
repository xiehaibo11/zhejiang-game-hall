package org.bouncycastle.jce.provider;

class X509SignatureUtil {
    private static final org.bouncycastle.asn1.ASN1Null derNull = null;

    static {
            org.bouncycastle.asn1.DERNull r0 = new org.bouncycastle.asn1.DERNull
            r0.<init>()
            org.bouncycastle.jce.provider.X509SignatureUtil.derNull = r0
            return
    }

    X509SignatureUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String getDigestAlgName(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto Lb
            java.lang.String r1 = "MD5"
            return r1
        Lb:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L16
            java.lang.String r1 = "SHA1"
            return r1
        L16:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L21
            java.lang.String r1 = "SHA224"
            return r1
        L21:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L2c
            java.lang.String r1 = "SHA256"
            return r1
        L2c:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L37
            java.lang.String r1 = "SHA384"
            return r1
        L37:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L42
            java.lang.String r1 = "SHA512"
            return r1
        L42:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd128
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L4d
            java.lang.String r1 = "RIPEMD128"
            return r1
        L4d:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd160
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L58
            java.lang.String r1 = "RIPEMD160"
            return r1
        L58:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd256
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L63
            java.lang.String r1 = "RIPEMD256"
            return r1
        L63:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L6e
            java.lang.String r1 = "GOST3411"
            return r1
        L6e:
            java.lang.String r1 = r1.getId()
            return r1
    }

    static java.lang.String getSignatureName(org.bouncycastle.asn1.x509.AlgorithmIdentifier r3) {
            org.bouncycastle.asn1.DEREncodable r0 = r3.getParameters()
            if (r0 == 0) goto L69
            org.bouncycastle.asn1.ASN1Null r1 = org.bouncycastle.jce.provider.X509SignatureUtil.derNull
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L69
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L3c
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r3 = org.bouncycastle.asn1.pkcs.RSASSAPSSparams.getInstance(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = r3.getHashAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r3.getObjectId()
            java.lang.String r3 = getDigestAlgName(r3)
            r0.append(r3)
            java.lang.String r3 = "withRSAandMGF1"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L3c:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.getObjectId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA2
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L69
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = (org.bouncycastle.asn1.DERObjectIdentifier) r3
            java.lang.String r3 = getDigestAlgName(r3)
            r0.append(r3)
            java.lang.String r3 = "withECDSA"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L69:
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r3.getObjectId()
            java.lang.String r3 = r3.getId()
            return r3
    }

    static void setSignatureParameters(java.security.Signature r2, org.bouncycastle.asn1.DEREncodable r3) throws java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            if (r3 == 0) goto L6f
            org.bouncycastle.asn1.ASN1Null r0 = org.bouncycastle.jce.provider.X509SignatureUtil.derNull
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L6f
            java.lang.String r0 = r2.getAlgorithm()
            java.security.Provider r1 = r2.getProvider()
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()     // Catch: java.io.IOException -> L53
            byte[] r3 = r3.getDEREncoded()     // Catch: java.io.IOException -> L53
            r0.init(r3)     // Catch: java.io.IOException -> L53
            java.lang.String r3 = r2.getAlgorithm()
            java.lang.String r1 = "MGF1"
            boolean r3 = r3.endsWith(r1)
            if (r3 == 0) goto L6f
            java.lang.Class<java.security.spec.PSSParameterSpec> r3 = java.security.spec.PSSParameterSpec.class
            java.security.spec.AlgorithmParameterSpec r3 = r0.getParameterSpec(r3)     // Catch: java.security.GeneralSecurityException -> L37
            r2.setParameter(r3)     // Catch: java.security.GeneralSecurityException -> L37
            goto L6f
        L37:
            r2 = move-exception
            java.security.SignatureException r3 = new java.security.SignatureException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Exception extracting parameters: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L53:
            r2 = move-exception
            java.security.SignatureException r3 = new java.security.SignatureException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "IOException decoding parameters: "
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L6f:
            return
    }
}
