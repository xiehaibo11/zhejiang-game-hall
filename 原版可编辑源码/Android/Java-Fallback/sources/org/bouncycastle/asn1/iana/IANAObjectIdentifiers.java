package org.bouncycastle.asn1.iana;

public interface IANAObjectIdentifiers {
    public static final org.bouncycastle.asn1.DERObjectIdentifier hmacMD5 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier hmacRIPEMD160 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier hmacSHA1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier hmacTIGER = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier isakmpOakley = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.6.1.5.5.8.1"
            r0.<init>(r1)
            org.bouncycastle.asn1.iana.IANAObjectIdentifiers.isakmpOakley = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.iana.IANAObjectIdentifiers.isakmpOakley
            r1.append(r2)
            java.lang.String r2 = ".1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.iana.IANAObjectIdentifiers.hmacMD5 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.iana.IANAObjectIdentifiers.isakmpOakley
            r1.append(r2)
            java.lang.String r2 = ".2"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.iana.IANAObjectIdentifiers.hmacSHA1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.iana.IANAObjectIdentifiers.isakmpOakley
            r1.append(r2)
            java.lang.String r2 = ".3"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.iana.IANAObjectIdentifiers.hmacTIGER = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.iana.IANAObjectIdentifiers.isakmpOakley
            r1.append(r2)
            java.lang.String r2 = ".4"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.iana.IANAObjectIdentifiers.hmacRIPEMD160 = r0
            return
    }
}
