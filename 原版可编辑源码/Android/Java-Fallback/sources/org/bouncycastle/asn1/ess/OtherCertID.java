package org.bouncycastle.asn1.ess;

public class OtherCertID extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.IssuerSerial issuerSerial;
    private org.bouncycastle.asn1.ASN1Encodable otherCertHash;

    public OtherCertID(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 1
            if (r0 < r1) goto L43
            int r0 = r4.size()
            r2 = 2
            if (r0 > r2) goto L43
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            boolean r2 = r2 instanceof org.bouncycastle.asn1.ASN1OctetString
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            if (r2 == 0) goto L27
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0)
            goto L2b
        L27:
            org.bouncycastle.asn1.x509.DigestInfo r0 = org.bouncycastle.asn1.x509.DigestInfo.getInstance(r0)
        L2b:
            r3.otherCertHash = r0
            int r0 = r4.size()
            if (r0 <= r1) goto L42
            org.bouncycastle.asn1.x509.IssuerSerial r0 = new org.bouncycastle.asn1.x509.IssuerSerial
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            r0.<init>(r4)
            r3.issuerSerial = r0
        L42:
            return
        L43:
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

    public OtherCertID(org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, byte[] r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.DigestInfo r0 = new org.bouncycastle.asn1.x509.DigestInfo
            r0.<init>(r2, r3)
            r1.otherCertHash = r0
            return
    }

    public OtherCertID(org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, byte[] r3, org.bouncycastle.asn1.x509.IssuerSerial r4) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.DigestInfo r0 = new org.bouncycastle.asn1.x509.DigestInfo
            r0.<init>(r2, r3)
            r1.otherCertHash = r0
            r1.issuerSerial = r4
            return
    }

    public static org.bouncycastle.asn1.ess.OtherCertID getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ess.OtherCertID
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ess.OtherCertID r0 = new org.bouncycastle.asn1.ess.OtherCertID
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'OtherCertID' factory : "
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
            org.bouncycastle.asn1.ess.OtherCertID r3 = (org.bouncycastle.asn1.ess.OtherCertID) r3
            return r3
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getAlgorithmHash() {
            r2 = this;
            org.bouncycastle.asn1.ASN1Encodable r0 = r2.otherCertHash
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L12
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            java.lang.String r1 = "1.3.14.3.2.26"
            r0.<init>(r1)
            return r0
        L12:
            org.bouncycastle.asn1.ASN1Encodable r0 = r2.otherCertHash
            org.bouncycastle.asn1.x509.DigestInfo r0 = org.bouncycastle.asn1.x509.DigestInfo.getInstance(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getAlgorithmId()
            return r0
    }

    public byte[] getCertHash() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.otherCertHash
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.otherCertHash
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            byte[] r0 = r0.getOctets()
            return r0
        L17:
            org.bouncycastle.asn1.ASN1Encodable r0 = r1.otherCertHash
            org.bouncycastle.asn1.x509.DigestInfo r0 = org.bouncycastle.asn1.x509.DigestInfo.getInstance(r0)
            byte[] r0 = r0.getDigest()
            return r0
    }

    public org.bouncycastle.asn1.x509.IssuerSerial getIssuerSerial() {
            r1 = this;
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r1.issuerSerial
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1Encodable r1 = r2.otherCertHash
            r0.add(r1)
            org.bouncycastle.asn1.x509.IssuerSerial r1 = r2.issuerSerial
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
