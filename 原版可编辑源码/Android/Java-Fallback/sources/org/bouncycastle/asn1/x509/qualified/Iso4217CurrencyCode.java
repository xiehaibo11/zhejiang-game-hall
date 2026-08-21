package org.bouncycastle.asn1.x509.qualified;

public class Iso4217CurrencyCode extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    final int ALPHABETIC_MAXSIZE;
    final int NUMERIC_MAXSIZE;
    final int NUMERIC_MINSIZE;
    int numeric;
    org.bouncycastle.asn1.DEREncodable obj;

    public Iso4217CurrencyCode(int r3) {
            r2 = this;
            r2.<init>()
            r0 = 3
            r2.ALPHABETIC_MAXSIZE = r0
            r0 = 1
            r2.NUMERIC_MINSIZE = r0
            r1 = 999(0x3e7, float:1.4E-42)
            r2.NUMERIC_MAXSIZE = r1
            if (r3 > r1) goto L19
            if (r3 < r0) goto L19
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r3)
            r2.obj = r0
            return
        L19:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wrong size in numeric code : not in (1..999)"
            r3.<init>(r0)
            throw r3
    }

    public Iso4217CurrencyCode(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            r0 = 3
            r2.ALPHABETIC_MAXSIZE = r0
            r1 = 1
            r2.NUMERIC_MINSIZE = r1
            r1 = 999(0x3e7, float:1.4E-42)
            r2.NUMERIC_MAXSIZE = r1
            int r1 = r3.length()
            if (r1 > r0) goto L1b
            org.bouncycastle.asn1.DERPrintableString r0 = new org.bouncycastle.asn1.DERPrintableString
            r0.<init>(r3)
            r2.obj = r0
            return
        L1b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wrong size in alphabetic code : max size is 3"
            r3.<init>(r0)
            throw r3
    }

    public static org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L37
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.DERInteger
            if (r0 == 0) goto L1d
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.DERInteger.getInstance(r1)
            java.math.BigInteger r1 = r1.getValue()
            int r1 = r1.intValue()
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r0 = new org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode
            r0.<init>(r1)
            return r0
        L1d:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.DERPrintableString
            if (r0 == 0) goto L2f
            org.bouncycastle.asn1.DERPrintableString r1 = org.bouncycastle.asn1.DERPrintableString.getInstance(r1)
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r0 = new org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode
            java.lang.String r1 = r1.getString()
            r0.<init>(r1)
            return r0
        L2f:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance"
            r1.<init>(r0)
            throw r1
        L37:
            org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode r1 = (org.bouncycastle.asn1.x509.qualified.Iso4217CurrencyCode) r1
            return r1
    }

    public java.lang.String getAlphabetic() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            org.bouncycastle.asn1.DERPrintableString r0 = (org.bouncycastle.asn1.DERPrintableString) r0
            java.lang.String r0 = r0.getString()
            return r0
    }

    public int getNumeric() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
    }

    public boolean isAlphabetic() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERPrintableString
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
    }
}
