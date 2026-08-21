package org.bouncycastle.jce.provider;

public class JCEDHPrivateKey implements javax.crypto.interfaces.DHPrivateKey, org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier {
    static final long serialVersionUID = 311058815616901812L;
    private org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier attrCarrier;
    javax.crypto.spec.DHParameterSpec dhSpec;
    java.math.BigInteger x;

    protected JCEDHPrivateKey() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            return
    }

    JCEDHPrivateKey(javax.crypto.interfaces.DHPrivateKey r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r0 = r2.getX()
            r1.x = r0
            javax.crypto.spec.DHParameterSpec r2 = r2.getParams()
            r1.dhSpec = r2
            return
    }

    JCEDHPrivateKey(javax.crypto.spec.DHPrivateKeySpec r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r2.attrCarrier = r0
            java.math.BigInteger r0 = r3.getX()
            r2.x = r0
            javax.crypto.spec.DHParameterSpec r0 = new javax.crypto.spec.DHParameterSpec
            java.math.BigInteger r1 = r3.getP()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.dhSpec = r0
            return
    }

    JCEDHPrivateKey(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r3.attrCarrier = r0
            org.bouncycastle.asn1.pkcs.DHParameter r0 = new org.bouncycastle.asn1.pkcs.DHParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r4 = r4.getPrivateKey()
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4
            java.math.BigInteger r4 = r4.getValue()
            r3.x = r4
            java.math.BigInteger r4 = r0.getL()
            if (r4 == 0) goto L41
            javax.crypto.spec.DHParameterSpec r4 = new javax.crypto.spec.DHParameterSpec
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r2 = r0.getG()
            java.math.BigInteger r0 = r0.getL()
            int r0 = r0.intValue()
            r4.<init>(r1, r2, r0)
            goto L4e
        L41:
            javax.crypto.spec.DHParameterSpec r4 = new javax.crypto.spec.DHParameterSpec
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r0 = r0.getG()
            r4.<init>(r1, r0)
        L4e:
            r3.dhSpec = r4
            return
    }

    JCEDHPrivateKey(org.bouncycastle.crypto.params.DHPrivateKeyParameters r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r3.attrCarrier = r0
            java.math.BigInteger r0 = r4.getX()
            r3.x = r0
            javax.crypto.spec.DHParameterSpec r0 = new javax.crypto.spec.DHParameterSpec
            org.bouncycastle.crypto.params.DHParameters r1 = r4.getParameters()
            java.math.BigInteger r1 = r1.getP()
            org.bouncycastle.crypto.params.DHParameters r2 = r4.getParameters()
            java.math.BigInteger r2 = r2.getG()
            org.bouncycastle.crypto.params.DHParameters r4 = r4.getParameters()
            int r4 = r4.getL()
            r0.<init>(r1, r2, r4)
            r3.dhSpec = r0
            return
    }

    private void readObject(java.io.ObjectInputStream r4) throws java.io.IOException, java.lang.ClassNotFoundException {
            r3 = this;
            java.lang.Object r0 = r4.readObject()
            java.math.BigInteger r0 = (java.math.BigInteger) r0
            r3.x = r0
            javax.crypto.spec.DHParameterSpec r0 = new javax.crypto.spec.DHParameterSpec
            java.lang.Object r1 = r4.readObject()
            java.math.BigInteger r1 = (java.math.BigInteger) r1
            java.lang.Object r2 = r4.readObject()
            java.math.BigInteger r2 = (java.math.BigInteger) r2
            int r4 = r4.readInt()
            r0.<init>(r1, r2, r4)
            r3.dhSpec = r0
            return
    }

    private void writeObject(java.io.ObjectOutputStream r2) throws java.io.IOException {
            r1 = this;
            java.math.BigInteger r0 = r1.getX()
            r2.writeObject(r0)
            javax.crypto.spec.DHParameterSpec r0 = r1.dhSpec
            java.math.BigInteger r0 = r0.getP()
            r2.writeObject(r0)
            javax.crypto.spec.DHParameterSpec r0 = r1.dhSpec
            java.math.BigInteger r0 = r0.getG()
            r2.writeObject(r0)
            javax.crypto.spec.DHParameterSpec r0 = r1.dhSpec
            int r0 = r0.getL()
            r2.writeInt(r0)
            return
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "DH"
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DEREncodable getBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r0 = r1.attrCarrier
            org.bouncycastle.asn1.DEREncodable r2 = r0.getBagAttribute(r2)
            return r2
    }

    @Override
    public java.util.Enumeration getBagAttributeKeys() {
            r1 = this;
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r0 = r1.attrCarrier
            java.util.Enumeration r0 = r0.getBagAttributeKeys()
            return r0
    }

    @Override
    public byte[] getEncoded() {
            r7 = this;
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers.dhKeyAgreement
            org.bouncycastle.asn1.pkcs.DHParameter r3 = new org.bouncycastle.asn1.pkcs.DHParameter
            javax.crypto.spec.DHParameterSpec r4 = r7.dhSpec
            java.math.BigInteger r4 = r4.getP()
            javax.crypto.spec.DHParameterSpec r5 = r7.dhSpec
            java.math.BigInteger r5 = r5.getG()
            javax.crypto.spec.DHParameterSpec r6 = r7.dhSpec
            int r6 = r6.getL()
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
    public javax.crypto.spec.DHParameterSpec getParams() {
            r1 = this;
            javax.crypto.spec.DHParameterSpec r0 = r1.dhSpec
            return r0
    }

    @Override
    public java.math.BigInteger getX() {
            r1 = this;
            java.math.BigInteger r0 = r1.x
            return r0
    }

    @Override
    public void setBagAttribute(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.DEREncodable r3) {
            r1 = this;
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r0 = r1.attrCarrier
            r0.setBagAttribute(r2, r3)
            return
    }
}
