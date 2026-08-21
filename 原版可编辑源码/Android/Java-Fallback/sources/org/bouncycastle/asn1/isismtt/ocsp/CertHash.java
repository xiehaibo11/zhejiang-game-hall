package org.bouncycastle.asn1.isismtt.ocsp;

public class CertHash extends org.bouncycastle.asn1.ASN1Encodable {
    private byte[] certificateHash;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier hashAlgorithm;

    private CertHash(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 2
            if (r0 != r1) goto L25
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.hashAlgorithm = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r4 = org.bouncycastle.asn1.DEROctetString.getInstance(r4)
            byte[] r4 = r4.getOctets()
            r3.certificateHash = r4
            return
        L25:
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
    }

    public CertHash(org.bouncycastle.asn1.x509.AlgorithmIdentifier r3, byte[] r4) {
            r2 = this;
            r2.<init>()
            r2.hashAlgorithm = r3
            int r3 = r4.length
            byte[] r3 = new byte[r3]
            r2.certificateHash = r3
            int r0 = r4.length
            r1 = 0
            java.lang.System.arraycopy(r4, r1, r3, r1, r0)
            return
    }

    public static org.bouncycastle.asn1.isismtt.ocsp.CertHash getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.ocsp.CertHash
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.isismtt.ocsp.CertHash r0 = new org.bouncycastle.asn1.isismtt.ocsp.CertHash
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.isismtt.ocsp.CertHash r3 = (org.bouncycastle.asn1.isismtt.ocsp.CertHash) r3
            return r3
    }

    public byte[] getCertificateHash() {
            r1 = this;
            byte[] r0 = r1.certificateHash
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getHashAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.hashAlgorithm
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
            byte[] r2 = r3.certificateHash
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
