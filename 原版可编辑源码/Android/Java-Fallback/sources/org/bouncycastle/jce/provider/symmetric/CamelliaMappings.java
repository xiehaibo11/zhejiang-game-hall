package org.bouncycastle.jce.provider.symmetric;

public class CamelliaMappings extends java.util.HashMap {
    public CamelliaMappings() {
            r6 = this;
            r6.<init>()
            java.lang.String r0 = "AlgorithmParameters.CAMELLIA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Camellia$AlgParams"
            r6.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.AlgorithmParameters."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia128_cbc
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "CAMELLIA"
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia192_cbc
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia256_cbc
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.String r0 = "AlgorithmParameterGenerator.CAMELLIA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Camellia$AlgParamGen"
            r6.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.AlgorithmParameterGenerator."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia128_cbc
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia192_cbc
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia256_cbc
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.String r0 = "Cipher.CAMELLIA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Camellia$ECB"
            r6.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cipher."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia128_cbc
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "org.bouncycastle.jce.provider.symmetric.Camellia$CBC"
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia192_cbc
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia256_cbc
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.String r0 = "Cipher.CAMELLIARFC3211WRAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Camellia$RFC3211Wrap"
            r6.put(r0, r1)
            java.lang.String r0 = "Cipher.CAMELLIAWRAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Camellia$Wrap"
            r6.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.Cipher."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia128_wrap
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "CAMELLIAWRAP"
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia192_wrap
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia256_wrap
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.String r0 = "KeyGenerator.CAMELLIA"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Camellia$KeyGen"
            r6.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "KeyGenerator."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia128_wrap
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "org.bouncycastle.jce.provider.symmetric.Camellia$KeyGen128"
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia192_wrap
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "org.bouncycastle.jce.provider.symmetric.Camellia$KeyGen192"
            r6.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia256_wrap
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "org.bouncycastle.jce.provider.symmetric.Camellia$KeyGen256"
            r6.put(r0, r4)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r5 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia128_cbc
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia192_cbc
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.ntt.NTTObjectIdentifiers.id_camellia256_cbc
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r6.put(r0, r4)
            return
    }
}
