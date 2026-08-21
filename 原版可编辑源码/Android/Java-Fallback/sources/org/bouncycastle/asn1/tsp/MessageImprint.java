package org.bouncycastle.asn1.tsp;

public class MessageImprint extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.AlgorithmIdentifier hashAlgorithm;
    byte[] hashedMessage;

    public MessageImprint(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1.hashAlgorithm = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r2 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r2)
            byte[] r2 = r2.getOctets()
            r1.hashedMessage = r2
            return
    }

    public MessageImprint(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1, byte[] r2) {
            r0 = this;
            r0.<init>()
            r0.hashAlgorithm = r1
            r0.hashedMessage = r2
            return
    }

    public static org.bouncycastle.asn1.tsp.MessageImprint getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1b
            boolean r0 = r1 instanceof org.bouncycastle.asn1.tsp.MessageImprint
            if (r0 == 0) goto L7
            goto L1b
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.tsp.MessageImprint r0 = new org.bouncycastle.asn1.tsp.MessageImprint
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Bad object in factory."
            r1.<init>(r0)
            throw r1
        L1b:
            org.bouncycastle.asn1.tsp.MessageImprint r1 = (org.bouncycastle.asn1.tsp.MessageImprint) r1
            return r1
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getHashAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.hashAlgorithm
            return r0
    }

    public byte[] getHashedMessage() {
            r1 = this;
            byte[] r0 = r1.hashedMessage
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.hashAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            byte[] r2 = r3.hashedMessage
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
