package org.bouncycastle.asn1;

public class DERUTCTime extends org.bouncycastle.asn1.ASN1Object {
    java.lang.String time;

    public DERUTCTime(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            r3.time = r4
            r3.getDate()     // Catch: java.text.ParseException -> L9
            return
        L9:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "invalid date string: "
            r1.append(r2)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public DERUTCTime(java.util.Date r5) {
            r4 = this;
            r4.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyMMddHHmmss'Z'"
            r0.<init>(r1)
            java.util.SimpleTimeZone r1 = new java.util.SimpleTimeZone
            r2 = 0
            java.lang.String r3 = "Z"
            r1.<init>(r2, r3)
            r0.setTimeZone(r1)
            java.lang.String r5 = r0.format(r5)
            r4.time = r5
            return
    }

    DERUTCTime(byte[] r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.length
            char[] r1 = new char[r0]
            r2 = 0
        L7:
            if (r2 == r0) goto L13
            r3 = r5[r2]
            r3 = r3 & 255(0xff, float:3.57E-43)
            char r3 = (char) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto L7
        L13:
            java.lang.String r5 = new java.lang.String
            r5.<init>(r1)
            r4.time = r5
            return
    }

    public static org.bouncycastle.asn1.DERUTCTime getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L36
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERUTCTime
            if (r0 == 0) goto L7
            goto L36
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERUTCTime r0 = new org.bouncycastle.asn1.DERUTCTime
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            byte[] r3 = r3.getOctets()
            r0.<init>(r3)
            return r0
        L17:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L36:
            org.bouncycastle.asn1.DERUTCTime r3 = (org.bouncycastle.asn1.DERUTCTime) r3
            return r3
    }

    public static org.bouncycastle.asn1.DERUTCTime getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERUTCTime r0 = getInstance(r0)
            return r0
    }

    private byte[] getOctets() {
            r4 = this;
            java.lang.String r0 = r4.time
            char[] r0 = r0.toCharArray()
            int r1 = r0.length
            byte[] r1 = new byte[r1]
            r2 = 0
        La:
            int r3 = r0.length
            if (r2 == r3) goto L15
            char r3 = r0[r2]
            byte r3 = (byte) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto La
        L15:
            return r1
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERUTCTime
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.String r0 = r1.time
            org.bouncycastle.asn1.DERUTCTime r2 = (org.bouncycastle.asn1.DERUTCTime) r2
            java.lang.String r2 = r2.time
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.getOctets()
            r1 = 23
            r3.writeEncoded(r1, r0)
            return
    }

    public java.util.Date getAdjustedDate() throws java.text.ParseException {
            r4 = this;
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyyMMddHHmmssz"
            r0.<init>(r1)
            java.util.SimpleTimeZone r1 = new java.util.SimpleTimeZone
            r2 = 0
            java.lang.String r3 = "Z"
            r1.<init>(r2, r3)
            r0.setTimeZone(r1)
            java.lang.String r1 = r4.getAdjustedTime()
            java.util.Date r0 = r0.parse(r1)
            return r0
    }

    public java.lang.String getAdjustedTime() {
            r3 = this;
            java.lang.String r0 = r3.getTime()
            r1 = 0
            char r1 = r0.charAt(r1)
            r2 = 53
            if (r1 >= r2) goto L1f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "20"
        L14:
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
        L1f:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "19"
            goto L14
    }

    public java.util.Date getDate() throws java.text.ParseException {
            r2 = this;
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyMMddHHmmssz"
            r0.<init>(r1)
            java.lang.String r1 = r2.getTime()
            java.util.Date r0 = r0.parse(r1)
            return r0
    }

    public java.lang.String getTime() {
            r7 = this;
            java.lang.String r0 = r7.time
            r1 = 45
            int r0 = r0.indexOf(r1)
            r2 = 43
            r3 = 12
            r4 = 0
            r5 = 10
            if (r0 >= 0) goto L4c
            java.lang.String r0 = r7.time
            int r0 = r0.indexOf(r2)
            if (r0 >= 0) goto L4c
            java.lang.String r0 = r7.time
            int r0 = r0.length()
            r1 = 11
            if (r0 != r1) goto L3b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r7.time
            java.lang.String r1 = r1.substring(r4, r5)
            r0.append(r1)
            java.lang.String r1 = "00GMT+00:00"
        L33:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L3b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r7.time
            java.lang.String r1 = r1.substring(r4, r3)
            r0.append(r1)
            java.lang.String r1 = "GMT+00:00"
            goto L33
        L4c:
            java.lang.String r0 = r7.time
            int r0 = r0.indexOf(r1)
            if (r0 >= 0) goto L5a
            java.lang.String r0 = r7.time
            int r0 = r0.indexOf(r2)
        L5a:
            java.lang.String r1 = r7.time
            int r2 = r1.length()
            int r2 = r2 + (-3)
            if (r0 != r2) goto L75
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r1 = "00"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
        L75:
            java.lang.String r2 = ":"
            r6 = 15
            if (r0 != r5) goto L9d
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = r1.substring(r4, r5)
            r0.append(r3)
            java.lang.String r3 = "00GMT"
            r0.append(r3)
            r3 = 13
            java.lang.String r4 = r1.substring(r5, r3)
            r0.append(r4)
            r0.append(r2)
            java.lang.String r1 = r1.substring(r3, r6)
            goto L33
        L9d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = r1.substring(r4, r3)
            r0.append(r4)
            java.lang.String r4 = "GMT"
            r0.append(r4)
            java.lang.String r3 = r1.substring(r3, r6)
            r0.append(r3)
            r0.append(r2)
            r2 = 17
            java.lang.String r1 = r1.substring(r6, r2)
            goto L33
    }

    @Override
    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.time
            int r0 = r0.hashCode()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.time
            return r0
    }
}
