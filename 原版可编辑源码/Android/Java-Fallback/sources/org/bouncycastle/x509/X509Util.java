package org.bouncycastle.x509;

class X509Util {
    private static java.util.Hashtable algorithms;
    private static java.util.Set noParams;
    private static java.util.Hashtable params;

    static class Implementation {
        java.lang.Object engine;
        java.security.Provider provider;

        Implementation(java.lang.Object r1, java.security.Provider r2) {
                r0 = this;
                r0.<init>()
                r0.engine = r1
                r0.provider = r2
                return
        }

        java.lang.Object getEngine() {
                r1 = this;
                java.lang.Object r0 = r1.engine
                return r0
        }

        java.security.Provider getProvider() {
                r1 = this;
                java.security.Provider r0 = r1.provider
                return r0
        }
    }

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.x509.X509Util.algorithms = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.x509.X509Util.params = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.x509.X509Util.noParams = r0
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md2WithRSAEncryption
            java.lang.String r2 = "MD2WITHRSAENCRYPTION"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md2WithRSAEncryption
            java.lang.String r2 = "MD2WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5WithRSAEncryption
            java.lang.String r2 = "MD5WITHRSAENCRYPTION"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.md5WithRSAEncryption
            java.lang.String r2 = "MD5WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha1WithRSAEncryption
            java.lang.String r2 = "SHA1WITHRSAENCRYPTION"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha1WithRSAEncryption
            java.lang.String r2 = "SHA1WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            java.lang.String r2 = "SHA224WITHRSAENCRYPTION"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            java.lang.String r2 = "SHA224WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            java.lang.String r2 = "SHA256WITHRSAENCRYPTION"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            java.lang.String r2 = "SHA256WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            java.lang.String r2 = "SHA384WITHRSAENCRYPTION"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            java.lang.String r2 = "SHA384WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            java.lang.String r2 = "SHA512WITHRSAENCRYPTION"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            java.lang.String r2 = "SHA512WITHRSA"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r2 = "SHA1WITHRSAANDMGF1"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r3 = "SHA224WITHRSAANDMGF1"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r4 = "SHA256WITHRSAANDMGF1"
            r0.put(r4, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r5 = "SHA384WITHRSAANDMGF1"
            r0.put(r5, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r6 = "SHA512WITHRSAANDMGF1"
            r0.put(r6, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd160
            java.lang.String r7 = "RIPEMD160WITHRSAENCRYPTION"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd160
            java.lang.String r7 = "RIPEMD160WITHRSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd128
            java.lang.String r7 = "RIPEMD128WITHRSAENCRYPTION"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd128
            java.lang.String r7 = "RIPEMD128WITHRSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd256
            java.lang.String r7 = "RIPEMD256WITHRSAENCRYPTION"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd256
            java.lang.String r7 = "RIPEMD256WITHRSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa_with_sha1
            java.lang.String r7 = "SHA1WITHDSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa_with_sha1
            java.lang.String r7 = "DSAWITHSHA1"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            java.lang.String r7 = "SHA224WITHDSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            java.lang.String r7 = "SHA256WITHDSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            java.lang.String r7 = "SHA1WITHECDSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            java.lang.String r7 = "ECDSAWITHSHA1"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            java.lang.String r7 = "SHA224WITHECDSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            java.lang.String r7 = "SHA256WITHECDSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            java.lang.String r7 = "SHA384WITHECDSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            java.lang.String r7 = "SHA512WITHECDSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            java.lang.String r7 = "GOST3411WITHGOST3410"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            java.lang.String r7 = "GOST3411WITHGOST3410-94"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            java.lang.String r7 = "GOST3411WITHECGOST3410"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            java.lang.String r7 = "GOST3411WITHECGOST3410-2001"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            java.lang.String r7 = "GOST3411WITHGOST3410-2001"
            r0.put(r7, r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa_with_sha1
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            org.bouncycastle.asn1.DERNull r7 = new org.bouncycastle.asn1.DERNull
            r7.<init>()
            r0.<init>(r1, r7)
            java.util.Hashtable r1 = org.bouncycastle.x509.X509Util.params
            r7 = 20
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r7)
            r1.put(r2, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.x509.X509Util.params
            r2 = 28
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r1.put(r3, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.x509.X509Util.params
            r2 = 32
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r1.put(r4, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.x509.X509Util.params
            r2 = 48
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r1.put(r5, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.x509.X509Util.params
            r2 = 64
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r1.put(r6, r0)
            return
    }

    X509Util() {
            r0 = this;
            r0.<init>()
            return
    }

    static byte[] calculateSignature(org.bouncycastle.asn1.DERObjectIdentifier r0, java.lang.String r1, java.lang.String r2, java.security.PrivateKey r3, java.security.SecureRandom r4, org.bouncycastle.asn1.ASN1Encodable r5) throws java.io.IOException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.SignatureException {
            if (r0 == 0) goto L1d
            java.security.Signature r0 = getSignatureInstance(r1, r2)
            if (r4 == 0) goto Lc
            r0.initSign(r3, r4)
            goto Lf
        Lc:
            r0.initSign(r3)
        Lf:
            java.lang.String r1 = "DER"
            byte[] r1 = r5.getEncoded(r1)
            r0.update(r1)
            byte[] r0 = r0.sign()
            return r0
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "no signature algorithm specified"
            r0.<init>(r1)
            throw r0
    }

    static byte[] calculateSignature(org.bouncycastle.asn1.DERObjectIdentifier r0, java.lang.String r1, java.security.PrivateKey r2, java.security.SecureRandom r3, org.bouncycastle.asn1.ASN1Encodable r4) throws java.io.IOException, java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.SignatureException {
            if (r0 == 0) goto L1d
            java.security.Signature r0 = getSignatureInstance(r1)
            if (r3 == 0) goto Lc
            r0.initSign(r2, r3)
            goto Lf
        Lc:
            r0.initSign(r2)
        Lf:
            java.lang.String r1 = "DER"
            byte[] r1 = r4.getEncoded(r1)
            r0.update(r1)
            byte[] r0 = r0.sign()
            return r0
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "no signature algorithm specified"
            r0.<init>(r1)
            throw r0
    }

    static org.bouncycastle.jce.X509Principal convertPrincipal(javax.security.auth.x500.X500Principal r1) {
            org.bouncycastle.jce.X509Principal r0 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> La
            byte[] r1 = r1.getEncoded()     // Catch: java.io.IOException -> La
            r0.<init>(r1)     // Catch: java.io.IOException -> La
            return r0
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "cannot convert principal"
            r1.<init>(r0)
            throw r1
    }

    private static org.bouncycastle.asn1.pkcs.RSASSAPSSparams creatPSSParams(org.bouncycastle.asn1.x509.AlgorithmIdentifier r4, int r5) {
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = new org.bouncycastle.asn1.pkcs.RSASSAPSSparams
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_mgf1
            r1.<init>(r2, r4)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r5)
            org.bouncycastle.asn1.DERInteger r5 = new org.bouncycastle.asn1.DERInteger
            r3 = 1
            r5.<init>(r3)
            r0.<init>(r4, r1, r2, r5)
            return r0
    }

    static java.util.Iterator getAlgNames() {
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
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

    static org.bouncycastle.asn1.DERObjectIdentifier getAlgorithmOID(java.lang.String r1) {
            java.lang.String r1 = org.bouncycastle.util.Strings.toUpperCase(r1)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.algorithms
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            return r1
        L15:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            r0.<init>(r1)
            return r0
    }

    static org.bouncycastle.x509.X509Util.Implementation getImplementation(java.lang.String r4, java.lang.String r5) throws java.security.NoSuchAlgorithmException {
            java.security.Provider[] r0 = java.security.Security.getProviders()
            r1 = 0
        L5:
            int r2 = r0.length
            if (r1 == r2) goto L1d
            java.lang.String r2 = org.bouncycastle.util.Strings.toUpperCase(r5)
            r3 = r0[r1]
            org.bouncycastle.x509.X509Util$Implementation r2 = getImplementation(r4, r2, r3)
            if (r2 == 0) goto L15
            return r2
        L15:
            r2 = r0[r1]     // Catch: java.security.NoSuchAlgorithmException -> L1a
            getImplementation(r4, r5, r2)     // Catch: java.security.NoSuchAlgorithmException -> L1a
        L1a:
            int r1 = r1 + 1
            goto L5
        L1d:
            java.security.NoSuchAlgorithmException r4 = new java.security.NoSuchAlgorithmException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cannot find implementation "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
    }

    static org.bouncycastle.x509.X509Util.Implementation getImplementation(java.lang.String r4, java.lang.String r5, java.security.Provider r6) throws java.security.NoSuchAlgorithmException {
            java.lang.String r0 = " in provider "
            java.lang.String r1 = "algorithm "
            java.lang.String r5 = org.bouncycastle.util.Strings.toUpperCase(r5)
        L8:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Alg.Alias."
            r2.append(r3)
            r2.append(r4)
            java.lang.String r3 = "."
            r2.append(r3)
            r2.append(r5)
            java.lang.String r2 = r2.toString()
            java.lang.String r2 = r6.getProperty(r2)
            if (r2 == 0) goto L29
            r5 = r2
            goto L8
        L29:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            r2.append(r3)
            r2.append(r5)
            java.lang.String r4 = r2.toString()
            java.lang.String r4 = r6.getProperty(r4)
            if (r4 == 0) goto Lb6
            java.lang.Class r2 = r6.getClass()     // Catch: java.lang.Exception -> L5e java.lang.ClassNotFoundException -> L8a
            java.lang.ClassLoader r2 = r2.getClassLoader()     // Catch: java.lang.Exception -> L5e java.lang.ClassNotFoundException -> L8a
            if (r2 == 0) goto L50
            java.lang.Class r2 = r2.loadClass(r4)     // Catch: java.lang.Exception -> L5e java.lang.ClassNotFoundException -> L8a
            goto L54
        L50:
            java.lang.Class r2 = java.lang.Class.forName(r4)     // Catch: java.lang.Exception -> L5e java.lang.ClassNotFoundException -> L8a
        L54:
            org.bouncycastle.x509.X509Util$Implementation r3 = new org.bouncycastle.x509.X509Util$Implementation     // Catch: java.lang.Exception -> L5e java.lang.ClassNotFoundException -> L8a
            java.lang.Object r2 = r2.newInstance()     // Catch: java.lang.Exception -> L5e java.lang.ClassNotFoundException -> L8a
            r3.<init>(r2, r6)     // Catch: java.lang.Exception -> L5e java.lang.ClassNotFoundException -> L8a
            return r3
        L5e:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r3.append(r5)
            r3.append(r0)
            java.lang.String r5 = r6.getName()
            r3.append(r5)
            java.lang.String r5 = " but class \""
            r3.append(r5)
            r3.append(r4)
            java.lang.String r4 = "\" inaccessible!"
            r3.append(r4)
            java.lang.String r4 = r3.toString()
            r2.<init>(r4)
            throw r2
        L8a:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r3.append(r5)
            r3.append(r0)
            java.lang.String r5 = r6.getName()
            r3.append(r5)
            java.lang.String r5 = " but no class \""
            r3.append(r5)
            r3.append(r4)
            java.lang.String r4 = "\" found!"
            r3.append(r4)
            java.lang.String r4 = r3.toString()
            r2.<init>(r4)
            throw r2
        Lb6:
            java.security.NoSuchAlgorithmException r4 = new java.security.NoSuchAlgorithmException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cannot find implementation "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = " for provider "
            r0.append(r5)
            java.lang.String r5 = r6.getName()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.<init>(r5)
            throw r4
    }

    static java.security.Provider getProvider(java.lang.String r3) throws java.security.NoSuchProviderException {
            java.security.Provider r0 = java.security.Security.getProvider(r3)
            if (r0 == 0) goto L7
            return r0
        L7:
            java.security.NoSuchProviderException r0 = new java.security.NoSuchProviderException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Provider "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = " not found"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    static org.bouncycastle.asn1.x509.AlgorithmIdentifier getSigAlgID(org.bouncycastle.asn1.DERObjectIdentifier r2, java.lang.String r3) {
            java.util.Set r0 = org.bouncycastle.x509.X509Util.noParams
            boolean r0 = r0.contains(r2)
            if (r0 == 0) goto Le
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            r3.<init>(r2)
            return r3
        Le:
            java.lang.String r3 = org.bouncycastle.util.Strings.toUpperCase(r3)
            java.util.Hashtable r0 = org.bouncycastle.x509.X509Util.params
            boolean r0 = r0.containsKey(r3)
            if (r0 == 0) goto L28
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            java.util.Hashtable r1 = org.bouncycastle.x509.X509Util.params
            java.lang.Object r3 = r1.get(r3)
            org.bouncycastle.asn1.DEREncodable r3 = (org.bouncycastle.asn1.DEREncodable) r3
            r0.<init>(r2, r3)
            return r0
        L28:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERNull r0 = new org.bouncycastle.asn1.DERNull
            r0.<init>()
            r3.<init>(r2, r0)
            return r3
    }

    static java.security.Signature getSignatureInstance(java.lang.String r0) throws java.security.NoSuchAlgorithmException {
            java.security.Signature r0 = java.security.Signature.getInstance(r0)
            return r0
    }

    static java.security.Signature getSignatureInstance(java.lang.String r0, java.lang.String r1) throws java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException {
            if (r1 == 0) goto L7
            java.security.Signature r0 = java.security.Signature.getInstance(r0, r1)
            return r0
        L7:
            java.security.Signature r0 = java.security.Signature.getInstance(r0)
            return r0
    }
}
