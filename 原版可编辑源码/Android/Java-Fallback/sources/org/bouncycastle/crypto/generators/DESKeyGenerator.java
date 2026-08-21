package org.bouncycastle.crypto.generators;

public class DESKeyGenerator extends org.bouncycastle.crypto.CipherKeyGenerator {
    public DESKeyGenerator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public byte[] generateKey() {
            r2 = this;
            r0 = 8
            byte[] r0 = new byte[r0]
        L4:
            java.security.SecureRandom r1 = r2.random
            r1.nextBytes(r0)
            org.bouncycastle.crypto.params.DESParameters.setOddParity(r0)
            r1 = 0
            boolean r1 = org.bouncycastle.crypto.params.DESParameters.isWeakKey(r0, r1)
            if (r1 != 0) goto L4
            return r0
    }
}
