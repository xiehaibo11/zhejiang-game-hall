package org.bouncycastle.asn1.cms;

public class SignedData extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Set certificates;
    private boolean certsBer;
    private org.bouncycastle.asn1.cms.ContentInfo contentInfo;
    private org.bouncycastle.asn1.ASN1Set crls;
    private boolean crlsBer;
    private org.bouncycastle.asn1.ASN1Set digestAlgorithms;
    private org.bouncycastle.asn1.ASN1Set signerInfos;
    private org.bouncycastle.asn1.DERInteger version;

    public SignedData(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            java.util.Enumeration r5 = r5.getObjects()
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r4.version = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.ASN1Set r0 = (org.bouncycastle.asn1.ASN1Set) r0
            r4.digestAlgorithms = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.cms.ContentInfo r0 = org.bouncycastle.asn1.cms.ContentInfo.getInstance(r0)
            r4.contentInfo = r0
        L21:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L73
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERObject r0 = (org.bouncycastle.asn1.DERObject) r0
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L6e
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 0
            if (r1 == 0) goto L63
            r3 = 1
            if (r1 != r3) goto L48
            boolean r1 = r0 instanceof org.bouncycastle.asn1.BERTaggedObject
            r4.crlsBer = r1
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0, r2)
            r4.crls = r0
            goto L21
        L48:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag value "
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            throw r5
        L63:
            boolean r1 = r0 instanceof org.bouncycastle.asn1.BERTaggedObject
            r4.certsBer = r1
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0, r2)
            r4.certificates = r0
            goto L21
        L6e:
            org.bouncycastle.asn1.ASN1Set r0 = (org.bouncycastle.asn1.ASN1Set) r0
            r4.signerInfos = r0
            goto L21
        L73:
            return
    }

    public SignedData(org.bouncycastle.asn1.ASN1Set r2, org.bouncycastle.asn1.cms.ContentInfo r3, org.bouncycastle.asn1.ASN1Set r4, org.bouncycastle.asn1.ASN1Set r5, org.bouncycastle.asn1.ASN1Set r6) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r3.getContentType()
            org.bouncycastle.asn1.DERInteger r0 = r1.calculateVersion(r0, r4, r5, r6)
            r1.version = r0
            r1.digestAlgorithms = r2
            r1.contentInfo = r3
            r1.certificates = r4
            r1.crls = r5
            r1.signerInfos = r6
            boolean r2 = r5 instanceof org.bouncycastle.asn1.BERSet
            r1.crlsBer = r2
            boolean r2 = r4 instanceof org.bouncycastle.asn1.BERSet
            r1.certsBer = r2
            return
    }

    private org.bouncycastle.asn1.DERInteger calculateVersion(org.bouncycastle.asn1.DERObjectIdentifier r10, org.bouncycastle.asn1.ASN1Set r11, org.bouncycastle.asn1.ASN1Set r12, org.bouncycastle.asn1.ASN1Set r13) {
            r9 = this;
            r0 = 3
            r1 = 0
            r2 = 1
            if (r11 == 0) goto L35
            java.util.Enumeration r11 = r11.getObjects()
            r3 = 0
            r4 = 0
            r5 = 0
        Lc:
            boolean r6 = r11.hasMoreElements()
            if (r6 == 0) goto L38
            java.lang.Object r6 = r11.nextElement()
            boolean r7 = r6 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r7 == 0) goto Lc
            org.bouncycastle.asn1.ASN1TaggedObject r6 = (org.bouncycastle.asn1.ASN1TaggedObject) r6
            int r7 = r6.getTagNo()
            if (r7 != r2) goto L24
            r4 = 1
            goto Lc
        L24:
            int r7 = r6.getTagNo()
            r8 = 2
            if (r7 != r8) goto L2d
            r5 = 1
            goto Lc
        L2d:
            int r6 = r6.getTagNo()
            if (r6 != r0) goto Lc
            r3 = 1
            goto Lc
        L35:
            r3 = 0
            r4 = 0
            r5 = 0
        L38:
            r11 = 5
            if (r3 == 0) goto L41
            org.bouncycastle.asn1.DERInteger r10 = new org.bouncycastle.asn1.DERInteger
            r10.<init>(r11)
            return r10
        L41:
            if (r12 == 0) goto L57
            java.util.Enumeration r12 = r12.getObjects()
        L47:
            boolean r3 = r12.hasMoreElements()
            if (r3 == 0) goto L57
            java.lang.Object r3 = r12.nextElement()
            boolean r3 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r3 == 0) goto L47
            r1 = 1
            goto L47
        L57:
            if (r1 == 0) goto L5f
            org.bouncycastle.asn1.DERInteger r10 = new org.bouncycastle.asn1.DERInteger
            r10.<init>(r11)
            return r10
        L5f:
            if (r5 == 0) goto L68
            org.bouncycastle.asn1.DERInteger r10 = new org.bouncycastle.asn1.DERInteger
            r11 = 4
            r10.<init>(r11)
            return r10
        L68:
            if (r4 == 0) goto L70
            org.bouncycastle.asn1.DERInteger r10 = new org.bouncycastle.asn1.DERInteger
            r10.<init>(r0)
            return r10
        L70:
            org.bouncycastle.asn1.DERObjectIdentifier r11 = org.bouncycastle.asn1.cms.CMSObjectIdentifiers.data
            boolean r10 = r10.equals(r11)
            if (r10 == 0) goto L8a
            boolean r10 = r9.checkForVersion3(r13)
            if (r10 == 0) goto L84
            org.bouncycastle.asn1.DERInteger r10 = new org.bouncycastle.asn1.DERInteger
            r10.<init>(r0)
            return r10
        L84:
            org.bouncycastle.asn1.DERInteger r10 = new org.bouncycastle.asn1.DERInteger
            r10.<init>(r2)
            return r10
        L8a:
            org.bouncycastle.asn1.DERInteger r10 = new org.bouncycastle.asn1.DERInteger
            r10.<init>(r0)
            return r10
    }

    private boolean checkForVersion3(org.bouncycastle.asn1.ASN1Set r3) {
            r2 = this;
            java.util.Enumeration r3 = r3.getObjects()
        L4:
            boolean r0 = r3.hasMoreElements()
            if (r0 == 0) goto L23
            java.lang.Object r0 = r3.nextElement()
            org.bouncycastle.asn1.cms.SignerInfo r0 = org.bouncycastle.asn1.cms.SignerInfo.getInstance(r0)
            org.bouncycastle.asn1.DERInteger r0 = r0.getVersion()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            r1 = 3
            if (r0 != r1) goto L4
            r3 = 1
            return r3
        L23:
            r3 = 0
            return r3
    }

    public static org.bouncycastle.asn1.cms.SignedData getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.SignedData
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cms.SignedData r3 = (org.bouncycastle.asn1.cms.SignedData) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.SignedData r0 = new org.bouncycastle.asn1.cms.SignedData
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

    public org.bouncycastle.asn1.ASN1Set getCRLs() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.crls
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getCertificates() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.certificates
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getDigestAlgorithms() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.digestAlgorithms
            return r0
    }

    public org.bouncycastle.asn1.cms.ContentInfo getEncapContentInfo() {
            r1 = this;
            org.bouncycastle.asn1.cms.ContentInfo r0 = r1.contentInfo
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getSignerInfos() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.signerInfos
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
            org.bouncycastle.asn1.ASN1Set r1 = r5.digestAlgorithms
            r0.add(r1)
            org.bouncycastle.asn1.cms.ContentInfo r1 = r5.contentInfo
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r5.certificates
            r2 = 0
            if (r1 == 0) goto L2f
            boolean r1 = r5.certsBer
            if (r1 == 0) goto L25
            org.bouncycastle.asn1.BERTaggedObject r1 = new org.bouncycastle.asn1.BERTaggedObject
            org.bouncycastle.asn1.ASN1Set r3 = r5.certificates
            r1.<init>(r2, r2, r3)
            goto L2c
        L25:
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Set r3 = r5.certificates
            r1.<init>(r2, r2, r3)
        L2c:
            r0.add(r1)
        L2f:
            org.bouncycastle.asn1.ASN1Set r1 = r5.crls
            if (r1 == 0) goto L4a
            boolean r1 = r5.crlsBer
            r3 = 1
            if (r1 == 0) goto L40
            org.bouncycastle.asn1.BERTaggedObject r1 = new org.bouncycastle.asn1.BERTaggedObject
            org.bouncycastle.asn1.ASN1Set r4 = r5.crls
            r1.<init>(r2, r3, r4)
            goto L47
        L40:
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Set r4 = r5.crls
            r1.<init>(r2, r3, r4)
        L47:
            r0.add(r1)
        L4a:
            org.bouncycastle.asn1.ASN1Set r1 = r5.signerInfos
            r0.add(r1)
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
