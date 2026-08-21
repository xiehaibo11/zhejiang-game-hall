package org.bouncycastle.asn1.esf;

public class SignerLocation extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERUTF8String countryName;
    private org.bouncycastle.asn1.DERUTF8String localityName;
    private org.bouncycastle.asn1.ASN1Sequence postalAddress;

    public SignerLocation(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            java.util.Enumeration r5 = r5.getObjects()
        L7:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L5b
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.DERTaggedObject r0 = (org.bouncycastle.asn1.DERTaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 1
            if (r1 == 0) goto L54
            if (r1 == r2) goto L4d
            r3 = 2
            if (r1 != r3) goto L45
            boolean r1 = r0.isExplicit()
            if (r1 == 0) goto L2a
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            goto L2f
        L2a:
            r1 = 0
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
        L2f:
            r4.postalAddress = r0
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.postalAddress
            if (r0 == 0) goto L7
            int r0 = r0.size()
            r1 = 6
            if (r0 > r1) goto L3d
            goto L7
        L3d:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "postal address must contain less than 6 strings"
            r5.<init>(r0)
            throw r5
        L45:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "illegal tag"
            r5.<init>(r0)
            throw r5
        L4d:
            org.bouncycastle.asn1.DERUTF8String r0 = org.bouncycastle.asn1.DERUTF8String.getInstance(r0, r2)
            r4.localityName = r0
            goto L7
        L54:
            org.bouncycastle.asn1.DERUTF8String r0 = org.bouncycastle.asn1.DERUTF8String.getInstance(r0, r2)
            r4.countryName = r0
            goto L7
        L5b:
            return
    }

    public SignerLocation(org.bouncycastle.asn1.DERUTF8String r3, org.bouncycastle.asn1.DERUTF8String r4, org.bouncycastle.asn1.ASN1Sequence r5) {
            r2 = this;
            r2.<init>()
            if (r5 == 0) goto L15
            int r0 = r5.size()
            r1 = 6
            if (r0 > r1) goto Ld
            goto L15
        Ld:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "postal address must contain less than 6 strings"
            r3.<init>(r4)
            throw r3
        L15:
            if (r3 == 0) goto L21
            org.bouncycastle.asn1.DERObject r3 = r3.toASN1Object()
            org.bouncycastle.asn1.DERUTF8String r3 = org.bouncycastle.asn1.DERUTF8String.getInstance(r3)
            r2.countryName = r3
        L21:
            if (r4 == 0) goto L2d
            org.bouncycastle.asn1.DERObject r3 = r4.toASN1Object()
            org.bouncycastle.asn1.DERUTF8String r3 = org.bouncycastle.asn1.DERUTF8String.getInstance(r3)
            r2.localityName = r3
        L2d:
            if (r5 == 0) goto L39
            org.bouncycastle.asn1.DERObject r3 = r5.toASN1Object()
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r3)
            r2.postalAddress = r3
        L39:
            return
    }

    public static org.bouncycastle.asn1.esf.SignerLocation getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L11
            boolean r0 = r1 instanceof org.bouncycastle.asn1.esf.SignerLocation
            if (r0 == 0) goto L7
            goto L11
        L7:
            org.bouncycastle.asn1.esf.SignerLocation r0 = new org.bouncycastle.asn1.esf.SignerLocation
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
        L11:
            org.bouncycastle.asn1.esf.SignerLocation r1 = (org.bouncycastle.asn1.esf.SignerLocation) r1
            return r1
    }

    public org.bouncycastle.asn1.DERUTF8String getCountryName() {
            r1 = this;
            org.bouncycastle.asn1.DERUTF8String r0 = r1.countryName
            return r0
    }

    public org.bouncycastle.asn1.DERUTF8String getLocalityName() {
            r1 = this;
            org.bouncycastle.asn1.DERUTF8String r0 = r1.localityName
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getPostalAddress() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.postalAddress
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERUTF8String r1 = r5.countryName
            r2 = 1
            if (r1 == 0) goto L15
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.DERUTF8String r4 = r5.countryName
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L15:
            org.bouncycastle.asn1.DERUTF8String r1 = r5.localityName
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERUTF8String r3 = r5.localityName
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.postalAddress
            if (r1 == 0) goto L32
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 2
            org.bouncycastle.asn1.ASN1Sequence r4 = r5.postalAddress
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L32:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
