package org.bouncycastle.asn1.x509.qualified;

public class SemanticsInformation extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.GeneralName[] nameRegistrationAuthorities;
    org.bouncycastle.asn1.DERObjectIdentifier semanticsIdentifier;

    public SemanticsInformation(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Enumeration r0 = r4.getObjects()
            int r4 = r4.size()
            r1 = 1
            if (r4 < r1) goto L4d
            java.lang.Object r4 = r0.nextElement()
            boolean r1 = r4 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r1 == 0) goto L28
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r4)
            r3.semanticsIdentifier = r4
            boolean r4 = r0.hasMoreElements()
            if (r4 == 0) goto L27
            java.lang.Object r4 = r0.nextElement()
            goto L28
        L27:
            r4 = 0
        L28:
            if (r4 == 0) goto L4c
            org.bouncycastle.asn1.ASN1Sequence r4 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r4)
            int r0 = r4.size()
            org.bouncycastle.asn1.x509.GeneralName[] r0 = new org.bouncycastle.asn1.x509.GeneralName[r0]
            r3.nameRegistrationAuthorities = r0
            r0 = 0
        L37:
            int r1 = r4.size()
            if (r0 >= r1) goto L4c
            org.bouncycastle.asn1.x509.GeneralName[] r1 = r3.nameRegistrationAuthorities
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.GeneralName r2 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r2)
            r1[r0] = r2
            int r0 = r0 + 1
            goto L37
        L4c:
            return
        L4d:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "no objects in SemanticsInformation"
            r4.<init>(r0)
            throw r4
    }

    public SemanticsInformation(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            r0 = this;
            r0.<init>()
            r0.semanticsIdentifier = r1
            r1 = 0
            r0.nameRegistrationAuthorities = r1
            return
    }

    public SemanticsInformation(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.x509.GeneralName[] r2) {
            r0 = this;
            r0.<init>()
            r0.semanticsIdentifier = r1
            r0.nameRegistrationAuthorities = r2
            return
    }

    public SemanticsInformation(org.bouncycastle.asn1.x509.GeneralName[] r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.semanticsIdentifier = r0
            r1.nameRegistrationAuthorities = r2
            return
    }

    public static org.bouncycastle.asn1.x509.qualified.SemanticsInformation getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1d
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.qualified.SemanticsInformation
            if (r0 == 0) goto L7
            goto L1d
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.x509.qualified.SemanticsInformation r0 = new org.bouncycastle.asn1.x509.qualified.SemanticsInformation
            org.bouncycastle.asn1.ASN1Sequence r1 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r1)
            r0.<init>(r1)
            return r0
        L15:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance"
            r1.<init>(r0)
            throw r1
        L1d:
            org.bouncycastle.asn1.x509.qualified.SemanticsInformation r1 = (org.bouncycastle.asn1.x509.qualified.SemanticsInformation) r1
            return r1
    }

    public org.bouncycastle.asn1.x509.GeneralName[] getNameRegistrationAuthorities() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName[] r0 = r1.nameRegistrationAuthorities
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getSemanticsIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.semanticsIdentifier
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r5.semanticsIdentifier
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.x509.GeneralName[] r1 = r5.nameRegistrationAuthorities
            if (r1 == 0) goto L2b
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            r2 = 0
        L16:
            org.bouncycastle.asn1.x509.GeneralName[] r3 = r5.nameRegistrationAuthorities
            int r4 = r3.length
            if (r2 >= r4) goto L23
            r3 = r3[r2]
            r1.add(r3)
            int r2 = r2 + 1
            goto L16
        L23:
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            r0.add(r2)
        L2b:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
