package com.reyun.tracking.utils;

final class g implements java.lang.Runnable {
    final android.content.Context a;
    final java.lang.String b;
    final java.lang.String c;
    final long d;

    g(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            r0 = this;
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            android.content.Context r0 = r4.a
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r1 = r4.b     // Catch: java.lang.Exception -> L1a
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L1a
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = r4.c     // Catch: java.lang.Exception -> L1a
            long r2 = r4.d     // Catch: java.lang.Exception -> L1a
            r0.putLong(r1, r2)     // Catch: java.lang.Exception -> L1a
            r0.commit()     // Catch: java.lang.Exception -> L1a
        L1a:
            return
    }
}
