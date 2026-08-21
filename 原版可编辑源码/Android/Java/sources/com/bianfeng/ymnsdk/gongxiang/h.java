package com.bianfeng.ymnsdk.gongxiang;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.Arrays;

class h {
    private final int a;
    private final ByteBuffer b;

    h(int id, ByteBuffer buffer) {
        this.a = id;
        if (buffer.order() != ByteOrder.LITTLE_ENDIAN) {
            throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
        }
        this.b = buffer;
    }

    public int b() {
        return this.a;
    }

    public byte[] a() {
        byte[] array = this.b.array();
        int arrayOffset = this.b.arrayOffset();
        return Arrays.copyOfRange(array, this.b.position() + arrayOffset, this.b.limit() + arrayOffset);
    }
}
