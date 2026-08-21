package com.igexin.b.a.b.a.a;

import android.text.TextUtils;

public final class l extends a {
    private com.igexin.b.a.b.a.a.a.b L;
    private byte[] M;
    private com.igexin.b.a.b.d N;
    o i;
    com.igexin.b.a.b.b j;

    public l(o oVar, com.igexin.b.a.b.b bVar, com.igexin.b.a.b.d dVar) {
        super(-2035, null, bVar);
        this.j = bVar;
        this.i = oVar;
        this.N = dVar;
    }

    public void a(com.igexin.b.a.b.a.a.a.b bVar) {
        this.L = bVar;
    }

    @Override
    public void b() {
        super.b();
        Thread threadCurrentThread = Thread.currentThread();
        com.igexin.b.a.c.b.a("GS-R|" + threadCurrentThread + " running", new Object[0]);
        while (this.h && !threadCurrentThread.isInterrupted() && !this.e) {
            try {
                this.j.c(null, this.N, this.i);
                this.f = b.a;
            } catch (Throwable th) {
                this.h = false;
                if (this.f != b.c) {
                    this.f = b.b;
                    this.g = (th.getMessage() == null || !th.getMessage().equals("read = -1, end of stream !")) ? th.toString() : "end of stream";
                }
            }
        }
        this.e = true;
        com.igexin.b.a.c.b.a("GS-R|finish ~~~~~~", new Object[0]);
    }

    @Override
    public final int b_() {
        return -2035;
    }

    @Override
    public void f() {
        super.f();
        com.igexin.b.a.c.b.a("GS-R|rt dispose", new Object[0]);
        if (this.L != null) {
            if (this.f != b.b) {
                this.L.a(this);
            } else if (!TextUtils.isEmpty(this.g)) {
                this.L.a(new Exception(this.g));
            }
        }
        if (this.M != null) {
            this.M = null;
        }
        this.L = null;
    }

    public void j() {
        this.h = false;
        this.f = b.c;
    }
}
