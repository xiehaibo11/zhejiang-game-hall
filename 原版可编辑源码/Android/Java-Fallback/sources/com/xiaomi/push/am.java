package com.xiaomi.push;

class am extends com.xiaomi.push.al.b {
    final com.xiaomi.push.al a;
    final java.lang.String a;
    final boolean a;

    am(com.xiaomi.push.al r1, com.xiaomi.push.al.a r2, boolean r3, java.lang.String r4) {
            r0 = this;
            r0.a = r1
            r0.a = r3
            r0.a = r4
            r0.<init>(r2)
            return
    }

    @Override
    void a() {
            r0 = this;
            super.a()
            return
    }

    @Override
    void b() {
            r4 = this;
            boolean r0 = r4.a
            if (r0 != 0) goto L1b
            com.xiaomi.push.al r0 = r4.a
            android.content.SharedPreferences r0 = com.xiaomi.push.al.a(r0)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = r4.a
            long r2 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences$Editor r0 = r0.putLong(r1, r2)
            r0.commit()
        L1b:
            return
    }
}
