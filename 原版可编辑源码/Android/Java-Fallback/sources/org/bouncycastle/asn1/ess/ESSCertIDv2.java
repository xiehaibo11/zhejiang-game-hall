package org.bouncycastle.asn1.ess;

public class ESSCertIDv2 extends org.bouncycastle.asn1.ASN1Encodable {
    private static final org.bouncycastle.asn1.x509.AlgorithmIdentifier DEFAULT_ALG_ID = null;
    private byte[] certHash;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier hashAlgorithm;
    private org.bouncycastle.asn1.x509.IssuerSerial issuerSerial;

    static {
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_sha256
            org.bouncycastle.asn1.DERNull r2 = org.bouncycastle.asn1.DERNull.INSTANCE
            r0.<init>(r1, r2)
            org.bouncycastle.asn1.ess.ESSCertIDv2.DEFAULT_ALG_ID = r0
            return
    }

    public ESSCertIDv2(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 2
            if (r0 == r1) goto L2d
            int r0 = r4.size()
            r1 = 3
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
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r1 == 0) goto L3b
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = org.bouncycastle.asn1.ess.ESSCertIDv2.DEFAULT_ALG_ID
            r3.hashAlgorithm = r1
            goto L4a
        L3b:
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.hashAlgorithm = r0
            r0 = 1
        L4a:
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0)
            byte[] r0 = r0.getOctets()
            r3.certHash = r0
            int r0 = r4.size()
            if (r0 <= r1) goto L77
            org.bouncycastle.asn1.x509.IssuerSerial r0 = new org.bouncycastle.asn1.x509.IssuerSerial
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERObject r4 = r4.getDERObject()
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            r0.<init>(r4)
            r3.issuerSerial = r0
        L77:
            return
    }

    public ESSCertIDv2(org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, byte[] r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ESSCertIDv2(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1, byte[] r2, org.bouncycastle.asn1.x509.IssuerSerial r3) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto L7
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = org.bouncycastle.asn1.ess.ESSCertIDv2.DEFAULT_ALG_ID
        L7:
            r0.hashAlgorithm = r1
            r0.certHash = r2
            r0.issuerSerial = r3
            return
    }

    public static org.bouncycastle.asn1.ess.ESSCertIDv2 getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ess.ESSCertIDv2
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ess.ESSCertIDv2 r0 = new org.bouncycastle.asn1.ess.ESSCertIDv2
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'ESSCertIDv2' factory : "
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
            org.bouncycastle.asn1.ess.ESSCertIDv2 r3 = (org.bouncycastle.asn1.ess.ESSCertIDv2) r3
            return r3
    }

    public byte[] getCertHash() {
            r1 = this;
            byte[] r0 = r1.certHash
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getHashAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.hashAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.x509.IssuerSerial getIssuerSerial() {
            r1 = this;
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r1.issuerSerial
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.hashAlgorithm
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.ess.ESSCertIDv2.DEFAULT_ALG_ID
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L14
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.hashAlgorithm
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            byte[] r2 = r3.certHash
            r1.<init>(r2)
            org.bouncycastle.asn1.DERObject r1 = r1.toASN1Object()
            r0.add(r1)
            org.bouncycastle.asn1.x509.IssuerSerial r1 = r3.issuerSerial
            if (r1 == 0) goto L29
            r0.add(r1)
        L29:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
