package com.tkay.expressad.foundation.g.g;

/* JADX INFO: loaded from: classes3.dex */
public abstract class a implements Runnable {
    public static long b;
    public EnumC0465a c = EnumC0465a.READY;
    public b d;

    /* JADX INFO: renamed from: com.tkay.expressad.foundation.g.g.a$a, reason: collision with other inner class name */
    public enum EnumC0465a {
        READY,
        RUNNING,
        PAUSE,
        CANCEL,
        FINISH
    }

    public interface b {
        void a(EnumC0465a enumC0465a);
    }

    public abstract void a();

    public abstract void b();

    public abstract void c();

    @Override // java.lang.Runnable
    public final void run() {
        try {
            if (this.c == EnumC0465a.READY) {
                a(EnumC0465a.RUNNING);
                a();
                a(EnumC0465a.FINISH);
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
        if (this.c != EnumC0465a.CANCEL) {
            a(EnumC0465a.CANCEL);
        }
    }

    public final void g() {
        if (this.c == EnumC0465a.PAUSE || this.c == EnumC0465a.CANCEL || this.c == EnumC0465a.FINISH) {
            return;
        }
        a(EnumC0465a.RUNNING);
    }

    private EnumC0465a d() {
        return this.c;
    }

    private void a(EnumC0465a enumC0465a) {
        this.c = enumC0465a;
        b bVar = this.d;
        if (bVar != null) {
            bVar.a(enumC0465a);
        }
    }

    private void a(b bVar) {
        this.d = bVar;
    }
}
