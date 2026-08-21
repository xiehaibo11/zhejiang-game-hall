package org.bouncycastle.asn1.isismtt.ocsp;

public class RequestedCertificate extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    public static final int attributeCertificate = 1;
    public static final int certificate = -1;
    public static final int publicKeyCertificate = 0;
    private byte[] attributeCert;
    private org.bouncycastle.asn1.x509.X509CertificateStructure cert;
    private byte[] publicKeyCert;

    public RequestedCertificate(int r3, byte[] r4) {
            r2 = this;
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            r1.<init>(r4)
            r0.<init>(r3, r1)
            r2.<init>(r0)
            return
    }

    private RequestedCertificate(org.bouncycastle.asn1.ASN1TaggedObject r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.getTagNo()
            r1 = 1
            if (r0 != 0) goto L15
            org.bouncycastle.asn1.ASN1OctetString r4 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r4, r1)
            byte[] r4 = r4.getOctets()
            r3.publicKeyCert = r4
            goto L25
        L15:
            int r0 = r4.getTagNo()
            if (r0 != r1) goto L26
            org.bouncycastle.asn1.ASN1OctetString r4 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r4, r1)
            byte[] r4 = r4.getOctets()
            r3.attributeCert = r4
        L25:
            return
        L26:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown tag number: "
            r1.append(r2)
            int r4 = r4.getTagNo()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public RequestedCertificate(org.bouncycastle.asn1.x509.X509CertificateStructure r1) {
            r0 = this;
            r0.<init>()
            r0.cert = r1
            return
    }

    public static org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L40
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate
            if (r0 == 0) goto L7
            goto L40
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate r0 = new org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r3)
            r0.<init>(r3)
            return r0
        L15:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L21
            org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate r0 = new org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            r0.<init>(r3)
            return r0
        L21:
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
        L40:
            org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate r3 = (org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate) r3
            return r3
    }

    public static org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            if (r1 == 0) goto Lb
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.isismtt.ocsp.RequestedCertificate r0 = getInstance(r0)
            return r0
        Lb:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "choice item must be explicitly tagged"
            r0.<init>(r1)
            throw r0
    }

    public byte[] getCertificateBytes() {
            r4 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r4.cert
            if (r0 == 0) goto L21
            byte[] r0 = r0.getEncoded()     // Catch: java.io.IOException -> L9
            return r0
        L9:
            r0 = move-exception
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "can't decode certificate: "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L21:
            byte[] r0 = r4.publicKeyCert
            if (r0 == 0) goto L26
            return r0
        L26:
            byte[] r0 = r4.attributeCert
            return r0
    }

    public int getType() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.cert
            if (r0 == 0) goto L6
            r0 = -1
            return r0
        L6:
            byte[] r0 = r1.publicKeyCert
            if (r0 == 0) goto Lc
            r0 = 0
            return r0
        Lc:
            r0 = 1
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            byte[] r0 = r4.publicKeyCert
            if (r0 == 0) goto L12
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
            byte[] r3 = r4.publicKeyCert
            r2.<init>(r3)
            r0.<init>(r1, r2)
            return r0
        L12:
            byte[] r0 = r4.attributeCert
            if (r0 == 0) goto L24
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 1
            org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
            byte[] r3 = r4.attributeCert
            r2.<init>(r3)
            r0.<init>(r1, r2)
            return r0
        L24:
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r4.cert
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
    }
}
