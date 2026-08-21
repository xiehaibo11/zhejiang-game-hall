package org.bouncycastle.asn1.esf;

public class CommitmentTypeIndication extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier commitmentTypeId;
    private org.bouncycastle.asn1.ASN1Sequence commitmentTypeQualifier;

    public CommitmentTypeIndication(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r2.commitmentTypeId = r0
            int r0 = r3.size()
            r1 = 1
            if (r0 <= r1) goto L1b
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r2.commitmentTypeQualifier = r3
        L1b:
            return
    }

    public CommitmentTypeIndication(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            r0 = this;
            r0.<init>()
            r0.commitmentTypeId = r1
            return
    }

    public CommitmentTypeIndication(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.ASN1Sequence r2) {
            r0 = this;
            r0.<init>()
            r0.commitmentTypeId = r1
            r0.commitmentTypeQualifier = r2
            return
    }

    public static org.bouncycastle.asn1.esf.CommitmentTypeIndication getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L11
            boolean r0 = r1 instanceof org.bouncycastle.asn1.esf.CommitmentTypeIndication
            if (r0 == 0) goto L7
            goto L11
        L7:
            org.bouncycastle.asn1.esf.CommitmentTypeIndication r0 = new org.bouncycastle.asn1.esf.CommitmentTypeIndication
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
        L11:
            org.bouncycastle.asn1.esf.CommitmentTypeIndication r1 = (org.bouncycastle.asn1.esf.CommitmentTypeIndication) r1
            return r1
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getCommitmentTypeId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.commitmentTypeId
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getCommitmentTypeQualifier() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.commitmentTypeQualifier
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.commitmentTypeId
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.commitmentTypeQualifier
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
