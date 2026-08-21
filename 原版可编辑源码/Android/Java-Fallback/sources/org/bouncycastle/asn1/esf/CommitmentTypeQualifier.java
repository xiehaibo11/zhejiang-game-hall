package org.bouncycastle.asn1.esf;

public class CommitmentTypeQualifier extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier commitmentTypeIdentifier;
    private org.bouncycastle.asn1.DEREncodable qualifier;

    public CommitmentTypeQualifier(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r2.commitmentTypeIdentifier = r0
            int r0 = r3.size()
            r1 = 1
            if (r0 <= r1) goto L19
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            r2.qualifier = r3
        L19:
            return
    }

    public CommitmentTypeQualifier(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public CommitmentTypeQualifier(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DEREncodable r2) {
            r0 = this;
            r0.<init>()
            r0.commitmentTypeIdentifier = r1
            r0.qualifier = r2
            return
    }

    public static org.bouncycastle.asn1.esf.CommitmentTypeQualifier getInstance(java.lang.Object r1) {
            boolean r0 = r1 instanceof org.bouncycastle.asn1.esf.CommitmentTypeQualifier
            if (r0 != 0) goto L1b
            if (r1 != 0) goto L7
            goto L1b
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.esf.CommitmentTypeQualifier r0 = new org.bouncycastle.asn1.esf.CommitmentTypeQualifier
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance."
            r1.<init>(r0)
            throw r1
        L1b:
            org.bouncycastle.asn1.esf.CommitmentTypeQualifier r1 = (org.bouncycastle.asn1.esf.CommitmentTypeQualifier) r1
            return r1
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getCommitmentTypeIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.commitmentTypeIdentifier
            return r0
    }

    public org.bouncycastle.asn1.DEREncodable getQualifier() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.qualifier
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.commitmentTypeIdentifier
            r0.add(r1)
            org.bouncycastle.asn1.DEREncodable r1 = r2.qualifier
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
