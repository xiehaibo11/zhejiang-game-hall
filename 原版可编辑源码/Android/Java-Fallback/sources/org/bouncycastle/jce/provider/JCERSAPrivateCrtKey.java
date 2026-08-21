package org.bouncycastle.jce.provider;

public class JCERSAPrivateCrtKey extends org.bouncycastle.jce.provider.JCERSAPrivateKey implements java.security.interfaces.RSAPrivateCrtKey {
    static final long serialVersionUID = 7834723820638524718L;
    private java.math.BigInteger crtCoefficient;
    private java.math.BigInteger primeExponentP;
    private java.math.BigInteger primeExponentQ;
    private java.math.BigInteger primeP;
    private java.math.BigInteger primeQ;
    private java.math.BigInteger publicExponent;

    JCERSAPrivateCrtKey(java.security.interfaces.RSAPrivateCrtKey r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r0 = r2.getPublicExponent()
            r1.publicExponent = r0
            java.math.BigInteger r0 = r2.getPrivateExponent()
            r1.privateExponent = r0
            java.math.BigInteger r0 = r2.getPrimeP()
            r1.primeP = r0
            java.math.BigInteger r0 = r2.getPrimeQ()
            r1.primeQ = r0
            java.math.BigInteger r0 = r2.getPrimeExponentP()
            r1.primeExponentP = r0
            java.math.BigInteger r0 = r2.getPrimeExponentQ()
            r1.primeExponentQ = r0
            java.math.BigInteger r2 = r2.getCrtCoefficient()
            r1.crtCoefficient = r2
            return
    }

    JCERSAPrivateCrtKey(java.security.spec.RSAPrivateCrtKeySpec r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r0 = r2.getPublicExponent()
            r1.publicExponent = r0
            java.math.BigInteger r0 = r2.getPrivateExponent()
            r1.privateExponent = r0
            java.math.BigInteger r0 = r2.getPrimeP()
            r1.primeP = r0
            java.math.BigInteger r0 = r2.getPrimeQ()
            r1.primeQ = r0
            java.math.BigInteger r0 = r2.getPrimeExponentP()
            r1.primeExponentP = r0
            java.math.BigInteger r0 = r2.getPrimeExponentQ()
            r1.primeExponentQ = r0
            java.math.BigInteger r2 = r2.getCrtCoefficient()
            r1.crtCoefficient = r2
            return
    }

    JCERSAPrivateCrtKey(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r2) {
            r1 = this;
            org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r0 = new org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure
            org.bouncycastle.asn1.DERObject r2 = r2.getPrivateKey()
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    JCERSAPrivateCrtKey(org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r0 = r2.getPublicExponent()
            r1.publicExponent = r0
            java.math.BigInteger r0 = r2.getPrivateExponent()
            r1.privateExponent = r0
            java.math.BigInteger r0 = r2.getPrime1()
            r1.primeP = r0
            java.math.BigInteger r0 = r2.getPrime2()
            r1.primeQ = r0
            java.math.BigInteger r0 = r2.getExponent1()
            r1.primeExponentP = r0
            java.math.BigInteger r0 = r2.getExponent2()
            r1.primeExponentQ = r0
            java.math.BigInteger r2 = r2.getCoefficient()
            r1.crtCoefficient = r2
            return
    }

    JCERSAPrivateCrtKey(org.bouncycastle.crypto.params.RSAPrivateCrtKeyParameters r2) {
            r1 = this;
            r1.<init>(r2)
            java.math.BigInteger r0 = r2.getPublicExponent()
            r1.publicExponent = r0
            java.math.BigInteger r0 = r2.getP()
            r1.primeP = r0
            java.math.BigInteger r0 = r2.getQ()
            r1.primeQ = r0
            java.math.BigInteger r0 = r2.getDP()
            r1.primeExponentP = r0
            java.math.BigInteger r0 = r2.getDQ()
            r1.primeExponentQ = r0
            java.math.BigInteger r2 = r2.getQInv()
            r1.crtCoefficient = r2
            return
    }

    @Override
    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof java.security.interfaces.RSAPrivateCrtKey
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            java.security.interfaces.RSAPrivateCrtKey r5 = (java.security.interfaces.RSAPrivateCrtKey) r5
            java.math.BigInteger r1 = r4.getModulus()
            java.math.BigInteger r3 = r5.getModulus()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7d
            java.math.BigInteger r1 = r4.getPublicExponent()
            java.math.BigInteger r3 = r5.getPublicExponent()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7d
            java.math.BigInteger r1 = r4.getPrivateExponent()
            java.math.BigInteger r3 = r5.getPrivateExponent()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7d
            java.math.BigInteger r1 = r4.getPrimeP()
            java.math.BigInteger r3 = r5.getPrimeP()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7d
            java.math.BigInteger r1 = r4.getPrimeQ()
            java.math.BigInteger r3 = r5.getPrimeQ()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7d
            java.math.BigInteger r1 = r4.getPrimeExponentP()
            java.math.BigInteger r3 = r5.getPrimeExponentP()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7d
            java.math.BigInteger r1 = r4.getPrimeExponentQ()
            java.math.BigInteger r3 = r5.getPrimeExponentQ()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L7d
            java.math.BigInteger r1 = r4.getCrtCoefficient()
            java.math.BigInteger r5 = r5.getCrtCoefficient()
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L7d
            goto L7e
        L7d:
            r0 = 0
        L7e:
            return r0
    }

    @Override
    public java.math.BigInteger getCrtCoefficient() {
            r1 = this;
            java.math.BigInteger r0 = r1.crtCoefficient
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r13 = this;
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.rsaEncryption
            org.bouncycastle.asn1.DERNull r3 = new org.bouncycastle.asn1.DERNull
            r3.<init>()
            r1.<init>(r2, r3)
            org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r2 = new org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure
            java.math.BigInteger r5 = r13.getModulus()
            java.math.BigInteger r6 = r13.getPublicExponent()
            java.math.BigInteger r7 = r13.getPrivateExponent()
            java.math.BigInteger r8 = r13.getPrimeP()
            java.math.BigInteger r9 = r13.getPrimeQ()
            java.math.BigInteger r10 = r13.getPrimeExponentP()
            java.math.BigInteger r11 = r13.getPrimeExponentQ()
            java.math.BigInteger r12 = r13.getCrtCoefficient()
            r4 = r2
            r4.<init>(r5, r6, r7, r8, r9, r10, r11, r12)
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            r0.<init>(r1, r2)
            byte[] r0 = r0.getDEREncoded()
            return r0
    }

    @Override
    public java.lang.String getFormat() {
            r1 = this;
            java.lang.String r0 = "PKCS#8"
            return r0
    }

    @Override
    public java.math.BigInteger getPrimeExponentP() {
            r1 = this;
            java.math.BigInteger r0 = r1.primeExponentP
            return r0
    }

    @Override
    public java.math.BigInteger getPrimeExponentQ() {
            r1 = this;
            java.math.BigInteger r0 = r1.primeExponentQ
            return r0
    }

    @Override
    public java.math.BigInteger getPrimeP() {
            r1 = this;
            java.math.BigInteger r0 = r1.primeP
            return r0
    }

    @Override
    public java.math.BigInteger getPrimeQ() {
            r1 = this;
            java.math.BigInteger r0 = r1.primeQ
            return r0
    }

    @Override
    public java.math.BigInteger getPublicExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.publicExponent
            return r0
    }

    @Override
    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getModulus()
            int r0 = r0.hashCode()
            java.math.BigInteger r1 = r2.getPublicExponent()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            java.math.BigInteger r1 = r2.getPrivateExponent()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "line.separator"
            java.lang.String r1 = java.lang.System.getProperty(r1)
            java.lang.String r2 = "RSA Private CRT Key"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "            modulus: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getModulus()
            r3 = 16
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "    public exponent: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getPublicExponent()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "   private exponent: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getPrivateExponent()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "             primeP: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getPrimeP()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "             primeQ: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getPrimeQ()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "     primeExponentP: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getPrimeExponentP()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "     primeExponentQ: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getPrimeExponentQ()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "     crtCoefficient: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getCrtCoefficient()
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
