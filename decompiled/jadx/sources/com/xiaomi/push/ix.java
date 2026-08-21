package com.xiaomi.push;

import java.io.ByteArrayOutputStream;

/* JADX INFO: loaded from: classes4.dex */
public class ix extends ByteArrayOutputStream {
    public ix() {
    }

    public ix(int i) {
        super(i);
    }

    public int a() {
        return this.count;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public byte[] m546a() {
        return this.buf;
    }
}
