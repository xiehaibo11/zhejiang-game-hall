package org.bouncycastle.asn1.cryptopro;

public class GOST3410ParamSetParameters extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger a;
    int keySize;
    org.bouncycastle.asn1.DERInteger p;
    org.bouncycastle.asn1.DERInteger q;

    public GOST3410ParamSetParameters(int r1, java.math.BigInteger r2, java.math.BigInteger r3, java.math.BigInteger r4) {
            r0 = this;
            r0.<init>()
            r0.keySize = r1
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r2)
            r0.p = r1
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            r0.q = r1
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r4)
            r0.a = r1
            return
    }

    public GOST3410ParamSetParameters(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            r1.keySize = r0
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1.p = r0
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1.q = r0
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            r1.a = r2
            return
    }

    public static org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters r0 = new org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid GOST3410Parameter: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters r3 = (org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters) r3
            return r3
    }

    public static org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cryptopro.GOST3410ParamSetParameters r0 = getInstance(r0)
            return r0
    }

    public java.math.BigInteger getA() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.a
            java.math.BigInteger r0 = r0.getPositiveValue()
            return r0
    }

    public int getKeySize() {
            r1 = this;
            int r0 = r1.keySize
            return r0
    }

    public int getLKeySize() {
            r1 = this;
            int r0 = r1.keySize
            return r0
    }

    public java.math.BigInteger getP() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.p
            java.math.BigInteger r0 = r0.getPositiveValue()
            return r0
    }

    public java.math.BigInteger getQ() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.q
            java.math.BigInteger r0 = r0.getPositiveValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            int r2 = r3.keySize
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r3.p
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r3.q
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r3.a
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
