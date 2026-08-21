package org.bouncycastle.jce.provider.symmetric;

public class AESMappings extends java.util.HashMap {
    private static final java.lang.String wrongAES128 = "2.16.840.1.101.3.4.2";
    private static final java.lang.String wrongAES192 = "2.16.840.1.101.3.4.22";
    private static final java.lang.String wrongAES256 = "2.16.840.1.101.3.4.42";

    public AESMappings() {
            r7 = this;
            r7.<init>()
            java.lang.String r0 = "AlgorithmParameters.AES"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.AES$AlgParams"
            r7.put(r0, r1)
            java.lang.String r0 = "AES"
            java.lang.String r1 = "Alg.Alias.AlgorithmParameters.2.16.840.1.101.3.4.2"
            r7.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.AlgorithmParameters.2.16.840.1.101.3.4.22"
            r7.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.AlgorithmParameters.2.16.840.1.101.3.4.42"
            r7.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Alg.Alias.AlgorithmParameters."
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_CBC
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r7.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_CBC
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r7.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_CBC
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r7.put(r1, r0)
            java.lang.String r1 = "AlgorithmParameterGenerator.AES"
            java.lang.String r2 = "org.bouncycastle.jce.provider.symmetric.AES$AlgParamGen"
            r7.put(r1, r2)
            java.lang.String r1 = "Alg.Alias.AlgorithmParameterGenerator.2.16.840.1.101.3.4.2"
            r7.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.AlgorithmParameterGenerator.2.16.840.1.101.3.4.22"
            r7.put(r1, r0)
            java.lang.String r1 = "Alg.Alias.AlgorithmParameterGenerator.2.16.840.1.101.3.4.42"
            r7.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Alg.Alias.AlgorithmParameterGenerator."
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_CBC
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r7.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_CBC
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r7.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_CBC
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r7.put(r1, r0)
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.AES$ECB"
            java.lang.String r2 = "Cipher.AES"
            r7.put(r2, r1)
            java.lang.String r2 = "Alg.Alias.Cipher.2.16.840.1.101.3.4.2"
            r7.put(r2, r0)
            java.lang.String r2 = "Alg.Alias.Cipher.2.16.840.1.101.3.4.22"
            r7.put(r2, r0)
            java.lang.String r2 = "Alg.Alias.Cipher.2.16.840.1.101.3.4.42"
            r7.put(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Cipher."
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_ECB
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_ECB
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_ECB
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_CBC
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.AES$CBC"
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_CBC
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_CBC
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_OFB
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.AES$OFB"
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_OFB
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_OFB
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_CFB
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.AES$CFB"
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_CFB
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_CFB
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.String r0 = "Cipher.AESWRAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.AES$Wrap"
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.Cipher."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_wrap
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "AESWRAP"
            r7.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_wrap
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_wrap
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r2)
            java.lang.String r0 = "Cipher.AESRFC3211WRAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.AES$RFC3211Wrap"
            r7.put(r0, r1)
            java.lang.String r0 = "org.bouncycastle.jce.provider.symmetric.AES$KeyGen"
            java.lang.String r1 = "KeyGenerator.AES"
            r7.put(r1, r0)
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.AES$KeyGen128"
            java.lang.String r2 = "KeyGenerator.2.16.840.1.101.3.4.2"
            r7.put(r2, r1)
            java.lang.String r2 = "org.bouncycastle.jce.provider.symmetric.AES$KeyGen192"
            java.lang.String r3 = "KeyGenerator.2.16.840.1.101.3.4.22"
            r7.put(r3, r2)
            java.lang.String r3 = "org.bouncycastle.jce.provider.symmetric.AES$KeyGen256"
            java.lang.String r4 = "KeyGenerator.2.16.840.1.101.3.4.42"
            r7.put(r4, r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "KeyGenerator."
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_ECB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r1)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_CBC
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r1)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_OFB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r1)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_CFB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r1)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_ECB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_CBC
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_OFB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_CFB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_ECB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_CBC
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_OFB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_CFB
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            r7.put(r4, r3)
            java.lang.String r4 = "KeyGenerator.AESWRAP"
            r7.put(r4, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes128_wrap
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes192_wrap
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.nist.NISTObjectIdentifiers.id_aes256_wrap
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r7.put(r0, r3)
            return
    }
}
