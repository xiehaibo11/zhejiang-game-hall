package com.loc;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* JADX INFO: compiled from: AbstractBuilder.java */
/* JADX INFO: loaded from: classes2.dex */
public abstract class cv {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    cx f2916a;
    private ByteBuffer b;

    cv(int i) {
        ByteBuffer byteBufferAllocate = ByteBuffer.allocate(i);
        this.b = byteBufferAllocate;
        byteBufferAllocate.order(ByteOrder.LITTLE_ENDIAN);
        this.f2916a = new cx(this.b);
    }

    public final cv a() {
        this.f2916a.a(this.b);
        return this;
    }
}
