package com.igexin.push.b;

public abstract class d extends com.igexin.b.a.d.e {
    private static final java.lang.String a = null;
    protected android.database.sqlite.SQLiteDatabase d;
    protected android.database.Cursor e;
    protected android.content.ContentValues f;
    public com.igexin.push.b.c g;

    static {
            java.lang.String r0 = com.igexin.push.config.i.a
            com.igexin.push.b.d.a = r0
            return
    }

    public d() {
            r1 = this;
            r0 = 1
            r1.<init>(r0)
            return
    }

    public d(android.content.ContentValues r2) {
            r1 = this;
            r0 = 1
            r1.<init>(r0)
            r1.f = r2
            return
    }

    public abstract void a();

    @Override
    public void b() {
            r2 = this;
            super.b()
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.b.b r0 = r0.k()
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()
            r2.d = r0
            r2.a()
            com.igexin.push.b.c r0 = r2.g
            if (r0 == 0) goto L28
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.b.c r1 = r2.g
            r0.a(r1)
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            r0.c()
        L28:
            return
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2147483640(0xffffffff80000008, float:-1.1E-44)
            return r0
    }

    @Override
    public void c() {
            r1 = this;
            super.c()
            android.database.Cursor r0 = r1.e
            if (r0 == 0) goto L17
            boolean r0 = r0.isClosed()
            if (r0 != 0) goto L17
            android.database.Cursor r0 = r1.e     // Catch: java.lang.Exception -> L13
            r0.close()     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r0 = move-exception
            r0.printStackTrace()
        L17:
            return
    }

    @Override
    public void d() {
            r1 = this;
            r0 = 1
            r1.n = r0
            r1.I = r0
            return
    }

    @Override
    protected void e() {
            r0 = this;
            return
    }
}
