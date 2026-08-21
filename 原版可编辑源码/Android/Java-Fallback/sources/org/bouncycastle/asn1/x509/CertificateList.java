package org.bouncycastle.asn1.x509;

public class CertificateList extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERBitString sig;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    org.bouncycastle.asn1.x509.TBSCertList tbsCertList;

    public CertificateList(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            int r0 = r3.size()
            r1 = 3
            if (r0 != r1) goto L2c
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.x509.TBSCertList r0 = org.bouncycastle.asn1.x509.TBSCertList.getInstance(r0)
            r2.tbsCertList = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r2.sigAlgId = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERBitString r3 = org.bouncycastle.asn1.DERBitString.getInstance(r3)
            r2.sig = r3
            return
        L2c:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sequence wrong size for CertificateList"
            r3.<init>(r0)
            throw r3
    }

    public static org.bouncycastle.asn1.x509.CertificateList getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.CertificateList
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.CertificateList r3 = (org.bouncycastle.asn1.x509.CertificateList) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.CertificateList r0 = new org.bouncycastle.asn1.x509.CertificateList
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
    }

    public static org.bouncycastle.asn1.x509.CertificateList getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.CertificateList r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Name getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList r0 = r1.tbsCertList
            org.bouncycastle.asn1.x509.X509Name r0 = r0.getIssuer()
            return r0
    }

    public org.bouncycastle.asn1.x509.Time getNextUpdate() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList r0 = r1.tbsCertList
            org.bouncycastle.asn1.x509.Time r0 = r0.getNextUpdate()
            return r0
    }

    public java.util.Enumeration getRevokedCertificateEnumeration() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList r0 = r1.tbsCertList
            java.util.Enumeration r0 = r0.getRevokedCertificateEnumeration()
            return r0
    }

    public org.bouncycastle.asn1.x509.TBSCertList.CRLEntry[] getRevokedCertificates() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList r0 = r1.tbsCertList
            org.bouncycastle.asn1.x509.TBSCertList$CRLEntry[] r0 = r0.getRevokedCertificates()
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getSignature() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.sig
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getSignatureAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.sigAlgId
            return r0
    }

    public org.bouncycastle.asn1.x509.TBSCertList getTBSCertList() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList r0 = r1.tbsCertList
            return r0
    }

    public org.bouncycastle.asn1.x509.Time getThisUpdate() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList r0 = r1.tbsCertList
            org.bouncycastle.asn1.x509.Time r0 = r0.getThisUpdate()
            return r0
    }

    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertList r0 = r1.tbsCertList
            int r0 = r0.getVersion()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.TBSCertList r1 = r2.tbsCertList
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.sigAlgId
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r2.sig
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
