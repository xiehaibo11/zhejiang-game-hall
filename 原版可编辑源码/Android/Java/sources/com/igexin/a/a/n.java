package com.igexin.a.a;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

public class n extends g {
    public n(j jVar, e eVar, int i) {
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(8);
        byteBufferAllocate.order(eVar.a ? ByteOrder.BIG_ENDIAN : ByteOrder.LITTLE_ENDIAN);
        this.a = jVar.c(byteBufferAllocate, eVar.d + ((long) (i * eVar.g)) + 44);
    }
}
