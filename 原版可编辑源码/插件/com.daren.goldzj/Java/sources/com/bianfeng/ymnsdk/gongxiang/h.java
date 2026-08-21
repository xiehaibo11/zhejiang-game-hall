package com.bianfeng.ymnsdk.gongxiang;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.Arrays;

class h {
    private final int a;
    private final ByteBuffer b;

    h(int i, ByteBuffer byteBuffer) {
        this.a = i;
        if (byteBuffer.order() != ByteOrder.LITTLE_ENDIAN) {
            throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
        }
        this.b = byteBuffer;
    }

    public byte[] a() {
        byte[] bArrArray = this.b.array();
        int iArrayOffset = this.b.arrayOffset();
        return Arrays.copyOfRange(bArrArray, this.b.position() + iArrayOffset, iArrayOffset + this.b.limit());
    }

    public int b() {
        return this.a;
    }
}
