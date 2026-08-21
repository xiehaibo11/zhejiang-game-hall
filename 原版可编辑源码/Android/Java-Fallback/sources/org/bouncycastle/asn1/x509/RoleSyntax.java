package org.bouncycastle.asn1.x509;

public class RoleSyntax extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.GeneralNames roleAuthority;
    private org.bouncycastle.asn1.x509.GeneralName roleName;

    public RoleSyntax(java.lang.String r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = new org.bouncycastle.asn1.x509.GeneralName
            if (r3 != 0) goto L6
            java.lang.String r3 = ""
        L6:
            r1 = 6
            r0.<init>(r1, r3)
            r2.<init>(r0)
            return
    }

    public RoleSyntax(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            int r0 = r6.size()
            r1 = 1
            if (r0 < r1) goto L42
            int r0 = r6.size()
            r2 = 2
            if (r0 > r2) goto L42
            r0 = 0
            r2 = 0
        L13:
            int r3 = r6.size()
            if (r2 == r3) goto L41
            org.bouncycastle.asn1.DEREncodable r3 = r6.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r3 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r3)
            int r4 = r3.getTagNo()
            if (r4 == 0) goto L38
            if (r4 != r1) goto L30
            org.bouncycastle.asn1.x509.GeneralName r3 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r3, r0)
            r5.roleName = r3
            goto L3e
        L30:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unknown tag in RoleSyntax"
            r6.<init>(r0)
            throw r6
        L38:
            org.bouncycastle.asn1.x509.GeneralNames r3 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r3, r0)
            r5.roleAuthority = r3
        L3e:
            int r2 = r2 + 1
            goto L13
        L41:
            return
        L42:
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

    public RoleSyntax(org.bouncycastle.asn1.x509.GeneralName r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2)
            return
    }

    public RoleSyntax(org.bouncycastle.asn1.x509.GeneralNames r3, org.bouncycastle.asn1.x509.GeneralName r4) {
            r2 = this;
            r2.<init>()
            if (r4 == 0) goto L23
            int r0 = r4.getTagNo()
            r1 = 6
            if (r0 != r1) goto L23
            org.bouncycastle.asn1.DEREncodable r0 = r4.getName()
            org.bouncycastle.asn1.DERString r0 = (org.bouncycastle.asn1.DERString) r0
            java.lang.String r0 = r0.getString()
            java.lang.String r1 = ""
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L23
            r2.roleAuthority = r3
            r2.roleName = r4
            return
        L23:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "the role name MUST be non empty and MUST use the URI option of GeneralName"
            r3.<init>(r4)
            throw r3
    }

    public static org.bouncycastle.asn1.x509.RoleSyntax getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1b
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.RoleSyntax
            if (r0 == 0) goto L7
            goto L1b
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.RoleSyntax r0 = new org.bouncycastle.asn1.x509.RoleSyntax
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unknown object in RoleSyntax factory."
            r1.<init>(r0)
            throw r1
        L1b:
            org.bouncycastle.asn1.x509.RoleSyntax r1 = (org.bouncycastle.asn1.x509.RoleSyntax) r1
            return r1
    }

    public org.bouncycastle.asn1.x509.GeneralNames getRoleAuthority() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = r1.roleAuthority
            return r0
    }

    public java.lang.String[] getRoleAuthorityAsString() {
            r5 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = r5.roleAuthority
            r1 = 0
            if (r0 != 0) goto L8
            java.lang.String[] r0 = new java.lang.String[r1]
            return r0
        L8:
            org.bouncycastle.asn1.x509.GeneralName[] r0 = r0.getNames()
            int r2 = r0.length
            java.lang.String[] r2 = new java.lang.String[r2]
        Lf:
            int r3 = r0.length
            if (r1 >= r3) goto L2e
            r3 = r0[r1]
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()
            boolean r4 = r3 instanceof org.bouncycastle.asn1.DERString
            if (r4 == 0) goto L25
            org.bouncycastle.asn1.DERString r3 = (org.bouncycastle.asn1.DERString) r3
            java.lang.String r3 = r3.getString()
            r2[r1] = r3
            goto L2b
        L25:
            java.lang.String r3 = r3.toString()
            r2[r1] = r3
        L2b:
            int r1 = r1 + 1
            goto Lf
        L2e:
            return r2
    }

    public org.bouncycastle.asn1.x509.GeneralName getRoleName() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.roleName
            return r0
    }

    public java.lang.String getRoleNameAsString() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.roleName
            org.bouncycastle.asn1.DEREncodable r0 = r0.getName()
            org.bouncycastle.asn1.DERString r0 = (org.bouncycastle.asn1.DERString) r0
            java.lang.String r0 = r0.getString()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.GeneralNames r1 = r5.roleAuthority
            r2 = 0
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.GeneralNames r3 = r5.roleAuthority
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.x509.GeneralName r4 = r5.roleName
            r1.<init>(r2, r3, r4)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public java.lang.String toString() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Name: "
            r1.append(r2)
            java.lang.String r2 = r4.getRoleNameAsString()
            r1.append(r2)
            java.lang.String r2 = " - Auth: "
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.x509.GeneralNames r1 = r4.roleAuthority
            if (r1 == 0) goto L51
            org.bouncycastle.asn1.x509.GeneralName[] r1 = r1.getNames()
            int r1 = r1.length
            if (r1 != 0) goto L2b
            goto L51
        L2b:
            java.lang.String[] r1 = r4.getRoleAuthorityAsString()
            r2 = 91
            r0.append(r2)
            r2 = 0
            r2 = r1[r2]
            r0.append(r2)
            r2 = 1
        L3b:
            int r3 = r1.length
            if (r2 >= r3) goto L4b
            java.lang.String r3 = ", "
            r0.append(r3)
            r3 = r1[r2]
            r0.append(r3)
            int r2 = r2 + 1
            goto L3b
        L4b:
            r1 = 93
            r0.append(r1)
            goto L56
        L51:
            java.lang.String r1 = "N/A"
            r0.append(r1)
        L56:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
