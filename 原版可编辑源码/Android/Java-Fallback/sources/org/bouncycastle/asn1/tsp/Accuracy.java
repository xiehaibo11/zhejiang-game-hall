package org.bouncycastle.asn1.tsp;

public class Accuracy extends org.bouncycastle.asn1.ASN1Encodable {
    protected static final int MAX_MICROS = 999;
    protected static final int MAX_MILLIS = 999;
    protected static final int MIN_MICROS = 1;
    protected static final int MIN_MILLIS = 1;
    org.bouncycastle.asn1.DERInteger micros;
    org.bouncycastle.asn1.DERInteger millis;
    org.bouncycastle.asn1.DERInteger seconds;

    protected Accuracy() {
            r0 = this;
            r0.<init>()
            return
    }

    public Accuracy(org.bouncycastle.asn1.ASN1Sequence r7) {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.seconds = r0
            r6.millis = r0
            r6.micros = r0
            r0 = 0
            r1 = 0
        Lc:
            int r2 = r7.size()
            if (r1 >= r2) goto L92
            org.bouncycastle.asn1.DEREncodable r2 = r7.getObjectAt(r1)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.DERInteger
            if (r2 == 0) goto L23
            org.bouncycastle.asn1.DEREncodable r2 = r7.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            r6.seconds = r2
            goto L8e
        L23:
            org.bouncycastle.asn1.DEREncodable r2 = r7.getObjectAt(r1)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.DERTaggedObject
            if (r2 == 0) goto L8e
            org.bouncycastle.asn1.DEREncodable r2 = r7.getObjectAt(r1)
            org.bouncycastle.asn1.DERTaggedObject r2 = (org.bouncycastle.asn1.DERTaggedObject) r2
            int r3 = r2.getTagNo()
            r4 = 999(0x3e7, float:1.4E-42)
            r5 = 1
            if (r3 == 0) goto L69
            if (r3 != r5) goto L61
            org.bouncycastle.asn1.DERInteger r2 = org.bouncycastle.asn1.DERInteger.getInstance(r2, r0)
            r6.micros = r2
            java.math.BigInteger r2 = r2.getValue()
            int r2 = r2.intValue()
            if (r2 < r5) goto L59
            org.bouncycastle.asn1.DERInteger r2 = r6.micros
            java.math.BigInteger r2 = r2.getValue()
            int r2 = r2.intValue()
            if (r2 > r4) goto L59
            goto L8e
        L59:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid micros field : not in (1..999)."
            r7.<init>(r0)
            throw r7
        L61:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalig tag number"
            r7.<init>(r0)
            throw r7
        L69:
            org.bouncycastle.asn1.DERInteger r2 = org.bouncycastle.asn1.DERInteger.getInstance(r2, r0)
            r6.millis = r2
            java.math.BigInteger r2 = r2.getValue()
            int r2 = r2.intValue()
            if (r2 < r5) goto L86
            org.bouncycastle.asn1.DERInteger r2 = r6.millis
            java.math.BigInteger r2 = r2.getValue()
            int r2 = r2.intValue()
            if (r2 > r4) goto L86
            goto L8e
        L86:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid millis field : not in (1..999)."
            r7.<init>(r0)
            throw r7
        L8e:
            int r1 = r1 + 1
            goto Lc
        L92:
            return
    }

    public Accuracy(org.bouncycastle.asn1.DERInteger r3, org.bouncycastle.asn1.DERInteger r4, org.bouncycastle.asn1.DERInteger r5) {
            r2 = this;
            r2.<init>()
            r2.seconds = r3
            r3 = 999(0x3e7, float:1.4E-42)
            r0 = 1
            if (r4 == 0) goto L27
            java.math.BigInteger r1 = r4.getValue()
            int r1 = r1.intValue()
            if (r1 < r0) goto L1f
            java.math.BigInteger r1 = r4.getValue()
            int r1 = r1.intValue()
            if (r1 > r3) goto L1f
            goto L27
        L1f:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Invalid millis field : not in (1..999)"
            r3.<init>(r4)
            throw r3
        L27:
            r2.millis = r4
            if (r5 == 0) goto L48
            java.math.BigInteger r4 = r5.getValue()
            int r4 = r4.intValue()
            if (r4 < r0) goto L40
            java.math.BigInteger r4 = r5.getValue()
            int r4 = r4.intValue()
            if (r4 > r3) goto L40
            goto L48
        L40:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Invalid micros field : not in (1..999)"
            r3.<init>(r4)
            throw r3
        L48:
            r2.micros = r5
            return
    }

    public static org.bouncycastle.asn1.tsp.Accuracy getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.tsp.Accuracy
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.tsp.Accuracy r0 = new org.bouncycastle.asn1.tsp.Accuracy
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown object in 'Accuracy' factory : "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L37:
            org.bouncycastle.asn1.tsp.Accuracy r3 = (org.bouncycastle.asn1.tsp.Accuracy) r3
            return r3
    }

    public org.bouncycastle.asn1.DERInteger getMicros() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.micros
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getMillis() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.millis
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getSeconds() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.seconds
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r5.seconds
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.DERInteger r1 = r5.millis
            r2 = 0
            if (r1 == 0) goto L1b
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERInteger r3 = r5.millis
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L1b:
            org.bouncycastle.asn1.DERInteger r1 = r5.micros
            if (r1 == 0) goto L2a
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.DERInteger r4 = r5.micros
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L2a:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
