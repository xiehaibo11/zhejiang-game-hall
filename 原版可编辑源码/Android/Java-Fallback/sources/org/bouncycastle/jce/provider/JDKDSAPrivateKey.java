package org.bouncycastle.jce.provider;

public class JDKDSAPrivateKey implements java.security.interfaces.DSAPrivateKey, org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier {
    private static final long serialVersionUID = -4677259546958385734L;
    private org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl attrCarrier;
    java.security.interfaces.DSAParams dsaSpec;
    java.math.BigInteger x;

    protected JDKDSAPrivateKey() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            return
    }

    JDKDSAPrivateKey(java.security.interfaces.DSAPrivateKey r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r0 = r2.getX()
            r1.x = r0
            java.security.interfaces.DSAParams r2 = r2.getParams()
            r1.dsaSpec = r2
            return
    }

    JDKDSAPrivateKey(java.security.spec.DSAPrivateKeySpec r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r3.attrCarrier = r0
            java.math.BigInteger r0 = r4.getX()
            r3.x = r0
            java.security.spec.DSAParameterSpec r0 = new java.security.spec.DSAParameterSpec
            java.math.BigInteger r1 = r4.getP()
            java.math.BigInteger r2 = r4.getQ()
            java.math.BigInteger r4 = r4.getG()
            r0.<init>(r1, r2, r4)
            r3.dsaSpec = r0
            return
    }

    JDKDSAPrivateKey(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r3.attrCarrier = r0
            org.bouncycastle.asn1.x509.DSAParameter r0 = new org.bouncycastle.asn1.x509.DSAParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r4 = r4.getPrivateKey()
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4
            java.math.BigInteger r4 = r4.getValue()
            r3.x = r4
            java.security.spec.DSAParameterSpec r4 = new java.security.spec.DSAParameterSpec
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r2 = r0.getQ()
            java.math.BigInteger r0 = r0.getG()
            r4.<init>(r1, r2, r0)
            r3.dsaSpec = r4
            return
    }

    JDKDSAPrivateKey(org.bouncycastle.crypto.params.DSAPrivateKeyParameters r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r3.attrCarrier = r0
            java.math.BigInteger r0 = r4.getX()
            r3.x = r0
            java.security.spec.DSAParameterSpec r0 = new java.security.spec.DSAParameterSpec
            org.bouncycastle.crypto.params.DSAParameters r1 = r4.getParameters()
            java.math.BigInteger r1 = r1.getP()
            org.bouncycastle.crypto.params.DSAParameters r2 = r4.getParameters()
            java.math.BigInteger r2 = r2.getQ()
            org.bouncycastle.crypto.params.DSAParameters r4 = r4.getParameters()
            java.math.BigInteger r4 = r4.getG()
            r0.<init>(r1, r2, r4)
            r3.dsaSpec = r0
            return
    }

    private void readObject(java.io.ObjectInputStream r5) throws java.io.IOException, java.lang.ClassNotFoundException {
            r4 = this;
            java.lang.Object r0 = r5.readObject()
            java.math.BigInteger r0 = (java.math.BigInteger) r0
            r4.x = r0
            java.security.spec.DSAParameterSpec r0 = new java.security.spec.DSAParameterSpec
            java.lang.Object r1 = r5.readObject()
            java.math.BigInteger r1 = (java.math.BigInteger) r1
            java.lang.Object r2 = r5.readObject()
            java.math.BigInteger r2 = (java.math.BigInteger) r2
            java.lang.Object r3 = r5.readObject()
            java.math.BigInteger r3 = (java.math.BigInteger) r3
            r0.<init>(r1, r2, r3)
            r4.dsaSpec = r0
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r4.attrCarrier = r0
            r0.readObject(r5)
            return
    }

    private void writeObject(java.io.ObjectOutputStream r2) throws java.io.IOException {
            r1 = this;
            java.math.BigInteger r0 = r1.x
            r2.writeObject(r0)
            java.security.interfaces.DSAParams r0 = r1.dsaSpec
            java.math.BigInteger r0 = r0.getP()
            r2.writeObject(r0)
            java.security.interfaces.DSAParams r0 = r1.dsaSpec
            java.math.BigInteger r0 = r0.getQ()
            r2.writeObject(r0)
            java.security.interfaces.DSAParams r0 = r1.dsaSpec
            java.math.BigInteger r0 = r0.getG()
            r2.writeObject(r0)
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = r1.attrCarrier
            r0.writeObject(r2)
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof java.security.interfaces.DSAPrivateKey
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.security.interfaces.DSAPrivateKey r4 = (java.security.interfaces.DSAPrivateKey) r4
            java.math.BigInteger r0 = r3.getX()
            java.math.BigInteger r2 = r4.getX()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L59
            java.security.interfaces.DSAParams r0 = r3.getParams()
            java.math.BigInteger r0 = r0.getG()
            java.security.interfaces.DSAParams r2 = r4.getParams()
            java.math.BigInteger r2 = r2.getG()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L59
            java.security.interfaces.DSAParams r0 = r3.getParams()
            java.math.BigInteger r0 = r0.getP()
            java.security.interfaces.DSAParams r2 = r4.getParams()
            java.math.BigInteger r2 = r2.getP()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L59
            java.security.interfaces.DSAParams r0 = r3.getParams()
            java.math.BigInteger r0 = r0.getQ()
            java.security.interfaces.DSAParams r4 = r4.getParams()
            java.math.BigInteger r4 = r4.getQ()
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L59
            r1 = 1
        L59:
            return r1
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "DSA"
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
            r7 = this;
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa
            org.bouncycastle.asn1.x509.DSAParameter r3 = new org.bouncycastle.asn1.x509.DSAParameter
            java.security.interfaces.DSAParams r4 = r7.dsaSpec
            java.math.BigInteger r4 = r4.getP()
            java.security.interfaces.DSAParams r5 = r7.dsaSpec
            java.math.BigInteger r5 = r5.getQ()
            java.security.interfaces.DSAParams r6 = r7.dsaSpec
            java.math.BigInteger r6 = r6.getG()
            r3.<init>(r4, r5, r6)
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            r1.<init>(r2, r3)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r3 = r7.getX()
            r2.<init>(r3)
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
    public java.security.interfaces.DSAParams getParams() {
            r1 = this;
            java.security.interfaces.DSAParams r0 = r1.dsaSpec
            return r0
    }

    @Override
    public java.math.BigInteger getX() {
            r1 = this;
            java.math.BigInteger r0 = r1.x
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getX()
            int r0 = r0.hashCode()
            java.security.interfaces.DSAParams r1 = r2.getParams()
            java.math.BigInteger r1 = r1.getG()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            java.security.interfaces.DSAParams r1 = r2.getParams()
            java.math.BigInteger r1 = r1.getP()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            java.security.interfaces.DSAParams r1 = r2.getParams()
            java.math.BigInteger r1 = r1.getQ()
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
