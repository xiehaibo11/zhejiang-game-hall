package org.bouncycastle.asn1.teletrust;

import org.bouncycastle.asn1.DERObjectIdentifier;

public interface TeleTrusTObjectIdentifiers {
    public static final String teleTrusTAlgorithm = "1.3.36.3";
    public static final String teleTrusTRSAsignatureAlgorithm = "1.3.36.3.3.1";
    public static final DERObjectIdentifier ripemd160 = new DERObjectIdentifier("1.3.36.3.2.1");
    public static final DERObjectIdentifier ripemd128 = new DERObjectIdentifier("1.3.36.3.2.2");
    public static final DERObjectIdentifier ripemd256 = new DERObjectIdentifier("1.3.36.3.2.3");
    public static final DERObjectIdentifier rsaSignatureWithripemd160 = new DERObjectIdentifier("1.3.36.3.3.1.2");
    public static final DERObjectIdentifier rsaSignatureWithripemd128 = new DERObjectIdentifier("1.3.36.3.3.1.3");
    public static final DERObjectIdentifier rsaSignatureWithripemd256 = new DERObjectIdentifier("1.3.36.3.3.1.4");
    public static final DERObjectIdentifier ecSign = new DERObjectIdentifier("1.3.36.3.3.2");
    public static final DERObjectIdentifier ecSignWithSha1 = new DERObjectIdentifier(ecSign + ".1");
    public static final DERObjectIdentifier ecSignWithRipemd160 = new DERObjectIdentifier(ecSign + ".2");
    public static final DERObjectIdentifier ecc_brainpool = new DERObjectIdentifier("1.3.36.3.3.2.8");
    public static final DERObjectIdentifier ellipticCurve = new DERObjectIdentifier(ecc_brainpool + ".1");
    public static final DERObjectIdentifier versionOne = new DERObjectIdentifier(ellipticCurve + ".1");
    public static final DERObjectIdentifier brainpoolP160r1 = new DERObjectIdentifier(versionOne + ".1");
    public static final DERObjectIdentifier brainpoolP160t1 = new DERObjectIdentifier(versionOne + ".2");
    public static final DERObjectIdentifier brainpoolP192r1 = new DERObjectIdentifier(versionOne + ".3");
    public static final DERObjectIdentifier brainpoolP192t1 = new DERObjectIdentifier(versionOne + ".4");
    public static final DERObjectIdentifier brainpoolP224r1 = new DERObjectIdentifier(versionOne + ".5");
    public static final DERObjectIdentifier brainpoolP224t1 = new DERObjectIdentifier(versionOne + ".6");
    public static final DERObjectIdentifier brainpoolP256r1 = new DERObjectIdentifier(versionOne + ".7");
    public static final DERObjectIdentifier brainpoolP256t1 = new DERObjectIdentifier(versionOne + ".8");
    public static final DERObjectIdentifier brainpoolP320r1 = new DERObjectIdentifier(versionOne + ".9");
    public static final DERObjectIdentifier brainpoolP320t1 = new DERObjectIdentifier(versionOne + ".10");
    public static final DERObjectIdentifier brainpoolP384r1 = new DERObjectIdentifier(versionOne + ".11");
    public static final DERObjectIdentifier brainpoolP384t1 = new DERObjectIdentifier(versionOne + ".12");
    public static final DERObjectIdentifier brainpoolP512r1 = new DERObjectIdentifier(versionOne + ".13");
    public static final DERObjectIdentifier brainpoolP512t1 = new DERObjectIdentifier(versionOne + ".14");
}
