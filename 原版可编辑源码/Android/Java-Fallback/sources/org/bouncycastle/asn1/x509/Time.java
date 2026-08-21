package org.bouncycastle.asn1.x509;

public class Time extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    org.bouncycastle.asn1.DERObject time;

    public Time(java.util.Date r6) {
            r5 = this;
            r5.<init>()
            java.util.SimpleTimeZone r0 = new java.util.SimpleTimeZone
            java.lang.String r1 = "Z"
            r2 = 0
            r0.<init>(r2, r1)
            java.text.SimpleDateFormat r3 = new java.text.SimpleDateFormat
            java.lang.String r4 = "yyyyMMddHHmmss"
            r3.<init>(r4)
            r3.setTimeZone(r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r6 = r3.format(r6)
            r0.append(r6)
            r0.append(r1)
            java.lang.String r6 = r0.toString()
            r0 = 4
            java.lang.String r0 = r6.substring(r2, r0)
            int r0 = java.lang.Integer.parseInt(r0)
            r1 = 1950(0x79e, float:2.733E-42)
            if (r0 < r1) goto L45
            r1 = 2049(0x801, float:2.871E-42)
            if (r0 <= r1) goto L3a
            goto L45
        L3a:
            org.bouncycastle.asn1.DERUTCTime r0 = new org.bouncycastle.asn1.DERUTCTime
            r1 = 2
            java.lang.String r6 = r6.substring(r1)
            r0.<init>(r6)
            goto L4a
        L45:
            org.bouncycastle.asn1.DERGeneralizedTime r0 = new org.bouncycastle.asn1.DERGeneralizedTime
            r0.<init>(r6)
        L4a:
            r5.time = r0
            return
    }

    public Time(org.bouncycastle.asn1.DERObject r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERUTCTime
            if (r0 != 0) goto L14
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERGeneralizedTime
            if (r0 == 0) goto Lc
            goto L14
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object passed to Time"
            r2.<init>(r0)
            throw r2
        L14:
            r1.time = r2
            return
    }

    public static org.bouncycastle.asn1.x509.Time getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.Time
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.Time r3 = (org.bouncycastle.asn1.x509.Time) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERUTCTime
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.Time r0 = new org.bouncycastle.asn1.x509.Time
            org.bouncycastle.asn1.DERUTCTime r3 = (org.bouncycastle.asn1.DERUTCTime) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERGeneralizedTime
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.x509.Time r0 = new org.bouncycastle.asn1.x509.Time
            org.bouncycastle.asn1.DERGeneralizedTime r3 = (org.bouncycastle.asn1.DERGeneralizedTime) r3
            r0.<init>(r3)
            return r0
        L1f:
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

    public static org.bouncycastle.asn1.x509.Time getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.x509.Time r0 = getInstance(r0)
            return r0
    }

    public java.util.Date getDate() {
            r4 = this;
            org.bouncycastle.asn1.DERObject r0 = r4.time     // Catch: java.text.ParseException -> L18
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERUTCTime     // Catch: java.text.ParseException -> L18
            if (r0 == 0) goto Lf
            org.bouncycastle.asn1.DERObject r0 = r4.time     // Catch: java.text.ParseException -> L18
            org.bouncycastle.asn1.DERUTCTime r0 = (org.bouncycastle.asn1.DERUTCTime) r0     // Catch: java.text.ParseException -> L18
            java.util.Date r0 = r0.getAdjustedDate()     // Catch: java.text.ParseException -> L18
            return r0
        Lf:
            org.bouncycastle.asn1.DERObject r0 = r4.time     // Catch: java.text.ParseException -> L18
            org.bouncycastle.asn1.DERGeneralizedTime r0 = (org.bouncycastle.asn1.DERGeneralizedTime) r0     // Catch: java.text.ParseException -> L18
            java.util.Date r0 = r0.getDate()     // Catch: java.text.ParseException -> L18
            return r0
        L18:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "invalid date string: "
            r2.append(r3)
            java.lang.String r0 = r0.getMessage()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
    }

    public java.lang.String getTime() {
            r2 = this;
            org.bouncycastle.asn1.DERObject r0 = r2.time
            boolean r1 = r0 instanceof org.bouncycastle.asn1.DERUTCTime
            if (r1 == 0) goto Ld
            org.bouncycastle.asn1.DERUTCTime r0 = (org.bouncycastle.asn1.DERUTCTime) r0
            java.lang.String r0 = r0.getAdjustedTime()
            return r0
        Ld:
            org.bouncycastle.asn1.DERGeneralizedTime r0 = (org.bouncycastle.asn1.DERGeneralizedTime) r0
            java.lang.String r0 = r0.getTime()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.time
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.getTime()
            return r0
    }
}
