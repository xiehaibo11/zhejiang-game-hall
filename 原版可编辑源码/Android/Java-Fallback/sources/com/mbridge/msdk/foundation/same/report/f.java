package com.mbridge.msdk.foundation.same.report;

public final class f {
    private static java.util.concurrent.atomic.AtomicBoolean c;
    private final java.util.concurrent.Executor a;
    private java.lang.Boolean b;


    private static final class a {
        private static final com.mbridge.msdk.foundation.same.report.f a = null;

        static {
                com.mbridge.msdk.foundation.same.report.f r0 = new com.mbridge.msdk.foundation.same.report.f
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.foundation.same.report.f.a.a = r0
                return
        }

        static com.mbridge.msdk.foundation.same.report.f a() {
                com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a.a
                return r0
        }
    }

    private f() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ExecutorService r0 = java.util.concurrent.Executors.newSingleThreadExecutor()
            r1.a = r0
            return
    }

    f(com.mbridge.msdk.foundation.same.report.f.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.foundation.same.report.f a() {
            com.mbridge.msdk.foundation.same.report.f r0 = com.mbridge.msdk.foundation.same.report.f.a.a()
            return r0
    }

    static com.mbridge.msdk.foundation.same.report.g a(java.lang.String r0, java.lang.String r1, java.lang.String r2, boolean r3, java.lang.String r4) {
            com.mbridge.msdk.foundation.same.report.g r0 = b(r0, r1, r2, r3, r4)
            return r0
    }

    private static com.mbridge.msdk.foundation.same.report.g b(java.lang.String r5, java.lang.String r6, java.lang.String r7, boolean r8, java.lang.String r9) {
            java.util.concurrent.atomic.AtomicBoolean r0 = com.mbridge.msdk.foundation.same.report.f.c     // Catch: java.lang.Throwable -> L80
            r1 = 1
            if (r0 != 0) goto L1a
            com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Throwable -> L80
            java.lang.String r2 = "c_r_a_l_c"
            r3 = 0
            int r0 = r0.a(r2, r3)     // Catch: java.lang.Throwable -> L80
            java.util.concurrent.atomic.AtomicBoolean r2 = new java.util.concurrent.atomic.AtomicBoolean     // Catch: java.lang.Throwable -> L80
            if (r0 != 0) goto L15
            r3 = r1
        L15:
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L80
            com.mbridge.msdk.foundation.same.report.f.c = r2     // Catch: java.lang.Throwable -> L80
        L1a:
            com.mbridge.msdk.foundation.same.report.g$a r0 = new com.mbridge.msdk.foundation.same.report.g$a     // Catch: java.lang.Throwable -> L80
            java.lang.String r2 = "2000119"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L80
            java.lang.String r2 = "event"
            com.mbridge.msdk.foundation.same.report.g$a r5 = r0.a(r2, r5)     // Catch: java.lang.Throwable -> L80
            java.lang.String r0 = "message"
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L80
            java.lang.String r3 = ""
            if (r2 == 0) goto L32
            r6 = r3
        L32:
            com.mbridge.msdk.foundation.same.report.g$a r5 = r5.a(r0, r6)     // Catch: java.lang.Throwable -> L80
            java.lang.String r6 = "background"
            java.util.concurrent.atomic.AtomicBoolean r0 = com.mbridge.msdk.foundation.same.report.f.c     // Catch: java.lang.Throwable -> L80
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L80
            java.lang.String r2 = "1"
            java.lang.String r4 = "0"
            if (r0 == 0) goto L52
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L80
            int r0 = r0.b()     // Catch: java.lang.Throwable -> L80
            if (r0 < r1) goto L50
            r0 = r2
            goto L54
        L50:
            r0 = r4
            goto L54
        L52:
            java.lang.String r0 = "-1"
        L54:
            com.mbridge.msdk.foundation.same.report.g$a r5 = r5.a(r6, r0)     // Catch: java.lang.Throwable -> L80
            java.lang.String r6 = "ad_type"
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L80
            if (r0 == 0) goto L61
            r7 = r3
        L61:
            com.mbridge.msdk.foundation.same.report.g$a r5 = r5.a(r6, r7)     // Catch: java.lang.Throwable -> L80
            java.lang.String r6 = "hb"
            if (r8 == 0) goto L6a
            r2 = r4
        L6a:
            com.mbridge.msdk.foundation.same.report.g$a r5 = r5.a(r6, r2)     // Catch: java.lang.Throwable -> L80
            java.lang.String r6 = "unit_id"
            boolean r7 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L80
            if (r7 == 0) goto L77
            r9 = r3
        L77:
            com.mbridge.msdk.foundation.same.report.g$a r5 = r5.a(r6, r9)     // Catch: java.lang.Throwable -> L80
            com.mbridge.msdk.foundation.same.report.g r5 = r5.a()     // Catch: java.lang.Throwable -> L80
            goto L8f
        L80:
            r5 = move-exception
            boolean r6 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r6 == 0) goto L8e
            java.lang.String r5 = r5.getMessage()
            java.lang.String r6 = "RewardVideoReportManager"
            com.mbridge.msdk.foundation.tools.z.d(r6, r5)
        L8e:
            r5 = 0
        L8f:
            return r5
    }

    private boolean b() {
            r4 = this;
            java.lang.Boolean r0 = r4.b
            r1 = 0
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r1)
            if (r0 != 0) goto L2a
            com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Throwable -> L1a
            java.lang.String r3 = "r_v_r_i_a"
            boolean r0 = r0.a(r3, r1)     // Catch: java.lang.Throwable -> L1a
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Throwable -> L1a
            r4.b = r0     // Catch: java.lang.Throwable -> L1a
            goto L2a
        L1a:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L28
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "RewardVideoReportManager"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L28:
            r4.b = r2
        L2a:
            java.lang.Boolean r0 = r4.b
            if (r0 != 0) goto L30
            r4.b = r2
        L30:
            java.lang.Boolean r0 = r4.b
            boolean r0 = r0.booleanValue()
            return r0
    }

    private java.lang.Runnable c(java.lang.String r9, java.lang.String r10, java.lang.String r11, boolean r12, java.lang.String r13) {
            r8 = this;
            com.mbridge.msdk.foundation.same.report.f$1 r7 = new com.mbridge.msdk.foundation.same.report.f$1
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public final void a(java.lang.String r8, java.lang.String r9, java.lang.String r10, boolean r11) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L21
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L21
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L21
        L11:
            java.lang.String r2 = "load_failed"
            r1 = r7
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L21:
            return
    }

    public final void a(java.lang.String r8, java.lang.String r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L22
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L22
        L11:
            java.lang.String r2 = "load"
            java.lang.String r3 = ""
            r1 = r7
            r4 = r9
            r5 = r10
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L22:
            return
    }

    public final void b(java.lang.String r8, java.lang.String r9, java.lang.String r10, boolean r11) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L21
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L21
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L21
        L11:
            java.lang.String r2 = "show_failed"
            r1 = r7
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L21:
            return
    }

    public final void b(java.lang.String r8, java.lang.String r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L22
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L22
        L11:
            java.lang.String r2 = "campaign_success"
            java.lang.String r3 = ""
            r1 = r7
            r4 = r9
            r5 = r10
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L22:
            return
    }

    public final void c(java.lang.String r8, java.lang.String r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L22
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L22
        L11:
            java.lang.String r2 = "load_success"
            java.lang.String r3 = ""
            r1 = r7
            r4 = r9
            r5 = r10
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L22:
            return
    }

    public final void d(java.lang.String r8, java.lang.String r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L22
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L22
        L11:
            java.lang.String r2 = "is_ready_true"
            java.lang.String r3 = ""
            r1 = r7
            r4 = r9
            r5 = r10
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L22:
            return
    }

    public final void e(java.lang.String r8, java.lang.String r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L22
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L22
        L11:
            java.lang.String r2 = "is_ready_false"
            java.lang.String r3 = ""
            r1 = r7
            r4 = r9
            r5 = r10
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L22:
            return
    }

    public final void f(java.lang.String r8, java.lang.String r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L22
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L22
        L11:
            java.lang.String r2 = "show"
            java.lang.String r3 = ""
            r1 = r7
            r4 = r9
            r5 = r10
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L22:
            return
    }

    public final void g(java.lang.String r8, java.lang.String r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.b()
            if (r0 == 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L22
            java.util.concurrent.Executor r0 = r7.a
            if (r0 != 0) goto L11
            goto L22
        L11:
            java.lang.String r2 = "show_success"
            java.lang.String r3 = ""
            r1 = r7
            r4 = r9
            r5 = r10
            r6 = r8
            java.lang.Runnable r8 = r1.c(r2, r3, r4, r5, r6)
            java.util.concurrent.Executor r9 = r7.a
            r9.execute(r8)
        L22:
            return
    }
}
