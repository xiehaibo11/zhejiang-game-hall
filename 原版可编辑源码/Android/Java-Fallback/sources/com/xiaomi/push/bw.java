package com.xiaomi.push;

public class bw {
    private static volatile com.xiaomi.push.bw a;
    private android.content.Context a;

    private bw(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public static com.xiaomi.push.bw a(android.content.Context r2) {
            com.xiaomi.push.bw r0 = com.xiaomi.push.bw.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.bw> r0 = com.xiaomi.push.bw.class
            monitor-enter(r0)
            com.xiaomi.push.bw r1 = com.xiaomi.push.bw.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.bw r1 = new com.xiaomi.push.bw     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.bw.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.bw r2 = com.xiaomi.push.bw.a
            return r2
    }

    public synchronized long a(java.lang.String r3, java.lang.String r4, long r5) {
            r2 = this;
            monitor-enter(r2)
            android.content.Context r0 = r2.a     // Catch: java.lang.Throwable -> Le
            r1 = 4
            android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> Le
            long r3 = r3.getLong(r4, r5)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)
            return r3
        Le:
            monitor-exit(r2)
            return r5
    }

    public synchronized java.lang.String a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            monitor-enter(r2)
            android.content.Context r0 = r2.a     // Catch: java.lang.Throwable -> Le
            r1 = 4
            android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> Le
            java.lang.String r3 = r3.getString(r4, r5)     // Catch: java.lang.Throwable -> Le
            monitor-exit(r2)
            return r3
        Le:
            monitor-exit(r2)
            return r5
    }

    public synchronized void a(java.lang.String r3, java.lang.String r4, long r5) {
            r2 = this;
            monitor-enter(r2)
            android.content.Context r0 = r2.a     // Catch: java.lang.Throwable -> L14
            r1 = 4
            android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> L14
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L14
            r3.putLong(r4, r5)     // Catch: java.lang.Throwable -> L14
            r3.commit()     // Catch: java.lang.Throwable -> L14
            monitor-exit(r2)
            return
        L14:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public synchronized void a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            monitor-enter(r2)
            android.content.Context r0 = r2.a     // Catch: java.lang.Throwable -> L14
            r1 = 4
            android.content.SharedPreferences r3 = r0.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> L14
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L14
            r3.putString(r4, r5)     // Catch: java.lang.Throwable -> L14
            r3.commit()     // Catch: java.lang.Throwable -> L14
            monitor-exit(r2)
            return
        L14:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }
}
