package org.bouncycastle.crypto.params;

public class RC2Parameters implements org.bouncycastle.crypto.CipherParameters {
    private int bits;
    private byte[] key;

    public RC2Parameters(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 128(0x80, float:1.8E-43)
            if (r0 <= r1) goto L8
            r0 = 1024(0x400, float:1.435E-42)
            goto Lb
        L8:
            int r0 = r3.length
            int r0 = r0 * 8
        Lb:
            r2.<init>(r3, r0)
            return
    }

    public RC2Parameters(byte[] r3, int r4) {
            r2 = this;
            r2.<init>()
            int r0 = r3.length
            byte[] r0 = new byte[r0]
            r2.key = r0
            r2.bits = r4
            int r4 = r3.length
            r1 = 0
            java.lang.System.arraycopy(r3, r1, r0, r1, r4)
            return
    }

    public int getEffectiveKeyBits() {
            r1 = this;
            int r0 = r1.bits
            return r0
    }

    public byte[] getKey() {
            r1 = this;
            byte[] r0 = r1.key
            return r0
    }
}
