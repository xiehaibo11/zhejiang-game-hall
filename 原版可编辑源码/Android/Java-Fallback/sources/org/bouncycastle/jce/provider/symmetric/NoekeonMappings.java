package org.bouncycastle.jce.provider.symmetric;

public class NoekeonMappings extends java.util.HashMap {
    public NoekeonMappings() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "AlgorithmParameters.NOEKEON"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Noekeon$AlgParams"
            r2.put(r0, r1)
            java.lang.String r0 = "AlgorithmParameterGenerator.NOEKEON"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Noekeon$AlgParamGen"
            r2.put(r0, r1)
            java.lang.String r0 = "Cipher.NOEKEON"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Noekeon$ECB"
            r2.put(r0, r1)
            java.lang.String r0 = "KeyGenerator.NOEKEON"
            java.lang.String r1 = "org.bouncycastle.jce.provider.symmetric.Noekeon$KeyGen"
            r2.put(r0, r1)
            return
    }
}
