package org.bouncycastle.asn1.x509;

public class NameConstraints extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence excluded;
    private org.bouncycastle.asn1.ASN1Sequence permitted;

    public NameConstraints(java.util.Vector r1, java.util.Vector r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto Lb
            org.bouncycastle.asn1.DERSequence r1 = r0.createSequence(r1)
            r0.permitted = r1
        Lb:
            if (r2 == 0) goto L13
            org.bouncycastle.asn1.DERSequence r1 = r0.createSequence(r2)
            r0.excluded = r1
        L13:
            return
    }

    public NameConstraints(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            java.util.Enumeration r5 = r5.getObjects()
        L7:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L2e
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0)
            int r1 = r0.getTagNo()
            r2 = 0
            if (r1 == 0) goto L27
            r3 = 1
            if (r1 == r3) goto L20
            goto L7
        L20:
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            r4.excluded = r0
            goto L7
        L27:
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            r4.permitted = r0
            goto L7
        L2e:
            return
    }

    private org.bouncycastle.asn1.DERSequence createSequence(java.util.Vector r3) {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            java.util.Enumeration r3 = r3.elements()
        L9:
            boolean r1 = r3.hasMoreElements()
            if (r1 == 0) goto L19
            java.lang.Object r1 = r3.nextElement()
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = (org.bouncycastle.asn1.x509.GeneralSubtree) r1
            r0.add(r1)
            goto L9
        L19:
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence
            r3.<init>(r0)
            return r3
    }

    public org.bouncycastle.asn1.ASN1Sequence getExcludedSubtrees() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.excluded
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getPermittedSubtrees() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.permitted
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.permitted
            r2 = 0
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Sequence r3 = r5.permitted
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.excluded
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.ASN1Sequence r4 = r5.excluded
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
