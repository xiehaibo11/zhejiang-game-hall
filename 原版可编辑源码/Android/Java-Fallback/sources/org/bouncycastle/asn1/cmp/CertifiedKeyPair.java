package org.bouncycastle.asn1.cmp;

public class CertifiedKeyPair extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.cmp.CertOrEncCert certOrEncCert;
    private org.bouncycastle.asn1.crmf.EncryptedValue privateKey;
    private org.bouncycastle.asn1.crmf.PKIPublicationInfo publicationInfo;

    private CertifiedKeyPair(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.cmp.CertOrEncCert r0 = org.bouncycastle.asn1.cmp.CertOrEncCert.getInstance(r0)
            r3.certOrEncCert = r0
            int r0 = r4.size()
            r1 = 2
            if (r0 < r1) goto L51
            int r0 = r4.size()
            r2 = 1
            if (r0 != r1) goto L35
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r4 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r4)
            int r0 = r4.getTagNo()
            org.bouncycastle.asn1.DERObject r4 = r4.getObject()
            if (r0 != 0) goto L4b
            org.bouncycastle.asn1.crmf.EncryptedValue r4 = org.bouncycastle.asn1.crmf.EncryptedValue.getInstance(r4)
            r3.privateKey = r4
            goto L51
        L35:
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0)
            org.bouncycastle.asn1.crmf.EncryptedValue r0 = org.bouncycastle.asn1.crmf.EncryptedValue.getInstance(r0)
            r3.privateKey = r0
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r4 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r4)
        L4b:
            org.bouncycastle.asn1.crmf.PKIPublicationInfo r4 = org.bouncycastle.asn1.crmf.PKIPublicationInfo.getInstance(r4)
            r3.publicationInfo = r4
        L51:
            return
    }

    public static org.bouncycastle.asn1.cmp.CertifiedKeyPair getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.CertifiedKeyPair
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.CertifiedKeyPair r3 = (org.bouncycastle.asn1.cmp.CertifiedKeyPair) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.CertifiedKeyPair r0 = new org.bouncycastle.asn1.cmp.CertifiedKeyPair
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.cmp.CertOrEncCert getCertOrEncCert() {
            r1 = this;
            org.bouncycastle.asn1.cmp.CertOrEncCert r0 = r1.certOrEncCert
            return r0
    }

    public org.bouncycastle.asn1.crmf.EncryptedValue getPrivateKey() {
            r1 = this;
            org.bouncycastle.asn1.crmf.EncryptedValue r0 = r1.privateKey
            return r0
    }

    public org.bouncycastle.asn1.crmf.PKIPublicationInfo getPublicationInfo() {
            r1 = this;
            org.bouncycastle.asn1.crmf.PKIPublicationInfo r0 = r1.publicationInfo
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.cmp.CertOrEncCert r1 = r5.certOrEncCert
            r0.add(r1)
            org.bouncycastle.asn1.crmf.EncryptedValue r1 = r5.privateKey
            r2 = 1
            if (r1 == 0) goto L1a
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.crmf.EncryptedValue r4 = r5.privateKey
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1a:
            org.bouncycastle.asn1.crmf.PKIPublicationInfo r1 = r5.publicationInfo
            if (r1 == 0) goto L28
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.crmf.PKIPublicationInfo r3 = r5.publicationInfo
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L28:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
