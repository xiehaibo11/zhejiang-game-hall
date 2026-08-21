package org.bouncycastle.asn1.cryptopro;

public class ECGOST3410NamedCurves {
    static final java.util.Hashtable names = null;
    static final java.util.Hashtable objIds = null;
    static final java.util.Hashtable params = null;

    static {
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.params = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.names = r0
            java.math.BigInteger r0 = new java.math.BigInteger
            java.lang.String r1 = "115792089237316195423570985008687907853269984665640564039457584007913129639319"
            r0.<init>(r1)
            java.math.BigInteger r2 = new java.math.BigInteger
            java.lang.String r3 = "115792089237316195423570985008687907853073762908499243225378155805079068850323"
            r2.<init>(r3)
            org.bouncycastle.math.ec.ECCurve$Fp r4 = new org.bouncycastle.math.ec.ECCurve$Fp
            java.math.BigInteger r5 = new java.math.BigInteger
            java.lang.String r6 = "115792089237316195423570985008687907853269984665640564039457584007913129639316"
            r5.<init>(r6)
            java.math.BigInteger r7 = new java.math.BigInteger
            java.lang.String r8 = "166"
            r7.<init>(r8)
            r4.<init>(r0, r5, r7)
            org.bouncycastle.crypto.params.ECDomainParameters r0 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECPoint$Fp r5 = new org.bouncycastle.math.ec.ECPoint$Fp
            org.bouncycastle.math.ec.ECFieldElement$Fp r7 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r9 = r4.getQ()
            java.math.BigInteger r10 = new java.math.BigInteger
            java.lang.String r11 = "1"
            r10.<init>(r11)
            r7.<init>(r9, r10)
            org.bouncycastle.math.ec.ECFieldElement$Fp r9 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r10 = r4.getQ()
            java.math.BigInteger r12 = new java.math.BigInteger
            java.lang.String r13 = "64033881142927202683649881450433473985931760268884941288852745803908878638612"
            r12.<init>(r13)
            r9.<init>(r10, r12)
            r5.<init>(r4, r7, r9)
            r0.<init>(r4, r5, r2)
            java.util.Hashtable r2 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.params
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_A
            r2.put(r4, r0)
            java.math.BigInteger r0 = new java.math.BigInteger
            r0.<init>(r1)
            java.math.BigInteger r1 = new java.math.BigInteger
            r1.<init>(r3)
            org.bouncycastle.math.ec.ECCurve$Fp r2 = new org.bouncycastle.math.ec.ECCurve$Fp
            java.math.BigInteger r3 = new java.math.BigInteger
            r3.<init>(r6)
            java.math.BigInteger r4 = new java.math.BigInteger
            r4.<init>(r8)
            r2.<init>(r0, r3, r4)
            org.bouncycastle.crypto.params.ECDomainParameters r0 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECPoint$Fp r3 = new org.bouncycastle.math.ec.ECPoint$Fp
            org.bouncycastle.math.ec.ECFieldElement$Fp r4 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r5 = r2.getQ()
            java.math.BigInteger r6 = new java.math.BigInteger
            r6.<init>(r11)
            r4.<init>(r5, r6)
            org.bouncycastle.math.ec.ECFieldElement$Fp r5 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r6 = r2.getQ()
            java.math.BigInteger r7 = new java.math.BigInteger
            r7.<init>(r13)
            r5.<init>(r6, r7)
            r3.<init>(r2, r4, r5)
            r0.<init>(r2, r3, r1)
            java.util.Hashtable r1 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.params
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_XchA
            r1.put(r2, r0)
            java.math.BigInteger r0 = new java.math.BigInteger
            java.lang.String r1 = "57896044618658097711785492504343953926634992332820282019728792003956564823193"
            r0.<init>(r1)
            java.math.BigInteger r1 = new java.math.BigInteger
            java.lang.String r2 = "57896044618658097711785492504343953927102133160255826820068844496087732066703"
            r1.<init>(r2)
            org.bouncycastle.math.ec.ECCurve$Fp r2 = new org.bouncycastle.math.ec.ECCurve$Fp
            java.math.BigInteger r3 = new java.math.BigInteger
            java.lang.String r4 = "57896044618658097711785492504343953926634992332820282019728792003956564823190"
            r3.<init>(r4)
            java.math.BigInteger r4 = new java.math.BigInteger
            java.lang.String r5 = "28091019353058090096996979000309560759124368558014865957655842872397301267595"
            r4.<init>(r5)
            r2.<init>(r0, r3, r4)
            org.bouncycastle.crypto.params.ECDomainParameters r3 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECPoint$Fp r4 = new org.bouncycastle.math.ec.ECPoint$Fp
            org.bouncycastle.math.ec.ECFieldElement$Fp r5 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r6 = new java.math.BigInteger
            r6.<init>(r11)
            r5.<init>(r0, r6)
            org.bouncycastle.math.ec.ECFieldElement$Fp r6 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r7 = new java.math.BigInteger
            java.lang.String r8 = "28792665814854611296992347458380284135028636778229113005756334730996303888124"
            r7.<init>(r8)
            r6.<init>(r0, r7)
            r4.<init>(r2, r5, r6)
            r3.<init>(r2, r4, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.params
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_B
            r0.put(r1, r3)
            java.math.BigInteger r0 = new java.math.BigInteger
            java.lang.String r1 = "70390085352083305199547718019018437841079516630045180471284346843705633502619"
            r0.<init>(r1)
            java.math.BigInteger r2 = new java.math.BigInteger
            java.lang.String r3 = "70390085352083305199547718019018437840920882647164081035322601458352298396601"
            r2.<init>(r3)
            org.bouncycastle.math.ec.ECCurve$Fp r4 = new org.bouncycastle.math.ec.ECCurve$Fp
            java.math.BigInteger r5 = new java.math.BigInteger
            java.lang.String r6 = "70390085352083305199547718019018437841079516630045180471284346843705633502616"
            r5.<init>(r6)
            java.math.BigInteger r7 = new java.math.BigInteger
            java.lang.String r8 = "32858"
            r7.<init>(r8)
            r4.<init>(r0, r5, r7)
            org.bouncycastle.crypto.params.ECDomainParameters r5 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECPoint$Fp r7 = new org.bouncycastle.math.ec.ECPoint$Fp
            org.bouncycastle.math.ec.ECFieldElement$Fp r9 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r10 = new java.math.BigInteger
            java.lang.String r11 = "0"
            r10.<init>(r11)
            r9.<init>(r0, r10)
            org.bouncycastle.math.ec.ECFieldElement$Fp r10 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r12 = new java.math.BigInteger
            java.lang.String r13 = "29818893917731240733471273240314769927240550812383695689146495261604565990247"
            r12.<init>(r13)
            r10.<init>(r0, r12)
            r7.<init>(r4, r9, r10)
            r5.<init>(r4, r7, r2)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.params
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_XchB
            r0.put(r2, r5)
            java.math.BigInteger r0 = new java.math.BigInteger
            r0.<init>(r1)
            java.math.BigInteger r1 = new java.math.BigInteger
            r1.<init>(r3)
            org.bouncycastle.math.ec.ECCurve$Fp r2 = new org.bouncycastle.math.ec.ECCurve$Fp
            java.math.BigInteger r3 = new java.math.BigInteger
            r3.<init>(r6)
            java.math.BigInteger r4 = new java.math.BigInteger
            r4.<init>(r8)
            r2.<init>(r0, r3, r4)
            org.bouncycastle.crypto.params.ECDomainParameters r3 = new org.bouncycastle.crypto.params.ECDomainParameters
            org.bouncycastle.math.ec.ECPoint$Fp r4 = new org.bouncycastle.math.ec.ECPoint$Fp
            org.bouncycastle.math.ec.ECFieldElement$Fp r5 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r6 = new java.math.BigInteger
            r6.<init>(r11)
            r5.<init>(r0, r6)
            org.bouncycastle.math.ec.ECFieldElement$Fp r6 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r7 = new java.math.BigInteger
            r7.<init>(r13)
            r6.<init>(r0, r7)
            r4.<init>(r2, r5, r6)
            r3.<init>(r2, r4, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.params
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_C
            r0.put(r1, r3)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_A
            java.lang.String r2 = "GostR3410-2001-CryptoPro-A"
            r0.put(r2, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_B
            java.lang.String r3 = "GostR3410-2001-CryptoPro-B"
            r0.put(r3, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_C
            java.lang.String r4 = "GostR3410-2001-CryptoPro-C"
            r0.put(r4, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_XchA
            java.lang.String r5 = "GostR3410-2001-CryptoPro-XchA"
            r0.put(r5, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_XchB
            java.lang.String r6 = "GostR3410-2001-CryptoPro-XchB"
            r0.put(r6, r1)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.names
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_A
            r0.put(r1, r2)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.names
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_B
            r0.put(r1, r3)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.names
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_C
            r0.put(r1, r4)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.names
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_XchA
            r0.put(r1, r5)
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.names
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.cryptopro.CryptoProObjectIdentifiers.gostR3410_2001_CryptoPro_XchB
            r0.put(r1, r6)
            return
    }

    public ECGOST3410NamedCurves() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.crypto.params.ECDomainParameters getByName(java.lang.String r1) {
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            if (r1 == 0) goto L13
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.params
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.crypto.params.ECDomainParameters r1 = (org.bouncycastle.crypto.params.ECDomainParameters) r1
            return r1
        L13:
            r1 = 0
            return r1
    }

    public static org.bouncycastle.crypto.params.ECDomainParameters getByOID(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.params
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.crypto.params.ECDomainParameters r1 = (org.bouncycastle.crypto.params.ECDomainParameters) r1
            return r1
    }

    public static java.lang.String getName(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.names
            java.lang.Object r1 = r0.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            return r1
    }

    public static java.util.Enumeration getNames() {
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds
            java.util.Enumeration r0 = r0.keys()
            return r0
    }

    public static org.bouncycastle.asn1.DERObjectIdentifier getOID(java.lang.String r1) {
            java.util.Hashtable r0 = org.bouncycastle.asn1.cryptopro.ECGOST3410NamedCurves.objIds
            java.lang.Object r1 = r0.get(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = (org.bouncycastle.asn1.DERObjectIdentifier) r1
            return r1
    }
}
