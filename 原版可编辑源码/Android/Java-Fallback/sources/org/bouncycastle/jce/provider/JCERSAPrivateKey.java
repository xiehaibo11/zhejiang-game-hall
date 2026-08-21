package org.bouncycastle.jce.provider;

public class JCERSAPrivateKey implements java.security.interfaces.RSAPrivateKey, org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier {
    private static java.math.BigInteger ZERO = null;
    static final long serialVersionUID = 5110188922551353628L;
    private org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl attrCarrier;
    protected java.math.BigInteger modulus;
    protected java.math.BigInteger privateExponent;

    static {
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.jce.provider.JCERSAPrivateKey.ZERO = r0
            return
    }

    protected JCERSAPrivateKey() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            return
    }

    JCERSAPrivateKey(java.security.interfaces.RSAPrivateKey r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r2 = r2.getPrivateExponent()
            r1.privateExponent = r2
            return
    }

    JCERSAPrivateKey(java.security.spec.RSAPrivateKeySpec r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r2 = r2.getPrivateExponent()
            r1.privateExponent = r2
            return
    }

    JCERSAPrivateKey(org.bouncycastle.crypto.params.RSAKeyParameters r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r0 = r2.getModulus()
            r1.modulus = r0
            java.math.BigInteger r2 = r2.getExponent()
            r1.privateExponent = r2
            return
    }

    private void readObject(java.io.ObjectInputStream r2) throws java.io.IOException, java.lang.ClassNotFoundException {
            r1 = this;
            java.lang.Object r0 = r2.readObject()
            java.math.BigInteger r0 = (java.math.BigInteger) r0
            r1.modulus = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            r0.readObject(r2)
            java.lang.Object r2 = r2.readObject()
            java.math.BigInteger r2 = (java.math.BigInteger) r2
            r1.privateExponent = r2
            return
    }

    private void writeObject(java.io.ObjectOutputStream r2) throws java.io.IOException {
            r1 = this;
            java.math.BigInteger r0 = r1.modulus
            r2.writeObject(r0)
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = r1.attrCarrier
            r0.writeObject(r2)
            java.math.BigInteger r0 = r1.privateExponent
            r2.writeObject(r0)
            return
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            boolean r0 = r5 instanceof java.security.interfaces.RSAPrivateKey
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r0 = 1
            if (r5 != r4) goto La
            return r0
        La:
            java.security.interfaces.RSAPrivateKey r5 = (java.security.interfaces.RSAPrivateKey) r5
            java.math.BigInteger r2 = r4.getModulus()
            java.math.BigInteger r3 = r5.getModulus()
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L29
            java.math.BigInteger r2 = r4.getPrivateExponent()
            java.math.BigInteger r5 = r5.getPrivateExponent()
            boolean r5 = r2.equals(r5)
            if (r5 == 0) goto L29
            r1 = 1
        L29:
            return r1
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "RSA"
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DEREncodable getBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = r1.attrCarrier
            org.bouncycastle.asn1.DEREncodable r2 = r0.getBagAttribute(r2)
            return r2
    }

    @Override
    public java.util.Enumeration getBagAttributeKeys() {
            r1 = this;
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = r1.attrCarrier
            java.util.Enumeration r0 = r0.getBagAttributeKeys()
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
            java.math.BigInteger r6 = org.bouncycastle.jce.provider.JCERSAPrivateKey.ZERO
            java.math.BigInteger r7 = r13.getPrivateExponent()
            java.math.BigInteger r12 = org.bouncycastle.jce.provider.JCERSAPrivateKey.ZERO
            r4 = r2
            r8 = r12
            r9 = r12
            r10 = r12
            r11 = r12
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
    public java.math.BigInteger getModulus() {
            r1 = this;
            java.math.BigInteger r0 = r1.modulus
            return r0
    }

    @Override
    public java.math.BigInteger getPrivateExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.privateExponent
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getModulus()
            int r0 = r0.hashCode()
            java.math.BigInteger r1 = r2.getPrivateExponent()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
    }

    @Override
    public void setBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.DEREncodable r3) {
            r1 = this;
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = r1.attrCarrier
            r0.setBagAttribute(r2, r3)
            return
    }
}
