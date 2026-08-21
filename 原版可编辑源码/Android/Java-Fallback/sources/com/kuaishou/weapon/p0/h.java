package com.kuaishou.weapon.p0;

public class h {
    public static final java.lang.String a = "re_po_rt";
    private static com.kuaishou.weapon.p0.h e;
    private android.content.SharedPreferences b;
    private android.content.SharedPreferences.Editor c;
    private android.content.Context d;

    static {
            return
    }

    public h(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r2.d = r3     // Catch: java.lang.Throwable -> L14
            java.lang.String r0 = "re_po_rt"
            r1 = 4
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)     // Catch: java.lang.Throwable -> L14
            r2.b = r3     // Catch: java.lang.Throwable -> L14
            android.content.SharedPreferences$Editor r3 = r3.edit()     // Catch: java.lang.Throwable -> L14
            r2.c = r3     // Catch: java.lang.Throwable -> L14
        L14:
            return
    }

    public h(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r1.d = r2     // Catch: java.lang.Throwable -> L12
            r0 = 4
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r0)     // Catch: java.lang.Throwable -> L12
            r1.b = r2     // Catch: java.lang.Throwable -> L12
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L12
            r1.c = r2     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public static com.kuaishou.weapon.p0.h a() {
            com.kuaishou.weapon.p0.h r0 = com.kuaishou.weapon.p0.h.e
            return r0
    }

    public static synchronized com.kuaishou.weapon.p0.h a(android.content.Context r2, java.lang.String r3) {
            java.lang.Class<com.kuaishou.weapon.p0.h> r0 = com.kuaishou.weapon.p0.h.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.h r1 = com.kuaishou.weapon.p0.h.e     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L18
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L1c
            com.kuaishou.weapon.p0.h r1 = com.kuaishou.weapon.p0.h.e     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            com.kuaishou.weapon.p0.h r1 = new com.kuaishou.weapon.p0.h     // Catch: java.lang.Throwable -> L15
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L15
            com.kuaishou.weapon.p0.h.e = r1     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r2     // Catch: java.lang.Throwable -> L1c
        L18:
            com.kuaishou.weapon.p0.h r2 = com.kuaishou.weapon.p0.h.e     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)
            return r2
        L1c:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public long a(java.lang.String r2, long r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.b
            long r2 = r0.getLong(r2, r3)
            return r2
    }

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.b
            java.lang.String r1 = ""
            java.lang.String r3 = r0.getString(r3, r1)
            return r3
    }

    public void a(android.content.Context r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void a(java.lang.String r2, int r3) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.c     // Catch: java.lang.Throwable -> La
            r0.putInt(r2, r3)     // Catch: java.lang.Throwable -> La
            android.content.SharedPreferences$Editor r2 = r1.c     // Catch: java.lang.Throwable -> La
            r2.apply()     // Catch: java.lang.Throwable -> La
        La:
            return
    }

    public void a(java.lang.String r2, int r3, boolean r4) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.c     // Catch: java.lang.Throwable -> Lc
            r0.putInt(r2, r3)     // Catch: java.lang.Throwable -> Lc
            if (r4 == 0) goto Lc
            android.content.SharedPreferences$Editor r2 = r1.c     // Catch: java.lang.Throwable -> Lc
            r2.apply()     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    public void a(java.lang.String r2, java.lang.Boolean r3) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.c
            boolean r3 = r3.booleanValue()
            r0.putBoolean(r2, r3)
            android.content.SharedPreferences$Editor r2 = r1.c
            r2.apply()
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L10
            android.content.SharedPreferences$Editor r0 = r1.c     // Catch: java.lang.Throwable -> L10
            r0.putString(r2, r3)     // Catch: java.lang.Throwable -> L10
            android.content.SharedPreferences$Editor r2 = r1.c     // Catch: java.lang.Throwable -> L10
            r2.apply()     // Catch: java.lang.Throwable -> L10
        L10:
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L12
            if (r0 != 0) goto L12
            android.content.SharedPreferences$Editor r0 = r1.c     // Catch: java.lang.Throwable -> L12
            r0.putString(r2, r3)     // Catch: java.lang.Throwable -> L12
            if (r4 == 0) goto L12
            android.content.SharedPreferences$Editor r2 = r1.c     // Catch: java.lang.Throwable -> L12
            r2.apply()     // Catch: java.lang.Throwable -> L12
        L12:
            return
    }

    public int b(java.lang.String r3) {
            r2 = this;
            r0 = 0
            android.content.SharedPreferences r1 = r2.b     // Catch: java.lang.Exception -> L8
            int r3 = r1.getInt(r3, r0)     // Catch: java.lang.Exception -> L8
            return r3
        L8:
            return r0
    }

    public int b(java.lang.String r2, int r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.b     // Catch: java.lang.Exception -> L7
            int r2 = r0.getInt(r2, r3)     // Catch: java.lang.Exception -> L7
            return r2
        L7:
            return r3
    }

    public android.content.Context b() {
            r1 = this;
            android.content.Context r0 = r1.d
            return r0
    }

    public java.lang.String b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.b
            java.lang.String r2 = r0.getString(r2, r3)
            return r2
    }

    public java.lang.String b(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r2 = r1.b(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L15
            if (r4 == 0) goto L14
            r3 = 2
            java.lang.String r3 = com.kuaishou.weapon.p0.c.b(r2, r3)
            goto L15
        L14:
            r3 = r2
        L15:
            return r3
    }

    public void b(java.lang.String r2, long r3) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.c
            r0.putLong(r2, r3)
            android.content.SharedPreferences$Editor r2 = r1.c
            r2.apply()
            return
    }

    public int c(java.lang.String r3) {
            r2 = this;
            r0 = 0
            android.content.SharedPreferences r1 = r2.b     // Catch: java.lang.Exception -> L8
            int r3 = r1.getInt(r3, r0)     // Catch: java.lang.Exception -> L8
            return r3
        L8:
            return r0
    }

    public int c(java.lang.String r2, int r3) {
            r1 = this;
            android.content.SharedPreferences r0 = r1.b     // Catch: java.lang.Exception -> L7
            int r2 = r0.getInt(r2, r3)     // Catch: java.lang.Exception -> L7
            return r2
        L7:
            return r3
    }

    public void c() {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.c     // Catch: java.lang.Throwable -> L5
            r0.apply()     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    public void c(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.c     // Catch: java.lang.Exception -> La
            r0.putString(r2, r3)     // Catch: java.lang.Exception -> La
            android.content.SharedPreferences$Editor r2 = r1.c     // Catch: java.lang.Exception -> La
            r2.apply()     // Catch: java.lang.Exception -> La
        La:
            return
    }

    public void c(java.lang.String r2, java.lang.String r3, boolean r4) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1b
            if (r0 != 0) goto L1b
            if (r4 == 0) goto L11
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> L1b
            r4 = 2
            java.lang.String r3 = com.kuaishou.weapon.p0.c.b(r3, r4)     // Catch: java.lang.Throwable -> L1b
        L11:
            android.content.SharedPreferences$Editor r4 = r1.c     // Catch: java.lang.Throwable -> L1b
            r4.putString(r2, r3)     // Catch: java.lang.Throwable -> L1b
            android.content.SharedPreferences$Editor r2 = r1.c     // Catch: java.lang.Throwable -> L1b
            r2.apply()     // Catch: java.lang.Throwable -> L1b
        L1b:
            return
    }

    public long d(java.lang.String r4) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.b
            r1 = 0
            long r0 = r0.getLong(r4, r1)
            return r0
    }

    public void d(java.lang.String r2, int r3) {
            r1 = this;
            android.content.SharedPreferences$Editor r0 = r1.c
            r0.putInt(r2, r3)
            android.content.SharedPreferences$Editor r2 = r1.c
            r2.apply()
            return
    }

    public boolean e(java.lang.String r3) {
            r2 = this;
            android.content.SharedPreferences r0 = r2.b
            r1 = 0
            boolean r3 = r0.getBoolean(r3, r1)
            return r3
    }
}
