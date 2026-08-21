package com.tramini.plugin.a.b;

public class c extends com.tramini.plugin.a.b.b {
    private static com.tramini.plugin.a.b.c a;

    private c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.tramini.plugin.a.b.c a(android.content.Context r2) {
            com.tramini.plugin.a.b.c r0 = com.tramini.plugin.a.b.c.a
            if (r0 != 0) goto L17
            java.lang.Class<com.tramini.plugin.a.b.c> r0 = com.tramini.plugin.a.b.c.class
            monitor-enter(r0)
            com.tramini.plugin.a.b.c r1 = new com.tramini.plugin.a.b.c     // Catch: java.lang.Throwable -> L14
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tramini.plugin.a.b.c.a = r1     // Catch: java.lang.Throwable -> L14
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tramini.plugin.a.b.c r2 = com.tramini.plugin.a.b.c.a
            return r2
    }

    private void h() {
            r2 = this;
            android.database.sqlite.SQLiteDatabase r0 = r2.b()     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = "DROP TABLE IF EXISTS 'il'"
            r0.execSQL(r1)     // Catch: java.lang.Throwable -> L12
            android.database.sqlite.SQLiteDatabase r0 = r2.b()     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = "DROP TABLE IF EXISTS 'il_all'"
            r0.execSQL(r1)     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    @Override
    protected final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = "tramini.db"
            return r0
    }

    @Override
    protected final int d() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    protected final void e() {
            r0 = this;
            return
    }

    @Override
    protected final void f() {
            r0 = this;
            return
    }

    @Override
    protected final void g() {
            r0 = this;
            return
    }
}
