package com.bianfeng.afext.write;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.Arrays;

class ApkSigningPayload {
    private final ByteBuffer buffer;
    private final int id;

    ApkSigningPayload(int i, ByteBuffer byteBuffer) {
        this.id = i;
        if (byteBuffer.order() != ByteOrder.LITTLE_ENDIAN) {
            throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
        }
        this.buffer = byteBuffer;
    }

    public int getId() {
        return this.id;
    }

    public byte[] getByteBuffer() {
        byte[] bArrArray = this.buffer.array();
        int iArrayOffset = this.buffer.arrayOffset();
        return Arrays.copyOfRange(bArrArray, this.buffer.position() + iArrayOffset, iArrayOffset + this.buffer.limit());
    }
}
