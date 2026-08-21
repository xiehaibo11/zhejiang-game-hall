package org.bouncycastle.asn1.crmf;

public class POPOSigningKey extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier algorithmIdentifier;
    private org.bouncycastle.asn1.crmf.POPOSigningKeyInput poposkInput;
    private org.bouncycastle.asn1.DERBitString signature;

    private POPOSigningKey(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r3.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L17
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.crmf.POPOSigningKeyInput r0 = org.bouncycastle.asn1.crmf.POPOSigningKeyInput.getInstance(r0)
            r2.poposkInput = r0
            r0 = 1
        L17:
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r2.algorithmIdentifier = r0
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.DERBitString r3 = org.bouncycastle.asn1.DERBitString.getInstance(r3)
            r2.signature = r3
            return
    }

    public static org.bouncycastle.asn1.crmf.POPOSigningKey getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.POPOSigningKey
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.POPOSigningKey r3 = (org.bouncycastle.asn1.crmf.POPOSigningKey) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.POPOSigningKey r0 = new org.bouncycastle.asn1.crmf.POPOSigningKey
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

    public static org.bouncycastle.asn1.crmf.POPOSigningKey getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.crmf.POPOSigningKey r0 = getInstance(r0)
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.crmf.POPOSigningKeyInput r1 = r2.poposkInput
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.algorithmIdentifier
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r2.signature
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
