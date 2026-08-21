package org.bouncycastle.asn1.ocsp;

public class CertID extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.AlgorithmIdentifier hashAlgorithm;
    org.bouncycastle.asn1.ASN1OctetString issuerKeyHash;
    org.bouncycastle.asn1.ASN1OctetString issuerNameHash;
    org.bouncycastle.asn1.DERInteger serialNumber;

    public CertID(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1.hashAlgorithm = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r1.issuerNameHash = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r1.issuerKeyHash = r0
            r0 = 3
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            r1.serialNumber = r2
            return
    }

    public CertID(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1, org.bouncycastle.asn1.ASN1OctetString r2, org.bouncycastle.asn1.ASN1OctetString r3, org.bouncycastle.asn1.DERInteger r4) {
            r0 = this;
            r0.<init>()
            r0.hashAlgorithm = r1
            r0.issuerNameHash = r2
            r0.issuerKeyHash = r3
            r0.serialNumber = r4
            return
    }

    public static org.bouncycastle.asn1.ocsp.CertID getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.CertID
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.CertID r0 = new org.bouncycastle.asn1.ocsp.CertID
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
            org.bouncycastle.asn1.ocsp.CertID r3 = (org.bouncycastle.asn1.ocsp.CertID) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.CertID getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.CertID r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getHashAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.hashAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getIssuerKeyHash() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.issuerKeyHash
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getIssuerNameHash() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.issuerNameHash
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.serialNumber
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.hashAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.issuerNameHash
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.issuerKeyHash
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.serialNumber
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
