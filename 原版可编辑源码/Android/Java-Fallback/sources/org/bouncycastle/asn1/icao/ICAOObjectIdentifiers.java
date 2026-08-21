package org.bouncycastle.asn1.icao;

public interface ICAOObjectIdentifiers {
    public static final java.lang.String id_icao = "1.3.27";
    public static final org.bouncycastle.asn1.DERObjectIdentifier id_icao_ldsSecurityObject = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier id_icao_mrtd = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier id_icao_mrtd_security = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.27.1"
            r0.<init>(r1)
            org.bouncycastle.asn1.icao.ICAOObjectIdentifiers.id_icao_mrtd = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.icao.ICAOObjectIdentifiers.id_icao_mrtd
            r1.append(r2)
            java.lang.String r2 = ".1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.icao.ICAOObjectIdentifiers.id_icao_mrtd_security = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.icao.ICAOObjectIdentifiers.id_icao_mrtd_security
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.icao.ICAOObjectIdentifiers.id_icao_ldsSecurityObject = r0
            return
    }
}
