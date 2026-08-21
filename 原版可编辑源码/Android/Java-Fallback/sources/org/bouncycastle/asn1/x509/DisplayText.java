package org.bouncycastle.asn1.x509;

public class DisplayText extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    public static final int CONTENT_TYPE_BMPSTRING = 1;
    public static final int CONTENT_TYPE_IA5STRING = 0;
    public static final int CONTENT_TYPE_UTF8STRING = 2;
    public static final int CONTENT_TYPE_VISIBLESTRING = 3;
    public static final int DISPLAY_TEXT_MAXIMUM_SIZE = 200;
    int contentType;
    org.bouncycastle.asn1.DERString contents;

    public DisplayText(int r3, java.lang.String r4) {
            r2 = this;
            r2.<init>()
            int r0 = r4.length()
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 <= r1) goto L10
            r0 = 0
            java.lang.String r4 = r4.substring(r0, r1)
        L10:
            r2.contentType = r3
            if (r3 == 0) goto L35
            r0 = 1
            if (r3 == r0) goto L2f
            r0 = 2
            if (r3 == r0) goto L29
            r0 = 3
            if (r3 == r0) goto L23
            org.bouncycastle.asn1.DERUTF8String r3 = new org.bouncycastle.asn1.DERUTF8String
            r3.<init>(r4)
            goto L3a
        L23:
            org.bouncycastle.asn1.DERVisibleString r3 = new org.bouncycastle.asn1.DERVisibleString
            r3.<init>(r4)
            goto L3a
        L29:
            org.bouncycastle.asn1.DERUTF8String r3 = new org.bouncycastle.asn1.DERUTF8String
            r3.<init>(r4)
            goto L3a
        L2f:
            org.bouncycastle.asn1.DERBMPString r3 = new org.bouncycastle.asn1.DERBMPString
            r3.<init>(r4)
            goto L3a
        L35:
            org.bouncycastle.asn1.DERIA5String r3 = new org.bouncycastle.asn1.DERIA5String
            r3.<init>(r4)
        L3a:
            r2.contents = r3
            return
    }

    public DisplayText(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            int r0 = r3.length()
            r1 = 200(0xc8, float:2.8E-43)
            if (r0 <= r1) goto L10
            r0 = 0
            java.lang.String r3 = r3.substring(r0, r1)
        L10:
            r0 = 2
            r2.contentType = r0
            org.bouncycastle.asn1.DERUTF8String r0 = new org.bouncycastle.asn1.DERUTF8String
            r0.<init>(r3)
            r2.contents = r0
            return
    }

    public DisplayText(org.bouncycastle.asn1.DERString r1) {
            r0 = this;
            r0.<init>()
            r0.contents = r1
            return
    }

    public static org.bouncycastle.asn1.x509.DisplayText getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERString
            if (r0 == 0) goto Lc
            org.bouncycastle.asn1.x509.DisplayText r0 = new org.bouncycastle.asn1.x509.DisplayText
            org.bouncycastle.asn1.DERString r3 = (org.bouncycastle.asn1.DERString) r3
            r0.<init>(r3)
            return r0
        Lc:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.DisplayText
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.DisplayText r3 = (org.bouncycastle.asn1.x509.DisplayText) r3
            return r3
        L13:
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
    }

    public static org.bouncycastle.asn1.x509.DisplayText getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.x509.DisplayText r0 = getInstance(r0)
            return r0
    }

    public java.lang.String getString() {
            r1 = this;
            org.bouncycastle.asn1.DERString r0 = r1.contents
            java.lang.String r0 = r0.getString()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DERString r0 = r1.contents
            org.bouncycastle.asn1.DERObject r0 = (org.bouncycastle.asn1.DERObject) r0
            return r0
    }
}
