package org.bouncycastle.openssl;

public class PEMReader extends java.io.BufferedReader {
    private final org.bouncycastle.openssl.PasswordFinder pFinder;
    private final java.lang.String provider;

    public PEMReader(java.io.Reader r3) {
            r2 = this;
            r0 = 0
            java.lang.String r1 = "BC"
            r2.<init>(r3, r0, r1)
            return
    }

    public PEMReader(java.io.Reader r2, org.bouncycastle.openssl.PasswordFinder r3) {
            r1 = this;
            java.lang.String r0 = "BC"
            r1.<init>(r2, r3, r0)
            return
    }

    public PEMReader(java.io.Reader r1, org.bouncycastle.openssl.PasswordFinder r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1)
            r0.pFinder = r2
            r0.provider = r3
            return
    }

    private org.bouncycastle.x509.X509AttributeCertificate readAttributeCertificate(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            org.bouncycastle.x509.X509V2AttributeCertificate r0 = new org.bouncycastle.x509.X509V2AttributeCertificate
            byte[] r2 = r1.readBytes(r2)
            r0.<init>(r2)
            return r0
    }

    private byte[] readBytes(java.lang.String r5) throws java.io.IOException {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
        L5:
            java.lang.String r1 = r4.readLine()
            if (r1 == 0) goto L1b
            int r2 = r1.indexOf(r5)
            r3 = -1
            if (r2 == r3) goto L13
            goto L1b
        L13:
            java.lang.String r1 = r1.trim()
            r0.append(r1)
            goto L5
        L1b:
            if (r1 == 0) goto L26
            java.lang.String r5 = r0.toString()
            byte[] r5 = org.bouncycastle.util.encoders.Base64.decode(r5)
            return r5
        L26:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r5)
            java.lang.String r5 = " not found"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    private java.security.cert.X509CRL readCRL(java.lang.String r4) throws java.io.IOException {
            r3 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r4 = r3.readBytes(r4)
            r0.<init>(r4)
            java.lang.String r4 = "X.509"
            java.lang.String r1 = r3.provider     // Catch: java.lang.Exception -> L18
            java.security.cert.CertificateFactory r4 = java.security.cert.CertificateFactory.getInstance(r4, r1)     // Catch: java.lang.Exception -> L18
            java.security.cert.CRL r4 = r4.generateCRL(r0)     // Catch: java.lang.Exception -> L18
            java.security.cert.X509CRL r4 = (java.security.cert.X509CRL) r4     // Catch: java.lang.Exception -> L18
            return r4
        L18:
            r4 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "problem parsing cert: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private java.security.cert.X509Certificate readCertificate(java.lang.String r4) throws java.io.IOException {
            r3 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r4 = r3.readBytes(r4)
            r0.<init>(r4)
            java.lang.String r4 = "X.509"
            java.lang.String r1 = r3.provider     // Catch: java.lang.Exception -> L18
            java.security.cert.CertificateFactory r4 = java.security.cert.CertificateFactory.getInstance(r4, r1)     // Catch: java.lang.Exception -> L18
            java.security.cert.Certificate r4 = r4.generateCertificate(r0)     // Catch: java.lang.Exception -> L18
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4     // Catch: java.lang.Exception -> L18
            return r4
        L18:
            r4 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "problem parsing cert: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private org.bouncycastle.jce.PKCS10CertificationRequest readCertificateRequest(java.lang.String r4) throws java.io.IOException {
            r3 = this;
            org.bouncycastle.jce.PKCS10CertificationRequest r0 = new org.bouncycastle.jce.PKCS10CertificationRequest     // Catch: java.lang.Exception -> La
            byte[] r4 = r3.readBytes(r4)     // Catch: java.lang.Exception -> La
            r0.<init>(r4)     // Catch: java.lang.Exception -> La
            return r0
        La:
            r4 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "problem parsing cert: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private org.bouncycastle.jce.spec.ECNamedCurveParameterSpec readECParameters(java.lang.String r1) throws java.io.IOException {
            r0 = this;
            byte[] r1 = r0.readBytes(r1)
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            java.lang.String r1 = r1.getId()
            org.bouncycastle.jce.spec.ECNamedCurveParameterSpec r1 = org.bouncycastle.jce.ECNamedCurveTable.getParameterSpec(r1)
            return r1
    }

    private java.security.KeyPair readECPrivateKey(java.lang.String r4) throws java.io.IOException {
            r3 = this;
            org.bouncycastle.asn1.sec.ECPrivateKeyStructure r0 = new org.bouncycastle.asn1.sec.ECPrivateKeyStructure     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            byte[] r4 = r3.readBytes(r4)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.ASN1Object r4 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r4)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            r0.<init>(r4)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_ecPublicKey     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.ASN1Object r2 = r0.getParameters()     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            r4.<init>(r1, r2)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r1 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.DERObject r2 = r0.getDERObject()     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            r1.<init>(r4, r2)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r2 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            org.bouncycastle.asn1.DERBitString r0 = r0.getPublicKey()     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            r2.<init>(r4, r0)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            java.security.spec.PKCS8EncodedKeySpec r4 = new java.security.spec.PKCS8EncodedKeySpec     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            byte[] r0 = r1.getEncoded()     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            r4.<init>(r0)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            java.security.spec.X509EncodedKeySpec r0 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            byte[] r1 = r2.getEncoded()     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            r0.<init>(r1)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            java.lang.String r1 = "ECDSA"
            java.lang.String r2 = r3.provider     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1, r2)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            java.security.KeyPair r2 = new java.security.KeyPair     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            java.security.PublicKey r0 = r1.generatePublic(r0)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            java.security.PrivateKey r4 = r1.generatePrivate(r4)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            r2.<init>(r0, r4)     // Catch: java.lang.Exception -> L58 java.lang.ClassCastException -> L70
            return r2
        L58:
            r4 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "problem parsing EC private key: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L70:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = "wrong ASN.1 object found in stream"
            r4.<init>(r0)
            throw r4
    }

    private java.security.KeyPair readKeyPair(java.lang.String r23, java.lang.String r24) throws java.lang.Exception {
            r22 = this;
            r0 = r22
            r1 = r23
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r2.<init>()
            r3 = 1
            r4 = 0
            r5 = 0
        Lc:
            java.lang.String r6 = r22.readLine()
            if (r6 == 0) goto L3d
            java.lang.String r7 = "Proc-Type: 4,ENCRYPTED"
            boolean r7 = r6.startsWith(r7)
            if (r7 == 0) goto L1c
            r4 = 1
            goto Lc
        L1c:
            java.lang.String r7 = "DEK-Info:"
            boolean r7 = r6.startsWith(r7)
            if (r7 == 0) goto L2b
            r5 = 10
            java.lang.String r5 = r6.substring(r5)
            goto Lc
        L2b:
            r7 = r24
            int r8 = r6.indexOf(r7)
            r9 = -1
            if (r8 == r9) goto L35
            goto L3d
        L35:
            java.lang.String r6 = r6.trim()
            r2.append(r6)
            goto Lc
        L3d:
            java.lang.String r2 = r2.toString()
            byte[] r8 = org.bouncycastle.util.encoders.Base64.decode(r2)
            if (r4 == 0) goto L7c
            org.bouncycastle.openssl.PasswordFinder r2 = r0.pFinder
            if (r2 == 0) goto L74
            char[] r9 = r2.getPassword()
            if (r9 == 0) goto L6c
            java.util.StringTokenizer r2 = new java.util.StringTokenizer
            java.lang.String r4 = ","
            r2.<init>(r5, r4)
            java.lang.String r10 = r2.nextToken()
            java.lang.String r2 = r2.nextToken()
            byte[] r11 = org.bouncycastle.util.encoders.Hex.decode(r2)
            r6 = 0
            java.lang.String r7 = r0.provider
            byte[] r8 = org.bouncycastle.openssl.PEMUtilities.crypt(r6, r7, r8, r9, r10, r11)
            goto L7c
        L6c:
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "Password is null, but a password is required"
            r1.<init>(r2)
            throw r1
        L74:
            java.io.IOException r1 = new java.io.IOException
            java.lang.String r2 = "No password finder specified, but a password is required"
            r1.<init>(r2)
            throw r1
        L7c:
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            r2.<init>(r8)
            org.bouncycastle.asn1.ASN1InputStream r4 = new org.bouncycastle.asn1.ASN1InputStream
            r4.<init>(r2)
            org.bouncycastle.asn1.DERObject r2 = r4.readObject()
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            java.lang.String r4 = "RSA"
            boolean r4 = r1.equals(r4)
            r5 = 5
            r6 = 4
            r7 = 3
            r8 = 2
            org.bouncycastle.asn1.DEREncodable r3 = r2.getObjectAt(r3)
            org.bouncycastle.asn1.DERInteger r3 = (org.bouncycastle.asn1.DERInteger) r3
            if (r4 == 0) goto L100
            org.bouncycastle.asn1.DEREncodable r4 = r2.getObjectAt(r8)
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4
            org.bouncycastle.asn1.DEREncodable r7 = r2.getObjectAt(r7)
            org.bouncycastle.asn1.DERInteger r7 = (org.bouncycastle.asn1.DERInteger) r7
            org.bouncycastle.asn1.DEREncodable r6 = r2.getObjectAt(r6)
            org.bouncycastle.asn1.DERInteger r6 = (org.bouncycastle.asn1.DERInteger) r6
            org.bouncycastle.asn1.DEREncodable r5 = r2.getObjectAt(r5)
            org.bouncycastle.asn1.DERInteger r5 = (org.bouncycastle.asn1.DERInteger) r5
            r8 = 6
            org.bouncycastle.asn1.DEREncodable r8 = r2.getObjectAt(r8)
            org.bouncycastle.asn1.DERInteger r8 = (org.bouncycastle.asn1.DERInteger) r8
            r9 = 7
            org.bouncycastle.asn1.DEREncodable r9 = r2.getObjectAt(r9)
            org.bouncycastle.asn1.DERInteger r9 = (org.bouncycastle.asn1.DERInteger) r9
            r10 = 8
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r10)
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            java.security.spec.RSAPublicKeySpec r10 = new java.security.spec.RSAPublicKeySpec
            java.math.BigInteger r11 = r3.getValue()
            java.math.BigInteger r12 = r4.getValue()
            r10.<init>(r11, r12)
            java.security.spec.RSAPrivateCrtKeySpec r11 = new java.security.spec.RSAPrivateCrtKeySpec
            java.math.BigInteger r14 = r3.getValue()
            java.math.BigInteger r15 = r4.getValue()
            java.math.BigInteger r16 = r7.getValue()
            java.math.BigInteger r17 = r6.getValue()
            java.math.BigInteger r18 = r5.getValue()
            java.math.BigInteger r19 = r8.getValue()
            java.math.BigInteger r20 = r9.getValue()
            java.math.BigInteger r21 = r2.getValue()
            r13 = r11
            r13.<init>(r14, r15, r16, r17, r18, r19, r20, r21)
            goto L142
        L100:
            org.bouncycastle.asn1.DEREncodable r4 = r2.getObjectAt(r8)
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4
            org.bouncycastle.asn1.DEREncodable r7 = r2.getObjectAt(r7)
            org.bouncycastle.asn1.DERInteger r7 = (org.bouncycastle.asn1.DERInteger) r7
            org.bouncycastle.asn1.DEREncodable r6 = r2.getObjectAt(r6)
            org.bouncycastle.asn1.DERInteger r6 = (org.bouncycastle.asn1.DERInteger) r6
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r5)
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            java.security.spec.DSAPrivateKeySpec r11 = new java.security.spec.DSAPrivateKeySpec
            java.math.BigInteger r2 = r2.getValue()
            java.math.BigInteger r5 = r3.getValue()
            java.math.BigInteger r8 = r4.getValue()
            java.math.BigInteger r9 = r7.getValue()
            r11.<init>(r2, r5, r8, r9)
            java.security.spec.DSAPublicKeySpec r10 = new java.security.spec.DSAPublicKeySpec
            java.math.BigInteger r2 = r6.getValue()
            java.math.BigInteger r3 = r3.getValue()
            java.math.BigInteger r4 = r4.getValue()
            java.math.BigInteger r5 = r7.getValue()
            r10.<init>(r2, r3, r4, r5)
        L142:
            java.lang.String r2 = r0.provider
            java.security.KeyFactory r1 = java.security.KeyFactory.getInstance(r1, r2)
            java.security.KeyPair r2 = new java.security.KeyPair
            java.security.PublicKey r3 = r1.generatePublic(r10)
            java.security.PrivateKey r1 = r1.generatePrivate(r11)
            r2.<init>(r3, r1)
            return r2
    }

    private org.bouncycastle.asn1.cms.ContentInfo readPKCS7(java.lang.String r6) throws java.io.IOException {
            r5 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
        La:
            java.lang.String r2 = r5.readLine()
            if (r2 == 0) goto L3f
            int r3 = r2.indexOf(r6)
            r4 = -1
            if (r3 == r4) goto L18
            goto L3f
        L18:
            java.lang.String r2 = r2.trim()
            java.lang.String r2 = r2.trim()
            r0.append(r2)
            int r2 = r0.length()
            int r2 = r2 / 4
            int r2 = r2 * 4
            r3 = 0
            java.lang.String r2 = r0.substring(r3, r2)
            org.bouncycastle.util.encoders.Base64.decode(r2, r1)
            int r2 = r0.length()
            int r2 = r2 / 4
            int r2 = r2 * 4
            r0.delete(r3, r2)
            goto La
        L3f:
            int r0 = r0.length()
            if (r0 != 0) goto L91
            if (r2 == 0) goto L7a
            java.io.ByteArrayInputStream r6 = new java.io.ByteArrayInputStream
            byte[] r0 = r1.toByteArray()
            r6.<init>(r0)
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L5e
            r0.<init>(r6)     // Catch: java.lang.Exception -> L5e
            org.bouncycastle.asn1.DERObject r6 = r0.readObject()     // Catch: java.lang.Exception -> L5e
            org.bouncycastle.asn1.cms.ContentInfo r6 = org.bouncycastle.asn1.cms.ContentInfo.getInstance(r6)     // Catch: java.lang.Exception -> L5e
            return r6
        L5e:
            r6 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "problem parsing PKCS7 object: "
            r1.append(r2)
            java.lang.String r6 = r6.toString()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        L7a:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            java.lang.String r6 = " not found"
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        L91:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r0 = "base64 data appears to be truncated"
            r6.<init>(r0)
            throw r6
    }

    private java.security.PublicKey readPublicKey(java.lang.String r5) throws java.io.IOException {
            r4 = this;
            java.security.spec.X509EncodedKeySpec r0 = new java.security.spec.X509EncodedKeySpec
            byte[] r5 = r4.readBytes(r5)
            r0.<init>(r5)
            java.lang.String r5 = "DSA"
            java.lang.String r1 = "RSA"
            java.lang.String[] r5 = new java.lang.String[]{r5, r1}
            r1 = 0
        L12:
            r2 = 2
            if (r1 >= r2) goto L3e
            r2 = r5[r1]     // Catch: java.security.NoSuchProviderException -> L22 java.lang.Throwable -> L3b
            java.lang.String r3 = r4.provider     // Catch: java.security.NoSuchProviderException -> L22 java.lang.Throwable -> L3b
            java.security.KeyFactory r2 = java.security.KeyFactory.getInstance(r2, r3)     // Catch: java.security.NoSuchProviderException -> L22 java.lang.Throwable -> L3b
            java.security.PublicKey r5 = r2.generatePublic(r0)     // Catch: java.security.NoSuchProviderException -> L22 java.lang.Throwable -> L3b
            return r5
        L22:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "can't find provider "
            r0.append(r1)
            java.lang.String r1 = r4.provider
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
        L3b:
            int r1 = r1 + 1
            goto L12
        L3e:
            r5 = 0
            return r5
    }

    private java.security.PublicKey readRSAPublicKey(java.lang.String r4) throws java.io.IOException {
            r3 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r4 = r3.readBytes(r4)
            r0.<init>(r4)
            org.bouncycastle.asn1.ASN1InputStream r4 = new org.bouncycastle.asn1.ASN1InputStream
            r4.<init>(r0)
            org.bouncycastle.asn1.DERObject r4 = r4.readObject()
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            org.bouncycastle.asn1.x509.RSAPublicKeyStructure r0 = new org.bouncycastle.asn1.x509.RSAPublicKeyStructure
            r0.<init>(r4)
            java.security.spec.RSAPublicKeySpec r4 = new java.security.spec.RSAPublicKeySpec
            java.math.BigInteger r1 = r0.getModulus()
            java.math.BigInteger r0 = r0.getPublicExponent()
            r4.<init>(r1, r0)
            java.lang.String r0 = "RSA"
            java.lang.String r1 = r3.provider     // Catch: java.lang.Exception -> L33 java.security.NoSuchProviderException -> L4f
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0, r1)     // Catch: java.lang.Exception -> L33 java.security.NoSuchProviderException -> L4f
            java.security.PublicKey r4 = r0.generatePublic(r4)     // Catch: java.lang.Exception -> L33 java.security.NoSuchProviderException -> L4f
            return r4
        L33:
            r4 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "problem extracting key: "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L4f:
            java.io.IOException r4 = new java.io.IOException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "can't find provider "
            r0.append(r1)
            java.lang.String r1 = r3.provider
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            throw r4
    }

    public java.lang.Object readObject() throws java.io.IOException {
            r4 = this;
        L0:
            java.lang.String r0 = r4.readLine()
            if (r0 == 0) goto L106
            java.lang.String r1 = "-----BEGIN PUBLIC KEY"
            int r1 = r0.indexOf(r1)
            r2 = -1
            if (r1 == r2) goto L16
            java.lang.String r0 = "-----END PUBLIC KEY"
            java.security.PublicKey r0 = r4.readPublicKey(r0)
            return r0
        L16:
            java.lang.String r1 = "-----BEGIN RSA PUBLIC KEY"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto L25
            java.lang.String r0 = "-----END RSA PUBLIC KEY"
            java.security.PublicKey r0 = r4.readRSAPublicKey(r0)
            return r0
        L25:
            java.lang.String r1 = "-----BEGIN CERTIFICATE REQUEST"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto L34
            java.lang.String r0 = "-----END CERTIFICATE REQUEST"
            org.bouncycastle.jce.PKCS10CertificationRequest r0 = r4.readCertificateRequest(r0)
            return r0
        L34:
            java.lang.String r1 = "-----BEGIN NEW CERTIFICATE REQUEST"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto L43
            java.lang.String r0 = "-----END NEW CERTIFICATE REQUEST"
            org.bouncycastle.jce.PKCS10CertificationRequest r0 = r4.readCertificateRequest(r0)
            return r0
        L43:
            java.lang.String r1 = "-----BEGIN CERTIFICATE"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto L52
            java.lang.String r0 = "-----END CERTIFICATE"
            java.security.cert.X509Certificate r0 = r4.readCertificate(r0)
            return r0
        L52:
            java.lang.String r1 = "-----BEGIN PKCS7"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto L61
            java.lang.String r0 = "-----END PKCS7"
            org.bouncycastle.asn1.cms.ContentInfo r0 = r4.readPKCS7(r0)
            return r0
        L61:
            java.lang.String r1 = "-----BEGIN X509 CERTIFICATE"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto L70
            java.lang.String r0 = "-----END X509 CERTIFICATE"
            java.security.cert.X509Certificate r0 = r4.readCertificate(r0)
            return r0
        L70:
            java.lang.String r1 = "-----BEGIN X509 CRL"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto L7f
            java.lang.String r0 = "-----END X509 CRL"
            java.security.cert.X509CRL r0 = r4.readCRL(r0)
            return r0
        L7f:
            java.lang.String r1 = "-----BEGIN ATTRIBUTE CERTIFICATE"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto L8e
            java.lang.String r0 = "-----END ATTRIBUTE CERTIFICATE"
            org.bouncycastle.x509.X509AttributeCertificate r0 = r4.readAttributeCertificate(r0)
            return r0
        L8e:
            java.lang.String r1 = "-----BEGIN RSA PRIVATE KEY"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto Lbb
            java.lang.String r0 = "RSA"
            java.lang.String r1 = "-----END RSA PRIVATE KEY"
            java.security.KeyPair r0 = r4.readKeyPair(r0, r1)     // Catch: java.lang.Exception -> L9f
            return r0
        L9f:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "problem creating RSA private key: "
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        Lbb:
            java.lang.String r1 = "-----BEGIN DSA PRIVATE KEY"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto Le8
            java.lang.String r0 = "DSA"
            java.lang.String r1 = "-----END DSA PRIVATE KEY"
            java.security.KeyPair r0 = r4.readKeyPair(r0, r1)     // Catch: java.lang.Exception -> Lcc
            return r0
        Lcc:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "problem creating DSA private key: "
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        Le8:
            java.lang.String r1 = "-----BEGIN EC PARAMETERS-----"
            int r1 = r0.indexOf(r1)
            if (r1 == r2) goto Lf7
            java.lang.String r0 = "-----END EC PARAMETERS-----"
            org.bouncycastle.jce.spec.ECNamedCurveParameterSpec r0 = r4.readECParameters(r0)
            return r0
        Lf7:
            java.lang.String r1 = "-----BEGIN EC PRIVATE KEY-----"
            int r0 = r0.indexOf(r1)
            if (r0 == r2) goto L0
            java.lang.String r0 = "-----END EC PRIVATE KEY-----"
            java.security.KeyPair r0 = r4.readECPrivateKey(r0)
            return r0
        L106:
            r0 = 0
            return r0
    }
}
