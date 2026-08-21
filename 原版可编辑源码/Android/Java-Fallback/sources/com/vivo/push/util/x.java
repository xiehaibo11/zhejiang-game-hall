package com.vivo.push.util;

public final class x implements com.vivo.push.util.d {
    private static java.lang.String a = "SpCache";
    private static java.lang.String b = "com.vivo.push.cache";
    private android.content.SharedPreferences c;

    static {
            return
    }

    public x() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final java.lang.String a(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.c
            java.lang.String r5 = r0.getString(r4, r5)
            java.lang.String r0 = com.vivo.push.util.x.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "getString "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = " is "
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            com.vivo.push.util.p.d(r0, r4)
            return r5
    }

    public final void a() {
            r2 = this;
            android.content.SharedPreferences r0 = r2.c
            android.content.SharedPreferences$Editor r0 = r0.edit()
            if (r0 == 0) goto Le
            r0.clear()
            com.vivo.push.util.b.a(r0)
        Le:
            java.lang.String r0 = com.vivo.push.util.x.a
            java.lang.String r1 = "system cache is cleared"
            com.vivo.push.util.p.d(r0, r1)
            return
    }

    @Override
    public final boolean a(android.content.Context r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.c
            if (r0 != 0) goto Ld
            java.lang.String r0 = com.vivo.push.util.x.b
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            r2.c = r3
        Ld:
            r3 = 1
            return r3
    }

    @Override
    public final void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.c
            android.content.SharedPreferences$Editor r0 = r0.edit()
            if (r0 == 0) goto L1e
            r0.putString(r2, r3)
            com.vivo.push.util.b.a(r0)
            java.lang.String r3 = com.vivo.push.util.x.a
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "putString by "
            java.lang.String r2 = r0.concat(r2)
            com.vivo.push.util.p.d(r3, r2)
            return
        L1e:
            java.lang.String r3 = com.vivo.push.util.x.a
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "putString error by "
            java.lang.String r2 = r0.concat(r2)
            com.vivo.push.util.p.b(r3, r2)
            return
    }
}
