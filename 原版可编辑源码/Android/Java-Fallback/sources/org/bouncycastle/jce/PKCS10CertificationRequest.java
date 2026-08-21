package org.bouncycastle.jce;

public class PKCS10CertificationRequest extends org.bouncycastle.asn1.pkcs.CertificationRequest {
    private static java.util.Hashtable algorithms;
    private static java.util.Hashtable keyAlgorithms;
    private static java.util.Set noParams;
    private static java.util.Hashtable oids;
    private static java.util.Hashtable params;

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.PKCS10CertificationRequest.algorithms = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.PKCS10CertificationRequest.params = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.PKCS10CertificationRequest.keyAlgorithms = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.PKCS10CertificationRequest.oids = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.jce.PKCS10CertificationRequest.noParams = r0
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r2 = "1.2.840.113549.1.1.2"
            r1.<init>(r2)
            java.lang.String r3 = "MD2WITHRSAENCRYPTION"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            java.lang.String r3 = "MD2WITHRSA"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r4 = "1.2.840.113549.1.1.4"
            r1.<init>(r4)
            java.lang.String r5 = "MD5WITHRSAENCRYPTION"
            r0.put(r5, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            java.lang.String r5 = "MD5WITHRSA"
            r0.put(r5, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            java.lang.String r6 = "RSAWITHMD5"
            r0.put(r6, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r6 = "1.2.840.113549.1.1.5"
            r1.<init>(r6)
            java.lang.String r7 = "SHA1WITHRSAENCRYPTION"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r6)
            java.lang.String r7 = "SHA1WITHRSA"
            r0.put(r7, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            java.lang.String r8 = "SHA224WITHRSAENCRYPTION"
            r0.put(r8, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            java.lang.String r8 = "SHA224WITHRSA"
            r0.put(r8, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            java.lang.String r9 = "SHA256WITHRSAENCRYPTION"
            r0.put(r9, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            java.lang.String r9 = "SHA256WITHRSA"
            r0.put(r9, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            java.lang.String r10 = "SHA384WITHRSAENCRYPTION"
            r0.put(r10, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            java.lang.String r10 = "SHA384WITHRSA"
            r0.put(r10, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            java.lang.String r11 = "SHA512WITHRSAENCRYPTION"
            r0.put(r11, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            java.lang.String r11 = "SHA512WITHRSA"
            r0.put(r11, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r12 = "SHA1WITHRSAANDMGF1"
            r0.put(r12, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r13 = "SHA224WITHRSAANDMGF1"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r14 = "SHA256WITHRSAANDMGF1"
            r0.put(r14, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            java.lang.String r15 = "SHA384WITHRSAANDMGF1"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.id_RSASSA_PSS
            r16 = r15
            java.lang.String r15 = "SHA512WITHRSAANDMGF1"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r6)
            r17 = r15
            java.lang.String r15 = "RSAWITHSHA1"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r15 = "1.3.36.3.3.1.2"
            r1.<init>(r15)
            r18 = r14
            java.lang.String r14 = "RIPEMD160WITHRSAENCRYPTION"
            r0.put(r14, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r15)
            java.lang.String r14 = "RIPEMD160WITHRSA"
            r0.put(r14, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r14 = "1.2.840.10040.4.3"
            r1.<init>(r14)
            java.lang.String r15 = "SHA1WITHDSA"
            r0.put(r15, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r14)
            r19 = r13
            java.lang.String r13 = "DSAWITHSHA1"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            java.lang.String r13 = "SHA224WITHDSA"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            r20 = r12
            java.lang.String r12 = "SHA256WITHDSA"
            r0.put(r12, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            r21 = r12
            java.lang.String r12 = "SHA1WITHECDSA"
            r0.put(r12, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            r22 = r13
            java.lang.String r13 = "SHA224WITHECDSA"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            r23 = r13
            java.lang.String r13 = "SHA256WITHECDSA"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            java.lang.String r13 = "SHA384WITHECDSA"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            java.lang.String r13 = "SHA512WITHECDSA"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            java.lang.String r13 = "ECDSAWITHSHA1"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            java.lang.String r13 = "GOST3411WITHGOST3410"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            java.lang.String r13 = "GOST3410WITHGOST3411"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            java.lang.String r13 = "GOST3411WITHECGOST3410"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            java.lang.String r13 = "GOST3411WITHECGOST3410-2001"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            java.lang.String r13 = "GOST3411WITHGOST3410-2001"
            r0.put(r13, r1)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r6)
            r0.put(r1, r7)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha224WithRSAEncryption
            r0.put(r1, r8)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha256WithRSAEncryption
            r0.put(r1, r9)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha384WithRSAEncryption
            r0.put(r1, r10)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.sha512WithRSAEncryption
            r0.put(r1, r11)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            java.lang.String r6 = "GOST3411WITHGOST3410"
            r0.put(r1, r6)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            java.lang.String r6 = "GOST3411WITHECGOST3410"
            r0.put(r1, r6)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r4)
            r0.put(r1, r5)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r2)
            r0.put(r1, r3)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r14)
            r0.put(r1, r15)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            r0.put(r1, r12)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            r2 = r23
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            java.lang.String r2 = "SHA256WITHECDSA"
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            java.lang.String r2 = "SHA384WITHECDSA"
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            java.lang.String r2 = "SHA512WITHECDSA"
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.sha1WithRSA
            r0.put(r1, r7)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.dsaWithSHA1
            r0.put(r1, r15)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            r2 = r22
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            r2 = r21
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.keyAlgorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.rsaEncryption
            java.lang.String r2 = "RSA"
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.keyAlgorithms
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa
            java.lang.String r2 = "DSA"
            r0.put(r1, r2)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA1
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA224
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA256
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA384
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.ecdsa_with_SHA512
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa_with_sha1
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha224
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.dsa_with_sha256
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_94
            r0.add(r1)
            java.util.Set r0 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3411_94_with_gostR3410_2001
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.idSHA1
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.jce.PKCS10CertificationRequest.params
            r2 = 20
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r2 = r20
            r1.put(r2, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha224
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.jce.PKCS10CertificationRequest.params
            r2 = 28
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r2 = r19
            r1.put(r2, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.jce.PKCS10CertificationRequest.params
            r2 = 32
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r2 = r18
            r1.put(r2, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha384
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.jce.PKCS10CertificationRequest.params
            r2 = 48
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r2 = r16
            r1.put(r2, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha512
            org.bouncycastle.asn1.DERNull r2 = new org.bouncycastle.asn1.DERNull
            r2.<init>()
            r0.<init>(r1, r2)
            java.util.Hashtable r1 = org.bouncycastle.jce.PKCS10CertificationRequest.params
            r2 = 64
            org.bouncycastle.asn1.pkcs.RSASSAPSSparams r0 = creatPSSParams(r0, r2)
            r2 = r17
            r1.put(r2, r0)
            return
    }

    public PKCS10CertificationRequest(java.lang.String r8, javax.security.auth.x500.X500Principal r9, java.security.PublicKey r10, org.bouncycastle.asn1.ASN1Set r11, java.security.PrivateKey r12) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException, java.security.SignatureException {
            r7 = this;
            org.bouncycastle.asn1.x509.X509Name r2 = convertName(r9)
            java.lang.String r6 = "BC"
            r0 = r7
            r1 = r8
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public PKCS10CertificationRequest(java.lang.String r8, javax.security.auth.x500.X500Principal r9, java.security.PublicKey r10, org.bouncycastle.asn1.ASN1Set r11, java.security.PrivateKey r12, java.lang.String r13) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException, java.security.SignatureException {
            r7 = this;
            org.bouncycastle.asn1.x509.X509Name r2 = convertName(r9)
            r0 = r7
            r1 = r8
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public PKCS10CertificationRequest(java.lang.String r8, org.bouncycastle.asn1.x509.X509Name r9, java.security.PublicKey r10, org.bouncycastle.asn1.ASN1Set r11, java.security.PrivateKey r12) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException, java.security.SignatureException {
            r7 = this;
            java.lang.String r6 = "BC"
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public PKCS10CertificationRequest(java.lang.String r5, org.bouncycastle.asn1.x509.X509Name r6, java.security.PublicKey r7, org.bouncycastle.asn1.ASN1Set r8, java.security.PrivateKey r9, java.lang.String r10) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException, java.security.SignatureException {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = org.bouncycastle.util.Strings.toUpperCase(r5)
            java.util.Hashtable r1 = org.bouncycastle.jce.PKCS10CertificationRequest.algorithms
            java.lang.Object r1 = r1.get(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            if (r1 == 0) goto Lbd
            if (r6 == 0) goto Lb5
            if (r7 == 0) goto Lad
            java.util.Set r2 = org.bouncycastle.jce.PKCS10CertificationRequest.noParams
            boolean r2 = r2.contains(r1)
            if (r2 == 0) goto L25
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            r0.<init>(r1)
        L22:
            r4.sigAlgId = r0
            goto L44
        L25:
            java.util.Hashtable r2 = org.bouncycastle.jce.PKCS10CertificationRequest.params
            boolean r2 = r2.containsKey(r0)
            if (r2 == 0) goto L3d
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            java.util.Hashtable r3 = org.bouncycastle.jce.PKCS10CertificationRequest.params
            java.lang.Object r0 = r3.get(r0)
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            r2.<init>(r1, r0)
            r4.sigAlgId = r2
            goto L44
        L3d:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            r2 = 0
            r0.<init>(r1, r2)
            goto L22
        L44:
            byte[] r7 = r7.getEncoded()
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r7)
            org.bouncycastle.asn1.ASN1InputStream r7 = new org.bouncycastle.asn1.ASN1InputStream
            r7.<init>(r0)
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r0 = new org.bouncycastle.asn1.pkcs.CertificationRequestInfo     // Catch: java.io.IOException -> La5
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r1 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.io.IOException -> La5
            org.bouncycastle.asn1.DERObject r7 = r7.readObject()     // Catch: java.io.IOException -> La5
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7     // Catch: java.io.IOException -> La5
            r1.<init>(r7)     // Catch: java.io.IOException -> La5
            r0.<init>(r6, r1, r8)     // Catch: java.io.IOException -> La5
            r4.reqInfo = r0     // Catch: java.io.IOException -> La5
            java.security.Signature r5 = java.security.Signature.getInstance(r5, r10)
            r5.initSign(r9)
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L8d
            r6.<init>()     // Catch: java.lang.Exception -> L8d
            org.bouncycastle.asn1.DEROutputStream r7 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.lang.Exception -> L8d
            r7.<init>(r6)     // Catch: java.lang.Exception -> L8d
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r8 = r4.reqInfo     // Catch: java.lang.Exception -> L8d
            r7.writeObject(r8)     // Catch: java.lang.Exception -> L8d
            byte[] r6 = r6.toByteArray()     // Catch: java.lang.Exception -> L8d
            r5.update(r6)     // Catch: java.lang.Exception -> L8d
            org.bouncycastle.asn1.DERBitString r6 = new org.bouncycastle.asn1.DERBitString
            byte[] r5 = r5.sign()
            r6.<init>(r5)
            r4.sigBits = r6
            return
        L8d:
            r5 = move-exception
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "exception encoding TBS cert request - "
            r7.append(r8)
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        La5:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "can't encode public key"
            r5.<init>(r6)
            throw r5
        Lad:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "public key must not be null"
            r5.<init>(r6)
            throw r5
        Lb5:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "subject must not be null"
            r5.<init>(r6)
            throw r5
        Lbd:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "Unknown signature type requested"
            r5.<init>(r6)
            throw r5
    }

    public PKCS10CertificationRequest(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public PKCS10CertificationRequest(byte[] r1) {
            r0 = this;
            org.bouncycastle.asn1.ASN1Sequence r1 = toDERSequence(r1)
            r0.<init>(r1)
            return
    }

    private static org.bouncycastle.asn1.x509.X509Name convertName(javax.security.auth.x500.X500Principal r1) {
            org.bouncycastle.jce.X509Principal r0 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> La
            byte[] r1 = r1.getEncoded()     // Catch: java.io.IOException -> La
            r0.<init>(r1)     // Catch: java.io.IOException -> La
            return r0
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "can't convert name"
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
            if (r0 == 0) goto L3c
            org.bouncycastle.asn1.DERNull r1 = org.bouncycastle.asn1.DERNull.INSTANCE
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L3c
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
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r3.getObjectId()
            java.lang.String r3 = r3.getId()
            return r3
    }

    private void setSignatureParameters(java.security.Signature r3, org.bouncycastle.asn1.DEREncodable r4) throws java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r2 = this;
            if (r4 == 0) goto L6f
            org.bouncycastle.asn1.DERNull r0 = org.bouncycastle.asn1.DERNull.INSTANCE
            boolean r0 = r0.equals(r4)
            if (r0 != 0) goto L6f
            java.lang.String r0 = r3.getAlgorithm()
            java.security.Provider r1 = r3.getProvider()
            java.security.AlgorithmParameters r0 = java.security.AlgorithmParameters.getInstance(r0, r1)
            org.bouncycastle.asn1.DERObject r4 = r4.getDERObject()     // Catch: java.io.IOException -> L53
            byte[] r4 = r4.getDEREncoded()     // Catch: java.io.IOException -> L53
            r0.init(r4)     // Catch: java.io.IOException -> L53
            java.lang.String r4 = r3.getAlgorithm()
            java.lang.String r1 = "MGF1"
            boolean r4 = r4.endsWith(r1)
            if (r4 == 0) goto L6f
            java.lang.Class<java.security.spec.PSSParameterSpec> r4 = java.security.spec.PSSParameterSpec.class
            java.security.spec.AlgorithmParameterSpec r4 = r0.getParameterSpec(r4)     // Catch: java.security.GeneralSecurityException -> L37
            r3.setParameter(r4)     // Catch: java.security.GeneralSecurityException -> L37
            goto L6f
        L37:
            r3 = move-exception
            java.security.SignatureException r4 = new java.security.SignatureException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Exception extracting parameters: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L53:
            r3 = move-exception
            java.security.SignatureException r4 = new java.security.SignatureException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "IOException decoding parameters: "
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
        L6f:
            return
    }

    private static org.bouncycastle.asn1.ASN1Sequence toDERSequence(byte[] r1) {
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> Lc
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lc
            org.bouncycastle.asn1.DERObject r1 = r0.readObject()     // Catch: java.lang.Exception -> Lc
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.lang.Exception -> Lc
            return r1
        Lc:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "badly encoded request"
            r1.<init>(r0)
            throw r1
    }

    @Override
    public byte[] getEncoded() {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.DEROutputStream r1 = new org.bouncycastle.asn1.DEROutputStream
            r1.<init>(r0)
            r1.writeObject(r2)     // Catch: java.io.IOException -> L12
            byte[] r0 = r0.toByteArray()
            return r0
        L12:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
    }

    public java.security.PublicKey getPublicKey() throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException {
            r1 = this;
            java.lang.String r0 = "BC"
            java.security.PublicKey r0 = r1.getPublicKey(r0)
            return r0
    }

    public java.security.PublicKey getPublicKey(java.lang.String r6) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException {
            r5 = this;
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r0 = r5.reqInfo
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r0.getSubjectPublicKeyInfo()
            java.security.spec.X509EncodedKeySpec r1 = new java.security.spec.X509EncodedKeySpec
            org.bouncycastle.asn1.DERBitString r2 = new org.bouncycastle.asn1.DERBitString
            r2.<init>(r0)
            byte[] r2 = r2.getBytes()
            r1.<init>(r2)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getAlgorithmId()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r0.getObjectId()     // Catch: java.security.NoSuchAlgorithmException -> L29 java.security.spec.InvalidKeySpecException -> L4c
            java.lang.String r2 = r2.getId()     // Catch: java.security.NoSuchAlgorithmException -> L29 java.security.spec.InvalidKeySpecException -> L4c
            java.security.KeyFactory r2 = java.security.KeyFactory.getInstance(r2, r6)     // Catch: java.security.NoSuchAlgorithmException -> L29 java.security.spec.InvalidKeySpecException -> L4c
            java.security.PublicKey r6 = r2.generatePublic(r1)     // Catch: java.security.NoSuchAlgorithmException -> L29 java.security.spec.InvalidKeySpecException -> L4c
            return r6
        L29:
            r2 = move-exception
            java.util.Hashtable r3 = org.bouncycastle.jce.PKCS10CertificationRequest.keyAlgorithms     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            org.bouncycastle.asn1.DERObjectIdentifier r4 = r0.getObjectId()     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            java.lang.Object r3 = r3.get(r4)     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            if (r3 == 0) goto L4b
            java.util.Hashtable r2 = org.bouncycastle.jce.PKCS10CertificationRequest.keyAlgorithms     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            java.lang.Object r0 = r2.get(r0)     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            java.security.KeyFactory r6 = java.security.KeyFactory.getInstance(r0, r6)     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            java.security.PublicKey r6 = r6.generatePublic(r1)     // Catch: java.security.spec.InvalidKeySpecException -> L4c
            return r6
        L4b:
            throw r2     // Catch: java.security.spec.InvalidKeySpecException -> L4c
        L4c:
            java.security.InvalidKeyException r6 = new java.security.InvalidKeyException
            java.lang.String r0 = "error decoding public key"
            r6.<init>(r0)
            throw r6
    }

    public boolean verify() throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException, java.security.SignatureException {
            r1 = this;
            java.lang.String r0 = "BC"
            boolean r0 = r1.verify(r0)
            return r0
    }

    public boolean verify(java.lang.String r2) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException, java.security.SignatureException {
            r1 = this;
            java.security.PublicKey r0 = r1.getPublicKey(r2)
            boolean r2 = r1.verify(r0, r2)
            return r2
    }

    public boolean verify(java.security.PublicKey r4, java.lang.String r5) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException, java.security.SignatureException {
            r3 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r3.sigAlgId     // Catch: java.security.NoSuchAlgorithmException -> Lb
            java.lang.String r0 = getSignatureName(r0)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            java.security.Signature r5 = java.security.Signature.getInstance(r0, r5)     // Catch: java.security.NoSuchAlgorithmException -> Lb
            goto L2c
        Lb:
            r0 = move-exception
            java.util.Hashtable r1 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r3.sigAlgId
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r2.getObjectId()
            java.lang.Object r1 = r1.get(r2)
            if (r1 == 0) goto L71
            java.util.Hashtable r0 = org.bouncycastle.jce.PKCS10CertificationRequest.oids
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.sigAlgId
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r1.getObjectId()
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            java.security.Signature r5 = java.security.Signature.getInstance(r0, r5)
        L2c:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r3.sigAlgId
            org.bouncycastle.asn1.DEREncodable r0 = r0.getParameters()
            r3.setSignatureParameters(r5, r0)
            r5.initVerify(r4)
            java.io.ByteArrayOutputStream r4 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Exception -> L59
            r4.<init>()     // Catch: java.lang.Exception -> L59
            org.bouncycastle.asn1.DEROutputStream r0 = new org.bouncycastle.asn1.DEROutputStream     // Catch: java.lang.Exception -> L59
            r0.<init>(r4)     // Catch: java.lang.Exception -> L59
            org.bouncycastle.asn1.pkcs.CertificationRequestInfo r1 = r3.reqInfo     // Catch: java.lang.Exception -> L59
            r0.writeObject(r1)     // Catch: java.lang.Exception -> L59
            byte[] r4 = r4.toByteArray()     // Catch: java.lang.Exception -> L59
            r5.update(r4)     // Catch: java.lang.Exception -> L59
            org.bouncycastle.asn1.DERBitString r4 = r3.sigBits
            byte[] r4 = r4.getBytes()
            boolean r4 = r5.verify(r4)
            return r4
        L59:
            r4 = move-exception
            java.security.SignatureException r5 = new java.security.SignatureException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "exception encoding TBS cert request - "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
        L71:
            throw r0
    }
}
