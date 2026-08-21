package org.bouncycastle.asn1;

public class DERGeneralizedTime extends org.bouncycastle.asn1.ASN1Object {
    java.lang.String time;

    public DERGeneralizedTime(java.lang.String r4) {
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

    public DERGeneralizedTime(java.util.Date r5) {
            r4 = this;
            r4.<init>()
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat
            java.lang.String r1 = "yyyyMMddHHmmss'Z'"
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

    DERGeneralizedTime(byte[] r5) {
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

    private java.lang.String calculateGMTOffset() {
            r6 = this;
            java.util.TimeZone r0 = java.util.TimeZone.getDefault()
            int r1 = r0.getRawOffset()
            java.lang.String r2 = "+"
            if (r1 >= 0) goto L10
            int r1 = -r1
            java.lang.String r3 = "-"
            goto L11
        L10:
            r3 = r2
        L11:
            r4 = 3600000(0x36ee80, float:5.044674E-39)
            int r4 = r1 / r4
            int r5 = r4 * 60
            int r5 = r5 * 60
            int r5 = r5 * 1000
            int r1 = r1 - r5
            r5 = 60000(0xea60, float:8.4078E-41)
            int r1 = r1 / r5
            boolean r5 = r0.useDaylightTime()     // Catch: java.text.ParseException -> L3b
            if (r5 == 0) goto L3b
            java.util.Date r5 = r6.getDate()     // Catch: java.text.ParseException -> L3b
            boolean r0 = r0.inDaylightTime(r5)     // Catch: java.text.ParseException -> L3b
            if (r0 == 0) goto L3b
            boolean r0 = r3.equals(r2)     // Catch: java.text.ParseException -> L3b
            if (r0 == 0) goto L39
            r0 = 1
            goto L3a
        L39:
            r0 = -1
        L3a:
            int r4 = r4 + r0
        L3b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "GMT"
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r6.convert(r4)
            r0.append(r2)
            java.lang.String r2 = ":"
            r0.append(r2)
            java.lang.String r1 = r6.convert(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private java.lang.String convert(int r3) {
            r2 = this;
            r0 = 10
            if (r3 >= r0) goto L16
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "0"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
        L16:
            java.lang.String r3 = java.lang.Integer.toString(r3)
            return r3
    }

    public static org.bouncycastle.asn1.DERGeneralizedTime getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L36
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERGeneralizedTime
            if (r0 == 0) goto L7
            goto L36
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.DERGeneralizedTime r0 = new org.bouncycastle.asn1.DERGeneralizedTime
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
            org.bouncycastle.asn1.DERGeneralizedTime r3 = (org.bouncycastle.asn1.DERGeneralizedTime) r3
            return r3
    }

    public static org.bouncycastle.asn1.DERGeneralizedTime getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.DERGeneralizedTime r0 = getInstance(r0)
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

    private boolean hasFractionalSeconds() {
            r2 = this;
            java.lang.String r0 = r2.time
            r1 = 46
            int r0 = r0.indexOf(r1)
            r1 = 14
            if (r0 != r1) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r2) {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DERGeneralizedTime
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.lang.String r0 = r1.time
            org.bouncycastle.asn1.DERGeneralizedTime r2 = (org.bouncycastle.asn1.DERGeneralizedTime) r2
            java.lang.String r2 = r2.time
            boolean r2 = r0.equals(r2)
            return r2
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.getOctets()
            r1 = 24
            r3.writeEncoded(r1, r0)
            return
    }

    public java.util.Date getDate() throws java.text.ParseException {
            r5 = this;
            java.lang.String r0 = r5.time
            java.lang.String r1 = "Z"
            boolean r2 = r0.endsWith(r1)
            r3 = 0
            if (r2 == 0) goto L29
            boolean r2 = r5.hasFractionalSeconds()
            if (r2 == 0) goto L19
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r4 = "yyyyMMddHHmmss.SSSS'Z'"
            r2.<init>(r4)
            goto L20
        L19:
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r4 = "yyyyMMddHHmmss'Z'"
            r2.<init>(r4)
        L20:
            java.util.SimpleTimeZone r4 = new java.util.SimpleTimeZone
            r4.<init>(r3, r1)
        L25:
            r2.setTimeZone(r4)
            goto L84
        L29:
            java.lang.String r2 = r5.time
            r4 = 45
            int r2 = r2.indexOf(r4)
            if (r2 > 0) goto L65
            java.lang.String r2 = r5.time
            r4 = 43
            int r2 = r2.indexOf(r4)
            if (r2 <= 0) goto L3e
            goto L65
        L3e:
            boolean r1 = r5.hasFractionalSeconds()
            if (r1 == 0) goto L4c
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yyyyMMddHHmmss.SSSS"
            r1.<init>(r2)
            goto L53
        L4c:
            java.text.SimpleDateFormat r1 = new java.text.SimpleDateFormat
            java.lang.String r2 = "yyyyMMddHHmmss"
            r1.<init>(r2)
        L53:
            r2 = r1
            java.util.SimpleTimeZone r1 = new java.util.SimpleTimeZone
            java.util.TimeZone r4 = java.util.TimeZone.getDefault()
            java.lang.String r4 = r4.getID()
            r1.<init>(r3, r4)
            r2.setTimeZone(r1)
            goto L84
        L65:
            java.lang.String r0 = r5.getTime()
            boolean r2 = r5.hasFractionalSeconds()
            if (r2 == 0) goto L77
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r4 = "yyyyMMddHHmmss.SSSSz"
            r2.<init>(r4)
            goto L7e
        L77:
            java.text.SimpleDateFormat r2 = new java.text.SimpleDateFormat
            java.lang.String r4 = "yyyyMMddHHmmssz"
            r2.<init>(r4)
        L7e:
            java.util.SimpleTimeZone r4 = new java.util.SimpleTimeZone
            r4.<init>(r3, r1)
            goto L25
        L84:
            java.util.Date r0 = r2.parse(r0)
            return r0
    }

    public java.lang.String getTime() {
            r6 = this;
            java.lang.String r0 = r6.time
            int r1 = r0.length()
            int r1 = r1 + (-1)
            char r0 = r0.charAt(r1)
            r1 = 0
            r2 = 90
            if (r0 != r2) goto L2f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r6.time
            int r3 = r2.length()
            int r3 = r3 + (-1)
            java.lang.String r1 = r2.substring(r1, r3)
            r0.append(r1)
            java.lang.String r1 = "GMT+00:00"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L2f:
            java.lang.String r0 = r6.time
            int r0 = r0.length()
            int r0 = r0 + (-5)
            java.lang.String r2 = r6.time
            char r2 = r2.charAt(r0)
            java.lang.String r3 = "GMT"
            r4 = 45
            if (r2 == r4) goto L95
            r5 = 43
            if (r2 != r5) goto L48
            goto L95
        L48:
            java.lang.String r0 = r6.time
            int r0 = r0.length()
            int r0 = r0 + (-3)
            java.lang.String r2 = r6.time
            char r2 = r2.charAt(r0)
            if (r2 == r4) goto L71
            if (r2 != r5) goto L5b
            goto L71
        L5b:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r6.time
            r0.append(r1)
            java.lang.String r1 = r6.calculateGMTOffset()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L71:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = r6.time
            java.lang.String r1 = r4.substring(r1, r0)
            r2.append(r1)
            r2.append(r3)
            java.lang.String r1 = r6.time
            java.lang.String r0 = r1.substring(r0)
            r2.append(r0)
            java.lang.String r0 = ":00"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
        L95:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = r6.time
            java.lang.String r1 = r4.substring(r1, r0)
            r2.append(r1)
            r2.append(r3)
            java.lang.String r1 = r6.time
            int r3 = r0 + 3
            java.lang.String r0 = r1.substring(r0, r3)
            r2.append(r0)
            java.lang.String r0 = ":"
            r2.append(r0)
            java.lang.String r0 = r6.time
            java.lang.String r0 = r0.substring(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            return r0
    }

    public java.lang.String getTimeString() {
            r1 = this;
            java.lang.String r0 = r1.time
            return r0
    }

    @Override
    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.time
            int r0 = r0.hashCode()
            return r0
    }
}
