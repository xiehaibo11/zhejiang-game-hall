package com.mbridge.msdk.c.b;

public final class a {
    private final java.lang.String a;
    private java.util.List<com.mbridge.msdk.foundation.entity.a> b;
    private boolean c;
    private android.os.Handler d;


    private static class a {
        private static final com.mbridge.msdk.c.b.a a = null;

        static {
                com.mbridge.msdk.c.b.a r0 = new com.mbridge.msdk.c.b.a
                r1 = 0
                r0.<init>(r1)
                com.mbridge.msdk.c.b.a.a.a = r0
                return
        }

        static com.mbridge.msdk.c.b.a a() {
                com.mbridge.msdk.c.b.a r0 = com.mbridge.msdk.c.b.a.a.a
                return r0
        }
    }

    private a() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "ActiveAppUtil"
            r1.a = r0
            r0 = 0
            r1.c = r0
            com.mbridge.msdk.c.b.a$1 r0 = new com.mbridge.msdk.c.b.a$1
            r0.<init>(r1)
            r1.d = r0
            return
    }

    a(com.mbridge.msdk.c.b.a.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.c.b.a a() {
            com.mbridge.msdk.c.b.a r0 = com.mbridge.msdk.c.b.a.a.a()
            return r0
    }

    static void a(com.mbridge.msdk.c.b.a r5) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            if (r0 != 0) goto Lc
            goto Lfe
        Lc:
            java.util.List<com.mbridge.msdk.foundation.entity.a> r0 = r5.b
            if (r0 == 0) goto L16
            int r0 = r0.size()
            if (r0 != 0) goto L19
        L16:
            r5.b()
        L19:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "active_last_time"
            com.mbridge.msdk.foundation.tools.ag.a(r0, r2, r1)
            java.util.List<com.mbridge.msdk.foundation.entity.a> r5 = r5.b     // Catch: java.lang.Throwable -> Lf4
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> Lf4
        L34:
            boolean r0 = r5.hasNext()     // Catch: java.lang.Throwable -> Lf4
            if (r0 == 0) goto Lfe
            java.lang.Object r0 = r5.next()     // Catch: java.lang.Throwable -> Lf4
            com.mbridge.msdk.foundation.entity.a r0 = (com.mbridge.msdk.foundation.entity.a) r0     // Catch: java.lang.Throwable -> Lf4
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> Lf4
            r1.<init>()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r2 = r0.b()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = "service"
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> Lf4
            if (r2 == 0) goto La5
            java.lang.String r2 = r0.a()     // Catch: java.lang.Throwable -> Lf4
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf4
            if (r2 != 0) goto Lfe
            java.lang.String r2 = r0.c()     // Catch: java.lang.Throwable -> Lf4
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf4
            if (r2 == 0) goto L67
            goto Lfe
        L67:
            android.content.ComponentName r2 = new android.content.ComponentName     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = r0.a()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r4 = r0.c()     // Catch: java.lang.Throwable -> Lf4
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> Lf4
            r1.setComponent(r2)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r2 = r0.d()     // Catch: java.lang.Throwable -> Lf4
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf4
            if (r2 != 0) goto L88
            java.lang.String r2 = r0.d()     // Catch: java.lang.Throwable -> Lf4
            r1.setAction(r2)     // Catch: java.lang.Throwable -> Lf4
        L88:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lf4
            r3 = 26
            if (r2 < r3) goto L9a
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Lf4
            r2.startForegroundService(r1)     // Catch: java.lang.Throwable -> Lf4
            goto La5
        L9a:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Lf4
            r2.startService(r1)     // Catch: java.lang.Throwable -> Lf4
        La5:
            java.lang.String r2 = r0.b()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = "broadcast"
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> Lf4
            if (r2 == 0) goto L34
            java.lang.String r2 = r0.a()     // Catch: java.lang.Throwable -> Lf4
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf4
            if (r2 != 0) goto Lfe
            java.lang.String r2 = r0.c()     // Catch: java.lang.Throwable -> Lf4
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf4
            if (r2 != 0) goto Lfe
            java.lang.String r2 = r0.d()     // Catch: java.lang.Throwable -> Lf4
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Lf4
            if (r2 == 0) goto Ld0
            goto Lfe
        Ld0:
            android.content.ComponentName r2 = new android.content.ComponentName     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r3 = r0.a()     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r4 = r0.c()     // Catch: java.lang.Throwable -> Lf4
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> Lf4
            r1.setComponent(r2)     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r0 = r0.d()     // Catch: java.lang.Throwable -> Lf4
            r1.setAction(r0)     // Catch: java.lang.Throwable -> Lf4
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Lf4
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> Lf4
            r0.sendBroadcast(r1)     // Catch: java.lang.Throwable -> Lf4
            goto L34
        Lf4:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            java.lang.String r0 = "ActiveAppUtil"
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        Lfe:
            return
    }

    public final void b() {
            r2 = this;
            android.os.Handler r0 = r2.d
            if (r0 == 0) goto L8
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
        L8:
            return
    }

    public final boolean c() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public final synchronized void d() {
            r3 = this;
            monitor-enter(r3)
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L31
            int r1 = r0.aN()     // Catch: java.lang.Throwable -> L33
            r2 = 2
            if (r1 != r2) goto L1e
            r3.b()     // Catch: java.lang.Throwable -> L33
            goto L31
        L1e:
            java.util.List r0 = r0.aP()     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L2e
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L33
            if (r1 != 0) goto L2b
            goto L2e
        L2b:
            r3.b = r0     // Catch: java.lang.Throwable -> L33
            goto L31
        L2e:
            r3.b()     // Catch: java.lang.Throwable -> L33
        L31:
            monitor-exit(r3)
            return
        L33:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final synchronized void e() {
            r10 = this;
            monitor-enter(r10)
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La0
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> La0
            if (r0 != 0) goto Ld
            monitor-exit(r10)
            return
        Ld:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L94
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L94
            com.mbridge.msdk.c.a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L94
            if (r0 == 0) goto L92
            int r1 = r0.aN()     // Catch: java.lang.Throwable -> L94
            r2 = 2
            if (r1 != r2) goto L27
            goto L92
        L27:
            java.util.List r1 = r0.aP()     // Catch: java.lang.Throwable -> L94
            r10.b = r1     // Catch: java.lang.Throwable -> L94
            if (r1 == 0) goto L90
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L94
            if (r1 != 0) goto L36
            goto L90
        L36:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L94
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L94
            java.lang.String r3 = "active_last_time"
            r4 = 0
            java.lang.Long r6 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L94
            java.lang.Object r1 = com.mbridge.msdk.foundation.tools.ag.b(r1, r3, r6)     // Catch: java.lang.Throwable -> L94
            java.lang.Long r1 = (java.lang.Long) r1     // Catch: java.lang.Throwable -> L94
            long r6 = r1.longValue()     // Catch: java.lang.Throwable -> L94
            android.os.Message r1 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L94
            int r3 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            r4 = 1
            if (r3 != 0) goto L64
            r1.what = r4     // Catch: java.lang.Throwable -> L94
            int r0 = r0.aO()     // Catch: java.lang.Throwable -> L94
            int r0 = r0 * 1000
            r1.arg1 = r0     // Catch: java.lang.Throwable -> L94
            goto L81
        L64:
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L94
            long r8 = r8 - r6
            int r0 = r0.aO()     // Catch: java.lang.Throwable -> L94
            int r0 = r0 * 1000
            long r5 = (long) r0     // Catch: java.lang.Throwable -> L94
            int r3 = (r8 > r5 ? 1 : (r8 == r5 ? 0 : -1))
            if (r3 <= 0) goto L79
            r1.what = r4     // Catch: java.lang.Throwable -> L94
            r1.arg1 = r0     // Catch: java.lang.Throwable -> L94
            goto L81
        L79:
            r1.what = r2     // Catch: java.lang.Throwable -> L94
            long r5 = r5 - r8
            int r2 = (int) r5     // Catch: java.lang.Throwable -> L94
            r1.arg1 = r2     // Catch: java.lang.Throwable -> L94
            r1.arg2 = r0     // Catch: java.lang.Throwable -> L94
        L81:
            android.os.Handler r0 = r10.d     // Catch: java.lang.Throwable -> L94
            r0.sendMessage(r1)     // Catch: java.lang.Throwable -> L94
            r10.c = r4     // Catch: java.lang.Throwable -> L94
            java.lang.String r0 = "ActiveAppUtil"
            java.lang.String r1 = "init"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L94
            goto L9e
        L90:
            monitor-exit(r10)
            return
        L92:
            monitor-exit(r10)
            return
        L94:
            r0 = move-exception
            java.lang.String r1 = "ActiveAppUtil"
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> La0
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)     // Catch: java.lang.Throwable -> La0
        L9e:
            monitor-exit(r10)
            return
        La0:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
    }
}
