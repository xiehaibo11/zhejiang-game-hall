package com.tkay.expressad.foundation.g.g;

public abstract class a implements Runnable {
    public static long b;
    public a c = a.a;
    public b d;

    public enum a {
        a,
        b,
        c,
        d,
        e
    }

    public interface b {
        void a(a aVar);
    }

    public abstract void a();

    public abstract void b();

    public abstract void c();

    @Override
    public final void run() {
        try {
            if (this.c == a.a) {
                a(a.b);
                a();
                a(a.e);
            }
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    public a() {
        b++;
    }

    public static long e() {
        return b;
    }

    public final void f() {
        if (this.c != a.d) {
            a(a.d);
        }
    }

    public final void g() {
        if (this.c == a.c || this.c == a.d || this.c == a.e) {
            return;
        }
        a(a.b);
    }

    private a d() {
        return this.c;
    }

    private void a(a aVar) {
        this.c = aVar;
        b bVar = this.d;
        if (bVar != null) {
            bVar.a(aVar);
        }
    }

    private void a(b bVar) {
        this.d = bVar;
    }
}
