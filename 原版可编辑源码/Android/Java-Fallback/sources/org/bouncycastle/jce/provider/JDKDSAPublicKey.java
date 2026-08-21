package org.bouncycastle.jce.provider;

public class JDKDSAPublicKey implements java.security.interfaces.DSAPublicKey {
    private static final long serialVersionUID = 1752452449903495175L;
    private java.security.interfaces.DSAParams dsaSpec;
    private java.math.BigInteger y;

    JDKDSAPublicKey(java.math.BigInteger r1, java.security.spec.DSAParameterSpec r2) {
            r0 = this;
            r0.<init>()
            r0.y = r1
            r0.dsaSpec = r2
            return
    }

    JDKDSAPublicKey(java.security.interfaces.DSAPublicKey r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.getY()
            r1.y = r0
            java.security.interfaces.DSAParams r2 = r2.getParams()
            r1.dsaSpec = r2
            return
    }

    JDKDSAPublicKey(java.security.spec.DSAPublicKeySpec r4) {
            r3 = this;
            r3.<init>()
            java.math.BigInteger r0 = r4.getY()
            r3.y = r0
            java.security.spec.DSAParameterSpec r0 = new java.security.spec.DSAParameterSpec
            java.math.BigInteger r1 = r4.getP()
            java.math.BigInteger r2 = r4.getQ()
            java.math.BigInteger r4 = r4.getG()
            r0.<init>(r1, r2, r4)
            r3.dsaSpec = r0
            return
    }

    JDKDSAPublicKey(org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERObject r0 = r4.getPublicKey()     // Catch: java.io.IOException -> L40
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0     // Catch: java.io.IOException -> L40
            java.math.BigInteger r0 = r0.getValue()
            r3.y = r0
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r4.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r0 = r0.getParameters()
            boolean r0 = r3.isNotNull(r0)
            if (r0 == 0) goto L3f
            org.bouncycastle.asn1.x509.DSAParameter r0 = new org.bouncycastle.asn1.x509.DSAParameter
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = r4.getAlgorithmId()
            org.bouncycastle.asn1.DEREncodable r4 = r4.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            r0.<init>(r4)
            java.security.spec.DSAParameterSpec r4 = new java.security.spec.DSAParameterSpec
            java.math.BigInteger r1 = r0.getP()
            java.math.BigInteger r2 = r0.getQ()
            java.math.BigInteger r0 = r0.getG()
            r4.<init>(r1, r2, r0)
            r3.dsaSpec = r4
        L3f:
            return
        L40:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "invalid info structure in DSA public key"
            r4.<init>(r0)
            throw r4
    }

    JDKDSAPublicKey(org.bouncycastle.crypto.params.DSAPublicKeyParameters r4) {
            r3 = this;
            r3.<init>()
            java.math.BigInteger r0 = r4.getY()
            r3.y = r0
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

    private boolean isNotNull(org.bouncycastle.asn1.DEREncodable r2) {
            r1 = this;
            if (r2 == 0) goto Lc
            org.bouncycastle.asn1.DERNull r0 = org.bouncycastle.asn1.DERNull.INSTANCE
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto Lc
            r2 = 1
            goto Ld
        Lc:
            r2 = 0
        Ld:
            return r2
    }

    private void readObject(java.io.ObjectInputStream r4) throws java.io.IOException, java.lang.ClassNotFoundException {
            r3 = this;
            java.lang.Object r0 = r4.readObject()
            java.math.BigInteger r0 = (java.math.BigInteger) r0
            r3.y = r0
            java.security.spec.DSAParameterSpec r0 = new java.security.spec.DSAParameterSpec
            java.lang.Object r1 = r4.readObject()
            java.math.BigInteger r1 = (java.math.BigInteger) r1
            java.lang.Object r2 = r4.readObject()
            java.math.BigInteger r2 = (java.math.BigInteger) r2
            java.lang.Object r4 = r4.readObject()
            java.math.BigInteger r4 = (java.math.BigInteger) r4
            r0.<init>(r1, r2, r4)
            r3.dsaSpec = r0
            return
    }

    private void writeObject(java.io.ObjectOutputStream r2) throws java.io.IOException {
            r1 = this;
            java.math.BigInteger r0 = r1.y
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
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof java.security.interfaces.DSAPublicKey
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.security.interfaces.DSAPublicKey r4 = (java.security.interfaces.DSAPublicKey) r4
            java.math.BigInteger r0 = r3.getY()
            java.math.BigInteger r2 = r4.getY()
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
    public byte[] getEncoded() {
            r7 = this;
            java.security.interfaces.DSAParams r0 = r7.dsaSpec
            if (r0 != 0) goto L1c
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9ObjectIdentifiers.id_dsa
            r1.<init>(r2)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r3 = r7.y
            r2.<init>(r3)
            r0.<init>(r1, r2)
        L17:
            byte[] r0 = r0.getDEREncoded()
            return r0
        L1c:
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
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
            java.math.BigInteger r3 = r7.y
            r2.<init>(r3)
            r0.<init>(r1, r2)
            goto L17
    }

    @Override
    public java.lang.String getFormat() {
            r1 = this;
            java.lang.String r0 = "X.509"
            return r0
    }

    @Override
    public java.security.interfaces.DSAParams getParams() {
            r1 = this;
            java.security.interfaces.DSAParams r0 = r1.dsaSpec
            return r0
    }

    @Override
    public java.math.BigInteger getY() {
            r1 = this;
            java.math.BigInteger r0 = r1.y
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getY()
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

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.lang.String r1 = "line.separator"
            java.lang.String r1 = java.lang.System.getProperty(r1)
            java.lang.String r2 = "DSA Public Key"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "            y: "
            r0.append(r2)
            java.math.BigInteger r2 = r4.getY()
            r3 = 16
            java.lang.String r2 = r2.toString(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
