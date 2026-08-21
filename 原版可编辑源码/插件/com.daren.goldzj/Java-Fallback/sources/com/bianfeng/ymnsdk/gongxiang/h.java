package com.bianfeng.ymnsdk.gongxiang;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.Arrays;

class h {
    private final int a;
    private final ByteBuffer b;

    h(int r2, ByteBuffer r3) {
        this.a = r2;
        if (r3.order() != ByteOrder.LITTLE_ENDIAN) goto L7;
        this.b = r3;
        return;
    L7:
        throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
    }

    public byte[] a() {
        byte[] r0 = this.b.array();
        int r1 = this.b.arrayOffset();
        return Arrays.copyOfRange(r0, this.b.position() + r1, r1 + this.b.limit());
    }

    public int b() {
        return this.a;
    }
}
