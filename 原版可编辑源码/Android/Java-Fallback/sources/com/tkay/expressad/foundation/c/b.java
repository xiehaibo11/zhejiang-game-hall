package com.tkay.expressad.foundation.c;

public abstract class b {
    private com.tkay.expressad.foundation.c.b.a a;

    private class a extends android.database.sqlite.SQLiteOpenHelper {
        final com.tkay.expressad.foundation.c.b a;

        public a(com.tkay.expressad.foundation.c.b r2, android.content.Context r3, java.lang.String r4) {
                r1 = this;
                r1.a = r2
                r2 = 0
                r0 = 67
                r1.<init>(r3, r4, r2, r0)
                return
        }

        @Override
        public final void onCreate(android.database.sqlite.SQLiteDatabase r1) {
                r0 = this;
                return
        }

        @Override
        public final void onDowngrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
                r0 = this;
                com.tkay.expressad.foundation.c.b r2 = r0.a
                r2.b(r1)
                return
        }

        @Override
        public final void onUpgrade(android.database.sqlite.SQLiteDatabase r1, int r2, int r3) {
                r0 = this;
                com.tkay.expressad.foundation.c.b r2 = r0.a
                r2.a(r1)
                return
        }
    }

    public b(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            com.tkay.expressad.foundation.c.b$a r0 = new com.tkay.expressad.foundation.c.b$a
            java.lang.String r1 = r2.c()
            r0.<init>(r2, r3, r1)
            r2.a = r0
            return
    }

    public final android.database.sqlite.SQLiteDatabase a() {
            r1 = this;
            com.tkay.expressad.foundation.c.b$a r0 = r1.a
            android.database.sqlite.SQLiteDatabase r0 = r0.getReadableDatabase()
            return r0
    }

    protected abstract void a(android.database.sqlite.SQLiteDatabase r1);

    public final synchronized android.database.sqlite.SQLiteDatabase b() {
            r1 = this;
            monitor-enter(r1)
            com.tkay.expressad.foundation.c.b$a r0 = r1.a     // Catch: java.lang.Throwable -> L8 java.lang.Exception -> Lb
            android.database.sqlite.SQLiteDatabase r0 = r0.getWritableDatabase()     // Catch: java.lang.Throwable -> L8 java.lang.Exception -> Lb
            goto Lc
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
        Lb:
            r0 = 0
        Lc:
            monitor-exit(r1)
            return r0
    }

    protected abstract void b(android.database.sqlite.SQLiteDatabase r1);

    protected abstract java.lang.String c();

    protected abstract int d();

    protected abstract void e();
}
