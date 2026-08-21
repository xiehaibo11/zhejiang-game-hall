package org.bouncycastle.jce.provider;

public class JCERSAPublicKey implements java.security.interfaces.RSAPublicKey {
    static final long serialVersionUID = 2675817738516720772L;
    private java.math.BigInteger modulus;
    private java.math.BigInteger publicExponent;

    JCERSAPublicKey(java.security.interfaces.RSAPublicKey r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r2 = r2.getPublicExponent()
            r1.publicExponent = r2
            return
    }

    JCERSAPublicKey(java.security.spec.RSAPublicKeySpec r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r2 = r2.getPublicExponent()
            r1.publicExponent = r2
            return
    }

    JCERSAPublicKey(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.RSAPublicKeyStructure r0 = new org.bouncycastle.asn1.x509.RSAPublicKeyStructure     // Catch: java.io.IOException -> L1b
            org.bouncycastle.asn1.DERObject r2 = r2.getPublicKey()     // Catch: java.io.IOException -> L1b
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: java.io.IOException -> L1b
            r0.<init>(r2)     // Catch: java.io.IOException -> L1b
            java.math.BigInteger r2 = r0.getModulus()     // Catch: java.io.IOException -> L1b
            r1.modulus = r2     // Catch: java.io.IOException -> L1b
            java.math.BigInteger r2 = r0.getPublicExponent()     // Catch: java.io.IOException -> L1b
            r1.publicExponent = r2     // Catch: java.io.IOException -> L1b
            return
        L1b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "invalid info structure in RSA public key"
            r2.<init>(r0)
            throw r2
    }

    JCERSAPublicKey(org.bouncycastle.crypto.params.RSAKeyParameters r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r2 = r2.getExponent()
            r1.publicExponent = r2
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof java.security.interfaces.RSAPublicKey
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            java.security.interfaces.RSAPublicKey r5 = (java.security.interfaces.RSAPublicKey) r5
            java.math.BigInteger r1 = r4.getModulus()
            java.math.BigInteger r3 = r5.getModulus()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L29
            java.math.BigInteger r1 = r4.getPublicExponent()
            java.math.BigInteger r5 = r5.getPublicExponent()
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L29
            goto L2a
        L29:
            r0 = 0
        L2a:
            return r0
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "RSA"
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r5 = this;
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.rsaEncryption
            org.bouncycastle.asn1.DERNull r3 = new org.bouncycastle.asn1.DERNull
            r3.<init>()
            r1.<init>(r2, r3)
            org.bouncycastle.asn1.x509.RSAPublicKeyStructure r2 = new org.bouncycastle.asn1.x509.RSAPublicKeyStructure
            java.math.BigInteger r3 = r5.getModulus()
            java.math.BigInteger r4 = r5.getPublicExponent()
            r2.<init>(r3, r4)
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            r0.<init>(r1, r2)
            byte[] r0 = r0.getDEREncoded()
            return r0
    }

    @Override
    public java.lang.String getFormat() {
            r1 = this;
            java.lang.String r0 = "X.509"
            return r0
    }

    @Override
    public java.math.BigInteger getModulus() {
            r1 = this;
            java.math.BigInteger r0 = r1.modulus
            return r0
    }

    @Override
    public java.math.BigInteger getPublicExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.publicExponent
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getModulus()
            int r0 = r0.hashCode()
            java.math.BigInteger r1 = r2.getPublicExponent()
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
            java.lang.String r2 = "RSA Public Key"
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
            java.lang.String r0 = r0.toString()
            return r0
    }
}
