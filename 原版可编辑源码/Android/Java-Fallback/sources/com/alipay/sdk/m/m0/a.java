package com.alipay.sdk.m.m0;

public class a {
    public java.lang.String a;
    public android.content.SharedPreferences b;
    public android.content.SharedPreferences.Editor c;
    public android.content.Context d;
    public boolean e;

    public a(android.content.Context r1, java.lang.String r2, java.lang.String r3, boolean r4, boolean r5) {
            r0 = this;
            r0.<init>()
            java.lang.String r2 = ""
            r0.a = r2
            r2 = 0
            r0.b = r2
            r0.c = r2
            r0.d = r2
            r2 = 0
            r0.e = r2
            r0.e = r5
            r0.a = r3
            r0.d = r1
            if (r1 == 0) goto L1f
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r3, r2)
            r0.b = r1
        L1f:
            return
    }

    private void b() {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.c
            if (r0 != 0) goto Le
            android.content.SharedPreferences r0 = r1.b
            if (r0 == 0) goto Le
            android.content.SharedPreferences$Editor r0 = r0.edit()
            r1.c = r0
        Le:
            return
    }

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.b
            java.lang.String r1 = ""
            if (r0 == 0) goto L11
            java.lang.String r3 = r0.getString(r3, r1)
            boolean r0 = com.alipay.sdk.m.l0.f.a(r3)
            if (r0 != 0) goto L11
            return r3
        L11:
            return r1
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = com.alipay.sdk.m.l0.f.a(r2)
            if (r0 != 0) goto L18
            java.lang.String r0 = "t"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L18
            r1.b()
            android.content.SharedPreferences$Editor r0 = r1.c
            if (r0 == 0) goto L18
            r0.putString(r2, r3)
        L18:
            return
    }

    public boolean a() {
            r5 = this;
            long r0 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences$Editor r2 = r5.c
            r3 = 0
            if (r2 == 0) goto L20
            boolean r4 = r5.e
            if (r4 != 0) goto L16
            android.content.SharedPreferences r4 = r5.b
            if (r4 == 0) goto L16
            java.lang.String r4 = "t"
            r2.putLong(r4, r0)
        L16:
            android.content.SharedPreferences$Editor r0 = r5.c
            boolean r0 = r0.commit()
            if (r0 != 0) goto L20
            r0 = 0
            goto L21
        L20:
            r0 = 1
        L21:
            android.content.SharedPreferences r1 = r5.b
            if (r1 == 0) goto L31
            android.content.Context r1 = r5.d
            if (r1 == 0) goto L31
            java.lang.String r2 = r5.a
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r3)
            r5.b = r1
        L31:
            return r0
    }

    public void b(java.lang.String r2) {
            r1 = this;
            boolean r0 = com.alipay.sdk.m.l0.f.a(r2)
            if (r0 != 0) goto L18
            java.lang.String r0 = "t"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L18
            r1.b()
            android.content.SharedPreferences$Editor r0 = r1.c
            if (r0 == 0) goto L18
            r0.remove(r2)
        L18:
            return
    }
}
