package org.bouncycastle.asn1.esf;

public class SignaturePolicyIdentifier extends org.bouncycastle.asn1.ASN1Encodable {
    private boolean isSignaturePolicyImplied;
    private org.bouncycastle.asn1.esf.SignaturePolicyId signaturePolicyId;

    public SignaturePolicyIdentifier() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.isSignaturePolicyImplied = r0
            return
    }

    public SignaturePolicyIdentifier(org.bouncycastle.asn1.esf.SignaturePolicyId r1) {
            r0 = this;
            r0.<init>()
            r0.signaturePolicyId = r1
            r1 = 0
            r0.isSignaturePolicyImplied = r1
            return
    }

    public static org.bouncycastle.asn1.esf.SignaturePolicyIdentifier getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L43
            boolean r0 = r3 instanceof org.bouncycastle.asn1.esf.SignaturePolicyIdentifier
            if (r0 == 0) goto L7
            goto L43
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.esf.SignaturePolicyIdentifier r0 = new org.bouncycastle.asn1.esf.SignaturePolicyIdentifier
            org.bouncycastle.asn1.esf.SignaturePolicyId r3 = org.bouncycastle.asn1.esf.SignaturePolicyId.getInstance(r3)
            r0.<init>(r3)
            return r0
        L15:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Null
            if (r0 == 0) goto L1f
            org.bouncycastle.asn1.esf.SignaturePolicyIdentifier r3 = new org.bouncycastle.asn1.esf.SignaturePolicyIdentifier
            r3.<init>()
            return r3
        L1f:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'SignaturePolicyIdentifier' factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L43:
            org.bouncycastle.asn1.esf.SignaturePolicyIdentifier r3 = (org.bouncycastle.asn1.esf.SignaturePolicyIdentifier) r3
            return r3
    }

    public org.bouncycastle.asn1.esf.SignaturePolicyId getSignaturePolicyId() {
            r1 = this;
            org.bouncycastle.asn1.esf.SignaturePolicyId r0 = r1.signaturePolicyId
            return r0
    }

    public boolean isSignaturePolicyImplied() {
            r1 = this;
            boolean r0 = r1.isSignaturePolicyImplied
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            boolean r0 = r1.isSignaturePolicyImplied
            if (r0 == 0) goto La
            org.bouncycastle.asn1.DERNull r0 = new org.bouncycastle.asn1.DERNull
            r0.<init>()
            return r0
        La:
            org.bouncycastle.asn1.esf.SignaturePolicyId r0 = r1.signaturePolicyId
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
    }
}
