package org.bouncycastle.util.encoders;

public class HexTranslator implements org.bouncycastle.util.encoders.Translator {
    private static final byte[] hexTable = null;

    static {
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 97, 98, 99, 100, 101, 102} // fill-array
            org.bouncycastle.util.encoders.HexTranslator.hexTable = r0
            return
    }

    public HexTranslator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int decode(byte[] r5, int r6, int r7, byte[] r8, int r9) {
            r4 = this;
            int r7 = r7 / 2
            r0 = 0
        L3:
            if (r0 >= r7) goto L3f
            int r1 = r0 * 2
            int r1 = r1 + r6
            r2 = r5[r1]
            int r1 = r1 + 1
            r1 = r5[r1]
            r3 = 97
            if (r2 >= r3) goto L1a
            int r2 = r2 + (-48)
            int r2 = r2 << 4
            byte r2 = (byte) r2
            r8[r9] = r2
            goto L23
        L1a:
            int r2 = r2 + (-97)
            int r2 = r2 + 10
            int r2 = r2 << 4
            byte r2 = (byte) r2
            r8[r9] = r2
        L23:
            if (r1 >= r3) goto L2f
            r2 = r8[r9]
            int r1 = r1 + (-48)
            byte r1 = (byte) r1
            int r2 = r2 + r1
            byte r1 = (byte) r2
            r8[r9] = r1
            goto L3a
        L2f:
            r2 = r8[r9]
            int r1 = r1 + (-97)
            int r1 = r1 + 10
            byte r1 = (byte) r1
            int r2 = r2 + r1
            byte r1 = (byte) r2
            r8[r9] = r1
        L3a:
            int r9 = r9 + 1
            int r0 = r0 + 1
            goto L3
        L3f:
            return r7
    }

    @Override
    public int encode(byte[] r6, int r7, int r8, byte[] r9, int r10) {
            r5 = this;
            r0 = 0
            r1 = 0
        L2:
            if (r0 >= r8) goto L23
            int r2 = r10 + r1
            byte[] r3 = org.bouncycastle.util.encoders.HexTranslator.hexTable
            r4 = r6[r7]
            int r4 = r4 >> 4
            r4 = r4 & 15
            r4 = r3[r4]
            r9[r2] = r4
            int r2 = r2 + 1
            r4 = r6[r7]
            r4 = r4 & 15
            r3 = r3[r4]
            r9[r2] = r3
            int r7 = r7 + 1
            int r0 = r0 + 1
            int r1 = r1 + 2
            goto L2
        L23:
            int r8 = r8 * 2
            return r8
    }

    @Override
    public int getDecodedBlockSize() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public int getEncodedBlockSize() {
            r1 = this;
            r0 = 2
            return r0
    }
}
