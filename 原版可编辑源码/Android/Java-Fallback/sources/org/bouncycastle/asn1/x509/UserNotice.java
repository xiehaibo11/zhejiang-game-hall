package org.bouncycastle.asn1.x509;

public class UserNotice extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.DisplayText explicitText;
    private org.bouncycastle.asn1.x509.NoticeReference noticeRef;

    public UserNotice(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.size()
            r1 = 1
            r2 = 0
            r3 = 2
            if (r0 != r3) goto L21
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.x509.NoticeReference r0 = org.bouncycastle.asn1.x509.NoticeReference.getInstance(r0)
            r4.noticeRef = r0
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r1)
        L1a:
            org.bouncycastle.asn1.x509.DisplayText r5 = org.bouncycastle.asn1.x509.DisplayText.getInstance(r5)
            r4.explicitText = r5
            goto L3d
        L21:
            int r0 = r5.size()
            if (r0 != r1) goto L3e
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1Sequence
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)
            if (r0 == 0) goto L1a
            org.bouncycastle.asn1.x509.NoticeReference r5 = org.bouncycastle.asn1.x509.NoticeReference.getInstance(r5)
            r4.noticeRef = r5
        L3d:
            return
        L3e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r5 = r5.size()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public UserNotice(org.bouncycastle.asn1.x509.NoticeReference r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.noticeRef = r1
            org.bouncycastle.asn1.x509.DisplayText r1 = new org.bouncycastle.asn1.x509.DisplayText
            r1.<init>(r2)
            r0.explicitText = r1
            return
    }

    public UserNotice(org.bouncycastle.asn1.x509.NoticeReference r1, org.bouncycastle.asn1.x509.DisplayText r2) {
            r0 = this;
            r0.<init>()
            r0.noticeRef = r1
            r0.explicitText = r2
            return
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

    @Override
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
