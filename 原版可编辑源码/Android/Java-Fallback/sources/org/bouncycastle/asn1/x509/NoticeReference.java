package org.bouncycastle.asn1.x509;

public class NoticeReference extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence noticeNumbers;
    private org.bouncycastle.asn1.x509.DisplayText organization;

    public NoticeReference(int r2, java.lang.String r3, org.bouncycastle.asn1.ASN1Sequence r4) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.DisplayText r0 = new org.bouncycastle.asn1.x509.DisplayText
            r0.<init>(r2, r3)
            r1.organization = r0
            r1.noticeNumbers = r4
            return
    }

    public NoticeReference(java.lang.String r3, java.util.Vector r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.x509.DisplayText r0 = new org.bouncycastle.asn1.x509.DisplayText
            r0.<init>(r3)
            r2.organization = r0
            r3 = 0
            java.lang.Object r3 = r4.elementAt(r3)
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            boolean r3 = r3 instanceof java.lang.Integer
            if (r3 == 0) goto L35
            java.util.Enumeration r3 = r4.elements()
        L1c:
            boolean r4 = r3.hasMoreElements()
            if (r4 == 0) goto L35
            java.lang.Object r4 = r3.nextElement()
            java.lang.Integer r4 = (java.lang.Integer) r4
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            int r4 = r4.intValue()
            r1.<init>(r4)
            r0.add(r1)
            goto L1c
        L35:
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence
            r3.<init>(r0)
            r2.noticeNumbers = r3
            return
    }

    public NoticeReference(java.lang.String r2, org.bouncycastle.asn1.ASN1Sequence r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.DisplayText r0 = new org.bouncycastle.asn1.x509.DisplayText
            r0.<init>(r2)
            r1.organization = r0
            r1.noticeNumbers = r3
            return
    }

    public NoticeReference(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 2
            if (r0 != r1) goto L21
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.DisplayText r0 = org.bouncycastle.asn1.x509.DisplayText.getInstance(r0)
            r3.organization = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            r3.noticeNumbers = r4
            return
        L21:
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

    public static org.bouncycastle.asn1.x509.NoticeReference getInstance(java.lang.Object r1) {
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.NoticeReference
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.NoticeReference r1 = (org.bouncycastle.asn1.x509.NoticeReference) r1
            return r1
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.NoticeReference r0 = new org.bouncycastle.asn1.x509.NoticeReference
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance."
            r1.<init>(r0)
            throw r1
    }

    public org.bouncycastle.asn1.ASN1Sequence getNoticeNumbers() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.noticeNumbers
            return r0
    }

    public org.bouncycastle.asn1.x509.DisplayText getOrganization() {
            r1 = this;
            org.bouncycastle.asn1.x509.DisplayText r0 = r1.organization
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.DisplayText r1 = r2.organization
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.noticeNumbers
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
