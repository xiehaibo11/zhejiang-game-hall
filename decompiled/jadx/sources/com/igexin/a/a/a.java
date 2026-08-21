package com.igexin.a.a;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* JADX INFO: loaded from: classes2.dex */
public class a extends d {
    public a(j jVar, e eVar, long j, int i) {
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(4);
        byteBufferAllocate.order(eVar.f2404a ? ByteOrder.BIG_ENDIAN : ByteOrder.LITTLE_ENDIAN);
        long j2 = j + ((long) (i * 8));
        this.f2403a = jVar.c(byteBufferAllocate, j2);
        this.b = jVar.c(byteBufferAllocate, j2 + 4);
    }
}
