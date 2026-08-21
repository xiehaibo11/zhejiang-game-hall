package org.bouncycastle.asn1.cms;

public class EnvelopedData extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.cms.EncryptedContentInfo encryptedContentInfo;
    private org.bouncycastle.asn1.cms.OriginatorInfo originatorInfo;
    private org.bouncycastle.asn1.ASN1Set recipientInfos;
    private org.bouncycastle.asn1.ASN1Set unprotectedAttrs;
    private org.bouncycastle.asn1.DERInteger version;

    public EnvelopedData(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r1 = (org.bouncycastle.asn1.DERInteger) r1
            r4.version = r1
            r1 = 1
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r1)
            boolean r2 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            r3 = 2
            if (r2 == 0) goto L25
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            org.bouncycastle.asn1.cms.OriginatorInfo r1 = org.bouncycastle.asn1.cms.OriginatorInfo.getInstance(r1, r0)
            r4.originatorInfo = r1
            r1 = 3
            org.bouncycastle.asn1.DEREncodable r2 = r5.getObjectAt(r3)
            r1 = r2
            r3 = 3
        L25:
            org.bouncycastle.asn1.ASN1Set r1 = org.bouncycastle.asn1.ASN1Set.getInstance(r1)
            r4.recipientInfos = r1
            int r1 = r3 + 1
            org.bouncycastle.asn1.DEREncodable r2 = r5.getObjectAt(r3)
            org.bouncycastle.asn1.cms.EncryptedContentInfo r2 = org.bouncycastle.asn1.cms.EncryptedContentInfo.getInstance(r2)
            r4.encryptedContentInfo = r2
            int r2 = r5.size()
            if (r2 <= r1) goto L49
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r5 = (org.bouncycastle.asn1.ASN1TaggedObject) r5
            org.bouncycastle.asn1.ASN1Set r5 = org.bouncycastle.asn1.ASN1Set.getInstance(r5, r0)
            r4.unprotectedAttrs = r5
        L49:
            return
    }

    public EnvelopedData(org.bouncycastle.asn1.cms.OriginatorInfo r5, org.bouncycastle.asn1.ASN1Set r6, org.bouncycastle.asn1.cms.EncryptedContentInfo r7, org.bouncycastle.asn1.ASN1Set r8) {
            r4 = this;
            r4.<init>()
            r0 = 2
            if (r5 != 0) goto L35
            if (r8 == 0) goto L9
            goto L35
        L9:
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r2 = 0
            r1.<init>(r2)
            r4.version = r1
            java.util.Enumeration r1 = r6.getObjects()
        L15:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L3c
            java.lang.Object r2 = r1.nextElement()
            org.bouncycastle.asn1.cms.RecipientInfo r2 = org.bouncycastle.asn1.cms.RecipientInfo.getInstance(r2)
            org.bouncycastle.asn1.DERInteger r2 = r2.getVersion()
            org.bouncycastle.asn1.DERInteger r3 = r4.version
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L15
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r0)
            goto L3a
        L35:
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r0)
        L3a:
            r4.version = r1
        L3c:
            r4.originatorInfo = r5
            r4.recipientInfos = r6
            r4.encryptedContentInfo = r7
            r4.unprotectedAttrs = r8
            return
    }

    public static org.bouncycastle.asn1.cms.EnvelopedData getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.EnvelopedData
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.EnvelopedData r0 = new org.bouncycastle.asn1.cms.EnvelopedData
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid EnvelopedData: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.EnvelopedData r3 = (org.bouncycastle.asn1.cms.EnvelopedData) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.EnvelopedData getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.EnvelopedData r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.cms.EncryptedContentInfo getEncryptedContentInfo() {
            r1 = this;
            org.bouncycastle.asn1.cms.EncryptedContentInfo r0 = r1.encryptedContentInfo
            return r0
    }

    public org.bouncycastle.asn1.cms.OriginatorInfo getOriginatorInfo() {
            r1 = this;
            org.bouncycastle.asn1.cms.OriginatorInfo r0 = r1.originatorInfo
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getRecipientInfos() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.recipientInfos
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getUnprotectedAttrs() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.unprotectedAttrs
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r5.version
            r0.add(r1)
            org.bouncycastle.asn1.cms.OriginatorInfo r1 = r5.originatorInfo
            r2 = 0
            if (r1 == 0) goto L19
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.cms.OriginatorInfo r3 = r5.originatorInfo
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L19:
            org.bouncycastle.asn1.ASN1Set r1 = r5.recipientInfos
            r0.add(r1)
            org.bouncycastle.asn1.cms.EncryptedContentInfo r1 = r5.encryptedContentInfo
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r5.unprotectedAttrs
            if (r1 == 0) goto L32
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.ASN1Set r4 = r5.unprotectedAttrs
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L32:
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
