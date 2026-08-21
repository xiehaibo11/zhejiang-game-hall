package org.bouncycastle.asn1.cms;

public class EncryptedContentInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier contentEncryptionAlgorithm;
    private org.bouncycastle.asn1.DERObjectIdentifier contentType;
    private org.bouncycastle.asn1.ASN1OctetString encryptedContent;

    public EncryptedContentInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            r3.contentType = r1
            r1 = 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r1)
            r3.contentEncryptionAlgorithm = r1
            int r1 = r4.size()
            r2 = 2
            if (r1 <= r2) goto L2a
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r4 = (org.bouncycastle.asn1.ASN1TaggedObject) r4
            org.bouncycastle.asn1.ASN1OctetString r4 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r4, r0)
            r3.encryptedContent = r4
        L2a:
            return
    }

    public EncryptedContentInfo(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, org.bouncycastle.asn1.ASN1OctetString r3) {
            r0 = this;
            r0.<init>()
            r0.contentType = r1
            r0.contentEncryptionAlgorithm = r2
            r0.encryptedContent = r3
            return
    }

    public static org.bouncycastle.asn1.cms.EncryptedContentInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.EncryptedContentInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.EncryptedContentInfo r0 = new org.bouncycastle.asn1.cms.EncryptedContentInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid EncryptedContentInfo: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.EncryptedContentInfo r3 = (org.bouncycastle.asn1.cms.EncryptedContentInfo) r3
            return r3
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getContentEncryptionAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.contentEncryptionAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getContentType() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.contentType
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getEncryptedContent() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.encryptedContent
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r4.contentType
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.contentEncryptionAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r4.encryptedContent
            if (r1 == 0) goto L1e
            org.bouncycastle.asn1.BERTaggedObject r1 = new org.bouncycastle.asn1.BERTaggedObject
            org.bouncycastle.asn1.ASN1OctetString r2 = r4.encryptedContent
            r3 = 0
            r1.<init>(r3, r3, r2)
            r0.add(r1)
        L1e:
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
