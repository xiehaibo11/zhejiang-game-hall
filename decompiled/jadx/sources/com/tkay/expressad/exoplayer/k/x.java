package com.tkay.expressad.exoplayer.k;

import java.io.BufferedOutputStream;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes3.dex */
public final class x extends BufferedOutputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f6778a;

    public x(OutputStream outputStream) {
        super(outputStream);
    }

    public x(OutputStream outputStream, int i) {
        super(outputStream, i);
    }

    @Override // java.io.FilterOutputStream, java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() throws Throwable {
        this.f6778a = true;
        try {
            flush();
            th = null;
        } catch (Throwable th) {
            th = th;
        }
        try {
            this.out.close();
        } catch (Throwable th2) {
            if (th == null) {
                th = th2;
            }
        }
        if (th != null) {
            af.a(th);
        }
    }

    public final void a(OutputStream outputStream) {
        a.b(this.f6778a);
        this.out = outputStream;
        this.count = 0;
        this.f6778a = false;
    }
}
