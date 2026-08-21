package org.bouncycastle.jce.provider;

public class JCEDHPublicKey implements javax.crypto.interfaces.DHPublicKey {
    static final long serialVersionUID = -216691575254424324L;
    private javax.crypto.spec.DHParameterSpec dhSpec;
    private java.math.BigInteger y;

    JCEDHPublicKey(java.math.BigInteger r1, javax.crypto.spec.DHParameterSpec r2) {
            r0 = this;
            r0.<init>()
            r0.y = r1
            r0.dhSpec = r2
            return
    }

    JCEDHPublicKey(javax.crypto.interfaces.DHPublicKey r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getY()
            r1.y = r0
            javax.crypto.spec.DHParameterSpec r2 = r2.getParams()
            r1.dhSpec = r2
            return
    }

    JCEDHPublicKey(javax.crypto.spec.DHPublicKeySpec r3) {
            r2 = this;
            r2.<init>()
            java.math.BigInteger r0 = r3.getY()
            r2.y = r0
            javax.crypto.spec.DHParameterSpec r0 = new javax.crypto.spec.DHParameterSpec
            java.math.BigInteger r1 = r3.getP()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.dhSpec = r0
            return
    }

    JCEDHPublicKey(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.pkcs.DHParameter r0 = new org.bouncycastle.asn1.pkcs.DHParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r4 = r4.getPublicKey()     // Catch: java.io.IOException -> L4a
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4     // Catch: java.io.IOException -> L4a
            java.math.BigInteger r4 = r4.getValue()
            r3.y = r4
            java.math.BigInteger r4 = r0.getL()
            if (r4 == 0) goto L3a
            javax.crypto.spec.DHParameterSpec r4 = new javax.crypto.spec.DHParameterSpec
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r2 = r0.getG()
            java.math.BigInteger r0 = r0.getL()
            int r0 = r0.intValue()
            r4.<init>(r1, r2, r0)
            goto L47
        L3a:
            javax.crypto.spec.DHParameterSpec r4 = new javax.crypto.spec.DHParameterSpec
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r0 = r0.getG()
            r4.<init>(r1, r0)
        L47:
            r3.dhSpec = r4
            return
        L4a:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "invalid info structure in DH public key"
            r4.<init>(r0)
            throw r4
    }

    JCEDHPublicKey(org.bouncycastle.crypto.params.DHPublicKeyParameters r4) {
            r3 = this;
            r3.<init>()
            java.math.BigInteger r0 = r4.getY()
            r3.y = r0
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
            r3.y = r0
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
            java.math.BigInteger r0 = r1.getY()
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
    public byte[] getEncoded() {
            r7 = this;
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.dhpublicnumber
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
            java.math.BigInteger r3 = r7.y
            r2.<init>(r3)
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
    public javax.crypto.spec.DHParameterSpec getParams() {
            r1 = this;
            javax.crypto.spec.DHParameterSpec r0 = r1.dhSpec
            return r0
    }

    @Override
    public java.math.BigInteger getY() {
            r1 = this;
            java.math.BigInteger r0 = r1.y
            return r0
    }
}
