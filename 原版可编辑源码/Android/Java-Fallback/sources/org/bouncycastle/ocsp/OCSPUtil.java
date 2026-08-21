package org.bouncycastle.ocsp;

class OCSPUtil {
    private static java.util.Hashtable algorithms;
    private static java.util.Set noParams;
    private static java.util.Hashtable oids;

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.ocsp.OCSPUtil.algorithms = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.ocsp.OCSPUtil.oids = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.ocsp.OCSPUtil.noParams = r0
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md2WithRSAEncryption
            java.lang.String r2 = "MD2WITHRSAENCRYPTION"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md2WithRSAEncryption
            java.lang.String r2 = "MD2WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5WithRSAEncryption
            java.lang.String r3 = "MD5WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5WithRSAEncryption
            java.lang.String r3 = "MD5WITHRSA"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha1WithRSAEncryption
            java.lang.String r4 = "SHA1WITHRSAENCRYPTION"
            r0.put(r4, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha1WithRSAEncryption
            java.lang.String r4 = "SHA1WITHRSA"
            r0.put(r4, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            java.lang.String r5 = "SHA224WITHRSAENCRYPTION"
            r0.put(r5, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            java.lang.String r5 = "SHA224WITHRSA"
            r0.put(r5, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            java.lang.String r6 = "SHA256WITHRSAENCRYPTION"
            r0.put(r6, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            java.lang.String r6 = "SHA256WITHRSA"
            r0.put(r6, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            java.lang.String r7 = "SHA384WITHRSAENCRYPTION"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            java.lang.String r7 = "SHA384WITHRSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            java.lang.String r8 = "SHA512WITHRSAENCRYPTION"
            r0.put(r8, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            java.lang.String r8 = "SHA512WITHRSA"
            r0.put(r8, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd160
            java.lang.String r9 = "RIPEMD160WITHRSAENCRYPTION"
            r0.put(r9, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd160
            java.lang.String r9 = "RIPEMD160WITHRSA"
            r0.put(r9, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd128
            java.lang.String r10 = "RIPEMD128WITHRSAENCRYPTION"
            r0.put(r10, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd128
            java.lang.String r10 = "RIPEMD128WITHRSA"
            r0.put(r10, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd256
            java.lang.String r11 = "RIPEMD256WITHRSAENCRYPTION"
            r0.put(r11, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd256
            java.lang.String r11 = "RIPEMD256WITHRSA"
            r0.put(r11, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa_with_sha1
            java.lang.String r12 = "SHA1WITHDSA"
            r0.put(r12, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa_with_sha1
            java.lang.String r13 = "DSAWITHSHA1"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            java.lang.String r13 = "SHA224WITHDSA"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            java.lang.String r14 = "SHA256WITHDSA"
            r0.put(r14, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            java.lang.String r15 = "SHA1WITHECDSA"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            r16 = r15
            java.lang.String r15 = "ECDSAWITHSHA1"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            java.lang.String r15 = "SHA224WITHECDSA"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            r17 = r15
            java.lang.String r15 = "SHA256WITHECDSA"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            r18 = r15
            java.lang.String r15 = "SHA384WITHECDSA"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            r19 = r15
            java.lang.String r15 = "SHA512WITHECDSA"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            r20 = r15
            java.lang.String r15 = "GOST3411WITHGOST3410"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            r21 = r15
            java.lang.String r15 = "GOST3411WITHGOST3410-94"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md2WithRSAEncryption
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5WithRSAEncryption
            r0.put(r1, r3)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha1WithRSAEncryption
            r0.put(r1, r4)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            r0.put(r1, r5)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            r0.put(r1, r6)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            r0.put(r1, r7)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            r0.put(r1, r8)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd160
            r0.put(r1, r9)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd128
            r0.put(r1, r10)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd256
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa_with_sha1
            r0.put(r1, r12)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            r0.put(r1, r13)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            r0.put(r1, r14)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            r2 = r16
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            r2 = r17
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            r2 = r18
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            r2 = r19
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            r2 = r20
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            r2 = r21
            r0.put(r1, r2)
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa_with_sha1
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            r0.add(r1)
            return
    }

    OCSPUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.Iterator getAlgNames() {
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            java.util.Enumeration r0 = r0.keys()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        Lb:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L19
            java.lang.Object r2 = r0.nextElement()
            r1.add(r2)
            goto Lb
        L19:
            java.util.Iterator r0 = r1.iterator()
            return r0
    }

    static java.lang.String getAlgorithmName(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L11
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.oids
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
        L11:
            java.lang.String r1 = r1.getId()
            return r1
    }

    static org.bouncycastle.asn1.DERObjectIdentifier getAlgorithmOID(java.lang.String r1) {
            java.lang.String r1 = org.bouncycastle.util.Strings.toUpperCase(r1)
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Hashtable r0 = org.bouncycastle.ocsp.OCSPUtil.algorithms
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            return r1
        L15:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            r0.<init>(r1)
            return r0
    }

    static org.bouncycastle.asn1.x509.AlgorithmIdentifier getSigAlgID(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            java.util.Set r0 = org.bouncycastle.ocsp.OCSPUtil.noParams
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto Le
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            r0.<init>(r2)
            return r0
        Le:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERNull r1 = new org.bouncycastle.asn1.DERNull
            r1.<init>()
            r0.<init>(r2, r1)
            return r0
    }
}
