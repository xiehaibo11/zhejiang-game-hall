package org.bouncycastle.asn1.isismtt.x509;

public class AdmissionSyntax extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.GeneralName admissionAuthority;
    private org.bouncycastle.asn1.ASN1Sequence contentsOfAdmissions;

    private AdmissionSyntax(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.size()
            r1 = 0
            r2 = 1
            if (r0 == r2) goto L38
            r3 = 2
            if (r0 != r3) goto L1d
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0)
            r4.admissionAuthority = r0
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)
            goto L3c
        L1d:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r5 = r5.size()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        L38:
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r1)
        L3c:
            org.bouncycastle.asn1.ASN1Sequence r5 = org.bouncycastle.asn1.DERSequence.getInstance(r5)
            r4.contentsOfAdmissions = r5
            return
    }

    public AdmissionSyntax(org.bouncycastle.asn1.x509.GeneralName r1, org.bouncycastle.asn1.ASN1Sequence r2) {
            r0 = this;
            r0.<init>()
            r0.admissionAuthority = r1
            r0.contentsOfAdmissions = r2
            return
    }

    public static org.bouncycastle.asn1.isismtt.x509.AdmissionSyntax getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.x509.AdmissionSyntax
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.isismtt.x509.AdmissionSyntax r0 = new org.bouncycastle.asn1.isismtt.x509.AdmissionSyntax
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
            org.bouncycastle.asn1.isismtt.x509.AdmissionSyntax r3 = (org.bouncycastle.asn1.isismtt.x509.AdmissionSyntax) r3
            return r3
    }

    public org.bouncycastle.asn1.x509.GeneralName getAdmissionAuthority() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.admissionAuthority
            return r0
    }

    public org.bouncycastle.asn1.isismtt.x509.Admissions[] getContentsOfAdmissions() {
            r5 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r5.contentsOfAdmissions
            int r0 = r0.size()
            org.bouncycastle.asn1.isismtt.x509.Admissions[] r0 = new org.bouncycastle.asn1.isismtt.x509.Admissions[r0]
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.contentsOfAdmissions
            java.util.Enumeration r1 = r1.getObjects()
            r2 = 0
        Lf:
            boolean r3 = r1.hasMoreElements()
            if (r3 == 0) goto L23
            int r3 = r2 + 1
            java.lang.Object r4 = r1.nextElement()
            org.bouncycastle.asn1.isismtt.x509.Admissions r4 = org.bouncycastle.asn1.isismtt.x509.Admissions.getInstance(r4)
            r0[r2] = r4
            r2 = r3
            goto Lf
        L23:
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.GeneralName r1 = r2.admissionAuthority
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.contentsOfAdmissions
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
