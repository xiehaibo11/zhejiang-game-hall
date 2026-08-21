package org.bouncycastle.asn1.x509.sigi;

public class PersonalData extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERGeneralizedTime dateOfBirth;
    private java.lang.String gender;
    private java.math.BigInteger nameDistinguisher;
    private org.bouncycastle.asn1.x509.sigi.NameOrPseudonym nameOrPseudonym;
    private org.bouncycastle.asn1.x500.DirectoryString placeOfBirth;
    private org.bouncycastle.asn1.x500.DirectoryString postalAddress;

    private PersonalData(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            int r0 = r6.size()
            r1 = 1
            if (r0 < r1) goto L7f
            java.util.Enumeration r6 = r6.getObjects()
            java.lang.Object r0 = r6.nextElement()
            org.bouncycastle.asn1.x509.sigi.NameOrPseudonym r0 = org.bouncycastle.asn1.x509.sigi.NameOrPseudonym.getInstance(r0)
            r5.nameOrPseudonym = r0
        L18:
            boolean r0 = r6.hasMoreElements()
            if (r0 == 0) goto L7e
            java.lang.Object r0 = r6.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r0)
            int r2 = r0.getTagNo()
            r3 = 0
            if (r2 == 0) goto L73
            if (r2 == r1) goto L6c
            r4 = 2
            if (r2 == r4) goto L65
            r4 = 3
            if (r2 == r4) goto L5a
            r3 = 4
            if (r2 != r3) goto L3f
            org.bouncycastle.asn1.x500.DirectoryString r0 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r0, r1)
            r5.postalAddress = r0
            goto L18
        L3f:
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
        L5a:
            org.bouncycastle.asn1.DERPrintableString r0 = org.bouncycastle.asn1.DERPrintableString.getInstance(r0, r3)
            java.lang.String r0 = r0.getString()
            r5.gender = r0
            goto L18
        L65:
            org.bouncycastle.asn1.x500.DirectoryString r0 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r0, r1)
            r5.placeOfBirth = r0
            goto L18
        L6c:
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0, r3)
            r5.dateOfBirth = r0
            goto L18
        L73:
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0, r3)
            java.math.BigInteger r0 = r0.getValue()
            r5.nameDistinguisher = r0
            goto L18
        L7e:
            return
        L7f:
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

    public PersonalData(org.bouncycastle.asn1.x509.sigi.NameOrPseudonym r1, java.math.BigInteger r2, org.bouncycastle.asn1.DERGeneralizedTime r3, org.bouncycastle.asn1.x500.DirectoryString r4, java.lang.String r5, org.bouncycastle.asn1.x500.DirectoryString r6) {
            r0 = this;
            r0.<init>()
            r0.nameOrPseudonym = r1
            r0.dateOfBirth = r3
            r0.gender = r5
            r0.nameDistinguisher = r2
            r0.postalAddress = r6
            r0.placeOfBirth = r4
            return
    }

    public static org.bouncycastle.asn1.x509.sigi.PersonalData getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.sigi.PersonalData
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.sigi.PersonalData r0 = new org.bouncycastle.asn1.x509.sigi.PersonalData
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
            org.bouncycastle.asn1.x509.sigi.PersonalData r3 = (org.bouncycastle.asn1.x509.sigi.PersonalData) r3
            return r3
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getDateOfBirth() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.dateOfBirth
            return r0
    }

    public java.lang.String getGender() {
            r1 = this;
            java.lang.String r0 = r1.gender
            return r0
    }

    public java.math.BigInteger getNameDistinguisher() {
            r1 = this;
            java.math.BigInteger r0 = r1.nameDistinguisher
            return r0
    }

    public org.bouncycastle.asn1.x509.sigi.NameOrPseudonym getNameOrPseudonym() {
            r1 = this;
            org.bouncycastle.asn1.x509.sigi.NameOrPseudonym r0 = r1.nameOrPseudonym
            return r0
    }

    public org.bouncycastle.asn1.x500.DirectoryString getPlaceOfBirth() {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r1.placeOfBirth
            return r0
    }

    public org.bouncycastle.asn1.x500.DirectoryString getPostalAddress() {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r1.postalAddress
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r7 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.sigi.NameOrPseudonym r1 = r7.nameOrPseudonym
            r0.add(r1)
            java.math.BigInteger r1 = r7.nameDistinguisher
            r2 = 0
            if (r1 == 0) goto L1e
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r4 = r7.nameDistinguisher
            r3.<init>(r4)
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L1e:
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r7.dateOfBirth
            r3 = 1
            if (r1 == 0) goto L2d
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERGeneralizedTime r4 = r7.dateOfBirth
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L2d:
            org.bouncycastle.asn1.x500.DirectoryString r1 = r7.placeOfBirth
            if (r1 == 0) goto L3c
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r4 = 2
            org.bouncycastle.asn1.x500.DirectoryString r5 = r7.placeOfBirth
            r1.<init>(r3, r4, r5)
            r0.add(r1)
        L3c:
            java.lang.String r1 = r7.gender
            if (r1 == 0) goto L50
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r4 = 3
            org.bouncycastle.asn1.DERPrintableString r5 = new org.bouncycastle.asn1.DERPrintableString
            java.lang.String r6 = r7.gender
            r5.<init>(r6, r3)
            r1.<init>(r2, r4, r5)
            r0.add(r1)
        L50:
            org.bouncycastle.asn1.x500.DirectoryString r1 = r7.postalAddress
            if (r1 == 0) goto L5f
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 4
            org.bouncycastle.asn1.x500.DirectoryString r4 = r7.postalAddress
            r1.<init>(r3, r2, r4)
            r0.add(r1)
        L5f:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
