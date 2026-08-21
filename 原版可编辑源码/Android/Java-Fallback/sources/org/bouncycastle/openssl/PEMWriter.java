package org.bouncycastle.openssl;

public class PEMWriter extends java.io.BufferedWriter {
    private java.lang.String provider;

    public PEMWriter(java.io.Writer r2) {
            r1 = this;
            java.lang.String r0 = "BC"
            r1.<init>(r2, r0)
            return
    }

    public PEMWriter(java.io.Writer r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1)
            r0.provider = r2
            return
    }

    private void writeEncoded(byte[] r8) throws java.io.IOException {
            r7 = this;
            r0 = 64
            char[] r1 = new char[r0]
            byte[] r8 = org.bouncycastle.util.encoders.Base64.encode(r8)
            r2 = 0
            r3 = 0
        La:
            int r4 = r8.length
            if (r3 >= r4) goto L27
            r4 = 0
        Le:
            if (r4 == r0) goto L1e
            int r5 = r3 + r4
            int r6 = r8.length
            if (r5 < r6) goto L16
            goto L1e
        L16:
            r5 = r8[r5]
            char r5 = (char) r5
            r1[r4] = r5
            int r4 = r4 + 1
            goto Le
        L1e:
            r7.write(r1, r2, r4)
            r7.newLine()
            int r3 = r3 + 64
            goto La
        L27:
            return
    }

    private void writeFooter(java.lang.String r3) throws java.io.IOException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-----END "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "-----"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.write(r3)
            r2.newLine()
            return
    }

    private void writeHeader(java.lang.String r3) throws java.io.IOException {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-----BEGIN "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "-----"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.write(r3)
            r2.newLine()
            return
    }

    private void writeHexEncoded(byte[] r3) throws java.io.IOException {
            r2 = this;
            byte[] r3 = org.bouncycastle.util.encoders.Hex.encode(r3)
            r0 = 0
        L5:
            int r1 = r3.length
            if (r0 == r1) goto L11
            r1 = r3[r0]
            char r1 = (char) r1
            r2.write(r1)
            int r0 = r0 + 1
            goto L5
        L11:
            return
    }

    public void writeObject(java.lang.Object r5) throws java.io.IOException {
            r4 = this;
            boolean r0 = r5 instanceof java.security.cert.X509Certificate
            java.lang.String r1 = "Cannot encode object: "
            if (r0 == 0) goto L2a
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5     // Catch: java.security.cert.CertificateEncodingException -> L10
            byte[] r5 = r5.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L10
            java.lang.String r0 = "CERTIFICATE"
            goto L131
        L10:
            r5 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r5 = r5.toString()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L2a:
            boolean r0 = r5 instanceof java.security.cert.X509CRL
            if (r0 == 0) goto L52
            java.security.cert.X509CRL r5 = (java.security.cert.X509CRL) r5     // Catch: java.security.cert.CRLException -> L38
            byte[] r5 = r5.getEncoded()     // Catch: java.security.cert.CRLException -> L38
            java.lang.String r0 = "X509 CRL"
            goto L131
        L38:
            r5 = move-exception
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r5 = r5.toString()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r0.<init>(r5)
            throw r0
        L52:
            boolean r0 = r5 instanceof java.security.KeyPair
            if (r0 == 0) goto L60
            java.security.KeyPair r5 = (java.security.KeyPair) r5
            java.security.PrivateKey r5 = r5.getPrivate()
            r4.writeObject(r5)
            return
        L60:
            boolean r0 = r5 instanceof java.security.PrivateKey
            if (r0 == 0) goto Lfe
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            r1 = r5
            java.security.Key r1 = (java.security.Key) r1
            byte[] r1 = r1.getEncoded()
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            boolean r1 = r5 instanceof java.security.interfaces.RSAPrivateKey
            if (r1 == 0) goto L86
            org.bouncycastle.asn1.DERObject r5 = r0.getPrivateKey()
            byte[] r5 = r5.getEncoded()
            java.lang.String r0 = "RSA PRIVATE KEY"
            goto L131
        L86:
            boolean r1 = r5 instanceof java.security.interfaces.DSAPrivateKey
            if (r1 == 0) goto Lf6
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r0 = r0.getParameters()
            org.bouncycastle.asn1.x509.DSAParameter r0 = org.bouncycastle.asn1.x509.DSAParameter.getInstance(r0)
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r3 = 0
            r2.<init>(r3)
            r1.add(r2)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r3 = r0.getP()
            r2.<init>(r3)
            r1.add(r2)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r3 = r0.getQ()
            r2.<init>(r3)
            r1.add(r2)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r3 = r0.getG()
            r2.<init>(r3)
            r1.add(r2)
            java.security.interfaces.DSAPrivateKey r5 = (java.security.interfaces.DSAPrivateKey) r5
            java.math.BigInteger r5 = r5.getX()
            java.math.BigInteger r2 = r0.getG()
            java.math.BigInteger r0 = r0.getP()
            java.math.BigInteger r0 = r2.modPow(r5, r0)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r0)
            r1.add(r2)
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r5)
            r1.add(r0)
            org.bouncycastle.asn1.DERSequence r5 = new org.bouncycastle.asn1.DERSequence
            r5.<init>(r1)
            byte[] r5 = r5.getEncoded()
            java.lang.String r0 = "DSA PRIVATE KEY"
            goto L131
        Lf6:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "Cannot identify private key"
            r5.<init>(r0)
            throw r5
        Lfe:
            boolean r0 = r5 instanceof java.security.PublicKey
            if (r0 == 0) goto L10b
            java.security.PublicKey r5 = (java.security.PublicKey) r5
            byte[] r5 = r5.getEncoded()
            java.lang.String r0 = "PUBLIC KEY"
            goto L131
        L10b:
            boolean r0 = r5 instanceof org.bouncycastle.x509.X509AttributeCertificate
            if (r0 == 0) goto L118
            org.bouncycastle.x509.X509V2AttributeCertificate r5 = (org.bouncycastle.x509.X509V2AttributeCertificate) r5
            byte[] r5 = r5.getEncoded()
            java.lang.String r0 = "ATTRIBUTE CERTIFICATE"
            goto L131
        L118:
            boolean r0 = r5 instanceof org.bouncycastle.jce.PKCS10CertificationRequest
            if (r0 == 0) goto L125
            org.bouncycastle.jce.PKCS10CertificationRequest r5 = (org.bouncycastle.jce.PKCS10CertificationRequest) r5
            byte[] r5 = r5.getEncoded()
            java.lang.String r0 = "CERTIFICATE REQUEST"
            goto L131
        L125:
            boolean r0 = r5 instanceof org.bouncycastle.asn1.cms.ContentInfo
            if (r0 == 0) goto L13b
            org.bouncycastle.asn1.cms.ContentInfo r5 = (org.bouncycastle.asn1.cms.ContentInfo) r5
            byte[] r5 = r5.getEncoded()
            java.lang.String r0 = "PKCS7"
        L131:
            r4.writeHeader(r0)
            r4.writeEncoded(r5)
            r4.writeFooter(r0)
            return
        L13b:
            java.io.IOException r5 = new java.io.IOException
            java.lang.String r0 = "unknown object passed - can't encode."
            r5.<init>(r0)
            throw r5
    }

    public void writeObject(java.lang.Object r12, java.lang.String r13, char[] r14, java.security.SecureRandom r15) throws java.io.IOException {
            r11 = this;
            boolean r0 = r12 instanceof java.security.KeyPair
            if (r0 == 0) goto Le
            java.security.KeyPair r12 = (java.security.KeyPair) r12
            java.security.PrivateKey r12 = r12.getPrivate()
            r11.writeObject(r12)
            return
        Le:
            boolean r0 = r12 instanceof java.security.interfaces.RSAPrivateCrtKey
            r1 = 0
            if (r0 == 0) goto L45
            r0 = r12
            java.security.interfaces.RSAPrivateCrtKey r0 = (java.security.interfaces.RSAPrivateCrtKey) r0
            org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r10 = new org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure
            java.math.BigInteger r2 = r0.getModulus()
            java.math.BigInteger r3 = r0.getPublicExponent()
            java.math.BigInteger r4 = r0.getPrivateExponent()
            java.math.BigInteger r5 = r0.getPrimeP()
            java.math.BigInteger r6 = r0.getPrimeQ()
            java.math.BigInteger r7 = r0.getPrimeExponentP()
            java.math.BigInteger r8 = r0.getPrimeExponentQ()
            java.math.BigInteger r9 = r0.getCrtCoefficient()
            r1 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            byte[] r1 = r10.getEncoded()
            java.lang.String r0 = "RSA PRIVATE KEY"
        L42:
            r4 = r1
            r1 = r0
            goto Laf
        L45:
            boolean r0 = r12 instanceof java.security.interfaces.DSAPrivateKey
            if (r0 == 0) goto Lae
            r0 = r12
            java.security.interfaces.DSAPrivateKey r0 = (java.security.interfaces.DSAPrivateKey) r0
            java.security.interfaces.DSAParams r1 = r0.getParams()
            org.bouncycastle.asn1.ASN1EncodableVector r2 = new org.bouncycastle.asn1.ASN1EncodableVector
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            r4 = 0
            r3.<init>(r4)
            r2.add(r3)
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r4 = r1.getP()
            r3.<init>(r4)
            r2.add(r3)
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r4 = r1.getQ()
            r3.<init>(r4)
            r2.add(r3)
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r4 = r1.getG()
            r3.<init>(r4)
            r2.add(r3)
            java.math.BigInteger r0 = r0.getX()
            java.math.BigInteger r3 = r1.getG()
            java.math.BigInteger r1 = r1.getP()
            java.math.BigInteger r1 = r3.modPow(r0, r1)
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            r3.<init>(r1)
            r2.add(r3)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r0)
            r2.add(r1)
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>(r2)
            byte[] r1 = r0.getEncoded()
            java.lang.String r0 = "DSA PRIVATE KEY"
            goto L42
        Lae:
            r4 = r1
        Laf:
            if (r1 == 0) goto L111
            if (r4 == 0) goto L111
            java.lang.String r12 = org.bouncycastle.util.Strings.toUpperCase(r13)
            java.lang.String r13 = "DESEDE"
            boolean r13 = r12.equals(r13)
            if (r13 == 0) goto Lc1
            java.lang.String r12 = "DES-EDE3-CBC"
        Lc1:
            java.lang.String r13 = "AES-"
            boolean r13 = r12.startsWith(r13)
            if (r13 == 0) goto Lcc
            r13 = 16
            goto Lce
        Lcc:
            r13 = 8
        Lce:
            byte[] r13 = new byte[r13]
            r15.nextBytes(r13)
            r2 = 1
            java.lang.String r3 = r11.provider
            r5 = r14
            r6 = r12
            r7 = r13
            byte[] r14 = org.bouncycastle.openssl.PEMUtilities.crypt(r2, r3, r4, r5, r6, r7)
            r11.writeHeader(r1)
            java.lang.String r15 = "Proc-Type: 4,ENCRYPTED"
            r11.write(r15)
            r11.newLine()
            java.lang.StringBuilder r15 = new java.lang.StringBuilder
            r15.<init>()
            java.lang.String r0 = "DEK-Info: "
            r15.append(r0)
            r15.append(r12)
            java.lang.String r12 = ","
            r15.append(r12)
            java.lang.String r12 = r15.toString()
            r11.write(r12)
            r11.writeHexEncoded(r13)
            r11.newLine()
            r11.newLine()
            r11.writeEncoded(r14)
            r11.writeFooter(r1)
            return
        L111:
            java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r15 = "Object type not supported: "
            r14.append(r15)
            java.lang.Class r12 = r12.getClass()
            java.lang.String r12 = r12.getName()
            r14.append(r12)
            java.lang.String r12 = r14.toString()
            r13.<init>(r12)
            throw r13
    }
}
