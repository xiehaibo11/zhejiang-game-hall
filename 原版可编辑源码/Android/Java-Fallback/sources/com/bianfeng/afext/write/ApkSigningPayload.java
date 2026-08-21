package com.bianfeng.afext.write;

class ApkSigningPayload {
    private final java.nio.ByteBuffer buffer;
    private final int id;

    ApkSigningPayload(int r2, java.nio.ByteBuffer r3) {
            r1 = this;
            r1.<init>()
            r1.id = r2
            java.nio.ByteOrder r2 = r3.order()
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
            if (r2 != r0) goto L10
            r1.buffer = r3
            return
        L10:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "ByteBuffer byte order must be little endian"
            r2.<init>(r3)
            throw r2
    }

    public byte[] getByteBuffer() {
            r4 = this;
            java.nio.ByteBuffer r0 = r4.buffer
            byte[] r0 = r0.array()
            java.nio.ByteBuffer r1 = r4.buffer
            int r1 = r1.arrayOffset()
            java.nio.ByteBuffer r2 = r4.buffer
            int r2 = r2.position()
            int r2 = r2 + r1
            java.nio.ByteBuffer r3 = r4.buffer
            int r3 = r3.limit()
            int r1 = r1 + r3
            byte[] r0 = java.util.Arrays.copyOfRange(r0, r2, r1)
            return r0
    }

    public int getId() {
            r1 = this;
            int r0 = r1.id
            return r0
    }
}
