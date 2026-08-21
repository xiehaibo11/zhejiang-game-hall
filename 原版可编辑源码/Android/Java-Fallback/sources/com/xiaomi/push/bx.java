package com.xiaomi.push;

public class bx {
    private static volatile com.xiaomi.push.bx a;
    private android.content.Context a;
    private com.xiaomi.push.al.a a;
    private com.xiaomi.push.cm a;
    private com.xiaomi.push.cn a;
    private final java.lang.String a;
    private com.xiaomi.push.al.a b;
    private final java.lang.String b;
    private com.xiaomi.push.al.a c;
    private final java.lang.String c;
    private final java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;

    private bx(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "push_stat_sp"
            r1.a = r0
            java.lang.String r0 = "upload_time"
            r1.b = r0
            java.lang.String r0 = "delete_time"
            r1.c = r0
            java.lang.String r0 = "check_time"
            r1.d = r0
            com.xiaomi.push.by r0 = new com.xiaomi.push.by
            r0.<init>(r1)
            r1.a = r0
            com.xiaomi.push.bz r0 = new com.xiaomi.push.bz
            r0.<init>(r1)
            r1.b = r0
            com.xiaomi.push.ca r0 = new com.xiaomi.push.ca
            r0.<init>(r1)
            r1.c = r0
            r1.a = r2
            return
    }

    static android.content.Context a(com.xiaomi.push.bx r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    public static com.xiaomi.push.bx a(android.content.Context r2) {
            com.xiaomi.push.bx r0 = com.xiaomi.push.bx.a
            if (r0 != 0) goto L17
            java.lang.Class<com.xiaomi.push.bx> r0 = com.xiaomi.push.bx.class
            monitor-enter(r0)
            com.xiaomi.push.bx r1 = com.xiaomi.push.bx.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.xiaomi.push.bx r1 = new com.xiaomi.push.bx     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.xiaomi.push.bx.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.xiaomi.push.bx r2 = com.xiaomi.push.bx.a
            return r2
    }

    static com.xiaomi.push.cn a(com.xiaomi.push.bx r0) {
            com.xiaomi.push.cn r0 = r0.a
            return r0
    }

    static java.lang.String a(com.xiaomi.push.bx r0) {
            java.lang.String r0 = r0.c()
            return r0
    }

    static void a(com.xiaomi.push.bx r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    private boolean a() {
            r3 = this;
            android.content.Context r0 = r3.a
            com.xiaomi.push.service.ba r0 = com.xiaomi.push.service.ba.a(r0)
            com.xiaomi.push.ho r1 = com.xiaomi.push.ho.bn
            int r1 = r1.a()
            r2 = 1
            boolean r0 = r0.a(r1, r2)
            return r0
    }

    private void b(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.a
            java.lang.String r1 = "push_stat_sp"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            android.content.SharedPreferences$Editor r0 = r0.edit()
            long r1 = java.lang.System.currentTimeMillis()
            r0.putLong(r4, r1)
            com.xiaomi.push.t.a(r0)
            return
    }

    private java.lang.String c() {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.String r1 = com.xiaomi.push.cb.a
            java.io.File r0 = r0.getDatabasePath(r1)
            java.lang.String r0 = r0.getAbsolutePath()
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public void a(com.xiaomi.push.cj.a r2) {
            r1 = this;
            android.content.Context r0 = r1.a
            com.xiaomi.push.cj r0 = com.xiaomi.push.cj.a(r0)
            r0.a(r2)
            return
    }

    public void a(com.xiaomi.push.hn r3) {
            r2 = this;
            boolean r0 = r2.a()
            if (r0 != 0) goto L7
            return
        L7:
            java.lang.String r0 = r3.e()
            boolean r0 = com.xiaomi.push.service.bz.a(r0)
            if (r0 != 0) goto L12
            return
        L12:
            java.lang.String r0 = r2.c()
            android.content.Context r1 = r2.a
            com.xiaomi.push.cg r3 = com.xiaomi.push.cg.a(r1, r0, r3)
            r2.a(r3)
            return
    }

    public void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Le
            return
        Le:
            android.content.Context r0 = r1.a
            com.xiaomi.push.hn r2 = com.xiaomi.push.co.a(r0, r2)
            r1.a(r2)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3, java.lang.Boolean r4) {
            r1 = this;
            com.xiaomi.push.cm r0 = r1.a
            if (r0 == 0) goto L19
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L12
            com.xiaomi.push.cm r4 = r1.a
            android.content.Context r0 = r1.a
            r4.a(r0, r3, r2)
            goto L19
        L12:
            com.xiaomi.push.cm r4 = r1.a
            android.content.Context r0 = r1.a
            r4.b(r0, r3, r2)
        L19:
            return
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }
}
