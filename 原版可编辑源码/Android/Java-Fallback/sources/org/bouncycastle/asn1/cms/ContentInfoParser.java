package org.bouncycastle.asn1.cms;

public class ContentInfoParser {
    private org.bouncycastle.asn1.ASN1TaggedObjectParser content;
    private org.bouncycastle.asn1.DERObjectIdentifier contentType;

    public ContentInfoParser(org.bouncycastle.asn1.ASN1SequenceParser r2) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEREncodable r0 = r2.readObject()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r1.contentType = r0
            org.bouncycastle.asn1.DEREncodable r2 = r2.readObject()
            org.bouncycastle.asn1.ASN1TaggedObjectParser r2 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r2
            r1.content = r2
            return
    }

    public org.bouncycastle.asn1.DEREncodable getContent(int r3) throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = r2.content
            if (r0 == 0) goto La
            r1 = 1
            org.bouncycastle.asn1.DEREncodable r3 = r0.getObjectParser(r3, r1)
            return r3
        La:
            r3 = 0
            return r3
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getContentType() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.contentType
            return r0
    }
}
