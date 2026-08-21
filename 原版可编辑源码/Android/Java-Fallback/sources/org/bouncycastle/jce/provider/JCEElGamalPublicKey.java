package org.bouncycastle.jce.provider;

public class JCEElGamalPublicKey implements org.bouncycastle.jce.interfaces.ElGamalPublicKey, javax.crypto.interfaces.DHPublicKey {
    static final long serialVersionUID = 8712728417091216948L;
    private org.bouncycastle.jce.spec.ElGamalParameterSpec elSpec;
    private java.math.BigInteger y;

    JCEElGamalPublicKey(java.math.BigInteger r1, org.bouncycastle.jce.spec.ElGamalParameterSpec r2) {
            r0 = this;
            r0.<init>()
            r0.y = r1
            r0.elSpec = r2
            return
    }

    JCEElGamalPublicKey(javax.crypto.interfaces.DHPublicKey r3) {
            r2 = this;
            r2.<init>()
            java.math.BigInteger r0 = r3.getY()
            r2.y = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            javax.crypto.spec.DHParameterSpec r1 = r3.getParams()
            java.math.BigInteger r1 = r1.getP()
            javax.crypto.spec.DHParameterSpec r3 = r3.getParams()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.elSpec = r0
            return
    }

    JCEElGamalPublicKey(javax.crypto.spec.DHPublicKeySpec r3) {
            r2 = this;
            r2.<init>()
            java.math.BigInteger r0 = r3.getY()
            r2.y = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            java.math.BigInteger r1 = r3.getP()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.elSpec = r0
            return
    }

    JCEElGamalPublicKey(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.oiw.ElGamalParameter r0 = new org.bouncycastle.asn1.oiw.ElGamalParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r1 = r1.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r3 = r3.getPublicKey()     // Catch: java.io.IOException -> L2e
            org.bouncycastle.asn1.DERInteger r3 = (org.bouncycastle.asn1.DERInteger) r3     // Catch: java.io.IOException -> L2e
            java.math.BigInteger r3 = r3.getValue()
            r2.y = r3
            org.bouncycastle.jce.spec.ElGamalParameterSpec r3 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r0 = r0.getG()
            r3.<init>(r1, r0)
            r2.elSpec = r3
            return
        L2e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "invalid info structure in DSA public key"
            r3.<init>(r0)
            throw r3
    }

    JCEElGamalPublicKey(org.bouncycastle.crypto.params.ElGamalPublicKeyParameters r3) {
            r2 = this;
            r2.<init>()
            java.math.BigInteger r0 = r3.getY()
            r2.y = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r0 = new org.bouncycastle.jce.spec.ElGamalParameterSpec
            org.bouncycastle.crypto.params.ElGamalParameters r1 = r3.getParameters()
            java.math.BigInteger r1 = r1.getP()
            org.bouncycastle.crypto.params.ElGamalParameters r3 = r3.getParameters()
            java.math.BigInteger r3 = r3.getG()
            r0.<init>(r1, r3)
            r2.elSpec = r0
            return
    }

    JCEElGamalPublicKey(org.bouncycastle.jce.interfaces.ElGamalPublicKey r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getY()
            r1.y = r0
            org.bouncycastle.jce.spec.ElGamalParameterSpec r2 = r2.getParameters()
            r1.elSpec = r2
            return
    }

    JCEElGamalPublicKey(org.bouncycastle.jce.spec.ElGamalPublicKeySpec r3) {
            r2 = this;
            r2.<init>()
            java.math.BigInteger r0 = r3.getY()
            r2.y = r0
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
            r2.y = r0
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
            java.math.BigInteger r0 = r1.getY()
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
    public byte[] getEncoded() {
            r6 = this;
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
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
            java.math.BigInteger r3 = r6.y
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
    public java.math.BigInteger getY() {
            r1 = this;
            java.math.BigInteger r0 = r1.y
            return r0
    }
}
