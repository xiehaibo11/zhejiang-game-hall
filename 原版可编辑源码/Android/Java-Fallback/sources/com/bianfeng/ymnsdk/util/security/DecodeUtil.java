package com.bianfeng.ymnsdk.util.security;

public class DecodeUtil {
    public DecodeUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public byte[] decode(byte[] r7) {
            r6 = this;
            r0 = 0
        L1:
            int r1 = r7.length
            if (r0 >= r1) goto L19
            r1 = r7[r0]
            r2 = r1 & 221(0xdd, float:3.1E-43)
            r3 = r1 & 2
            int r3 = r3 << 4
            r4 = r1 & 32
            int r4 = r4 >> 4
            r5 = r2 | r3
            r5 = r5 | r4
            byte r5 = (byte) r5
            r7[r0] = r5
            int r0 = r0 + 1
            goto L1
        L19:
            return r7
    }
}
