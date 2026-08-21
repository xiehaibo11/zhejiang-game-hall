package org.bouncycastle.asn1.isismtt.x509;

public class MonetaryLimit extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger amount;
    org.bouncycastle.asn1.DERPrintableString currency;
    org.bouncycastle.asn1.DERInteger exponent;

    public MonetaryLimit(java.lang.String r3, int r4, int r5) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERPrintableString r0 = new org.bouncycastle.asn1.DERPrintableString
            r1 = 1
            r0.<init>(r3, r1)
            r2.currency = r0
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            r3.<init>(r4)
            r2.amount = r3
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            r3.<init>(r5)
            r2.exponent = r3
            return
    }

    private MonetaryLimit(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 3
            if (r0 != r1) goto L2d
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERPrintableString r0 = org.bouncycastle.asn1.DERPrintableString.getInstance(r0)
            r3.currency = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.amount = r0
            java.lang.Object r4 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r4 = org.bouncycastle.asn1.DERInteger.getInstance(r4)
            r3.exponent = r4
            return
        L2d:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r4 = r4.size()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public static org.bouncycastle.asn1.isismtt.x509.MonetaryLimit getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1d
            boolean r0 = r1 instanceof org.bouncycastle.asn1.isismtt.x509.MonetaryLimit
            if (r0 == 0) goto L7
            goto L1d
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.isismtt.x509.MonetaryLimit r0 = new org.bouncycastle.asn1.isismtt.x509.MonetaryLimit
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance"
            r1.<init>(r0)
            throw r1
        L1d:
            org.bouncycastle.asn1.isismtt.x509.MonetaryLimit r1 = (org.bouncycastle.asn1.isismtt.x509.MonetaryLimit) r1
            return r1
    }

    public java.math.BigInteger getAmount() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.amount
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    public java.lang.String getCurrency() {
            r1 = this;
            org.bouncycastle.asn1.DERPrintableString r0 = r1.currency
            java.lang.String r0 = r0.getString()
            return r0
    }

    public java.math.BigInteger getExponent() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.exponent
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERPrintableString r1 = r2.currency
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.amount
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.exponent
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
