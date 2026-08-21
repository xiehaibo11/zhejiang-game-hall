package com.tkay.expressad.foundation.c;

public class c extends com.tkay.expressad.foundation.c.b {
    private static volatile com.tkay.expressad.foundation.c.c a;

    private c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.tkay.expressad.foundation.c.c a(android.content.Context r2) {
            com.tkay.expressad.foundation.c.c r0 = com.tkay.expressad.foundation.c.c.a
            if (r0 != 0) goto L1b
            java.lang.Class<com.tkay.expressad.foundation.c.c> r0 = com.tkay.expressad.foundation.c.c.class
            monitor-enter(r0)
            com.tkay.expressad.foundation.c.c r1 = com.tkay.expressad.foundation.c.c.a     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L16
            com.tkay.expressad.foundation.c.c r1 = new com.tkay.expressad.foundation.c.c     // Catch: java.lang.Throwable -> L18
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L18
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18
            com.tkay.expressad.foundation.c.c.a = r1     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L18
            goto L1b
        L18:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L1b:
            com.tkay.expressad.foundation.c.c r2 = com.tkay.expressad.foundation.c.c.a
            return r2
    }

    private static void c(android.database.sqlite.SQLiteDatabase r1) {
            java.lang.String r0 = "DROP TABLE IF EXISTS 'campaign'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'frequence'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'campaignclick'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'click_time'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'load_stat'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'fq_info'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'dailyplaycap'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'display_resource_type'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'unit_id'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            java.lang.String r0 = "DROP TABLE IF EXISTS 'c_replace_temp'"
            r1.execSQL(r0)     // Catch: java.lang.Exception -> L33
            return
        L33:
            r1 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L3b
            r1.printStackTrace()
        L3b:
            return
    }

    private static void f() {
            return
    }

    @Override
    protected final void a(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            c(r1)
            return
    }

    @Override
    protected final void b(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            c(r1)
            return
    }

    @Override
    protected final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = "tkay_expressad.db"
            return r0
    }

    @Override
    protected final int d() {
            r1 = this;
            r0 = 67
            return r0
    }

    @Override
    protected final void e() {
            r0 = this;
            return
    }
}
