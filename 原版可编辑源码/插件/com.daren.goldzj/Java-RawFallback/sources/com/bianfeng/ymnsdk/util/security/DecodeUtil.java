package com.bianfeng.ymnsdk.util.security;

public class DecodeUtil {
    public DecodeUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public byte[] decode(byte[] r5) {
            r4 = this;
            r0 = 0
        L1:
            int r1 = r5.length
            if (r0 >= r1) goto L18
            r1 = r5[r0]
            r2 = r1 & 221(0xdd, float:3.1E-43)
            r3 = r1 & 2
            int r3 = r3 << 4
            r1 = r1 & 32
            int r1 = r1 >> 4
            r2 = r2 | r3
            r1 = r1 | r2
            byte r1 = (byte) r1
            r5[r0] = r1
            int r0 = r0 + 1
            goto L1
        L18:
            return r5
    }
}
