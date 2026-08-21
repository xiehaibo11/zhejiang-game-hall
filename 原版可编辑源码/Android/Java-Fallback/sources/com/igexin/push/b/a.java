package com.igexin.push.b;

public class a extends com.igexin.b.a.d.e {
    private static final java.lang.String e = null;
    protected android.database.sqlite.SQLiteDatabase a;
    protected android.database.Cursor b;
    java.util.List<com.igexin.push.core.b.b> c;
    boolean d;

    static {
            java.lang.Class<com.igexin.push.b.a> r0 = com.igexin.push.b.a.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.b.a.e = r0
            return
    }

    public a() {
            r1 = this;
            r0 = 1
            r1.<init>(r0)
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.c = r0
            return
    }

    public void a(com.igexin.push.core.b.b r2) {
            r1 = this;
            java.util.List<com.igexin.push.core.b.b> r0 = r1.c
            r0.add(r2)
            return
    }

    @Override
    public void b() {
            r3 = this;
            super.b()
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.b.b r0 = r0.k()
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()
            r3.a = r0
            r1 = 5
            r0.setVersion(r1)
            java.util.List<com.igexin.push.core.b.b> r0 = r3.c
            java.util.Iterator r0 = r0.iterator()
        L1b:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r0.next()
            com.igexin.push.core.b.b r1 = (com.igexin.push.core.b.b) r1
            android.database.sqlite.SQLiteDatabase r2 = r3.a
            r1.a(r2)
            goto L1b
        L2d:
            java.util.List<com.igexin.push.core.b.b> r0 = r3.c
            java.util.Iterator r0 = r0.iterator()
        L33:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4f
            java.lang.Object r1 = r0.next()
            com.igexin.push.core.b.b r1 = (com.igexin.push.core.b.b) r1
            boolean r2 = r3.d
            if (r2 == 0) goto L49
            android.database.sqlite.SQLiteDatabase r2 = r3.a
            r1.c(r2)
            goto L33
        L49:
            android.database.sqlite.SQLiteDatabase r2 = r3.a
            r1.b(r2)
            goto L33
        L4f:
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.b.c r1 = new com.igexin.push.b.c
            r2 = -980948(0xfffffffffff1082c, float:NaN)
            r1.<init>(r2)
            r0.a(r1)
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            r0.c()
            return
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2147483639(0xffffffff80000009, float:-1.3E-44)
            return r0
    }

    @Override
    public void c() {
            r1 = this;
            super.c()
            android.database.Cursor r0 = r1.b
            if (r0 == 0) goto La
            r0.close()     // Catch: java.lang.Exception -> La
        La:
            return
    }

    @Override
    public void d() {
            r1 = this;
            super.d()
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
