package org.bouncycastle.asn1.isismtt.x509;

public class ProfessionInfo extends org.bouncycastle.asn1.ASN1Encodable {
    public static final org.bouncycastle.asn1.DERObjectIdentifier Notar = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Notariatsverwalter = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Notariatsverwalterin = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Notarin = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Notarvertreter = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Notarvertreterin = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Patentanwalt = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Patentanwltin = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Rechtsanwalt = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Rechtsanwltin = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Rechtsbeistand = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Steuerberater = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Steuerberaterin = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Steuerbevollmchtigte = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Steuerbevollmchtigter = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier VereidigteBuchprferin = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier VereidigterBuchprfer = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Wirtschaftsprfer = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier Wirtschaftsprferin = null;
    private org.bouncycastle.asn1.ASN1OctetString addProfessionInfo;
    private org.bouncycastle.asn1.isismtt.x509.NamingAuthority namingAuthority;
    private org.bouncycastle.asn1.ASN1Sequence professionItems;
    private org.bouncycastle.asn1.ASN1Sequence professionOIDs;
    private java.lang.String registrationNumber;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Rechtsanwltin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".2"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Rechtsanwalt = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".3"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Rechtsbeistand = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".4"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Steuerberaterin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".5"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Steuerberater = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".6"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Steuerbevollmchtigte = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".7"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Steuerbevollmchtigter = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".8"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Notarin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".9"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Notar = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".10"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Notarvertreterin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".11"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Notarvertreter = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".12"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Notariatsverwalterin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".13"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Notariatsverwalter = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".14"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Wirtschaftsprferin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".15"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Wirtschaftsprfer = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".16"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.VereidigteBuchprferin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".17"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.VereidigterBuchprfer = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".18"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Patentanwltin = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.id_isismtt_at_namingAuthorities_RechtWirtschaftSteuern
            r1.append(r2)
            java.lang.String r2 = ".19"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo.Patentanwalt = r0
            return
    }

    private ProfessionInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 5
            if (r0 > r1) goto L107
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            boolean r1 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L49
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            if (r1 != 0) goto L2e
            r1 = 1
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r0 = org.bouncycastle.asn1.isismtt.x509.NamingAuthority.getInstance(r0, r1)
            r3.namingAuthority = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            goto L49
        L2e:
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
        L49:
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r3.professionItems = r0
            boolean r0 = r4.hasMoreElements()
            java.lang.String r1 = "Bad object encountered: "
            if (r0 == 0) goto L9b
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            boolean r2 = r0 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r2 == 0) goto L68
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0)
            r3.professionOIDs = r0
            goto L9b
        L68:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERPrintableString
            if (r2 == 0) goto L77
            org.bouncycastle.asn1.DERPrintableString r0 = org.bouncycastle.asn1.DERPrintableString.getInstance(r0)
            java.lang.String r0 = r0.getString()
            r3.registrationNumber = r0
            goto L9b
        L77:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r2 == 0) goto L82
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0)
            r3.addProfessionInfo = r0
            goto L9b
        L82:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.Class r0 = r0.getClass()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r4.<init>(r0)
            throw r4
        L9b:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto Ld8
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DEREncodable r0 = (org.bouncycastle.asn1.DEREncodable) r0
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DERPrintableString
            if (r2 == 0) goto Lb6
            org.bouncycastle.asn1.DERPrintableString r0 = org.bouncycastle.asn1.DERPrintableString.getInstance(r0)
            java.lang.String r0 = r0.getString()
            r3.registrationNumber = r0
            goto Ld8
        Lb6:
            boolean r2 = r0 instanceof org.bouncycastle.asn1.DEROctetString
            if (r2 == 0) goto Lbf
            org.bouncycastle.asn1.DEROctetString r0 = (org.bouncycastle.asn1.DEROctetString) r0
            r3.addProfessionInfo = r0
            goto Ld8
        Lbf:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.Class r0 = r0.getClass()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r4.<init>(r0)
            throw r4
        Ld8:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L106
            java.lang.Object r4 = r4.nextElement()
            org.bouncycastle.asn1.DEREncodable r4 = (org.bouncycastle.asn1.DEREncodable) r4
            boolean r0 = r4 instanceof org.bouncycastle.asn1.DEROctetString
            if (r0 == 0) goto Led
            org.bouncycastle.asn1.DEROctetString r4 = (org.bouncycastle.asn1.DEROctetString) r4
            r3.addProfessionInfo = r4
            goto L106
        Led:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.Class r4 = r4.getClass()
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r0.<init>(r4)
            throw r0
        L106:
            return
        L107:
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

    public ProfessionInfo(org.bouncycastle.asn1.isismtt.x509.NamingAuthority r4, org.bouncycastle.asn1.x500.DirectoryString[] r5, org.bouncycastle.asn1.DERObjectIdentifier[] r6, java.lang.String r7, org.bouncycastle.asn1.ASN1OctetString r8) {
            r3 = this;
            r3.<init>()
            r3.namingAuthority = r4
            org.bouncycastle.asn1.ASN1EncodableVector r4 = new org.bouncycastle.asn1.ASN1EncodableVector
            r4.<init>()
            r0 = 0
            r1 = 0
        Lc:
            int r2 = r5.length
            if (r1 == r2) goto L17
            r2 = r5[r1]
            r4.add(r2)
            int r1 = r1 + 1
            goto Lc
        L17:
            org.bouncycastle.asn1.DERSequence r5 = new org.bouncycastle.asn1.DERSequence
            r5.<init>(r4)
            r3.professionItems = r5
            if (r6 == 0) goto L37
            org.bouncycastle.asn1.ASN1EncodableVector r4 = new org.bouncycastle.asn1.ASN1EncodableVector
            r4.<init>()
        L25:
            int r5 = r6.length
            if (r0 == r5) goto L30
            r5 = r6[r0]
            r4.add(r5)
            int r0 = r0 + 1
            goto L25
        L30:
            org.bouncycastle.asn1.DERSequence r5 = new org.bouncycastle.asn1.DERSequence
            r5.<init>(r4)
            r3.professionOIDs = r5
        L37:
            r3.registrationNumber = r7
            r3.addProfessionInfo = r8
            return
    }

    public static org.bouncycastle.asn1.isismtt.x509.ProfessionInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.x509.ProfessionInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo r0 = new org.bouncycastle.asn1.isismtt.x509.ProfessionInfo
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
            org.bouncycastle.asn1.isismtt.x509.ProfessionInfo r3 = (org.bouncycastle.asn1.isismtt.x509.ProfessionInfo) r3
            return r3
    }

    public org.bouncycastle.asn1.ASN1OctetString getAddProfessionInfo() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.addProfessionInfo
            return r0
    }

    public org.bouncycastle.asn1.isismtt.x509.NamingAuthority getNamingAuthority() {
            r1 = this;
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r0 = r1.namingAuthority
            return r0
    }

    public org.bouncycastle.asn1.x500.DirectoryString[] getProfessionItems() {
            r5 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r5.professionItems
            int r0 = r0.size()
            org.bouncycastle.asn1.x500.DirectoryString[] r0 = new org.bouncycastle.asn1.x500.DirectoryString[r0]
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.professionItems
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

    public org.bouncycastle.asn1.DERObjectIdentifier[] getProfessionOIDs() {
            r5 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r5.professionOIDs
            r1 = 0
            if (r0 != 0) goto L8
            org.bouncycastle.asn1.DERObjectIdentifier[] r0 = new org.bouncycastle.asn1.DERObjectIdentifier[r1]
            return r0
        L8:
            int r0 = r0.size()
            org.bouncycastle.asn1.DERObjectIdentifier[] r0 = new org.bouncycastle.asn1.DERObjectIdentifier[r0]
            org.bouncycastle.asn1.ASN1Sequence r2 = r5.professionOIDs
            java.util.Enumeration r2 = r2.getObjects()
        L14:
            boolean r3 = r2.hasMoreElements()
            if (r3 == 0) goto L28
            int r3 = r1 + 1
            java.lang.Object r4 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r4)
            r0[r1] = r4
            r1 = r3
            goto L14
        L28:
            return r0
    }

    public java.lang.String getRegistrationNumber() {
            r1 = this;
            java.lang.String r0 = r1.registrationNumber
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r1 = r5.namingAuthority
            r2 = 1
            if (r1 == 0) goto L15
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.isismtt.x509.NamingAuthority r4 = r5.namingAuthority
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L15:
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.professionItems
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.professionOIDs
            if (r1 == 0) goto L21
            r0.add(r1)
        L21:
            java.lang.String r1 = r5.registrationNumber
            if (r1 == 0) goto L2f
            org.bouncycastle.asn1.DERPrintableString r1 = new org.bouncycastle.asn1.DERPrintableString
            java.lang.String r3 = r5.registrationNumber
            r1.<init>(r3, r2)
            r0.add(r1)
        L2f:
            org.bouncycastle.asn1.ASN1OctetString r1 = r5.addProfessionInfo
            if (r1 == 0) goto L36
            r0.add(r1)
        L36:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
