package com.huawei.hms.hatool;

public class h0 {
    public static com.huawei.hms.hatool.h0 b;
    public android.content.Context a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return
    }

    public h0() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.huawei.hms.hatool.h0 a() {
            com.huawei.hms.hatool.h0 r0 = b()
            return r0
    }

    public static synchronized com.huawei.hms.hatool.h0 b() {
            java.lang.Class<com.huawei.hms.hatool.h0> r0 = com.huawei.hms.hatool.h0.class
            monitor-enter(r0)
            com.huawei.hms.hatool.h0 r1 = com.huawei.hms.hatool.h0.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.huawei.hms.hatool.h0 r1 = new com.huawei.hms.hatool.h0     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.huawei.hms.hatool.h0.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.huawei.hms.hatool.h0 r1 = com.huawei.hms.hatool.h0.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void a(android.content.Context r2) {
            r1 = this;
            r1.a = r2
            r1.b(r2)
            com.huawei.hms.hatool.i r2 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r2 = r2.b()
            java.lang.String r0 = com.huawei.hms.hatool.f.a()
            r2.e(r0)
            return
    }

    public void a(java.lang.String r3, int r4) {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.String r1 = "hmsSdk"
            if (r0 != 0) goto Lc
            java.lang.String r3 = "onReport() null context or SDK was not init."
            com.huawei.hms.hatool.y.e(r1, r3)
            return
        Lc:
            java.lang.String r0 = "onReport: Before calling runtaskhandler()"
            com.huawei.hms.hatool.y.c(r1, r0)
            java.lang.String r4 = com.huawei.hms.hatool.s0.a(r4)
            java.lang.String r0 = com.huawei.hms.hatool.b.d()
            r2.a(r3, r4, r0)
            return
    }

    public void a(java.lang.String r10, int r11, java.lang.String r12, org.json.JSONObject r13) {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 2
            if (r2 != r11) goto Ld
            java.lang.String r2 = "yyyy-MM-dd"
            long r0 = com.huawei.hms.hatool.s0.a(r2, r0)
        Ld:
            r7 = r0
            com.huawei.hms.hatool.j0 r0 = new com.huawei.hms.hatool.j0
            java.lang.String r6 = com.huawei.hms.hatool.s0.a(r11)
            r2 = r0
            r3 = r12
            r4 = r13
            r5 = r10
            r2.<init>(r3, r4, r5, r6, r7)
            com.huawei.hms.hatool.n0 r10 = com.huawei.hms.hatool.n0.b()
            r10.a(r0)
            return
    }

    public void a(java.lang.String r9, java.lang.String r10) {
            r8 = this;
            boolean r0 = com.huawei.hms.hatool.c.a(r9, r10)
            java.lang.String r1 = "hmsSdk"
            if (r0 == 0) goto L2e
            long r2 = com.huawei.hms.hatool.c.j(r9, r10)
            long r4 = java.lang.System.currentTimeMillis()
            long r2 = r4 - r2
            r6 = 30000(0x7530, double:1.4822E-319)
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 <= 0) goto L28
            java.lang.String r0 = "begin to call onReport!"
            com.huawei.hms.hatool.y.a(r1, r0)
            com.huawei.hms.hatool.c.a(r9, r10, r4)
            java.lang.String r0 = com.huawei.hms.hatool.b.d()
            r8.a(r9, r10, r0)
            goto L42
        L28:
            java.lang.String r9 = "autoReport timeout. interval < 30s "
            com.huawei.hms.hatool.y.f(r1, r9)
            goto L42
        L2e:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r0 = "auto report is closed tag:"
            r10.append(r0)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            com.huawei.hms.hatool.y.c(r1, r9)
        L42:
            return
    }

    public void a(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r3 = this;
            android.content.Context r0 = r3.a
            java.lang.String r1 = "hmsSdk"
            if (r0 != 0) goto Lc
            java.lang.String r4 = "onReport() null context or SDK was not init."
            com.huawei.hms.hatool.y.e(r1, r4)
            return
        Lc:
            java.lang.String r0 = com.huawei.hms.hatool.h.a(r0)
            boolean r2 = com.huawei.hms.hatool.c.e(r4, r5)
            if (r2 == 0) goto L33
            java.lang.String r2 = "WIFI"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L33
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "strNetworkType is :"
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.huawei.hms.hatool.y.c(r1, r4)
            return
        L33:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L4e
            java.lang.String r2 = "2G"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L4e
            com.huawei.hms.hatool.k0 r0 = new com.huawei.hms.hatool.k0
            r0.<init>(r4, r5, r6)
            com.huawei.hms.hatool.n0 r4 = com.huawei.hms.hatool.n0.b()
            r4.a(r0)
            goto L53
        L4e:
            java.lang.String r4 = "The network is bad."
            com.huawei.hms.hatool.y.e(r1, r4)
        L53:
            return
    }

    public final void b(android.content.Context r7) {
            r6 = this;
            java.lang.String r0 = com.huawei.hms.hatool.f.d(r7)
            com.huawei.hms.hatool.b.a(r0)
            com.huawei.hms.hatool.u0 r1 = com.huawei.hms.hatool.u0.b()
            boolean r1 = r1.a()
            java.lang.String r2 = "hmsSdk"
            if (r1 == 0) goto L41
            java.lang.String r1 = ""
            java.lang.String r3 = "app_ver"
            java.lang.String r4 = "global_v2"
            java.lang.String r5 = com.huawei.hms.hatool.g0.a(r7, r4, r3, r1)
            com.huawei.hms.hatool.g0.b(r7, r4, r3, r0)
            com.huawei.hms.hatool.b.b(r5)
            boolean r7 = android.text.TextUtils.isEmpty(r5)
            if (r7 == 0) goto L2c
            java.lang.String r7 = "app ver is first save!"
            goto L43
        L2c:
            boolean r7 = r5.equals(r0)
            if (r7 != 0) goto L46
            java.lang.String r7 = "the appVers are different!"
            com.huawei.hms.hatool.y.c(r2, r7)
            com.huawei.hms.hatool.h0 r7 = a()
            java.lang.String r0 = "alltype"
            r7.a(r1, r0, r5)
            goto L46
        L41:
            java.lang.String r7 = "userManager.isUserUnlocked() == false"
        L43:
            com.huawei.hms.hatool.y.c(r2, r7)
        L46:
            return
    }
}
