package com.mbridge.msdk.foundation.db;

public class a<T> {
    protected com.mbridge.msdk.foundation.db.h mHelper;

    public a(com.mbridge.msdk.foundation.db.h r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mHelper = r0
            r1.mHelper = r2
            return
    }

    protected synchronized android.database.sqlite.SQLiteDatabase getReadableDatabase() {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.db.h r0 = r1.mHelper     // Catch: java.lang.Throwable -> L9
            android.database.sqlite.SQLiteDatabase r0 = r0.a()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    protected synchronized android.database.sqlite.SQLiteDatabase getWritableDatabase() {
            r1 = this;
            monitor-enter(r1)
            com.mbridge.msdk.foundation.db.h r0 = r1.mHelper     // Catch: java.lang.Throwable -> L9
            android.database.sqlite.SQLiteDatabase r0 = r0.b()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
