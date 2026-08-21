package com.reyun.tracking.utils;

final class h implements java.lang.Runnable {
    final android.content.Context a;
    final java.lang.String b;
    final java.lang.String c;
    final java.lang.String d;

    h(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
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
            r3 = this;
            android.content.Context r0 = r3.a
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.String r1 = r3.b     // Catch: java.lang.Exception -> L1a
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)     // Catch: java.lang.Exception -> L1a
            android.content.SharedPreferences$Editor r0 = r0.edit()     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = r3.c     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = r3.d     // Catch: java.lang.Exception -> L1a
            r0.putString(r1, r2)     // Catch: java.lang.Exception -> L1a
            r0.commit()     // Catch: java.lang.Exception -> L1a
        L1a:
            return
    }
}
