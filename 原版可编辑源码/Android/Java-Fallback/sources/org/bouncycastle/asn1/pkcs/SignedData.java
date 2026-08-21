package org.bouncycastle.asn1.pkcs;

public class SignedData extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers {
    private org.bouncycastle.asn1.ASN1Set certificates;
    private org.bouncycastle.asn1.pkcs.ContentInfo contentInfo;
    private org.bouncycastle.asn1.ASN1Set crls;
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
            org.bouncycastle.asn1.pkcs.ContentInfo r0 = org.bouncycastle.asn1.pkcs.ContentInfo.getInstance(r0)
            r4.contentInfo = r0
        L21:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L6b
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERObject r0 = (org.bouncycastle.asn1.DERObject) r0
            boolean r1 = r0 instanceof org.bouncycastle.asn1.DERTaggedObject
            if (r1 == 0) goto L66
            org.bouncycastle.asn1.DERTaggedObject r0 = (org.bouncycastle.asn1.DERTaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 0
            if (r1 == 0) goto L5f
            r3 = 1
            if (r1 != r3) goto L44
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0, r2)
            r4.crls = r0
            goto L21
        L44:
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
        L5f:
            org.bouncycastle.asn1.ASN1Set r0 = org.bouncycastle.asn1.ASN1Set.getInstance(r0, r2)
            r4.certificates = r0
            goto L21
        L66:
            org.bouncycastle.asn1.ASN1Set r0 = (org.bouncycastle.asn1.ASN1Set) r0
            r4.signerInfos = r0
            goto L21
        L6b:
            return
    }

    public SignedData(org.bouncycastle.asn1.DERInteger r1, org.bouncycastle.asn1.ASN1Set r2, org.bouncycastle.asn1.pkcs.ContentInfo r3, org.bouncycastle.asn1.ASN1Set r4, org.bouncycastle.asn1.ASN1Set r5, org.bouncycastle.asn1.ASN1Set r6) {
            r0 = this;
            r0.<init>()
            r0.version = r1
            r0.digestAlgorithms = r2
            r0.contentInfo = r3
            r0.certificates = r4
            r0.crls = r5
            r0.signerInfos = r6
            return
    }

    public static org.bouncycastle.asn1.pkcs.SignedData getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.SignedData
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.SignedData r3 = (org.bouncycastle.asn1.pkcs.SignedData) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.SignedData r0 = new org.bouncycastle.asn1.pkcs.SignedData
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
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

    public org.bouncycastle.asn1.pkcs.ContentInfo getContentInfo() {
            r1 = this;
            org.bouncycastle.asn1.pkcs.ContentInfo r0 = r1.contentInfo
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getDigestAlgorithms() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.digestAlgorithms
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
            org.bouncycastle.asn1.pkcs.ContentInfo r1 = r5.contentInfo
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r5.certificates
            r2 = 0
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Set r3 = r5.certificates
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.ASN1Set r1 = r5.crls
            if (r1 == 0) goto L32
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.ASN1Set r4 = r5.crls
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L32:
            org.bouncycastle.asn1.ASN1Set r1 = r5.signerInfos
            r0.add(r1)
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
