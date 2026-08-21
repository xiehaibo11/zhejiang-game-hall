package org.bouncycastle.asn1.esf;

public class SPUserNotice {
    private org.bouncycastle.asn1.x509.DisplayText explicitText;
    private org.bouncycastle.asn1.x509.NoticeReference noticeRef;

    public SPUserNotice(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            java.util.Enumeration r3 = r3.getObjects()
        L7:
            boolean r0 = r3.hasMoreElements()
            if (r0 == 0) goto L31
            java.lang.Object r0 = r3.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            boolean r1 = r0 instanceof org.bouncycastle.asn1.x509.NoticeReference
            if (r1 == 0) goto L1e
            org.bouncycastle.asn1.x509.NoticeReference r0 = org.bouncycastle.asn1.x509.NoticeReference.getInstance(r0)
            r2.noticeRef = r0
            goto L7
        L1e:
            boolean r1 = r0 instanceof org.bouncycastle.asn1.x509.DisplayText
            if (r1 == 0) goto L29
            org.bouncycastle.asn1.x509.DisplayText r0 = org.bouncycastle.asn1.x509.DisplayText.getInstance(r0)
            r2.explicitText = r0
            goto L7
        L29:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Invalid element in 'SPUserNotice'."
            r3.<init>(r0)
            throw r3
        L31:
            return
    }

    public SPUserNotice(org.bouncycastle.asn1.x509.NoticeReference r1, org.bouncycastle.asn1.x509.DisplayText r2) {
            r0 = this;
            r0.<init>()
            r0.noticeRef = r1
            r0.explicitText = r2
            return
    }

    public static org.bouncycastle.asn1.esf.SPUserNotice getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.esf.SPUserNotice
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.esf.SPUserNotice r0 = new org.bouncycastle.asn1.esf.SPUserNotice
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'SPUserNotice' factory : "
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
            org.bouncycastle.asn1.esf.SPUserNotice r3 = (org.bouncycastle.asn1.esf.SPUserNotice) r3
            return r3
    }

    public org.bouncycastle.asn1.x509.DisplayText getExplicitText() {
            r1 = this;
            org.bouncycastle.asn1.x509.DisplayText r0 = r1.explicitText
            return r0
    }

    public org.bouncycastle.asn1.x509.NoticeReference getNoticeRef() {
            r1 = this;
            org.bouncycastle.asn1.x509.NoticeReference r0 = r1.noticeRef
            return r0
    }

    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.NoticeReference r1 = r2.noticeRef
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.x509.DisplayText r1 = r2.explicitText
            if (r1 == 0) goto L13
            r0.add(r1)
        L13:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
