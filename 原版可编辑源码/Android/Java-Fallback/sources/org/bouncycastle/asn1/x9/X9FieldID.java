package org.bouncycastle.asn1.x9;

public class X9FieldID extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.x9.X9ObjectIdentifiers {
    private org.bouncycastle.asn1.DERObjectIdentifier id;
    private org.bouncycastle.asn1.DERObject parameters;

    public X9FieldID(int r3, int r4, int r5, int r6) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x9.X9FieldID.characteristic_two_field
            r2.id = r0
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            r0.add(r1)
            if (r5 != 0) goto L24
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.x9.X9FieldID.tpBasis
            r0.add(r3)
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            r3.<init>(r4)
            r0.add(r3)
            goto L4e
        L24:
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.x9.X9FieldID.ppBasis
            r0.add(r3)
            org.bouncycastle.asn1.ASN1EncodableVector r3 = new org.bouncycastle.asn1.ASN1EncodableVector
            r3.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r4)
            r3.add(r1)
            org.bouncycastle.asn1.DERInteger r4 = new org.bouncycastle.asn1.DERInteger
            r4.<init>(r5)
            r3.add(r4)
            org.bouncycastle.asn1.DERInteger r4 = new org.bouncycastle.asn1.DERInteger
            r4.<init>(r6)
            r3.add(r4)
            org.bouncycastle.asn1.DERSequence r4 = new org.bouncycastle.asn1.DERSequence
            r4.<init>(r3)
            r0.add(r4)
        L4e:
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence
            r3.<init>(r0)
            r2.parameters = r3
            return
    }

    public X9FieldID(java.math.BigInteger r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x9.X9FieldID.prime_field
            r1.id = r0
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.parameters = r0
            return
    }

    public X9FieldID(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r1.id = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERObject r2 = (org.bouncycastle.asn1.DERObject) r2
            r1.parameters = r2
            return
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.id
            return r0
    }

    public org.bouncycastle.asn1.DERObject getParameters() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.parameters
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.id
            r0.add(r1)
            org.bouncycastle.asn1.DERObject r1 = r2.parameters
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
