package org.bouncycastle.asn1.pkcs;

public class ContentInfo extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers {
    private org.bouncycastle.asn1.DEREncodable content;
    private org.bouncycastle.asn1.DERObjectIdentifier contentType;

    public ContentInfo(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r1.contentType = r0
            boolean r0 = r2.hasMoreElements()
            if (r0 == 0) goto L21
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.DERTaggedObject r2 = (org.bouncycastle.asn1.DERTaggedObject) r2
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            r1.content = r2
        L21:
            return
    }

    public ContentInfo(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>()
            r0.contentType = r1
            r0.content = r2
            return
    }

    public static org.bouncycastle.asn1.pkcs.ContentInfo getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.ContentInfo
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.ContentInfo r3 = (org.bouncycastle.asn1.pkcs.ContentInfo) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.ContentInfo r0 = new org.bouncycastle.asn1.pkcs.ContentInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
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

    public org.bouncycastle.asn1.DEREncodable getContent() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.content
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getContentType() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.contentType
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r4.contentType
            r0.add(r1)
            org.bouncycastle.asn1.DEREncodable r1 = r4.content
            if (r1 == 0) goto L19
            org.bouncycastle.asn1.BERTaggedObject r1 = new org.bouncycastle.asn1.BERTaggedObject
            r2 = 0
            org.bouncycastle.asn1.DEREncodable r3 = r4.content
            r1.<init>(r2, r3)
            r0.add(r1)
        L19:
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
