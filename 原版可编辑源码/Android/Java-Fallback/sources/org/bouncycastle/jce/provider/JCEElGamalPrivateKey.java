package org.bouncycastle.jce.provider;

public class JCEElGamalPrivateKey implements org.bouncycastle.jce.interfaces.ElGamalPrivateKey, javax.crypto.interfaces.DHPrivateKey, org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier {
    static final long serialVersionUID = 4819350091141529678L;
    private org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl attrCarrier;
    org.bouncycastle.jce.spec.ElGamalParameterSpec elSpec;
    java.math.BigInteger x;

    protected JCEElGamalPrivateKey() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            return
    }

    JCEElGamalPrivateKey(javax.crypto.interfaces.DHPrivateKey r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r2.attrCarrier = r0
            java.math.BigInteger r0 = r3.getX()
            r2.x = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            javax.crypto.spec.DHParameterSpec r1 = r3.getParams()
            java.math.BigInteger r1 = r1.getP()
            javax.crypto.spec.DHParameterSpec r3 = r3.getParams()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.elSpec = r0
            return
    }

    JCEElGamalPrivateKey(javax.crypto.spec.DHPrivateKeySpec r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r2.attrCarrier = r0
            java.math.BigInteger r0 = r3.getX()
            r2.x = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            java.math.BigInteger r1 = r3.getP()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.elSpec = r0
            return
    }

    JCEElGamalPrivateKey(org.bouncycastle.asn1.pkcs.PrivateKeyInfo r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r2.attrCarrier = r0
            org.bouncycastle.asn1.oiw.ElGamalParameter r0 = new org.bouncycastle.asn1.oiw.ElGamalParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r3 = r3.getPrivateKey()
            org.bouncycastle.asn1.DERInteger r3 = (org.bouncycastle.asn1.DERInteger) r3
            java.math.BigInteger r3 = r3.getValue()
            r2.x = r3
            org.bouncycastle.jce.spec.ElGamalParameterSpec r3 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r0 = r0.getG()
            r3.<init>(r1, r0)
            r2.elSpec = r3
            return
    }

    JCEElGamalPrivateKey(org.bouncycastle.crypto.params.ElGamalPrivateKeyParameters r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r2.attrCarrier = r0
            java.math.BigInteger r0 = r3.getX()
            r2.x = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            org.bouncycastle.crypto.params.ElGamalParameters r1 = r3.getParameters()
            java.math.BigInteger r1 = r1.getP()
            org.bouncycastle.crypto.params.ElGamalParameters r3 = r3.getParameters()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.elSpec = r0
            return
    }

    JCEElGamalPrivateKey(org.bouncycastle.jce.interfaces.ElGamalPrivateKey r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r1.attrCarrier = r0
            java.math.BigInteger r0 = r2.getX()
            r1.x = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r2 = r2.getParameters()
            r1.elSpec = r2
            return
    }

    JCEElGamalPrivateKey(org.bouncycastle.jce.spec.ElGamalPrivateKeySpec r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = new org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl
            r0.<init>()
            r2.attrCarrier = r0
            java.math.BigInteger r0 = r3.getX()
            r2.x = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            org.bouncycastle.jce.spec.ElGamalParameterSpec r1 = r3.getParams()
            java.math.BigInteger r1 = r1.getP()
            org.bouncycastle.jce.spec.ElGamalParameterSpec r3 = r3.getParams()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.elSpec = r0
            return
    }

    private void readObject(java.io.ObjectInputStream r3) throws java.io.IOException, java.lang.ClassNotFoundException {
            r2 = this;
            java.lang.Object r0 = r3.readObject()
            java.math.BigInteger r0 = (java.math.BigInteger) r0
            r2.x = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            java.lang.Object r1 = r3.readObject()
            java.math.BigInteger r1 = (java.math.BigInteger) r1
            java.lang.Object r3 = r3.readObject()
            java.math.BigInteger r3 = (java.math.BigInteger) r3
            r0.<init>(r1, r3)
            r2.elSpec = r0
            return
    }

    private void writeObject(java.io.ObjectOutputStream r2) throws java.io.IOException {
            r1 = this;
            java.math.BigInteger r0 = r1.getX()
            r2.writeObject(r0)
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = r1.elSpec
            java.math.BigInteger r0 = r0.getP()
            r2.writeObject(r0)
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = r1.elSpec
            java.math.BigInteger r0 = r0.getG()
            r2.writeObject(r0)
            return
    }

    @Override
    public java.lang.String getAlgorithm() {
            r1 = this;
            java.lang.String r0 = "ElGamal"
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
            r6 = this;
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.oiw.OIWObjectIdentifiers.elGamalAlgorithm
            org.bouncycastle.asn1.oiw.ElGamalParameter r3 = new org.bouncycastle.asn1.oiw.ElGamalParameter
            org.bouncycastle.jce.spec.ElGamalParameterSpec r4 = r6.elSpec
            java.math.BigInteger r4 = r4.getP()
            org.bouncycastle.jce.spec.ElGamalParameterSpec r5 = r6.elSpec
            java.math.BigInteger r5 = r5.getG()
            r3.<init>(r4, r5)
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            r1.<init>(r2, r3)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r3 = r6.getX()
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
    public org.bouncycastle.jce.spec.ElGamalParameterSpec getParameters() {
            r1 = this;
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = r1.elSpec
            return r0
    }

    @Override
    public javax.crypto.spec.DHParameterSpec getParams() {
            r3 = this;
            javax.crypto.spec.DHParameterSpec r0 = new javax.crypto.spec.DHParameterSpec
            org.bouncycastle.jce.spec.ElGamalParameterSpec r1 = r3.elSpec
            java.math.BigInteger r1 = r1.getP()
            org.bouncycastle.jce.spec.ElGamalParameterSpec r2 = r3.elSpec
            java.math.BigInteger r2 = r2.getG()
            r0.<init>(r1, r2)
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
            org.bouncycastle.jce.provider.PKCS12BagAttributeCarrierImpl r0 = r1.attrCarrier
            r0.setBagAttribute(r2, r3)
            return
    }
}
