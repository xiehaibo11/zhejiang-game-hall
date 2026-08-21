package org.bouncycastle.asn1.ess;

public class ContentHints extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERUTF8String contentDescription;
    private org.bouncycastle.asn1.DERObjectIdentifier contentType;

    private ContentHints(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObject r2 = r1.getDERObject()
            boolean r2 = r2 instanceof org.bouncycastle.asn1.DERUTF8String
            if (r2 == 0) goto L17
            org.bouncycastle.asn1.DERUTF8String r0 = org.bouncycastle.asn1.DERUTF8String.getInstance(r1)
            r3.contentDescription = r0
            r0 = 1
        L17:
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r4)
            r3.contentType = r4
            return
    }

    public ContentHints(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            r0 = this;
            r0.<init>()
            r0.contentType = r1
            r1 = 0
            r0.contentDescription = r1
            return
    }

    public ContentHints(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DERUTF8String r2) {
            r0 = this;
            r0.<init>()
            r0.contentType = r1
            r0.contentDescription = r2
            return
    }

    public static org.bouncycastle.asn1.ess.ContentHints getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ess.ContentHints
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ess.ContentHints r0 = new org.bouncycastle.asn1.ess.ContentHints
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'ContentHints' factory : "
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
            org.bouncycastle.asn1.ess.ContentHints r3 = (org.bouncycastle.asn1.ess.ContentHints) r3
            return r3
    }

    public org.bouncycastle.asn1.DERUTF8String getContentDescription() {
            r1 = this;
            org.bouncycastle.asn1.DERUTF8String r0 = r1.contentDescription
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getContentType() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.contentType
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERUTF8String r1 = r2.contentDescription
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.contentType
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
