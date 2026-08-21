package org.bouncycastle.asn1.teletrust;

public interface TeleTrusTObjectIdentifiers {
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP160r1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP160t1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP192r1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP192t1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP224r1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP224t1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP256r1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP256t1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP320r1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP320t1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP384r1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP384t1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP512r1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier brainpoolP512t1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ecSign = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ecSignWithRipemd160 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ecSignWithSha1 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ecc_brainpool = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ellipticCurve = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ripemd128 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ripemd160 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier ripemd256 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier rsaSignatureWithripemd128 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier rsaSignatureWithripemd160 = null;
    public static final org.bouncycastle.asn1.DERObjectIdentifier rsaSignatureWithripemd256 = null;
    public static final java.lang.String teleTrusTAlgorithm = "1.3.36.3";
    public static final java.lang.String teleTrusTRSAsignatureAlgorithm = "1.3.36.3.3.1";
    public static final org.bouncycastle.asn1.DERObjectIdentifier versionOne = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.3.2.1"
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd160 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.3.2.2"
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd128 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.3.2.3"
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ripemd256 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.3.3.1.2"
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd160 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.3.3.1.3"
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd128 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.3.3.1.4"
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.rsaSignatureWithripemd256 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.3.3.2"
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecSign = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecSign
            r1.append(r2)
            java.lang.String r2 = ".1"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecSignWithSha1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecSign
            r1.append(r3)
            java.lang.String r3 = ".2"
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecSignWithRipemd160 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.String r1 = "1.3.36.3.3.2.8"
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecc_brainpool = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ecc_brainpool
            r1.append(r4)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ellipticCurve = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.ellipticCurve
            r1.append(r4)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r4)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP160r1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP160t1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".3"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP192r1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".4"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP192t1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".5"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP224r1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".6"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP224t1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".7"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP256r1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".8"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP256t1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".9"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP320r1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".10"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP320t1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".11"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP384r1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".12"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP384t1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".13"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP512r1 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = new org.bouncycastle.asn1.DERObjectIdentifier
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.versionOne
            r1.append(r2)
            java.lang.String r2 = ".14"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            org.bouncycastle.asn1.teletrust.TeleTrusTObjectIdentifiers.brainpoolP512t1 = r0
            return
    }
}
