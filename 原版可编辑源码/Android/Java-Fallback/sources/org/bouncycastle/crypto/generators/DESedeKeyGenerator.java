package org.bouncycastle.crypto.generators;

public class DESedeKeyGenerator extends org.bouncycastle.crypto.generators.DESKeyGenerator {
    public DESedeKeyGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public byte[] generateKey() {
            r3 = this;
            int r0 = r3.strength
            byte[] r1 = new byte[r0]
        L4:
            java.security.SecureRandom r2 = r3.random
            r2.nextBytes(r1)
            org.bouncycastle.crypto.params.DESedeParameters.setOddParity(r1)
            r2 = 0
            boolean r2 = org.bouncycastle.crypto.params.DESedeParameters.isWeakKey(r1, r2, r0)
            if (r2 != 0) goto L4
            return r1
    }

    @Override
    public void init(org.bouncycastle.crypto.KeyGenerationParameters r4) {
            r3 = this;
            super.init(r4)
            int r4 = r3.strength
            r0 = 24
            if (r4 == 0) goto L2c
            int r4 = r3.strength
            r1 = 21
            if (r4 != r1) goto L10
            goto L2c
        L10:
            int r4 = r3.strength
            r1 = 14
            r2 = 16
            if (r4 != r1) goto L1b
            r3.strength = r2
            goto L2e
        L1b:
            int r4 = r3.strength
            if (r4 == r0) goto L2e
            int r4 = r3.strength
            if (r4 != r2) goto L24
            goto L2e
        L24:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "DESede key must be 192 or 128 bits long."
            r4.<init>(r0)
            throw r4
        L2c:
            r3.strength = r0
        L2e:
            return
    }
}
