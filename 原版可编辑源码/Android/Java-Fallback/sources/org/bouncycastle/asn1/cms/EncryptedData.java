package org.bouncycastle.asn1.cms;

public class EncryptedData extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.cms.EncryptedContentInfo encryptedContentInfo;
    private org.bouncycastle.asn1.ASN1Set unprotectedAttrs;
    private org.bouncycastle.asn1.DERInteger version;

    private EncryptedData(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r2.version = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.cms.EncryptedContentInfo r0 = org.bouncycastle.asn1.cms.EncryptedContentInfo.getInstance(r0)
            r2.encryptedContentInfo = r0
            int r0 = r3.size()
            r1 = 3
            if (r0 != r1) goto L2b
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Set r3 = org.bouncycastle.asn1.ASN1Set.getInstance(r3)
            r2.unprotectedAttrs = r3
        L2b:
            return
    }

    public EncryptedData(org.bouncycastle.asn1.cms.EncryptedContentInfo r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public EncryptedData(org.bouncycastle.asn1.cms.EncryptedContentInfo r3, org.bouncycastle.asn1.ASN1Set r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            if (r4 != 0) goto L9
            r1 = 0
            goto La
        L9:
            r1 = 2
        La:
            r0.<init>(r1)
            r2.version = r0
            r2.encryptedContentInfo = r3
            r2.unprotectedAttrs = r4
            return
    }

    public static org.bouncycastle.asn1.cms.EncryptedData getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.EncryptedData
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cms.EncryptedData r3 = (org.bouncycastle.asn1.cms.EncryptedData) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.EncryptedData r0 = new org.bouncycastle.asn1.cms.EncryptedData
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid EncryptedData: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.cms.EncryptedContentInfo getEncryptedContentInfo() {
            r1 = this;
            org.bouncycastle.asn1.cms.EncryptedContentInfo r0 = r1.encryptedContentInfo
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
            org.bouncycastle.asn1.cms.EncryptedContentInfo r1 = r5.encryptedContentInfo
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r5.unprotectedAttrs
            if (r1 == 0) goto L1f
            org.bouncycastle.asn1.BERTaggedObject r1 = new org.bouncycastle.asn1.BERTaggedObject
            r2 = 0
            r3 = 1
            org.bouncycastle.asn1.ASN1Set r4 = r5.unprotectedAttrs
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1f:
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
