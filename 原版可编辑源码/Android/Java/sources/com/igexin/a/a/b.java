package com.igexin.a.a;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class b extends d {
    public b(j jVar, e eVar, long j, int i) {
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(8);
        byteBufferAllocate.order(eVar.a ? ByteOrder.BIG_ENDIAN : ByteOrder.LITTLE_ENDIAN);
        long j2 = j + ((long) (i * 16));
        this.a = jVar.b(byteBufferAllocate, j2);
        this.b = jVar.b(byteBufferAllocate, j2 + 8);
    }
}
