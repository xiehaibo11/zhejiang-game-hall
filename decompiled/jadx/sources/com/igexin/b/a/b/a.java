package com.igexin.b.a.b;

import java.io.IOException;
import java.io.OutputStream;
import org.json.HTTP;

/* JADX INFO: loaded from: classes2.dex */
public class a extends OutputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private OutputStream f2429a;
    private int b = 0;
    private int c = 0;
    private int d = 0;
    private int e;

    public a(OutputStream outputStream, int i) {
        this.f2429a = null;
        this.e = 0;
        this.f2429a = outputStream;
        this.e = i;
    }

    protected void a() throws IOException {
        if (this.c > 0) {
            int i = this.e;
            if (i > 0 && this.d == i) {
                this.f2429a.write(HTTP.CRLF.getBytes());
                this.d = 0;
            }
            char cCharAt = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".charAt((this.b << 8) >>> 26);
            char cCharAt2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".charAt((this.b << 14) >>> 26);
            int i2 = this.c;
            char cCharAt3 = com.alipay.sdk.m.n.a.h;
            char cCharAt4 = i2 < 2 ? '=' : "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".charAt((this.b << 20) >>> 26);
            if (this.c >= 3) {
                cCharAt3 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/".charAt((this.b << 26) >>> 26);
            }
            this.f2429a.write(cCharAt);
            this.f2429a.write(cCharAt2);
            this.f2429a.write(cCharAt4);
            this.f2429a.write(cCharAt3);
            this.d += 4;
            this.c = 0;
            this.b = 0;
        }
    }

    @Override // java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public void close() throws IOException {
        a();
        this.f2429a.close();
    }

    @Override // java.io.OutputStream
    public void write(int i) throws IOException {
        int i2 = this.c;
        this.b = ((i & 255) << (16 - (i2 * 8))) | this.b;
        int i3 = i2 + 1;
        this.c = i3;
        if (i3 == 3) {
            a();
        }
    }
}
