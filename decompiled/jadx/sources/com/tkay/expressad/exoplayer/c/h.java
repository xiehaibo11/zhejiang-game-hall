package com.tkay.expressad.exoplayer.c;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* JADX INFO: loaded from: classes3.dex */
public final class h extends f {
    public ByteBuffer c;
    private final g<?, h, ?> d;

    private h(g<?, h, ?> gVar) {
        this.d = gVar;
    }

    private ByteBuffer a(long j, int i) {
        this.f6516a = j;
        ByteBuffer byteBuffer = this.c;
        if (byteBuffer == null || byteBuffer.capacity() < i) {
            this.c = ByteBuffer.allocateDirect(i).order(ByteOrder.nativeOrder());
        }
        this.c.position(0);
        this.c.limit(i);
        return this.c;
    }

    @Override // com.tkay.expressad.exoplayer.c.a
    public final void a() {
        super.a();
        ByteBuffer byteBuffer = this.c;
        if (byteBuffer != null) {
            byteBuffer.clear();
        }
    }

    @Override // com.tkay.expressad.exoplayer.c.f
    public final void e() {
        this.d.a(this);
    }
}
