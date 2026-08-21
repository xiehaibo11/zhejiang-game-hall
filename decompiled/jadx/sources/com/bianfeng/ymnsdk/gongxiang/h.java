package com.bianfeng.ymnsdk.gongxiang;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.util.Arrays;

/* JADX INFO: compiled from: ApkSigningPayload.java */
/* JADX INFO: loaded from: classes.dex */
class h {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final int f1471a;
    private final ByteBuffer b;

    h(int id, ByteBuffer buffer) {
        this.f1471a = id;
        if (buffer.order() != ByteOrder.LITTLE_ENDIAN) {
            throw new IllegalArgumentException("ByteBuffer byte order must be little endian");
        }
        this.b = buffer;
    }

    public int b() {
        return this.f1471a;
    }

    public byte[] a() {
        byte[] array = this.b.array();
        int arrayOffset = this.b.arrayOffset();
        return Arrays.copyOfRange(array, this.b.position() + arrayOffset, this.b.limit() + arrayOffset);
    }
}
