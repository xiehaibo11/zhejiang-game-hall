package org.bouncycastle.asn1.x509;

public class X509CertificateStructure extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.x509.X509ObjectIdentifiers, org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers {
    org.bouncycastle.asn1.ASN1Sequence seq;
    org.bouncycastle.asn1.DERBitString sig;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    org.bouncycastle.asn1.x509.TBSCertificateStructure tbsCert;

    public X509CertificateStructure(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r2.seq = r3
            int r0 = r3.size()
            r1 = 3
            if (r0 != r1) goto L2e
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = org.bouncycastle.asn1.x509.TBSCertificateStructure.getInstance(r0)
            r2.tbsCert = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r2.sigAlgId = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERBitString r3 = org.bouncycastle.asn1.DERBitString.getInstance(r3)
            r2.sig = r3
            return
        L2e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sequence wrong size for a certificate"
            r3.<init>(r0)
            throw r3
    }

    public static org.bouncycastle.asn1.x509.X509CertificateStructure getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509CertificateStructure
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = (org.bouncycastle.asn1.x509.X509CertificateStructure) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = new org.bouncycastle.asn1.x509.X509CertificateStructure
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            if (r3 == 0) goto L34
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
        L34:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "null object in factory"
            r3.<init>(r0)
            throw r3
    }

    public static org.bouncycastle.asn1.x509.X509CertificateStructure getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.Time getEndDate() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r1.tbsCert
            org.bouncycastle.asn1.x509.Time r0 = r0.getEndDate()
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Name getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r1.tbsCert
            org.bouncycastle.asn1.x509.X509Name r0 = r0.getIssuer()
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r1.tbsCert
            org.bouncycastle.asn1.DERInteger r0 = r0.getSerialNumber()
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

    public org.bouncycastle.asn1.x509.Time getStartDate() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r1.tbsCert
            org.bouncycastle.asn1.x509.Time r0 = r0.getStartDate()
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Name getSubject() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r1.tbsCert
            org.bouncycastle.asn1.x509.X509Name r0 = r0.getSubject()
            return r0
    }

    public org.bouncycastle.asn1.x509.SubjectPublicKeyInfo getSubjectPublicKeyInfo() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r1.tbsCert
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r0.getSubjectPublicKeyInfo()
            return r0
    }

    public org.bouncycastle.asn1.x509.TBSCertificateStructure getTBSCertificate() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r1.tbsCert
            return r0
    }

    public int getVersion() {
            r1 = this;
            org.bouncycastle.asn1.x509.TBSCertificateStructure r0 = r1.tbsCert
            int r0 = r0.getVersion()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
            return r0
    }
}
