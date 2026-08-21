package org.bouncycastle.asn1.x9;

public class X9ECParameters extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.x9.X9ObjectIdentifiers {
    private static final java.math.BigInteger ONE = null;
    private org.bouncycastle.math.ec.ECCurve curve;
    private org.bouncycastle.asn1.x9.X9FieldID fieldID;
    private org.bouncycastle.math.ec.ECPoint g;
    private java.math.BigInteger h;
    private java.math.BigInteger n;
    private byte[] seed;

    static {
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.asn1.x9.X9ECParameters.ONE = r0
            return
    }

    public X9ECParameters(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.DERInteger
            if (r1 == 0) goto L7b
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            java.math.BigInteger r1 = org.bouncycastle.asn1.x9.X9ECParameters.ONE
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L7b
            org.bouncycastle.asn1.x9.X9Curve r0 = new org.bouncycastle.asn1.x9.X9Curve
            org.bouncycastle.asn1.x9.X9FieldID r1 = new org.bouncycastle.asn1.x9.X9FieldID
            r2 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            r1.<init>(r2)
            r2 = 2
            org.bouncycastle.asn1.DEREncodable r2 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            r0.<init>(r1, r2)
            org.bouncycastle.math.ec.ECCurve r1 = r0.getCurve()
            r4.curve = r1
            org.bouncycastle.asn1.x9.X9ECPoint r1 = new org.bouncycastle.asn1.x9.X9ECPoint
            org.bouncycastle.math.ec.ECCurve r2 = r4.curve
            r3 = 3
            org.bouncycastle.asn1.DEREncodable r3 = r5.getObjectAt(r3)
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            r1.<init>(r2, r3)
            org.bouncycastle.math.ec.ECPoint r1 = r1.getPoint()
            r4.g = r1
            r1 = 4
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r1 = (org.bouncycastle.asn1.DERInteger) r1
            java.math.BigInteger r1 = r1.getValue()
            r4.n = r1
            byte[] r0 = r0.getSeed()
            r4.seed = r0
            int r0 = r5.size()
            r1 = 6
            if (r0 != r1) goto L76
            r0 = 5
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r5 = (org.bouncycastle.asn1.DERInteger) r5
            java.math.BigInteger r5 = r5.getValue()
            goto L78
        L76:
            java.math.BigInteger r5 = org.bouncycastle.asn1.x9.X9ECParameters.ONE
        L78:
            r4.h = r5
            return
        L7b:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "bad version in X9ECParameters"
            r5.<init>(r0)
            throw r5
    }

    public X9ECParameters(org.bouncycastle.math.ec.ECCurve r7, org.bouncycastle.math.ec.ECPoint r8, java.math.BigInteger r9) {
            r6 = this;
            java.math.BigInteger r4 = org.bouncycastle.asn1.x9.X9ECParameters.ONE
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public X9ECParameters(org.bouncycastle.math.ec.ECCurve r7, org.bouncycastle.math.ec.ECPoint r8, java.math.BigInteger r9, java.math.BigInteger r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public X9ECParameters(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3, java.math.BigInteger r4, byte[] r5) {
            r0 = this;
            r0.<init>()
            r0.curve = r1
            r0.g = r2
            r0.n = r3
            r0.h = r4
            r0.seed = r5
            boolean r2 = r1 instanceof org.bouncycastle.math.ec.ECCurve.Fp
            if (r2 == 0) goto L1f
            org.bouncycastle.asn1.x9.X9FieldID r2 = new org.bouncycastle.asn1.x9.X9FieldID
            org.bouncycastle.math.ec.ECCurve$Fp r1 = (org.bouncycastle.math.ec.ECCurve.Fp) r1
            java.math.BigInteger r1 = r1.getQ()
            r2.<init>(r1)
        L1c:
            r0.fieldID = r2
            goto L3b
        L1f:
            boolean r2 = r1 instanceof org.bouncycastle.math.ec.ECCurve.F2m
            if (r2 == 0) goto L3b
            org.bouncycastle.math.ec.ECCurve$F2m r1 = (org.bouncycastle.math.ec.ECCurve.F2m) r1
            org.bouncycastle.asn1.x9.X9FieldID r2 = new org.bouncycastle.asn1.x9.X9FieldID
            int r3 = r1.getM()
            int r4 = r1.getK1()
            int r5 = r1.getK2()
            int r1 = r1.getK3()
            r2.<init>(r3, r4, r5, r1)
            goto L1c
        L3b:
            return
    }

    public org.bouncycastle.math.ec.ECCurve getCurve() {
            r1 = this;
            org.bouncycastle.math.ec.ECCurve r0 = r1.curve
            return r0
    }

    public org.bouncycastle.math.ec.ECPoint getG() {
            r1 = this;
            org.bouncycastle.math.ec.ECPoint r0 = r1.g
            return r0
    }

    public java.math.BigInteger getH() {
            r1 = this;
            java.math.BigInteger r0 = r1.h
            return r0
    }

    public java.math.BigInteger getN() {
            r1 = this;
            java.math.BigInteger r0 = r1.n
            return r0
    }

    public byte[] getSeed() {
            r1 = this;
            byte[] r0 = r1.seed
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r2 = 1
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.x9.X9FieldID r1 = r4.fieldID
            r0.add(r1)
            org.bouncycastle.asn1.x9.X9Curve r1 = new org.bouncycastle.asn1.x9.X9Curve
            org.bouncycastle.math.ec.ECCurve r2 = r4.curve
            byte[] r3 = r4.seed
            r1.<init>(r2, r3)
            r0.add(r1)
            org.bouncycastle.asn1.x9.X9ECPoint r1 = new org.bouncycastle.asn1.x9.X9ECPoint
            org.bouncycastle.math.ec.ECPoint r2 = r4.g
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r4.n
            r1.<init>(r2)
            r0.add(r1)
            java.math.BigInteger r1 = r4.h
            r2 = 1
            java.math.BigInteger r2 = java.math.BigInteger.valueOf(r2)
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L4b
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r4.h
            r1.<init>(r2)
            r0.add(r1)
        L4b:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
