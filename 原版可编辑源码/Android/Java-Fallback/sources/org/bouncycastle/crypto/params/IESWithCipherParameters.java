package org.bouncycastle.crypto.params;

public class IESWithCipherParameters extends org.bouncycastle.crypto.params.IESParameters {
    private int cipherKeySize;

    public IESWithCipherParameters(byte[] r1, byte[] r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.cipherKeySize = r4
            return
    }

    public int getCipherKeySize() {
            r1 = this;
            int r0 = r1.cipherKeySize
            return r0
    }
}
