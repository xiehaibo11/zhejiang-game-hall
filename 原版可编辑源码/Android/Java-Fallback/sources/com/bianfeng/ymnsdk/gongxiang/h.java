package com.bianfeng.ymnsdk.gongxiang;

class h {
    private final int a;
    private final java.nio.ByteBuffer b;

    h(int r3, java.nio.ByteBuffer r4) {
            r2 = this;
            r2.<init>()
            r2.a = r3
            java.nio.ByteOrder r0 = r4.order()
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            if (r0 != r1) goto L10
            r2.b = r4
            return
        L10:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "ByteBuffer byte order must be little endian"
            r0.<init>(r1)
            throw r0
    }

    public byte[] a() {
            r4 = this;
            java.nio.ByteBuffer r0 = r4.b
            byte[] r0 = r0.array()
            java.nio.ByteBuffer r1 = r4.b
            int r1 = r1.arrayOffset()
            java.nio.ByteBuffer r2 = r4.b
            int r2 = r2.position()
            int r2 = r2 + r1
            java.nio.ByteBuffer r3 = r4.b
            int r3 = r3.limit()
            int r3 = r3 + r1
            byte[] r2 = java.util.Arrays.copyOfRange(r0, r2, r3)
            return r2
    }

    public int b() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
