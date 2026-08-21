package com.loc;

public class ac {
    private static com.loc.ac a;
    private static boolean b;
    private static boolean c;
    private android.content.Context d;



    static {
            return
    }

    private ac(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.d = r1
            return
    }

    public static com.loc.ac a(android.content.Context r2) {
            com.loc.ac r0 = com.loc.ac.a
            if (r0 != 0) goto L17
            java.lang.Class<com.loc.ac> r0 = com.loc.ac.class
            monitor-enter(r0)
            com.loc.ac r1 = com.loc.ac.a     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.loc.ac r1 = new com.loc.ac     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.loc.ac.a = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.loc.ac r2 = com.loc.ac.a
            return r2
    }

    static void a(com.loc.ac r0) {
            r0.b()
            return
    }

    private void b() {
            r7 = this;
            java.lang.String r0 = ""
            r1 = 0
            boolean r2 = com.loc.ac.b     // Catch: java.lang.Throwable -> Lbe
            if (r2 == 0) goto La
            com.loc.ac.b = r1
            return
        La:
            r2 = 1
            com.loc.ac.b = r2     // Catch: java.lang.Throwable -> Lbe
            com.loc.aa r2 = new com.loc.aa     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lbe
            com.loc.bo r3 = new com.loc.bo     // Catch: java.lang.Throwable -> Lbe
            r3.<init>()     // Catch: java.lang.Throwable -> Lbe
            com.loc.bu r3 = com.loc.bo.a(r2)     // Catch: java.lang.Throwable -> Lbe
            if (r3 == 0) goto Lbb
            byte[] r3 = r3.a     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r4 = "YWDR1a2R2WEd0M3RXdHRocg=="
            java.lang.String r4 = com.loc.x.c(r4)     // Catch: java.lang.Throwable -> Lbe
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> Lbe
            byte[] r3 = com.loc.ab.a(r3, r4)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r3 = com.loc.x.a(r3)     // Catch: java.lang.Throwable -> Lbe
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lbe
            r4.<init>(r3)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r3 = "suc"
            boolean r3 = r4.optBoolean(r3)     // Catch: java.lang.Throwable -> Lbe
            if (r3 == 0) goto Lbb
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.a     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.f(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.b     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.g(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.c     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.h(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.d     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.i(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.e     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.j(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.f     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.k(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.g     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.l(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.i     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.b(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r2 = r2.h     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.m(r3, r2)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r2 = r7.d     // Catch: java.lang.Throwable -> Lbe
            long r5 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.a(r2, r5)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r2 = "aaid"
            java.lang.String r2 = r4.optString(r2, r0)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r3 = "resetToken"
            java.lang.String r3 = r4.optString(r3, r0)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = "uabc"
            java.lang.String r0 = r4.optString(r5, r0)     // Catch: java.lang.Throwable -> Lbe
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lbe
            if (r4 != 0) goto La5
            android.content.Context r4 = r7.d     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.c(r4, r2)     // Catch: java.lang.Throwable -> Lbe
        La5:
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lbe
            if (r2 != 0) goto Lb0
            android.content.Context r2 = r7.d     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.e(r2, r3)     // Catch: java.lang.Throwable -> Lbe
        Lb0:
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lbe
            if (r2 != 0) goto Lbb
            android.content.Context r2 = r7.d     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.d(r2, r0)     // Catch: java.lang.Throwable -> Lbe
        Lbb:
            com.loc.ac.b = r1
            return
        Lbe:
            com.loc.ac.b = r1
            return
    }

    static void b(com.loc.ac r0) {
            r0.c()
            return
    }

    private void c() {
            r7 = this;
            java.lang.String r0 = ""
            r1 = 0
            boolean r2 = com.loc.ac.c     // Catch: java.lang.Throwable -> Lbe
            if (r2 == 0) goto La
            com.loc.ac.c = r1
            return
        La:
            r2 = 1
            com.loc.ac.c = r2     // Catch: java.lang.Throwable -> Lbe
            com.loc.ad r2 = new com.loc.ad     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lbe
            com.loc.bo r3 = new com.loc.bo     // Catch: java.lang.Throwable -> Lbe
            r3.<init>()     // Catch: java.lang.Throwable -> Lbe
            com.loc.bu r3 = com.loc.bo.a(r2)     // Catch: java.lang.Throwable -> Lbe
            if (r3 == 0) goto Lbb
            byte[] r3 = r3.a     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r4 = "YWDR1a2R2WEd0M3RXdHRocg=="
            java.lang.String r4 = com.loc.x.c(r4)     // Catch: java.lang.Throwable -> Lbe
            byte[] r4 = r4.getBytes()     // Catch: java.lang.Throwable -> Lbe
            byte[] r3 = com.loc.ab.a(r3, r4)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r3 = com.loc.x.a(r3)     // Catch: java.lang.Throwable -> Lbe
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lbe
            r4.<init>(r3)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r3 = "suc"
            boolean r3 = r4.optBoolean(r3)     // Catch: java.lang.Throwable -> Lbe
            if (r3 == 0) goto Lbb
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.a     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.f(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.b     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.g(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.c     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.h(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.d     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.i(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.e     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.j(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.f     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.k(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.g     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.l(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = r2.i     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.b(r3, r5)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r3 = r7.d     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r2 = r2.h     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.m(r3, r2)     // Catch: java.lang.Throwable -> Lbe
            android.content.Context r2 = r7.d     // Catch: java.lang.Throwable -> Lbe
            long r5 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.a(r2, r5)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r2 = "aaid"
            java.lang.String r2 = r4.optString(r2, r0)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r3 = "resetToken"
            java.lang.String r3 = r4.optString(r3, r0)     // Catch: java.lang.Throwable -> Lbe
            java.lang.String r5 = "uabc"
            java.lang.String r0 = r4.optString(r5, r0)     // Catch: java.lang.Throwable -> Lbe
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lbe
            if (r4 != 0) goto La5
            android.content.Context r4 = r7.d     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.c(r4, r2)     // Catch: java.lang.Throwable -> Lbe
        La5:
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lbe
            if (r2 != 0) goto Lb0
            android.content.Context r2 = r7.d     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.e(r2, r3)     // Catch: java.lang.Throwable -> Lbe
        Lb0:
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lbe
            if (r2 != 0) goto Lbb
            android.content.Context r2 = r7.d     // Catch: java.lang.Throwable -> Lbe
            com.loc.y.d(r2, r0)     // Catch: java.lang.Throwable -> Lbe
        Lbb:
            com.loc.ac.c = r1
            return
        Lbe:
            com.loc.ac.c = r1
            return
    }

    public final java.lang.String a() {
            r6 = this;
            java.lang.String r0 = ""
            boolean r1 = com.loc.z.d     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L3a
            android.content.Context r1 = r6.d     // Catch: java.lang.Throwable -> L3a
            java.lang.String r0 = com.loc.y.c(r1)     // Catch: java.lang.Throwable -> L3a
            android.content.Context r1 = r6.d     // Catch: java.lang.Throwable -> L3a
            long r1 = com.loc.y.d(r1)     // Catch: java.lang.Throwable -> L3a
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L3a
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L3a
            if (r5 == 0) goto L29
            com.loc.cr r1 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L3a
            com.loc.ac$1 r2 = new com.loc.ac$1     // Catch: java.lang.Throwable -> L3a
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L3a
        L25:
            r1.b(r2)     // Catch: java.lang.Throwable -> L3a
            goto L3a
        L29:
            long r3 = r3 - r1
            long r1 = com.loc.z.b     // Catch: java.lang.Throwable -> L3a
            int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r5 <= 0) goto L3a
            com.loc.cr r1 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L3a
            com.loc.ac$2 r2 = new com.loc.ac$2     // Catch: java.lang.Throwable -> L3a
            r2.<init>(r6)     // Catch: java.lang.Throwable -> L3a
            goto L25
        L3a:
            return r0
    }
}
