package com.bianfeng.ymnsdk.util.security;

public class DecodeUtil {
    public DecodeUtil() {
    }

    public byte[] decode(byte[] r5) {
        int r0 = 0;
    L4:
        if (r0 >= r5.length) goto L6;
        byte r1 = r5[r0];
        int r2 = r1 & 221;
        int r3 = (r1 & 2) << 4;
        r5[r0] = (byte) (((r1 & 32) >> 4) | (r2 | r3));
        r0 = r0 + 1;
        goto L4
    L6:
        return r5;
    }
}
