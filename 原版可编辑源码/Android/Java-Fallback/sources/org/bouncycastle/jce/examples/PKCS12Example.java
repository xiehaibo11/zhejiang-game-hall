package org.bouncycastle.jce.examples;

public class PKCS12Example {
    static char[] passwd;
    static org.bouncycastle.x509.X509V1CertificateGenerator v1CertGen;
    static org.bouncycastle.x509.X509V3CertificateGenerator v3CertGen;

    static {
            r0 = 11
            char[] r0 = new char[r0]
            r0 = {x0018: FILL_ARRAY_DATA , data: [104, 101, 108, 108, 111, 32, 119, 111, 114, 108, 100} // fill-array
            org.bouncycastle.jce.examples.PKCS12Example.passwd = r0
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = new org.bouncycastle.x509.X509V1CertificateGenerator
            r0.<init>()
            org.bouncycastle.jce.examples.PKCS12Example.v1CertGen = r0
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = new org.bouncycastle.x509.X509V3CertificateGenerator
            r0.<init>()
            org.bouncycastle.jce.examples.PKCS12Example.v3CertGen = r0
            return
    }

    public PKCS12Example() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.security.cert.Certificate createCert(java.security.PublicKey r9, java.security.PrivateKey r10, java.security.PublicKey r11) throws java.lang.Exception {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.C
            java.lang.String r3 = "AU"
            r0.put(r2, r3)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.O
            java.lang.String r4 = "The Legion of the Bouncy Castle"
            r0.put(r2, r4)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.OU
            java.lang.String r5 = "Bouncy Intermediate Certificate"
            r0.put(r2, r5)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.EmailAddress
            java.lang.String r5 = "feedback-crypto@bouncycastle.org"
            r0.put(r2, r5)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.C
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.O
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.OU
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.EmailAddress
            r1.addElement(r2)
            java.util.Hashtable r2 = new java.util.Hashtable
            r2.<init>()
            java.util.Vector r6 = new java.util.Vector
            r6.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r7 = org.bouncycastle.jce.X509Principal.C
            r2.put(r7, r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.O
            r2.put(r3, r4)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.L
            java.lang.String r4 = "Melbourne"
            r2.put(r3, r4)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.CN
            java.lang.String r4 = "Eric H. Echidna"
            r2.put(r3, r4)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.EmailAddress
            r2.put(r3, r5)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.C
            r6.addElement(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.O
            r6.addElement(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.L
            r6.addElement(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.CN
            r6.addElement(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.X509Principal.EmailAddress
            r6.addElement(r3)
            org.bouncycastle.x509.X509V3CertificateGenerator r3 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            r3.reset()
            org.bouncycastle.x509.X509V3CertificateGenerator r3 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            r4 = 3
            java.math.BigInteger r4 = java.math.BigInteger.valueOf(r4)
            r3.setSerialNumber(r4)
            org.bouncycastle.x509.X509V3CertificateGenerator r3 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.jce.X509Principal r4 = new org.bouncycastle.jce.X509Principal
            r4.<init>(r1, r0)
            r3.setIssuerDN(r4)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            java.util.Date r1 = new java.util.Date
            long r3 = java.lang.System.currentTimeMillis()
            r7 = 2592000000(0x9a7ec800, double:1.280618154E-314)
            long r3 = r3 - r7
            r1.<init>(r3)
            r0.setNotBefore(r1)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            java.util.Date r1 = new java.util.Date
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 + r7
            r1.<init>(r3)
            r0.setNotAfter(r1)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal
            r1.<init>(r6, r2)
            r0.setSubjectDN(r1)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            r0.setPublicKey(r9)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            java.lang.String r1 = "SHA1WithRSAEncryption"
            r0.setSignatureAlgorithm(r1)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Extensions.SubjectKeyIdentifier
            org.bouncycastle.x509.extension.SubjectKeyIdentifierStructure r2 = new org.bouncycastle.x509.extension.SubjectKeyIdentifierStructure
            r2.<init>(r9)
            r3 = 0
            r0.addExtension(r1, r3, r2)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Extensions.AuthorityKeyIdentifier
            org.bouncycastle.x509.extension.AuthorityKeyIdentifierStructure r2 = new org.bouncycastle.x509.extension.AuthorityKeyIdentifierStructure
            r2.<init>(r11)
            r0.addExtension(r1, r3, r2)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            java.security.cert.X509Certificate r10 = r0.generateX509Certificate(r10)
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            r10.checkValidity(r0)
            r10.verify(r11)
            r11 = r10
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r11 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r11
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_friendlyName
            org.bouncycastle.asn1.DERBMPString r1 = new org.bouncycastle.asn1.DERBMPString
            java.lang.String r2 = "Eric's Key"
            r1.<init>(r2)
            r11.setBagAttribute(r0, r1)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_localKeyId
            org.bouncycastle.x509.extension.SubjectKeyIdentifierStructure r1 = new org.bouncycastle.x509.extension.SubjectKeyIdentifierStructure
            r1.<init>(r9)
            r11.setBagAttribute(r0, r1)
            return r10
    }

    public static java.security.cert.Certificate createIntermediateCert(java.security.PublicKey r9, java.security.PrivateKey r10, java.security.cert.X509Certificate r11) throws java.lang.Exception {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            java.util.Vector r1 = new java.util.Vector
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.C
            java.lang.String r3 = "AU"
            r0.put(r2, r3)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.O
            java.lang.String r3 = "The Legion of the Bouncy Castle"
            r0.put(r2, r3)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.OU
            java.lang.String r3 = "Bouncy Intermediate Certificate"
            r0.put(r2, r3)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.EmailAddress
            java.lang.String r4 = "feedback-crypto@bouncycastle.org"
            r0.put(r2, r4)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.C
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.O
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.OU
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.EmailAddress
            r1.addElement(r2)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            r2.reset()
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            r4 = 2
            java.math.BigInteger r4 = java.math.BigInteger.valueOf(r4)
            r2.setSerialNumber(r4)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.jce.X509Principal r4 = org.bouncycastle.jce.PrincipalUtil.getSubjectX509Principal(r11)
            r2.setIssuerDN(r4)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            java.util.Date r4 = new java.util.Date
            long r5 = java.lang.System.currentTimeMillis()
            r7 = 2592000000(0x9a7ec800, double:1.280618154E-314)
            long r5 = r5 - r7
            r4.<init>(r5)
            r2.setNotBefore(r4)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            java.util.Date r4 = new java.util.Date
            long r5 = java.lang.System.currentTimeMillis()
            long r5 = r5 + r7
            r4.<init>(r5)
            r2.setNotAfter(r4)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.jce.X509Principal r4 = new org.bouncycastle.jce.X509Principal
            r4.<init>(r1, r0)
            r2.setSubjectDN(r4)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            r0.setPublicKey(r9)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            java.lang.String r1 = "SHA1WithRSAEncryption"
            r0.setSignatureAlgorithm(r1)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Extensions.SubjectKeyIdentifier
            org.bouncycastle.x509.extension.SubjectKeyIdentifierStructure r2 = new org.bouncycastle.x509.extension.SubjectKeyIdentifierStructure
            r2.<init>(r9)
            r9 = 0
            r0.addExtension(r1, r9, r2)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Extensions.AuthorityKeyIdentifier
            org.bouncycastle.x509.extension.AuthorityKeyIdentifierStructure r2 = new org.bouncycastle.x509.extension.AuthorityKeyIdentifierStructure
            r2.<init>(r11)
            r0.addExtension(r1, r9, r2)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x509.X509Extensions.BasicConstraints
            org.bouncycastle.asn1.x509.BasicConstraints r2 = new org.bouncycastle.asn1.x509.BasicConstraints
            r2.<init>(r9)
            r9 = 1
            r0.addExtension(r1, r9, r2)
            org.bouncycastle.x509.X509V3CertificateGenerator r9 = org.bouncycastle.jce.examples.PKCS12Example.v3CertGen
            java.security.cert.X509Certificate r9 = r9.generateX509Certificate(r10)
            java.util.Date r10 = new java.util.Date
            r10.<init>()
            r9.checkValidity(r10)
            java.security.PublicKey r10 = r11.getPublicKey()
            r9.verify(r10)
            r10 = r9
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r10 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r10
            org.bouncycastle.asn1.DERObjectIdentifier r11 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_friendlyName
            org.bouncycastle.asn1.DERBMPString r0 = new org.bouncycastle.asn1.DERBMPString
            r0.<init>(r3)
            r10.setBagAttribute(r11, r0)
            return r9
    }

    public static java.security.cert.Certificate createMasterCert(java.security.PublicKey r7, java.security.PrivateKey r8) throws java.lang.Exception {
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v1CertGen
            r1 = 1
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
            r0.setSerialNumber(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v1CertGen
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal
            java.lang.String r2 = "C=AU, O=The Legion of the Bouncy Castle, OU=Bouncy Primary Certificate"
            r1.<init>(r2)
            r0.setIssuerDN(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v1CertGen
            java.util.Date r1 = new java.util.Date
            long r3 = java.lang.System.currentTimeMillis()
            r5 = 2592000000(0x9a7ec800, double:1.280618154E-314)
            long r3 = r3 - r5
            r1.<init>(r3)
            r0.setNotBefore(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v1CertGen
            java.util.Date r1 = new java.util.Date
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 + r5
            r1.<init>(r3)
            r0.setNotAfter(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v1CertGen
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal
            r1.<init>(r2)
            r0.setSubjectDN(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v1CertGen
            r0.setPublicKey(r7)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v1CertGen
            java.lang.String r1 = "SHA1WithRSAEncryption"
            r0.setSignatureAlgorithm(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.jce.examples.PKCS12Example.v1CertGen
            java.security.cert.X509Certificate r8 = r0.generateX509Certificate(r8)
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            r8.checkValidity(r0)
            r8.verify(r7)
            r7 = r8
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r7 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r7
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_friendlyName
            org.bouncycastle.asn1.DERBMPString r1 = new org.bouncycastle.asn1.DERBMPString
            java.lang.String r2 = "Bouncy Primary Certificate"
            r1.<init>(r2)
            r7.setBagAttribute(r0, r1)
            return r8
    }

    public static void main(java.lang.String[] r19) throws java.lang.Exception {
            org.bouncycastle.jce.provider.BouncyCastleProvider r0 = new org.bouncycastle.jce.provider.BouncyCastleProvider
            r0.<init>()
            java.security.Security.addProvider(r0)
            java.security.spec.RSAPublicKeySpec r0 = new java.security.spec.RSAPublicKeySpec
            java.math.BigInteger r1 = new java.math.BigInteger
            java.lang.String r2 = "b4a7e46170574f16a97082b22be58b6a2a629798419be12872a4bdba626cfae9900f76abfb12139dce5de56564fab2b6543165a040c606887420e33d91ed7ed7"
            r3 = 16
            r1.<init>(r2, r3)
            java.math.BigInteger r4 = new java.math.BigInteger
            java.lang.String r5 = "11"
            r4.<init>(r5, r3)
            r0.<init>(r1, r4)
            java.security.spec.RSAPrivateCrtKeySpec r1 = new java.security.spec.RSAPrivateCrtKeySpec
            java.math.BigInteger r7 = new java.math.BigInteger
            r7.<init>(r2, r3)
            java.math.BigInteger r8 = new java.math.BigInteger
            r8.<init>(r5, r3)
            java.math.BigInteger r9 = new java.math.BigInteger
            java.lang.String r2 = "9f66f6b05410cd503b2709e88115d55daced94d1a34d4e32bf824d0dde6028ae79c5f07b580f5dce240d7111f7ddb130a7945cd7d957d1920994da389f490c89"
            r9.<init>(r2, r3)
            java.math.BigInteger r10 = new java.math.BigInteger
            java.lang.String r2 = "c0a0758cdf14256f78d4708c86becdead1b50ad4ad6c5c703e2168fbf37884cb"
            r10.<init>(r2, r3)
            java.math.BigInteger r11 = new java.math.BigInteger
            java.lang.String r2 = "f01734d7960ea60070f1b06f2bb81bfac48ff192ae18451d5e56c734a5aab8a5"
            r11.<init>(r2, r3)
            java.math.BigInteger r12 = new java.math.BigInteger
            java.lang.String r2 = "b54bb9edff22051d9ee60f9351a48591b6500a319429c069a3e335a1d6171391"
            r12.<init>(r2, r3)
            java.math.BigInteger r13 = new java.math.BigInteger
            java.lang.String r2 = "d3d83daf2a0cecd3367ae6f8ae1aeb82e9ac2f816c6fc483533d8297dd7884cd"
            r13.<init>(r2, r3)
            java.math.BigInteger r14 = new java.math.BigInteger
            java.lang.String r2 = "b8f52fc6f38593dabb661d3f50f8897f8106eee68b1bce78a95b132b4e5b5d19"
            r14.<init>(r2, r3)
            r6 = r1
            r6.<init>(r7, r8, r9, r10, r11, r12, r13, r14)
            java.security.spec.RSAPublicKeySpec r2 = new java.security.spec.RSAPublicKeySpec
            java.math.BigInteger r4 = new java.math.BigInteger
            java.lang.String r6 = "8de0d113c5e736969c8d2b047a243f8fe18edad64cde9e842d3669230ca486f7cfdde1f8eec54d1905fff04acc85e61093e180cadc6cea407f193d44bb0e9449b8dbb49784cd9e36260c39e06a947299978c6ed8300724e887198cfede20f3fbde658fa2bd078be946a392bd349f2b49c486e20c405588e306706c9017308e69"
            r4.<init>(r6, r3)
            java.math.BigInteger r7 = new java.math.BigInteger
            java.lang.String r8 = "ffff"
            r7.<init>(r8, r3)
            r2.<init>(r4, r7)
            java.security.spec.RSAPrivateCrtKeySpec r4 = new java.security.spec.RSAPrivateCrtKeySpec
            java.math.BigInteger r10 = new java.math.BigInteger
            r10.<init>(r6, r3)
            java.math.BigInteger r11 = new java.math.BigInteger
            r11.<init>(r8, r3)
            java.math.BigInteger r12 = new java.math.BigInteger
            java.lang.String r6 = "7deb1b194a85bcfd29cf871411468adbc987650903e3bacc8338c449ca7b32efd39ffc33bc84412fcd7df18d23ce9d7c25ea910b1ae9985373e0273b4dca7f2e0db3b7314056ac67fd277f8f89cf2fd73c34c6ca69f9ba477143d2b0e2445548aa0b4a8473095182631da46844c356f5e5c7522eb54b5a33f11d730ead9c0cff"
            r12.<init>(r6, r3)
            java.math.BigInteger r13 = new java.math.BigInteger
            java.lang.String r6 = "ef4cede573cea47f83699b814de4302edb60eefe426c52e17bd7870ec7c6b7a24fe55282ebb73775f369157726fcfb988def2b40350bdca9e5b418340288f649"
            r13.<init>(r6, r3)
            java.math.BigInteger r14 = new java.math.BigInteger
            java.lang.String r6 = "97c7737d1b9a0088c3c7b528539247fd2a1593e7e01cef18848755be82f4a45aa093276cb0cbf118cb41117540a78f3fc471ba5d69f0042274defc9161265721"
            r14.<init>(r6, r3)
            java.math.BigInteger r15 = new java.math.BigInteger
            java.lang.String r6 = "6c641094e24d172728b8da3c2777e69adfd0839085be7e38c7c4a2dd00b1ae969f2ec9d23e7e37090fcd449a40af0ed463fe1c612d6810d6b4f58b7bfa31eb5f"
            r15.<init>(r6, r3)
            java.math.BigInteger r6 = new java.math.BigInteger
            java.lang.String r7 = "70b7123e8e69dfa76feb1236d0a686144b00e9232ed52b73847e74ef3af71fb45ccb24261f40d27f98101e230cf27b977a5d5f1f15f6cf48d5cb1da2a3a3b87f"
            r6.<init>(r7, r3)
            java.math.BigInteger r7 = new java.math.BigInteger
            java.lang.String r8 = "e38f5750d97e270996a286df2e653fd26c242106436f5bab0f4c7a9e654ce02665d5a281f2c412456f2d1fa26586ef04a9adac9004ca7f913162cb28e13bf40d"
            r7.<init>(r8, r3)
            r9 = r4
            r16 = r6
            r17 = r7
            r9.<init>(r10, r11, r12, r13, r14, r15, r16, r17)
            java.security.spec.RSAPublicKeySpec r6 = new java.security.spec.RSAPublicKeySpec
            java.math.BigInteger r7 = new java.math.BigInteger
            java.lang.String r8 = "b259d2d6e627a768c94be36164c2d9fc79d97aab9253140e5bf17751197731d6f7540d2509e7b9ffee0a70a6e26d56e92d2edd7f85aba85600b69089f35f6bdbf3c298e05842535d9f064e6b0391cb7d306e0a2d20c4dfb4e7b49a9640bdea26c10ad69c3f05007ce2513cee44cfe01998e62b6c3637d3fc0391079b26ee36d5"
            r7.<init>(r8, r3)
            java.math.BigInteger r9 = new java.math.BigInteger
            r9.<init>(r5, r3)
            r6.<init>(r7, r9)
            java.security.spec.RSAPrivateCrtKeySpec r7 = new java.security.spec.RSAPrivateCrtKeySpec
            java.math.BigInteger r11 = new java.math.BigInteger
            r11.<init>(r8, r3)
            java.math.BigInteger r12 = new java.math.BigInteger
            r12.<init>(r5, r3)
            java.math.BigInteger r13 = new java.math.BigInteger
            java.lang.String r5 = "92e08f83cc9920746989ca5034dcb384a094fb9c5a6288fcc4304424ab8f56388f72652d8fafc65a4b9020896f2cde297080f2a540e7b7ce5af0b3446e1258d1dd7f245cf54124b4c6e17da21b90a0ebd22605e6f45c9f136d7a13eaac1c0f7487de8bd6d924972408ebb58af71e76fd7b012a8d0e165f3ae2e5077a8648e619"
            r13.<init>(r5, r3)
            java.math.BigInteger r14 = new java.math.BigInteger
            java.lang.String r5 = "f75e80839b9b9379f1cf1128f321639757dba514642c206bbbd99f9a4846208b3e93fbbe5e0527cc59b1d4b929d9555853004c7c8b30ee6a213c3d1bb7415d03"
            r14.<init>(r5, r3)
            java.math.BigInteger r15 = new java.math.BigInteger
            java.lang.String r5 = "b892d9ebdbfc37e397256dd8a5d3123534d1f03726284743ddc6be3a709edb696fc40c7d902ed804c6eee730eee3d5b20bf6bd8d87a296813c87d3b3cc9d7947"
            r15.<init>(r5, r3)
            java.math.BigInteger r5 = new java.math.BigInteger
            java.lang.String r8 = "1d1a2d3ca8e52068b3094d501c9a842fec37f54db16e9a67070a8b3f53cc03d4257ad252a1a640eadd603724d7bf3737914b544ae332eedf4f34436cac25ceb5"
            r5.<init>(r8, r3)
            java.math.BigInteger r8 = new java.math.BigInteger
            java.lang.String r9 = "6c929e4e81672fef49d9c825163fec97c4b7ba7acb26c0824638ac22605d7201c94625770984f78a56e6e25904fe7db407099cad9b14588841b94f5ab498dded"
            r8.<init>(r9, r3)
            java.math.BigInteger r9 = new java.math.BigInteger
            java.lang.String r10 = "dae7651ee69ad1d081ec5e7188ae126f6004ff39556bde90e0b870962fa7b926d070686d8244fe5a9aa709a95686a104614834b0ada4b10f53197a5cb4c97339"
            r9.<init>(r10, r3)
            r10 = r7
            r16 = r5
            r17 = r8
            r18 = r9
            r10.<init>(r11, r12, r13, r14, r15, r16, r17, r18)
            java.lang.String r3 = "BC"
            java.lang.String r5 = "RSA"
            java.security.KeyFactory r5 = java.security.KeyFactory.getInstance(r5, r3)
            java.security.PrivateKey r7 = r5.generatePrivate(r7)
            java.security.PublicKey r6 = r5.generatePublic(r6)
            java.security.PrivateKey r4 = r5.generatePrivate(r4)
            java.security.PublicKey r2 = r5.generatePublic(r2)
            java.security.PrivateKey r1 = r5.generatePrivate(r1)
            java.security.PublicKey r0 = r5.generatePublic(r0)
            r5 = 3
            java.security.cert.Certificate[] r5 = new java.security.cert.Certificate[r5]
            java.security.cert.Certificate r6 = createMasterCert(r6, r7)
            r8 = 2
            r5[r8] = r6
            r6 = r5[r8]
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6
            java.security.cert.Certificate r6 = createIntermediateCert(r2, r7, r6)
            r7 = 1
            r5[r7] = r6
            java.security.cert.Certificate r2 = createCert(r0, r4, r2)
            r4 = 0
            r5[r4] = r2
            r2 = r1
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r2 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r2
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_friendlyName
            org.bouncycastle.asn1.DERBMPString r6 = new org.bouncycastle.asn1.DERBMPString
            java.lang.String r7 = "Eric's Key"
            r6.<init>(r7)
            r2.setBagAttribute(r4, r6)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.pkcs_9_at_localKeyId
            org.bouncycastle.x509.extension.SubjectKeyIdentifierStructure r6 = new org.bouncycastle.x509.extension.SubjectKeyIdentifierStructure
            r6.<init>(r0)
            r2.setBagAttribute(r4, r6)
            java.lang.String r0 = "PKCS12"
            java.security.KeyStore r0 = java.security.KeyStore.getInstance(r0, r3)
            r2 = 0
            r0.load(r2, r2)
            r0.setKeyEntry(r7, r1, r2, r5)
            java.io.FileOutputStream r1 = new java.io.FileOutputStream
            java.lang.String r2 = "id.p12"
            r1.<init>(r2)
            char[] r2 = org.bouncycastle.jce.examples.PKCS12Example.passwd
            r0.store(r1, r2)
            return
    }
}
