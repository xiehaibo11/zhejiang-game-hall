package org.bouncycastle.asn1.x509.qualified;

public class MonetaryValue extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger amount;
    org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode currency;
    org.bouncycastle.asn1.DERInteger exponent;

    public MonetaryValue(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r0 = org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode.getInstance(r0)
            r1.currency = r0
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r1.amount = r0
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r2 = org.bouncycastle.asn1.DERInteger.getInstance(r2)
            r1.exponent = r2
            return
    }

    public MonetaryValue(org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r1, int r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.currency = r1
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r2)
            r0.amount = r1
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            r0.exponent = r1
            return
    }

    public static org.bouncycastle.asn1.x509.qualified.MonetaryValue getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1d
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.qualified.MonetaryValue
            if (r0 == 0) goto L7
            goto L1d
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.x509.qualified.MonetaryValue r0 = new org.bouncycastle.asn1.x509.qualified.MonetaryValue
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance"
            r1.<init>(r0)
            throw r1
        L1d:
            org.bouncycastle.asn1.x509.qualified.MonetaryValue r1 = (org.bouncycastle.asn1.x509.qualified.MonetaryValue) r1
            return r1
    }

    public java.math.BigInteger getAmount() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.amount
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    public org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode getCurrency() {
            r1 = this;
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r0 = r1.currency
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
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r1 = r2.currency
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
