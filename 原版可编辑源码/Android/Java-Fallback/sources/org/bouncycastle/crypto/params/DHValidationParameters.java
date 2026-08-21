package org.bouncycastle.crypto.params;

public class DHValidationParameters {
    private int counter;
    private byte[] seed;

    public DHValidationParameters(byte[] r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.seed = r1
            r0.counter = r2
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.DHValidationParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.crypto.params.DHValidationParameters r4 = (org.bouncycastle.crypto.params.DHValidationParameters) r4
            int r0 = r4.counter
            int r2 = r3.counter
            if (r0 == r2) goto Lf
            return r1
        Lf:
            byte[] r0 = r3.seed
            byte[] r4 = r4.seed
            boolean r4 = org.bouncycastle.util.Arrays.areEqual(r0, r4)
            return r4
    }

    public int getCounter() {
            r1 = this;
            int r0 = r1.counter
            return r0
    }

    public byte[] getSeed() {
            r1 = this;
            byte[] r0 = r1.seed
            return r0
    }

    public int hashCode() {
            r2 = this;
            int r0 = r2.counter
            byte[] r1 = r2.seed
            int r1 = org.bouncycastle.util.Arrays.hashCode(r1)
            r0 = r0 ^ r1
            return r0
    }
}
