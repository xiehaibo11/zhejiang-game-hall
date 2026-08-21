package org.bouncycastle.asn1.x509;

public class CertificatePair extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.X509CertificateStructure forward;
    private org.bouncycastle.asn1.x509.X509CertificateStructure reverse;

    private CertificatePair(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 1
            if (r0 == r1) goto L2d
            int r0 = r4.size()
            r2 = 2
            if (r0 != r2) goto L12
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
            java.util.Enumeration r4 = r4.getObjects()
        L31:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L74
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0)
            int r2 = r0.getTagNo()
            if (r2 != 0) goto L4c
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r0, r1)
            r3.forward = r0
            goto L31
        L4c:
            int r2 = r0.getTagNo()
            if (r2 != r1) goto L59
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r0, r1)
            r3.reverse = r0
            goto L31
        L59:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad tag number: "
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.<init>(r0)
            throw r4
        L74:
            return
    }

    public CertificatePair(org.bouncycastle.asn1.x509.X509CertificateStructure r1, org.bouncycastle.asn1.x509.X509CertificateStructure r2) {
            r0 = this;
            r0.<init>()
            r0.forward = r1
            r0.reverse = r2
            return
    }

    public static org.bouncycastle.asn1.x509.CertificatePair getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.CertificatePair
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.CertificatePair r0 = new org.bouncycastle.asn1.x509.CertificatePair
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
            org.bouncycastle.asn1.x509.CertificatePair r3 = (org.bouncycastle.asn1.x509.CertificatePair) r3
            return r3
    }

    public org.bouncycastle.asn1.x509.X509CertificateStructure getForward() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.forward
            return r0
    }

    public org.bouncycastle.asn1.x509.X509CertificateStructure getReverse() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509CertificateStructure r0 = r1.reverse
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r4.forward
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 0
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = r4.forward
            r1.<init>(r2, r3)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.x509.X509CertificateStructure r1 = r4.reverse
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 1
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = r4.reverse
            r1.<init>(r2, r3)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
