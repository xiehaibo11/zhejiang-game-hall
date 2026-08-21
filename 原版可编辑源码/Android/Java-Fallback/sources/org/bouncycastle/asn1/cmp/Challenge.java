package org.bouncycastle.asn1.cmp;

public class Challenge extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1OctetString challenge;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier owf;
    private org.bouncycastle.asn1.ASN1OctetString witness;

    private Challenge(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 0
            r2 = 3
            if (r0 != r2) goto L16
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.owf = r0
            r1 = 1
        L16:
            int r0 = r1 + 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r1)
            r3.witness = r1
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r4 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r4)
            r3.challenge = r4
            return
    }

    private void addOptional(org.bouncycastle.asn1.ASN1EncodableVector r1, org.bouncycastle.asn1.ASN1Encodable r2) {
            r0 = this;
            if (r2 == 0) goto L5
            r1.add(r2)
        L5:
            return
    }

    public static org.bouncycastle.asn1.cmp.Challenge getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.Challenge
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.Challenge r3 = (org.bouncycastle.asn1.cmp.Challenge) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.Challenge r0 = new org.bouncycastle.asn1.cmp.Challenge
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

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getOwf() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.owf
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.owf
            r2.addOptional(r0, r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.witness
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.challenge
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
