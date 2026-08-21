package com.tkay.expressad.exoplayer.k;

import java.io.BufferedOutputStream;
import java.io.OutputStream;

public final class x extends BufferedOutputStream {
    private boolean a;

    public x(OutputStream outputStream) {
        super(outputStream);
    }

    public x(OutputStream outputStream, int i) {
        super(outputStream, i);
    }

    @Override
    public final void close() throws Throwable {
        this.a = true;
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
        a.b(this.a);
        this.out = outputStream;
        this.count = 0;
        this.a = false;
    }
}
