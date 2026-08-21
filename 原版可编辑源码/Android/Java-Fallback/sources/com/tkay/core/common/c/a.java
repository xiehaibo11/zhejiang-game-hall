package com.tkay.core.common.c;

public class a<T> {
    protected com.tkay.core.common.c.b a;

    public a(com.tkay.core.common.c.b r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r2
            return
    }

    protected final synchronized android.database.sqlite.SQLiteDatabase a() {
            r1 = this;
            monitor-enter(r1)
            com.tkay.core.common.c.b r0 = r1.a     // Catch: java.lang.Throwable -> L9
            android.database.sqlite.SQLiteDatabase r0 = r0.a()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    protected final synchronized android.database.sqlite.SQLiteDatabase b() {
            r1 = this;
            monitor-enter(r1)
            com.tkay.core.common.c.b r0 = r1.a     // Catch: java.lang.Throwable -> L9
            android.database.sqlite.SQLiteDatabase r0 = r0.b()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }
}
