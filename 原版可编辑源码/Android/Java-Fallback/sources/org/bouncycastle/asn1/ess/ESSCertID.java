package org.bouncycastle.asn1.ess;

public class ESSCertID extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1OctetString certHash;
    private org.bouncycastle.asn1.x509.IssuerSerial issuerSerial;

    public ESSCertID(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 1
            if (r0 < r1) goto L2d
            int r0 = r4.size()
            r2 = 2
            if (r0 > r2) goto L2d
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0)
            r3.certHash = r0
            int r0 = r4.size()
            if (r0 <= r1) goto L2c
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.x509.IssuerSerial r4 = org.bouncycastle.asn1.x509.IssuerSerial.getInstance(r4)
            r3.issuerSerial = r4
        L2c:
            return
        L2d:
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

    public ESSCertID(byte[] r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.certHash = r0
            return
    }

    public ESSCertID(byte[] r2, org.bouncycastle.asn1.x509.IssuerSerial r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.certHash = r0
            r1.issuerSerial = r3
            return
    }

    public static org.bouncycastle.asn1.ess.ESSCertID getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ess.ESSCertID
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ess.ESSCertID r0 = new org.bouncycastle.asn1.ess.ESSCertID
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'ESSCertID' factory : "
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
            org.bouncycastle.asn1.ess.ESSCertID r3 = (org.bouncycastle.asn1.ess.ESSCertID) r3
            return r3
    }

    public byte[] getCertHash() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.certHash
            byte[] r0 = r0.getOctets()
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
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.certHash
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
