package org.bouncycastle.jce.provider.symmetric;

public class SEEDMappings extends java.util.HashMap {
    public SEEDMappings() {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "AlgorithmParameters.SEED"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.SEED$AlgParams"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.AlgorithmParameters."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.kisa.KISAObjectIdentifiers.id_seedCBC
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SEED"
            r4.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.SEED"
            java.lang.String r2 = "org.bouncycastle.jce.provider.symmetric.SEED$AlgParamGen"
            r4.put(r0, r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Alg.Alias.AlgorithmParameterGenerator."
            r0.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.kisa.KISAObjectIdentifiers.id_seedCBC
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r4.put(r0, r1)
            java.lang.String r0 = "Cipher.SEED"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.SEED$ECB"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Cipher."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.kisa.KISAObjectIdentifiers.id_seedCBC
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.SEED$CBC"
            r4.put(r0, r1)
            java.lang.String r0 = "Cipher.SEEDWRAP"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.SEED$Wrap"
            r4.put(r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Alg.Alias.Cipher."
            r0.append(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.kisa.KISAObjectIdentifiers.id_npki_app_cmsSeed_wrap
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "SEEDWRAP"
            r4.put(r0, r1)
            java.lang.String r0 = "org.bouncycastle.jce.provider.symmetric.SEED$KeyGen"
            java.lang.String r1 = "KeyGenerator.SEED"
            r4.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "KeyGenerator."
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.kisa.KISAObjectIdentifiers.id_seedCBC
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r4.put(r1, r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.kisa.KISAObjectIdentifiers.id_npki_app_cmsSeed_wrap
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r4.put(r1, r0)
            return
    }
}
