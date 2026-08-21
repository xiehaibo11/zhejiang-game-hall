package org.bouncycastle.x509.examples;

public class AttrCertExample {
    static org.bouncycastle.x509.X509V1CertificateGenerator v1CertGen;
    static org.bouncycastle.x509.X509V3CertificateGenerator v3CertGen;

    static {
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = new org.bouncycastle.x509.X509V1CertificateGenerator
            r0.<init>()
            org.bouncycastle.x509.examples.AttrCertExample.v1CertGen = r0
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = new org.bouncycastle.x509.X509V3CertificateGenerator
            r0.<init>()
            org.bouncycastle.x509.examples.AttrCertExample.v3CertGen = r0
            return
    }

    public AttrCertExample() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.security.cert.X509Certificate createAcIssuerCert(java.security.PublicKey r7, java.security.PrivateKey r8) throws java.lang.Exception {
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v1CertGen
            r1 = 10
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
            r0.setSerialNumber(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v1CertGen
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal
            java.lang.String r2 = "C=AU, O=The Legion of the Bouncy Castle, OU=Bouncy Primary Certificate"
            r1.<init>(r2)
            r0.setIssuerDN(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v1CertGen
            java.util.Date r1 = new java.util.Date
            long r3 = java.lang.System.currentTimeMillis()
            r5 = 2592000000(0x9a7ec800, double:1.280618154E-314)
            long r3 = r3 - r5
            r1.<init>(r3)
            r0.setNotBefore(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v1CertGen
            java.util.Date r1 = new java.util.Date
            long r3 = java.lang.System.currentTimeMillis()
            long r3 = r3 + r5
            r1.<init>(r3)
            r0.setNotAfter(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v1CertGen
            org.bouncycastle.jce.X509Principal r1 = new org.bouncycastle.jce.X509Principal
            r1.<init>(r2)
            r0.setSubjectDN(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v1CertGen
            r0.setPublicKey(r7)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v1CertGen
            java.lang.String r1 = "SHA1WithRSAEncryption"
            r0.setSignatureAlgorithm(r1)
            org.bouncycastle.x509.X509V1CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v1CertGen
            java.security.cert.X509Certificate r8 = r0.generateX509Certificate(r8)
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            r8.checkValidity(r0)
            r8.verify(r7)
            return r8
    }

    public static java.security.cert.X509Certificate createClientCert(java.security.PublicKey r8, java.security.PrivateKey r9, java.security.PublicKey r10) throws java.lang.Exception {
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
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.L
            java.lang.String r3 = "Melbourne"
            r0.put(r2, r3)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.CN
            java.lang.String r3 = "Eric H. Echidna"
            r0.put(r2, r3)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.EmailAddress
            java.lang.String r3 = "feedback-crypto@bouncycastle.org"
            r0.put(r2, r3)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.C
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.O
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.L
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.CN
            r1.addElement(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.X509Principal.EmailAddress
            r1.addElement(r2)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            r2.reset()
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            r3 = 20
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r3)
            r2.setSerialNumber(r3)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            org.bouncycastle.jce.X509Principal r3 = new org.bouncycastle.jce.X509Principal
            java.lang.String r4 = "C=AU, O=The Legion of the Bouncy Castle, OU=Bouncy Primary Certificate"
            r3.<init>(r4)
            r2.setIssuerDN(r3)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            java.util.Date r3 = new java.util.Date
            long r4 = java.lang.System.currentTimeMillis()
            r6 = 2592000000(0x9a7ec800, double:1.280618154E-314)
            long r4 = r4 - r6
            r3.<init>(r4)
            r2.setNotBefore(r3)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            java.util.Date r3 = new java.util.Date
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 + r6
            r3.<init>(r4)
            r2.setNotAfter(r3)
            org.bouncycastle.x509.X509V3CertificateGenerator r2 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            org.bouncycastle.jce.X509Principal r3 = new org.bouncycastle.jce.X509Principal
            r3.<init>(r1, r0)
            r2.setSubjectDN(r3)
            org.bouncycastle.x509.X509V3CertificateGenerator r0 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            r0.setPublicKey(r8)
            org.bouncycastle.x509.X509V3CertificateGenerator r8 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            java.lang.String r0 = "SHA1WithRSAEncryption"
            r8.setSignatureAlgorithm(r0)
            org.bouncycastle.x509.X509V3CertificateGenerator r8 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.misc.MiscObjectIdentifiers.netscapeCertType
            org.bouncycastle.asn1.misc.NetscapeCertType r1 = new org.bouncycastle.asn1.misc.NetscapeCertType
            r2 = 48
            r1.<init>(r2)
            r2 = 0
            r8.addExtension(r0, r2, r1)
            org.bouncycastle.x509.X509V3CertificateGenerator r8 = org.bouncycastle.x509.examples.AttrCertExample.v3CertGen
            java.security.cert.X509Certificate r8 = r8.generateX509Certificate(r9)
            java.util.Date r9 = new java.util.Date
            r9.<init>()
            r8.checkValidity(r9)
            r8.verify(r10)
            return r8
    }

    public static void main(java.lang.String[] r17) throws java.lang.Exception {
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
            java.lang.String r6 = "b259d2d6e627a768c94be36164c2d9fc79d97aab9253140e5bf17751197731d6f7540d2509e7b9ffee0a70a6e26d56e92d2edd7f85aba85600b69089f35f6bdbf3c298e05842535d9f064e6b0391cb7d306e0a2d20c4dfb4e7b49a9640bdea26c10ad69c3f05007ce2513cee44cfe01998e62b6c3637d3fc0391079b26ee36d5"
            r4.<init>(r6, r3)
            java.math.BigInteger r7 = new java.math.BigInteger
            r7.<init>(r5, r3)
            r2.<init>(r4, r7)
            java.security.spec.RSAPrivateCrtKeySpec r4 = new java.security.spec.RSAPrivateCrtKeySpec
            java.math.BigInteger r9 = new java.math.BigInteger
            r9.<init>(r6, r3)
            java.math.BigInteger r10 = new java.math.BigInteger
            r10.<init>(r5, r3)
            java.math.BigInteger r11 = new java.math.BigInteger
            java.lang.String r5 = "92e08f83cc9920746989ca5034dcb384a094fb9c5a6288fcc4304424ab8f56388f72652d8fafc65a4b9020896f2cde297080f2a540e7b7ce5af0b3446e1258d1dd7f245cf54124b4c6e17da21b90a0ebd22605e6f45c9f136d7a13eaac1c0f7487de8bd6d924972408ebb58af71e76fd7b012a8d0e165f3ae2e5077a8648e619"
            r11.<init>(r5, r3)
            java.math.BigInteger r12 = new java.math.BigInteger
            java.lang.String r5 = "f75e80839b9b9379f1cf1128f321639757dba514642c206bbbd99f9a4846208b3e93fbbe5e0527cc59b1d4b929d9555853004c7c8b30ee6a213c3d1bb7415d03"
            r12.<init>(r5, r3)
            java.math.BigInteger r13 = new java.math.BigInteger
            java.lang.String r5 = "b892d9ebdbfc37e397256dd8a5d3123534d1f03726284743ddc6be3a709edb696fc40c7d902ed804c6eee730eee3d5b20bf6bd8d87a296813c87d3b3cc9d7947"
            r13.<init>(r5, r3)
            java.math.BigInteger r14 = new java.math.BigInteger
            java.lang.String r5 = "1d1a2d3ca8e52068b3094d501c9a842fec37f54db16e9a67070a8b3f53cc03d4257ad252a1a640eadd603724d7bf3737914b544ae332eedf4f34436cac25ceb5"
            r14.<init>(r5, r3)
            java.math.BigInteger r15 = new java.math.BigInteger
            java.lang.String r5 = "6c929e4e81672fef49d9c825163fec97c4b7ba7acb26c0824638ac22605d7201c94625770984f78a56e6e25904fe7db407099cad9b14588841b94f5ab498dded"
            r15.<init>(r5, r3)
            java.math.BigInteger r5 = new java.math.BigInteger
            java.lang.String r6 = "dae7651ee69ad1d081ec5e7188ae126f6004ff39556bde90e0b870962fa7b926d070686d8244fe5a9aa709a95686a104614834b0ada4b10f53197a5cb4c97339"
            r5.<init>(r6, r3)
            r8 = r4
            r16 = r5
            r8.<init>(r9, r10, r11, r12, r13, r14, r15, r16)
            java.lang.String r3 = "BC"
            java.lang.String r5 = "RSA"
            java.security.KeyFactory r5 = java.security.KeyFactory.getInstance(r5, r3)
            java.security.PrivateKey r4 = r5.generatePrivate(r4)
            java.security.PublicKey r2 = r5.generatePublic(r2)
            r5.generatePrivate(r1)
            java.security.PublicKey r0 = r5.generatePublic(r0)
            java.security.cert.X509Certificate r1 = createAcIssuerCert(r2, r4)
            java.security.cert.X509Certificate r0 = createClientCert(r0, r4, r2)
            org.bouncycastle.x509.X509V2AttributeCertificateGenerator r5 = new org.bouncycastle.x509.X509V2AttributeCertificateGenerator
            r5.<init>()
            r5.reset()
            org.bouncycastle.x509.AttributeCertificateHolder r6 = new org.bouncycastle.x509.AttributeCertificateHolder
            r6.<init>(r0)
            r5.setHolder(r6)
            org.bouncycastle.x509.AttributeCertificateIssuer r6 = new org.bouncycastle.x509.AttributeCertificateIssuer
            javax.security.auth.x500.X500Principal r7 = r1.getSubjectX500Principal()
            r6.<init>(r7)
            r5.setIssuer(r6)
            java.math.BigInteger r6 = new java.math.BigInteger
            java.lang.String r7 = "1"
            r6.<init>(r7)
            r5.setSerialNumber(r6)
            java.util.Date r6 = new java.util.Date
            long r7 = java.lang.System.currentTimeMillis()
            r9 = 50000(0xc350, double:2.47033E-319)
            long r7 = r7 - r9
            r6.<init>(r7)
            r5.setNotBefore(r6)
            java.util.Date r6 = new java.util.Date
            long r7 = java.lang.System.currentTimeMillis()
            long r7 = r7 + r9
            r6.<init>(r7)
            r5.setNotAfter(r6)
            java.lang.String r6 = "SHA1WithRSAEncryption"
            r5.setSignatureAlgorithm(r6)
            org.bouncycastle.asn1.x509.GeneralName r6 = new org.bouncycastle.asn1.x509.GeneralName
            r7 = 1
            java.lang.String r8 = "DAU123456789"
            r6.<init>(r7, r8)
            org.bouncycastle.asn1.ASN1EncodableVector r7 = new org.bouncycastle.asn1.ASN1EncodableVector
            r7.<init>()
            r7.add(r6)
            org.bouncycastle.x509.X509Attribute r6 = new org.bouncycastle.x509.X509Attribute
            org.bouncycastle.asn1.DERSequence r8 = new org.bouncycastle.asn1.DERSequence
            r8.<init>(r7)
            java.lang.String r7 = "2.5.24.72"
            r6.<init>(r7, r8)
            r5.addAttribute(r6)
            org.bouncycastle.x509.X509AttributeCertificate r4 = r5.generateCertificate(r4, r3)
            org.bouncycastle.x509.X509V2AttributeCertificate r4 = (org.bouncycastle.x509.X509V2AttributeCertificate) r4
            org.bouncycastle.x509.AttributeCertificateHolder r5 = r4.getHolder()
            boolean r0 = r5.match(r0)
            java.lang.String r6 = " entity names found"
            if (r0 == 0) goto L18a
            java.security.Principal[] r0 = r5.getEntityNames()
            if (r0 == 0) goto L15b
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.security.Principal[] r9 = r5.getEntityNames()
            int r9 = r9.length
            r8.append(r9)
            r8.append(r6)
            java.lang.String r8 = r8.toString()
            r0.println(r8)
        L15b:
            java.security.Principal[] r0 = r5.getIssuer()
            if (r0 == 0) goto L183
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.security.Principal[] r9 = r5.getIssuer()
            int r9 = r9.length
            r8.append(r9)
            java.lang.String r9 = " issuer names found, serial number "
            r8.append(r9)
            java.math.BigInteger r5 = r5.getSerialNumber()
            r8.append(r5)
            java.lang.String r5 = r8.toString()
            r0.println(r5)
        L183:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r5 = "Matches original client x509 cert"
            r0.println(r5)
        L18a:
            org.bouncycastle.x509.AttributeCertificateIssuer r0 = r4.getIssuer()
            boolean r1 = r0.match(r1)
            if (r1 == 0) goto L1ba
            java.security.Principal[] r1 = r0.getPrincipals()
            if (r1 == 0) goto L1b3
            java.io.PrintStream r1 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.security.Principal[] r0 = r0.getPrincipals()
            int r0 = r0.length
            r5.append(r0)
            r5.append(r6)
            java.lang.String r0 = r5.toString()
            r1.println(r0)
        L1b3:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "Matches original ca x509 cert"
            r0.println(r1)
        L1ba:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r5 = "valid not before: "
            r1.append(r5)
            java.util.Date r6 = r4.getNotBefore()
            r1.append(r6)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.util.Date r5 = r4.getNotAfter()
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            r4.checkValidity()     // Catch: java.lang.Exception -> L1f8
            java.util.Date r0 = new java.util.Date     // Catch: java.lang.Exception -> L1f8
            r0.<init>()     // Catch: java.lang.Exception -> L1f8
            r4.checkValidity(r0)     // Catch: java.lang.Exception -> L1f8
            goto L1fe
        L1f8:
            r0 = move-exception
            java.io.PrintStream r1 = java.lang.System.out
            r1.println(r0)
        L1fe:
            r4.verify(r2, r3)     // Catch: java.lang.Exception -> L202
            goto L209
        L202:
            r0 = move-exception
            r1 = r0
            java.io.PrintStream r0 = java.lang.System.out
            r0.println(r1)
        L209:
            org.bouncycastle.x509.X509Attribute[] r0 = r4.getAttributes()
            java.io.PrintStream r1 = java.lang.System.out
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "cert has "
            r2.append(r3)
            int r3 = r0.length
            r2.append(r3)
            java.lang.String r3 = " attributes:"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.println(r2)
            r1 = 0
        L22a:
            int r2 = r0.length
            if (r1 >= r2) goto L25d
            r2 = r0[r1]
            java.io.PrintStream r3 = java.lang.System.out
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "OID: "
            r4.append(r5)
            java.lang.String r5 = r2.getOID()
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r3.println(r4)
            java.lang.String r2 = r2.getOID()
            boolean r2 = r2.equals(r7)
            if (r2 == 0) goto L25a
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.String r3 = "rolesyntax read from cert!"
            r2.println(r3)
        L25a:
            int r1 = r1 + 1
            goto L22a
        L25d:
            return
    }
}
