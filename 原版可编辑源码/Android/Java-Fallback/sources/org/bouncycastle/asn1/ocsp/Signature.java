package org.bouncycastle.asn1.ocsp;

public class Signature extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Sequence certs;
    org.bouncycastle.asn1.DERBitString signature;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier signatureAlgorithm;

    public Signature(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.signatureAlgorithm = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERBitString r1 = (org.bouncycastle.asn1.DERBitString) r1
            r3.signature = r1
            int r1 = r4.size()
            r2 = 3
            if (r1 != r2) goto L2b
            r1 = 2
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r4 = (org.bouncycastle.asn1.ASN1TaggedObject) r4
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4, r0)
            r3.certs = r4
        L2b:
            return
    }

    public Signature(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1, org.bouncycastle.asn1.DERBitString r2) {
            r0 = this;
            r0.<init>()
            r0.signatureAlgorithm = r1
            r0.signature = r2
            return
    }

    public Signature(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1, org.bouncycastle.asn1.DERBitString r2, org.bouncycastle.asn1.ASN1Sequence r3) {
            r0 = this;
            r0.<init>()
            r0.signatureAlgorithm = r1
            r0.signature = r2
            r0.certs = r3
            return
    }

    public static org.bouncycastle.asn1.ocsp.Signature getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.Signature
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.Signature r0 = new org.bouncycastle.asn1.ocsp.Signature
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.ocsp.Signature r3 = (org.bouncycastle.asn1.ocsp.Signature) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.Signature getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.Signature r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getCerts() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.certs
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getSignature() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.signature
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getSignatureAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.signatureAlgorithm
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r5.signatureAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r5.signature
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.certs
            if (r1 == 0) goto L1f
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 1
            r3 = 0
            org.bouncycastle.asn1.ASN1Sequence r4 = r5.certs
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1f:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
