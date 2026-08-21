package org.bouncycastle.asn1.pkcs;

public class RSAPrivateKeyStructure extends org.bouncycastle.asn1.ASN1Encodable {
    private java.math.BigInteger coefficient;
    private java.math.BigInteger exponent1;
    private java.math.BigInteger exponent2;
    private java.math.BigInteger modulus;
    private org.bouncycastle.asn1.ASN1Sequence otherPrimeInfos;
    private java.math.BigInteger prime1;
    private java.math.BigInteger prime2;
    private java.math.BigInteger privateExponent;
    private java.math.BigInteger publicExponent;
    private int version;

    public RSAPrivateKeyStructure(java.math.BigInteger r2, java.math.BigInteger r3, java.math.BigInteger r4, java.math.BigInteger r5, java.math.BigInteger r6, java.math.BigInteger r7, java.math.BigInteger r8, java.math.BigInteger r9) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.otherPrimeInfos = r0
            r0 = 0
            r1.version = r0
            r1.modulus = r2
            r1.publicExponent = r3
            r1.privateExponent = r4
            r1.prime1 = r5
            r1.prime2 = r6
            r1.exponent1 = r7
            r1.exponent2 = r8
            r1.coefficient = r9
            return
    }

    public RSAPrivateKeyStructure(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.otherPrimeInfos = r0
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            int r1 = r0.intValue()
            if (r1 == 0) goto L2a
            int r1 = r0.intValue()
            r2 = 1
            if (r1 != r2) goto L22
            goto L2a
        L22:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wrong version for RSA private key"
            r4.<init>(r0)
            throw r4
        L2a:
            int r0 = r0.intValue()
            r3.version = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            r3.modulus = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            r3.publicExponent = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            r3.privateExponent = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            r3.prime1 = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            r3.prime2 = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            r3.exponent1 = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            r3.exponent2 = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            r3.coefficient = r0
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L9e
            java.lang.Object r4 = r4.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            r3.otherPrimeInfos = r4
        L9e:
            return
    }

    public static org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r3 = (org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r0 = new org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.pkcs.RSAPrivateKeyStructure r0 = getInstance(r0)
            return r0
    }

    public java.math.BigInteger getCoefficient() {
            r1 = this;
            java.math.BigInteger r0 = r1.coefficient
            return r0
    }

    public java.math.BigInteger getExponent1() {
            r1 = this;
            java.math.BigInteger r0 = r1.exponent1
            return r0
    }

    public java.math.BigInteger getExponent2() {
            r1 = this;
            java.math.BigInteger r0 = r1.exponent2
            return r0
    }

    public java.math.BigInteger getModulus() {
            r1 = this;
            java.math.BigInteger r0 = r1.modulus
            return r0
    }

    public java.math.BigInteger getPrime1() {
            r1 = this;
            java.math.BigInteger r0 = r1.prime1
            return r0
    }

    public java.math.BigInteger getPrime2() {
            r1 = this;
            java.math.BigInteger r0 = r1.prime2
            return r0
    }

    public java.math.BigInteger getPrivateExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.privateExponent
            return r0
    }

    public java.math.BigInteger getPublicExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.publicExponent
            return r0
    }

    public int getVersion() {
            r1 = this;
            int r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            int r2 = r3.version
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getModulus()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getPublicExponent()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getPrivateExponent()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getPrime1()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getPrime2()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getExponent1()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getExponent2()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getCoefficient()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.otherPrimeInfos
            if (r1 == 0) goto L76
            r0.add(r1)
        L76:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
