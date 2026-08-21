package org.bouncycastle.crypto.params;

public class RC5Parameters implements org.bouncycastle.crypto.CipherParameters {
    private byte[] key;
    private int rounds;

    public RC5Parameters(byte[] r3, int r4) {
            r2 = this;
            r2.<init>()
            int r0 = r3.length
            r1 = 255(0xff, float:3.57E-43)
            if (r0 > r1) goto L15
            int r0 = r3.length
            byte[] r0 = new byte[r0]
            r2.key = r0
            r2.rounds = r4
            int r4 = r3.length
            r1 = 0
            java.lang.System.arraycopy(r3, r1, r0, r1, r4)
            return
        L15:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "RC5 key length can be no greater than 255"
            r3.<init>(r4)
            throw r3
    }

    public byte[] getKey() {
            r1 = this;
            byte[] r0 = r1.key
            return r0
    }

    public int getRounds() {
            r1 = this;
            int r0 = r1.rounds
            return r0
    }
}
