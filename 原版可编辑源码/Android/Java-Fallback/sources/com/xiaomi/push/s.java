package com.xiaomi.push;

class s implements java.lang.Runnable {
    final com.xiaomi.push.r a;
    final java.lang.String a;
    final java.lang.String b;
    final java.lang.String c;

    s(com.xiaomi.push.r r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.xiaomi.push.r r0 = r3.a
            android.content.Context r0 = com.xiaomi.push.r.a(r0)
            java.lang.String r1 = r3.a
            r2 = 4
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.String r1 = r3.b
            java.lang.String r2 = r3.c
            r0.putString(r1, r2)
            r0.commit()
            return
    }
}
