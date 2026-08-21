package org.bouncycastle.asn1.isismtt.x509;

public class Admissions extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.GeneralName admissionAuthority;
    private org.bouncycastle.asn1.isismtt.x509.NamingAuthority namingAuthority;
    private org.bouncycastle.asn1.ASN1Sequence professionInfos;

    private Admissions(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.size()
            r1 = 3
            if (r0 > r1) goto Laf
            java.util.Enumeration r5 = r5.getObjects()
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            java.lang.String r2 = "Bad tag number: "
            r3 = 1
            if (r1 == 0) goto L51
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            if (r1 == 0) goto L45
            if (r1 != r3) goto L2c
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r0 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.getInstance(r0, r3)
            r4.namingAuthority = r0
            goto L4b
        L2c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            throw r5
        L45:
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0, r3)
            r4.admissionAuthority = r0
        L4b:
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
        L51:
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L83
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            if (r1 != r3) goto L6a
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r0 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.getInstance(r0, r3)
            r4.namingAuthority = r0
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            goto L83
        L6a:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r5.<init>(r0)
            throw r5
        L83:
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r4.professionInfos = r0
            boolean r0 = r5.hasMoreElements()
            if (r0 != 0) goto L90
            return
        L90:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad object encountered: "
            r1.append(r2)
            java.lang.Object r5 = r5.nextElement()
            java.lang.Class r5 = r5.getClass()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
        Laf:
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
    }

    public Admissions(org.bouncycastle.asn1.x509.GeneralName r1, org.bouncycastle.asn1.isismtt.x509.NamingAuthority r2, org.bouncycastle.asn1.isismtt.x509.ProfessionInfo[] r3) {
            r0 = this;
            r0.<init>()
            r0.admissionAuthority = r1
            r0.namingAuthority = r2
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r3)
            r0.professionInfos = r1
            return
    }

    public static org.bouncycastle.asn1.isismtt.x509.Admissions getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.x509.Admissions
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.isismtt.x509.Admissions r0 = new org.bouncycastle.asn1.isismtt.x509.Admissions
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
            org.bouncycastle.asn1.isismtt.x509.Admissions r3 = (org.bouncycastle.asn1.isismtt.x509.Admissions) r3
            return r3
    }

    public org.bouncycastle.asn1.x509.GeneralName getAdmissionAuthority() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.admissionAuthority
            return r0
    }

    public org.bouncycastle.asn1.isismtt.x509.NamingAuthority getNamingAuthority() {
            r1 = this;
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r0 = r1.namingAuthority
            return r0
    }

    public org.bouncycastle.asn1.isismtt.x509.ProfessionInfo[] getProfessionInfos() {
            r5 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r5.professionInfos
            int r0 = r0.size()
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo[] r0 = new org.bouncycastle.asn1.isismtt.x509.ProfessionInfo[r0]
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.professionInfos
            java.util.Enumeration r1 = r1.getObjects()
            r2 = 0
        Lf:
            boolean r3 = r1.hasMoreElements()
            if (r3 == 0) goto L23
            int r3 = r2 + 1
            java.lang.Object r4 = r1.nextElement()
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo r4 = org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.getInstance(r4)
            r0[r2] = r4
            r2 = r3
            goto Lf
        L23:
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.GeneralName r1 = r5.admissionAuthority
            r2 = 1
            if (r1 == 0) goto L15
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.x509.GeneralName r4 = r5.admissionAuthority
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L15:
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r1 = r5.namingAuthority
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r3 = r5.namingAuthority
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.professionInfos
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
