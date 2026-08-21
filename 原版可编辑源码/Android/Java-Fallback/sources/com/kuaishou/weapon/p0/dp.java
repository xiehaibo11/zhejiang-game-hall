package com.kuaishou.weapon.p0;

public class dp {
    public static final java.lang.String a = "plc001_t_re";
    public static final java.lang.String b = "wlpauct2";
    public static final java.lang.String c = "plc001_pd_ptip_pi";
    public static final java.lang.String d = "wiipaot";
    public static final int e = 1;
    public static final java.lang.String f = "a1_p_s_p_s";
    public static final java.lang.String g = "a1_p_s_p_s_c_b";
    private static com.kuaishou.weapon.p0.dp j;
    private android.content.SharedPreferences h;
    private android.content.SharedPreferences.Editor i;

    private dp(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "acbd"
            r1 = 4
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L12
            r2.h = r3     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L12
            r2.i = r3     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public static com.kuaishou.weapon.p0.dp a() {
            com.kuaishou.weapon.p0.dp r0 = com.kuaishou.weapon.p0.dp.j
            return r0
    }

    public static synchronized com.kuaishou.weapon.p0.dp a(android.content.Context r2) {
            java.lang.Class<com.kuaishou.weapon.p0.dp> r0 = com.kuaishou.weapon.p0.dp.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.dp r1 = com.kuaishou.weapon.p0.dp.j     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            if (r1 != 0) goto Le
            com.kuaishou.weapon.p0.dp r1 = new com.kuaishou.weapon.p0.dp     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            com.kuaishou.weapon.p0.dp.j = r1     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
        Le:
            com.kuaishou.weapon.p0.dp r2 = com.kuaishou.weapon.p0.dp.j     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L15:
            r2 = 0
            monitor-exit(r0)
            return r2
    }

    public int a(java.lang.String r2, int r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.h     // Catch: java.lang.Throwable -> L7
            int r2 = r0.getInt(r2, r3)     // Catch: java.lang.Throwable -> L7
            return r2
        L7:
            return r3
    }

    public long a(java.lang.String r4) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.h
            r1 = 0
            long r0 = r0.getLong(r4, r1)
            return r0
    }

    public java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.h
            java.lang.String r2 = r0.getString(r2, r3)
            return r2
    }

    public void a(java.lang.String r2, int r3, boolean r4) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.i     // Catch: java.lang.Throwable -> Lc
            r0.putInt(r2, r3)     // Catch: java.lang.Throwable -> Lc
            if (r4 == 0) goto Lc
            android.content.SharedPreferences$Editor r2 = r1.i     // Catch: java.lang.Throwable -> Lc
            r2.apply()     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    public void a(java.lang.String r2, long r3, boolean r5) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.i     // Catch: java.lang.Throwable -> Lc
            r0.putLong(r2, r3)     // Catch: java.lang.Throwable -> Lc
            if (r5 == 0) goto Lc
            android.content.SharedPreferences$Editor r2 = r1.i     // Catch: java.lang.Throwable -> Lc
            r2.apply()     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    public void a(java.lang.String r2, java.lang.Boolean r3, boolean r4) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.i     // Catch: java.lang.Exception -> L14
            if (r0 == 0) goto L14
            android.content.SharedPreferences$Editor r0 = r1.i     // Catch: java.lang.Exception -> L14
            boolean r3 = r3.booleanValue()     // Catch: java.lang.Exception -> L14
            r0.putBoolean(r2, r3)     // Catch: java.lang.Exception -> L14
            if (r4 == 0) goto L14
            android.content.SharedPreferences$Editor r2 = r1.i     // Catch: java.lang.Exception -> L14
            r2.apply()     // Catch: java.lang.Exception -> L14
        L14:
            return
    }

    public void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.i     // Catch: java.lang.Exception -> La
            r0.putString(r2, r3)     // Catch: java.lang.Exception -> La
            android.content.SharedPreferences$Editor r2 = r1.i     // Catch: java.lang.Exception -> La
            r2.apply()     // Catch: java.lang.Exception -> La
        La:
            return
    }

    public boolean b(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.h
            r1 = 0
            boolean r3 = r0.getBoolean(r3, r1)
            return r3
    }
}
