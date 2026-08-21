package org.bouncycastle.crypto.params;

public class MGFParameters implements org.bouncycastle.crypto.DerivationParameters {
    byte[] seed;

    public MGFParameters(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            r2.<init>(r3, r1, r0)
            return
    }

    public MGFParameters(byte[] r3, int r4, int r5) {
            r2 = this;
            r2.<init>()
            byte[] r0 = new byte[r5]
            r2.seed = r0
            r1 = 0
            java.lang.System.arraycopy(r3, r4, r0, r1, r5)
            return
    }

    public byte[] getSeed() {
            r1 = this;
            byte[] r0 = r1.seed
            return r0
    }
}
