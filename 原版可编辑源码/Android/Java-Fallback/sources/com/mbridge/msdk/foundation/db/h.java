package com.mbridge.msdk.foundation.db;

public abstract class h {
    private com.mbridge.msdk.foundation.db.h.a a;

    private class a extends android.database.sqlite.SQLiteOpenHelper {
        final com.mbridge.msdk.foundation.db.h a;

        public a(com.mbridge.msdk.foundation.db.h r1, android.content.Context r2, java.lang.String r3, int r4) {
                r0 = this;
                r0.a = r1
                r1 = 0
                r0.<init>(r2, r3, r1, r4)
                boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r1 == 0) goto L28
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "数据库： name :"
                r1.append(r2)
                r1.append(r3)
                java.lang.String r2 = "  "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r1 = r1.toString()
                java.lang.String r2 = "DatabaseOpenHelper"
                com.mbridge.msdk.foundation.tools.z.a(r2, r1)
            L28:
                return
        }

        @Override
        public final void onCreate(android.database.sqlite.SQLiteDatabase r3) {
                r2 = this;
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto Lb
                java.lang.String r0 = "DatabaseOpenHelper"
                java.lang.String r1 = "数据库创建了"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            Lb:
                com.mbridge.msdk.foundation.db.h r0 = r2.a
                r0.a(r3)
                return
        }

        @Override
        public final void onDowngrade(android.database.sqlite.SQLiteDatabase r2, int r3, int r4) {
                r1 = this;
                com.mbridge.msdk.foundation.db.h r0 = r1.a
                r0.b(r2, r3, r4)
                return
        }

        @Override
        public final void onUpgrade(android.database.sqlite.SQLiteDatabase r3, int r4, int r5) {
                r2 = this;
                boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
                if (r0 == 0) goto Lb
                java.lang.String r0 = "DatabaseOpenHelper"
                java.lang.String r1 = "数据库升级了"
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            Lb:
                com.mbridge.msdk.foundation.db.h r0 = r2.a
                r0.a(r3, r4, r5)
                return
        }
    }

    public h(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            com.mbridge.msdk.foundation.db.h$a r0 = new com.mbridge.msdk.foundation.db.h$a
            java.lang.String r1 = r3.c()
            int r2 = r3.d()
            r0.<init>(r3, r4, r1, r2)
            r3.a = r0
            return
    }

    public final android.database.sqlite.SQLiteDatabase a() {
            r1 = this;
            com.mbridge.msdk.foundation.db.h$a r0 = r1.a
            android.database.sqlite.SQLiteDatabase r0 = r0.getReadableDatabase()
            return r0
    }

    protected abstract void a(android.database.sqlite.SQLiteDatabase r1);

    protected abstract void a(android.database.sqlite.SQLiteDatabase r1, int r2, int r3);

    public final synchronized android.database.sqlite.SQLiteDatabase b() {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.db.h$a r0 = r1.a     // Catch: java.lang.Throwable -> L8 java.lang.Exception -> Lb
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

    protected abstract void b(android.database.sqlite.SQLiteDatabase r1, int r2, int r3);

    protected abstract java.lang.String c();

    protected abstract int d();
}
