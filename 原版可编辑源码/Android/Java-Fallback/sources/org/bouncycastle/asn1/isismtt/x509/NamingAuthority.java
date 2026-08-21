package org.bouncycastle.asn1.isismtt.x509;

public class NamingAuthority extends org.bouncycastle.asn1.ASN1Encodable {
    public static final org.bouncycastle.asn1.DERObjectIdentifier id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern = null;
    private org.bouncycastle.asn1.DERObjectIdentifier namingAuthorityId;
    private org.bouncycastle.asn1.x500.DirectoryString namingAuthorityText;
    private java.lang.String namingAuthorityUrl;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.ISISMTTObjectIdentifiers.id_isismtt_at_namingAuthorities
            r1.append(r2)
            java.lang.String r2 = ".1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern = r0
            return
    }

    private NamingAuthority(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 3
            if (r0 > r1) goto Lc8
            java.util.Enumeration r4 = r4.getObjects()
            boolean r0 = r4.hasMoreElements()
            java.lang.String r1 = "Bad object encountered: "
            if (r0 == 0) goto L58
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r2 == 0) goto L25
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r3.namingAuthorityId = r0
            goto L58
        L25:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERIA5String
            if (r2 == 0) goto L34
            org.bouncycastle.asn1.DERIA5String r0 = org.bouncycastle.asn1.DERIA5String.getInstance(r0)
            java.lang.String r0 = r0.getString()
            r3.namingAuthorityUrl = r0
            goto L58
        L34:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERString
            if (r2 == 0) goto L3f
            org.bouncycastle.asn1.x500.DirectoryString r0 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r0)
            r3.namingAuthorityText = r0
            goto L58
        L3f:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.Class r0 = r0.getClass()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r4.<init>(r0)
            throw r4
        L58:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L97
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERIA5String
            if (r2 == 0) goto L73
            org.bouncycastle.asn1.DERIA5String r0 = org.bouncycastle.asn1.DERIA5String.getInstance(r0)
            java.lang.String r0 = r0.getString()
            r3.namingAuthorityUrl = r0
            goto L97
        L73:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERString
            if (r2 == 0) goto L7e
            org.bouncycastle.asn1.x500.DirectoryString r0 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r0)
            r3.namingAuthorityText = r0
            goto L97
        L7e:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.Class r0 = r0.getClass()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r4.<init>(r0)
            throw r4
        L97:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto Lc7
            java.lang.Object r4 = r4.nextElement()
            org.bouncycastle.asn1.DEREncodable r4 = (org.bouncycastle.asn1.DEREncodable) r4
            boolean r0 = r4 instanceof org.bouncycastle.asn1.DERString
            if (r0 == 0) goto Lae
            org.bouncycastle.asn1.x500.DirectoryString r4 = org.bouncycastle.asn1.x500.DirectoryString.getInstance(r4)
            r3.namingAuthorityText = r4
            goto Lc7
        Lae:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.Class r4 = r4.getClass()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r0.<init>(r4)
            throw r0
        Lc7:
            return
        Lc8:
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
    }

    public NamingAuthority(org.bouncycastle.asn1.DERObjectIdentifier r1, java.lang.String r2, org.bouncycastle.asn1.x500.DirectoryString r3) {
            r0 = this;
            r0.<init>()
            r0.namingAuthorityId = r1
            r0.namingAuthorityUrl = r2
            r0.namingAuthorityText = r3
            return
    }

    public static org.bouncycastle.asn1.isismtt.x509.NamingAuthority getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.x509.NamingAuthority
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r0 = new org.bouncycastle.asn1.isismtt.x509.NamingAuthority
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
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r3 = (org.bouncycastle.asn1.isismtt.x509.NamingAuthority) r3
            return r3
    }

    public static org.bouncycastle.asn1.isismtt.x509.NamingAuthority getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getNamingAuthorityId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.namingAuthorityId
            return r0
    }

    public org.bouncycastle.asn1.x500.DirectoryString getNamingAuthorityText() {
            r1 = this;
            org.bouncycastle.asn1.x500.DirectoryString r0 = r1.namingAuthorityText
            return r0
    }

    public java.lang.String getNamingAuthorityUrl() {
            r1 = this;
            java.lang.String r0 = r1.namingAuthorityUrl
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r4.namingAuthorityId
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            java.lang.String r1 = r4.namingAuthorityUrl
            if (r1 == 0) goto L1b
            org.bouncycastle.asn1.DERIA5String r1 = new org.bouncycastle.asn1.DERIA5String
            java.lang.String r2 = r4.namingAuthorityUrl
            r3 = 1
            r1.<init>(r2, r3)
            r0.add(r1)
        L1b:
            org.bouncycastle.asn1.x500.DirectoryString r1 = r4.namingAuthorityText
            if (r1 == 0) goto L22
            r0.add(r1)
        L22:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
