package org.bouncycastle.asn1.isismtt.x509;

public class ProcurationSyntax extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.IssuerSerial certRef;
    private java.lang.String country;
    private org.bouncycastle.asn1.x509.GeneralName thirdPerson;
    private org.bouncycastle.asn1.x500.DirectoryString typeOfSubstitution;

    public ProcurationSyntax(java.lang.String r1, org.bouncycastle.asn1.x500.DirectoryString r2, org.bouncycastle.asn1.x509.GeneralName r3) {
            r0 = this;
            r0.<init>()
            r0.country = r1
            r0.typeOfSubstitution = r2
            r0.thirdPerson = r3
            r1 = 0
            r0.certRef = r1
            return
    }

    public ProcurationSyntax(java.lang.String r1, org.bouncycastle.asn1.x500.DirectoryString r2, org.bouncycastle.asn1.x509.IssuerSerial r3) {
            r0 = this;
            r0.<init>()
            r0.country = r1
            r0.typeOfSubstitution = r2
            r1 = 0
            r0.thirdPerson = r1
            r0.certRef = r3
            return
    }

    private ProcurationSyntax(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            int r0 = r6.size()
            r1 = 1
            if (r0 < r1) goto L72
            int r0 = r6.size()
            r2 = 3
            if (r0 > r2) goto L72
            java.util.Enumeration r6 = r6.getObjects()
        L15:
            boolean r0 = r6.hasMoreElements()
            if (r0 == 0) goto L71
            java.lang.Object r0 = r6.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0)
            int r3 = r0.getTagNo()
            if (r3 == r1) goto L66
            r4 = 2
            if (r3 == r4) goto L5f
            if (r3 != r2) goto L44
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            boolean r3 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r3 == 0) goto L3d
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0)
            r5.thirdPerson = r0
            goto L15
        L3d:
            org.bouncycastle.asn1.x509.IssuerSerial r0 = org.bouncycastle.asn1.x509.IssuerSerial.getInstance(r0)
            r5.certRef = r0
            goto L15
        L44:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad tag number: "
            r1.append(r2)
            int r0 = r0.getTagNo()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r6.<init>(r0)
            throw r6
        L5f:
            org.bouncycastle.asn1.x500.DirectoryString r0 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r0, r1)
            r5.typeOfSubstitution = r0
            goto L15
        L66:
            org.bouncycastle.asn1.DERPrintableString r0 = org.bouncycastle.asn1.DERPrintableString.getInstance(r0, r1)
            java.lang.String r0 = r0.getString()
            r5.country = r0
            goto L15
        L71:
            return
        L72:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r6 = r6.size()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
    }

    public static org.bouncycastle.asn1.isismtt.x509.ProcurationSyntax getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.x509.ProcurationSyntax
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.isismtt.x509.ProcurationSyntax r0 = new org.bouncycastle.asn1.isismtt.x509.ProcurationSyntax
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
            org.bouncycastle.asn1.isismtt.x509.ProcurationSyntax r3 = (org.bouncycastle.asn1.isismtt.x509.ProcurationSyntax) r3
            return r3
    }

    public org.bouncycastle.asn1.x509.IssuerSerial getCertRef() {
            r1 = this;
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r1.certRef
            return r0
    }

    public java.lang.String getCountry() {
            r1 = this;
            java.lang.String r0 = r1.country
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getThirdPerson() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.thirdPerson
            return r0
    }

    public org.bouncycastle.asn1.x500.DirectoryString getTypeOfSubstitution() {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r1.typeOfSubstitution
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            java.lang.String r1 = r5.country
            r2 = 1
            if (r1 == 0) goto L19
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERPrintableString r3 = new org.bouncycastle.asn1.DERPrintableString
            java.lang.String r4 = r5.country
            r3.<init>(r4, r2)
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L19:
            org.bouncycastle.asn1.x500.DirectoryString r1 = r5.typeOfSubstitution
            if (r1 == 0) goto L28
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 2
            org.bouncycastle.asn1.x500.DirectoryString r4 = r5.typeOfSubstitution
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L28:
            org.bouncycastle.asn1.x509.GeneralName r1 = r5.thirdPerson
            r3 = 3
            if (r1 == 0) goto L35
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.GeneralName r4 = r5.thirdPerson
            r1.<init>(r2, r3, r4)
            goto L3c
        L35:
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.IssuerSerial r4 = r5.certRef
            r1.<init>(r2, r3, r4)
        L3c:
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
