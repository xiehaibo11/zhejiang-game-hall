package org.bouncycastle.asn1.esf;

public class SignaturePolicyId extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.esf.OtherHashAlgAndValue sigPolicyHash;
    private org.bouncycastle.asn1.DERObjectIdentifier sigPolicyId;
    private org.bouncycastle.asn1.esf.SigPolicyQualifiers sigPolicyQualifiers;

    public SignaturePolicyId(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 3
            r2 = 2
            if (r0 == r2) goto L2d
            int r0 = r4.size()
            if (r0 != r1) goto L12
            goto L2d
        L12:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r4 = r4.size()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L2d:
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r3.sigPolicyId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.esf.OtherHashAlgAndValue r0 = org.bouncycastle.asn1.esf.OtherHashAlgAndValue.getInstance(r0)
            r3.sigPolicyHash = r0
            int r0 = r4.size()
            if (r0 != r1) goto L53
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.esf.SigPolicyQualifiers r4 = org.bouncycastle.asn1.esf.SigPolicyQualifiers.getInstance(r4)
            r3.sigPolicyQualifiers = r4
        L53:
            return
    }

    public SignaturePolicyId(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.esf.OtherHashAlgAndValue r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public SignaturePolicyId(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.esf.OtherHashAlgAndValue r2, org.bouncycastle.asn1.esf.SigPolicyQualifiers r3) {
            r0 = this;
            r0.<init>()
            r0.sigPolicyId = r1
            r0.sigPolicyHash = r2
            r0.sigPolicyQualifiers = r3
            return
    }

    public static org.bouncycastle.asn1.esf.SignaturePolicyId getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.esf.SignaturePolicyId
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.esf.SignaturePolicyId r0 = new org.bouncycastle.asn1.esf.SignaturePolicyId
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown object in 'SignaturePolicyId' factory : "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L37:
            org.bouncycastle.asn1.esf.SignaturePolicyId r3 = (org.bouncycastle.asn1.esf.SignaturePolicyId) r3
            return r3
    }

    public org.bouncycastle.asn1.esf.OtherHashAlgAndValue getSigPolicyHash() {
            r1 = this;
            org.bouncycastle.asn1.esf.OtherHashAlgAndValue r0 = r1.sigPolicyHash
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getSigPolicyId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.sigPolicyId
            return r0
    }

    public org.bouncycastle.asn1.esf.SigPolicyQualifiers getSigPolicyQualifiers() {
            r1 = this;
            org.bouncycastle.asn1.esf.SigPolicyQualifiers r0 = r1.sigPolicyQualifiers
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.sigPolicyId
            r0.add(r1)
            org.bouncycastle.asn1.esf.OtherHashAlgAndValue r1 = r2.sigPolicyHash
            r0.add(r1)
            org.bouncycastle.asn1.esf.SigPolicyQualifiers r1 = r2.sigPolicyQualifiers
            if (r1 == 0) goto L16
            r0.add(r1)
        L16:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
