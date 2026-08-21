package org.bouncycastle.asn1.x509.sigi;

public class NameOrPseudonym extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private org.bouncycastle.asn1.ASN1Sequence givenName;
    private org.bouncycastle.asn1.x500.DirectoryString pseudonym;
    private org.bouncycastle.asn1.x500.DirectoryString surname;

    public NameOrPseudonym(java.lang.String r2) {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = new org.bouncycastle.asn1.x500.DirectoryString
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    private NameOrPseudonym(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.size()
            r1 = 2
            if (r0 != r1) goto L48
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.DERString
            if (r1 == 0) goto L29
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.x500.DirectoryString r0 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r0)
            r4.surname = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r5 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r5)
            r4.givenName = r5
            return
        L29:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Bad object encountered: "
            r2.append(r3)
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r0)
            java.lang.Class r5 = r5.getClass()
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            r1.<init>(r5)
            throw r1
        L48:
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

    public NameOrPseudonym(org.bouncycastle.asn1.x500.DirectoryString r1) {
            r0 = this;
            r0.<init>()
            r0.pseudonym = r1
            return
    }

    public NameOrPseudonym(org.bouncycastle.asn1.x500.DirectoryString r1, org.bouncycastle.asn1.ASN1Sequence r2) {
            r0 = this;
            r0.<init>()
            r0.surname = r1
            r0.givenName = r2
            return
    }

    public static org.bouncycastle.asn1.x509.sigi.NameOrPseudonym getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L40
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.sigi.NameOrPseudonym
            if (r0 == 0) goto L7
            goto L40
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.DERString
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.x509.sigi.NameOrPseudonym r0 = new org.bouncycastle.asn1.x509.sigi.NameOrPseudonym
            org.bouncycastle.asn1.x500.DirectoryString r3 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r3)
            r0.<init>(r3)
            return r0
        L15:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L21
            org.bouncycastle.asn1.x509.sigi.NameOrPseudonym r0 = new org.bouncycastle.asn1.x509.sigi.NameOrPseudonym
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
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
            org.bouncycastle.asn1.x509.sigi.NameOrPseudonym r3 = (org.bouncycastle.asn1.x509.sigi.NameOrPseudonym) r3
            return r3
    }

    public org.bouncycastle.asn1.x500.DirectoryString[] getGivenName() {
            r5 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r5.givenName
            int r0 = r0.size()
            org.bouncycastle.asn1.x500.DirectoryString[] r0 = new org.bouncycastle.asn1.x500.DirectoryString[r0]
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.givenName
            java.util.Enumeration r1 = r1.getObjects()
            r2 = 0
        Lf:
            boolean r3 = r1.hasMoreElements()
            if (r3 == 0) goto L23
            int r3 = r2 + 1
            java.lang.Object r4 = r1.nextElement()
            org.bouncycastle.asn1.x500.DirectoryString r4 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r4)
            r0[r2] = r4
            r2 = r3
            goto Lf
        L23:
            return r0
    }

    public org.bouncycastle.asn1.x500.DirectoryString getPseudonym() {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r1.pseudonym
            return r0
    }

    public org.bouncycastle.asn1.x500.DirectoryString getSurname() {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r1.surname
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r2.pseudonym
            if (r0 == 0) goto L9
            org.bouncycastle.asn1.DERObject r0 = r0.toASN1Object()
            return r0
        L9:
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x500.DirectoryString r1 = r2.surname
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.givenName
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
