package com.vivo.push;

public final class e {
    private static volatile com.vivo.push.e a;
    private long b;
    private long c;
    private long d;
    private long e;
    private long f;
    private long g;
    private android.content.Context h;
    private boolean i;
    private com.vivo.push.util.b j;
    private java.lang.String k;
    private java.lang.String l;
    private android.util.SparseArray<com.vivo.push.e.a> m;
    private int n;
    private java.lang.Boolean o;
    private java.lang.Long p;
    private boolean q;
    private com.vivo.push.IPushClientFactory r;
    private int s;

    public final class a {
        private com.vivo.push.IPushActionListener a;
        private com.vivo.push.b.c b;
        private com.vivo.push.IPushActionListener c;
        private java.lang.Runnable d;
        private java.lang.Object[] e;

        public a(com.vivo.push.b.c r1, com.vivo.push.IPushActionListener r2) {
                r0 = this;
                r0.<init>()
                r0.b = r1
                r0.a = r2
                return
        }

        public final void a() {
                r2 = this;
                java.lang.Runnable r0 = r2.d
                if (r0 != 0) goto Lc
                java.lang.String r0 = "PushClientManager"
                java.lang.String r1 = "task is null"
                com.vivo.push.util.p.a(r0, r1)
                return
            Lc:
                r0.run()
                return
        }

        public final void a(int r1, java.lang.Object... r2) {
                r0 = this;
                r0.e = r2
                com.vivo.push.IPushActionListener r2 = r0.c
                if (r2 == 0) goto L9
                r2.onStateChanged(r1)
            L9:
                com.vivo.push.IPushActionListener r2 = r0.a
                if (r2 == 0) goto L10
                r2.onStateChanged(r1)
            L10:
                return
        }

        public final void a(com.vivo.push.IPushActionListener r1) {
                r0 = this;
                r0.c = r1
                return
        }

        public final void a(java.lang.Runnable r1) {
                r0 = this;
                r0.d = r1
                return
        }

        public final java.lang.Object[] b() {
                r1 = this;
                java.lang.Object[] r0 = r1.e
                return r0
        }
    }

    private e() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.b = r0
            r2.c = r0
            r2.d = r0
            r2.e = r0
            r2.f = r0
            r2.g = r0
            r0 = 1
            r2.i = r0
            android.util.SparseArray r0 = new android.util.SparseArray
            r0.<init>()
            r2.m = r0
            r0 = 0
            r2.n = r0
            com.vivo.push.d r0 = new com.vivo.push.d
            r0.<init>()
            r2.r = r0
            return
    }

    static android.content.Context a(com.vivo.push.e r0) {
            android.content.Context r0 = r0.h
            return r0
    }

    private com.vivo.push.e.a a(com.vivo.push.b.b r3, com.vivo.push.IPushActionListener r4) {
            r2 = this;
            com.vivo.push.e$a r0 = new com.vivo.push.e$a
            r0.<init>(r3, r4)
            java.lang.String r4 = r2.a(r0)
            r3.b(r4)
            com.vivo.push.h r1 = new com.vivo.push.h
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return r0
    }

    public static synchronized com.vivo.push.e a() {
            java.lang.Class<com.vivo.push.e> r0 = com.vivo.push.e.class
            monitor-enter(r0)
            com.vivo.push.e r1 = com.vivo.push.e.a     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.vivo.push.e r1 = new com.vivo.push.e     // Catch: java.lang.Throwable -> L12
            r1.<init>()     // Catch: java.lang.Throwable -> L12
            com.vivo.push.e.a = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.vivo.push.e r1 = com.vivo.push.e.a     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private synchronized java.lang.String a(com.vivo.push.e.a r3) {
            r2 = this;
            monitor-enter(r2)
            android.util.SparseArray<com.vivo.push.e$a> r0 = r2.m     // Catch: java.lang.Throwable -> L14
            int r1 = r2.n     // Catch: java.lang.Throwable -> L14
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L14
            int r3 = r2.n     // Catch: java.lang.Throwable -> L14
            int r0 = r3 + 1
            r2.n = r0     // Catch: java.lang.Throwable -> L14
            java.lang.String r3 = java.lang.Integer.toString(r3)     // Catch: java.lang.Throwable -> L14
            monitor-exit(r2)
            return r3
        L14:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    static java.lang.String a(com.vivo.push.e r0, java.lang.String r1) {
            r0.k = r1
            return r1
    }

    private static boolean a(long r4) {
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = -1
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 == 0) goto L18
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 <= 0) goto L18
            r2 = 2000(0x7d0, double:9.88E-321)
            long r4 = r4 + r2
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 < 0) goto L16
            goto L18
        L16:
            r4 = 0
            return r4
        L18:
            r4 = 1
            return r4
    }

    static com.vivo.push.util.b b(com.vivo.push.e r0) {
            com.vivo.push.util.b r0 = r0.j
            return r0
    }

    static void b(com.vivo.push.e r0, java.lang.String r1) {
            r0.e(r1)
            return
    }

    static com.vivo.push.e.a c(com.vivo.push.e r0, java.lang.String r1) {
            com.vivo.push.e$a r0 = r0.d(r1)
            return r0
    }

    static void c(com.vivo.push.e r0) {
            r0.m()
            return
    }

    private void c(java.lang.String r2) {
            r1 = this;
            com.vivo.push.f r0 = new com.vivo.push.f
            r0.<init>(r1, r2)
            com.vivo.push.m.c(r0)
            return
    }

    private synchronized com.vivo.push.e.a d(java.lang.String r3) {
            r2 = this;
            monitor-enter(r2)
            if (r3 == 0) goto L19
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L19
            android.util.SparseArray<com.vivo.push.e$a> r0 = r2.m     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L19
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L19
            com.vivo.push.e$a r0 = (com.vivo.push.e.a) r0     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L19
            android.util.SparseArray<com.vivo.push.e$a> r1 = r2.m     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L19
            r1.delete(r3)     // Catch: java.lang.Throwable -> L16 java.lang.Exception -> L19
            monitor-exit(r2)
            return r0
        L16:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
        L19:
            r3 = 0
            monitor-exit(r2)
            return r3
    }

    static void d(com.vivo.push.e r1) {
            com.vivo.push.util.b r1 = r1.j
            java.lang.String r0 = "APP_TAGS"
            r1.b(r0)
            return
    }

    private void e(java.lang.String r2) {
            r1 = this;
            com.vivo.push.k r0 = new com.vivo.push.k
            r0.<init>(r1, r2)
            com.vivo.push.m.a(r0)
            return
    }

    private void m() {
            r2 = this;
            r0 = 0
            r2.l = r0
            com.vivo.push.util.b r0 = r2.j
            java.lang.String r1 = "APP_ALIAS"
            r0.b(r1)
            return
    }

    private boolean n() {
            r4 = this;
            java.lang.Boolean r0 = r4.o
            if (r0 != 0) goto L1f
            long r0 = r4.l()
            r2 = 1230(0x4ce, double:6.077E-321)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L18
            android.content.Context r0 = r4.h
            boolean r0 = com.vivo.push.util.z.d(r0)
            if (r0 == 0) goto L18
            r0 = 1
            goto L19
        L18:
            r0 = 0
        L19:
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r4.o = r0
        L1f:
            java.lang.Boolean r0 = r4.o
            boolean r0 = r0.booleanValue()
            return r0
    }

    public final synchronized void a(android.content.Context r3) {
            r2 = this;
            monitor-enter(r2)
            android.content.Context r0 = r2.h     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L45
            android.content.Context r0 = com.vivo.push.util.ContextDelegate.getContext(r3)     // Catch: java.lang.Throwable -> L47
            r2.h = r0     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = r3.getPackageName()     // Catch: java.lang.Throwable -> L47
            boolean r3 = com.vivo.push.util.t.c(r3, r0)     // Catch: java.lang.Throwable -> L47
            r2.q = r3     // Catch: java.lang.Throwable -> L47
            com.vivo.push.util.w r3 = com.vivo.push.util.w.b()     // Catch: java.lang.Throwable -> L47
            android.content.Context r0 = r2.h     // Catch: java.lang.Throwable -> L47
            r3.a(r0)     // Catch: java.lang.Throwable -> L47
            com.vivo.push.b.g r3 = new com.vivo.push.b.g     // Catch: java.lang.Throwable -> L47
            r3.<init>()     // Catch: java.lang.Throwable -> L47
            r2.a(r3)     // Catch: java.lang.Throwable -> L47
            com.vivo.push.util.b r3 = new com.vivo.push.util.b     // Catch: java.lang.Throwable -> L47
            r3.<init>()     // Catch: java.lang.Throwable -> L47
            r2.j = r3     // Catch: java.lang.Throwable -> L47
            android.content.Context r0 = r2.h     // Catch: java.lang.Throwable -> L47
            java.lang.String r1 = "com.vivo.push_preferences.appconfig_v1"
            r3.a(r0, r1)     // Catch: java.lang.Throwable -> L47
            java.lang.String r3 = r2.f()     // Catch: java.lang.Throwable -> L47
            r2.k = r3     // Catch: java.lang.Throwable -> L47
            com.vivo.push.util.b r3 = r2.j     // Catch: java.lang.Throwable -> L47
            java.lang.String r0 = "APP_ALIAS"
            r1 = 0
            java.lang.String r3 = r3.b(r0, r1)     // Catch: java.lang.Throwable -> L47
            r2.l = r3     // Catch: java.lang.Throwable -> L47
        L45:
            monitor-exit(r2)
            return
        L47:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(android.content.Intent r4, com.vivo.push.sdk.PushMessageCallback r5) {
            r3 = this;
            com.vivo.push.IPushClientFactory r0 = r3.r
            com.vivo.push.o r4 = r0.createReceiverCommand(r4)
            com.vivo.push.e r0 = a()
            android.content.Context r0 = r0.h
            java.lang.String r1 = "PushClientManager"
            if (r4 != 0) goto L1d
            java.lang.String r4 = "sendCommand, null command!"
            com.vivo.push.util.p.a(r1, r4)
            if (r0 == 0) goto L1c
            java.lang.String r4 = "[执行指令失败]指令空！"
            com.vivo.push.util.p.c(r0, r4)
        L1c:
            return
        L1d:
            com.vivo.push.IPushClientFactory r2 = r3.r
            com.vivo.push.d.z r2 = r2.createReceiveTask(r4)
            if (r2 != 0) goto L4b
            java.lang.String r5 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "sendCommand, null command task! pushCommand = "
            java.lang.String r5 = r2.concat(r5)
            com.vivo.push.util.p.a(r1, r5)
            if (r0 == 0) goto L4a
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r1 = "[执行指令失败]指令"
            r5.<init>(r1)
            r5.append(r4)
            java.lang.String r4 = "任务空！"
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.vivo.push.util.p.c(r0, r4)
        L4a:
            return
        L4b:
            if (r0 == 0) goto L5e
            boolean r1 = r4 instanceof com.vivo.push.b.n
            if (r1 != 0) goto L5e
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "[接收指令]"
            java.lang.String r4 = r1.concat(r4)
            com.vivo.push.util.p.a(r0, r4)
        L5e:
            r2.a(r5)
            com.vivo.push.m.a(r2)
            return
    }

    final void a(com.vivo.push.IPushActionListener r6) {
            r5 = this;
            android.content.Context r0 = r5.h
            r1 = 102(0x66, float:1.43E-43)
            if (r0 != 0) goto Lc
            if (r6 == 0) goto Lb
            r6.onStateChanged(r1)
        Lb:
            return
        Lc:
            java.lang.String r0 = r5.f()
            r5.k = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r0 != 0) goto L1f
            if (r6 == 0) goto L1e
            r6.onStateChanged(r2)
        L1e:
            return
        L1f:
            long r3 = r5.b
            boolean r0 = a(r3)
            if (r0 != 0) goto L2f
            if (r6 == 0) goto L2e
            r0 = 1002(0x3ea, float:1.404E-42)
            r6.onStateChanged(r0)
        L2e:
            return
        L2f:
            long r3 = android.os.SystemClock.elapsedRealtime()
            r5.b = r3
            android.content.Context r0 = r5.h
            java.lang.String r0 = r0.getPackageName()
            android.content.Context r3 = r5.h
            r4 = 0
            if (r3 != 0) goto L46
            if (r6 == 0) goto L82
            r6.onStateChanged(r1)
            goto L82
        L46:
            com.vivo.push.b.b r1 = new com.vivo.push.b.b
            r3 = 1
            r1.<init>(r3, r0)
            r1.g()
            r1.d()
            r1.e()
            r0 = 100
            r1.a(r0)
            boolean r0 = r5.q
            if (r0 == 0) goto L6c
            boolean r0 = r5.n()
            if (r0 != 0) goto L75
            if (r6 == 0) goto L82
            r0 = 101(0x65, float:1.42E-43)
            r6.onStateChanged(r0)
            goto L82
        L6c:
            android.content.Context r0 = r5.h
            int r0 = r1.a(r0)
            r3 = 2
            if (r0 != r3) goto L7a
        L75:
            com.vivo.push.e$a r4 = r5.a(r1, r6)
            goto L82
        L7a:
            r5.a(r1)
            if (r6 == 0) goto L82
            r6.onStateChanged(r2)
        L82:
            if (r4 != 0) goto L85
            return
        L85:
            com.vivo.push.g r6 = new com.vivo.push.g
            r6.<init>(r5, r4)
            r4.a(r6)
            r4.a()
            return
    }

    public final void a(com.vivo.push.o r5) {
            r4 = this;
            com.vivo.push.e r0 = a()
            android.content.Context r0 = r0.h
            java.lang.String r1 = "PushClientManager"
            if (r5 != 0) goto L17
            java.lang.String r5 = "sendCommand, null command!"
            com.vivo.push.util.p.a(r1, r5)
            if (r0 == 0) goto L16
            java.lang.String r5 = "[执行指令失败]指令空！"
            com.vivo.push.util.p.c(r0, r5)
        L16:
            return
        L17:
            com.vivo.push.IPushClientFactory r2 = r4.r
            com.vivo.push.l r2 = r2.createTask(r5)
            if (r2 != 0) goto L45
            java.lang.String r2 = java.lang.String.valueOf(r5)
            java.lang.String r3 = "sendCommand, null command task! pushCommand = "
            java.lang.String r2 = r3.concat(r2)
            com.vivo.push.util.p.a(r1, r2)
            if (r0 == 0) goto L44
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "[执行指令失败]指令"
            r1.<init>(r2)
            r1.append(r5)
            java.lang.String r5 = "任务空！"
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            com.vivo.push.util.p.c(r0, r5)
        L44:
            return
        L45:
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r0 = "client--sendCommand, command = "
            java.lang.String r5 = r0.concat(r5)
            com.vivo.push.util.p.d(r1, r5)
            com.vivo.push.m.a(r2)
            return
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            r2.k = r3
            com.vivo.push.util.b r0 = r2.j
            java.lang.String r1 = "APP_TOKEN"
            r0.a(r1, r3)
            return
    }

    public final void a(java.lang.String r2, int r3) {
            r1 = this;
            com.vivo.push.e$a r2 = r1.d(r2)
            if (r2 == 0) goto Ld
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2.a(r3, r0)
            return
        Ld:
            java.lang.String r2 = "PushClientManager"
            java.lang.String r3 = "notifyStatusChanged token is null"
            com.vivo.push.util.p.d(r2, r3)
            return
    }

    public final void a(java.lang.String r1, int r2, java.lang.Object... r3) {
            r0 = this;
            com.vivo.push.e$a r1 = r0.d(r1)
            if (r1 == 0) goto La
            r1.a(r2, r3)
            return
        La:
            java.lang.String r1 = "PushClientManager"
            java.lang.String r2 = "notifyApp token is null"
            com.vivo.push.util.p.d(r1, r2)
            return
    }

    final void a(java.lang.String r6, com.vivo.push.IPushActionListener r7) {
            r5 = this;
            android.content.Context r0 = r5.h
            if (r0 != 0) goto Lc
            if (r7 == 0) goto Lb
            r6 = 102(0x66, float:1.43E-43)
            r7.onStateChanged(r6)
        Lb:
            return
        Lc:
            java.lang.String r0 = r5.l
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 != 0) goto L23
            java.lang.String r0 = r5.l
            boolean r0 = r0.equals(r6)
            if (r0 == 0) goto L23
            if (r7 == 0) goto L22
            r7.onStateChanged(r1)
        L22:
            return
        L23:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r6)
            com.vivo.push.b.a r2 = new com.vivo.push.b.a
            r3 = 1
            android.content.Context r4 = r5.h
            java.lang.String r4 = r4.getPackageName()
            r2.<init>(r3, r4, r0)
            r0 = 100
            r2.a(r0)
            boolean r0 = r5.q
            if (r0 == 0) goto La2
            boolean r0 = r5.n()
            if (r0 != 0) goto L4e
            if (r7 == 0) goto L4d
            r6 = 101(0x65, float:1.42E-43)
            r7.onStateChanged(r6)
        L4d:
            return
        L4e:
            long r0 = r5.d
            boolean r0 = a(r0)
            if (r0 != 0) goto L5e
            if (r7 == 0) goto L5d
            r6 = 1002(0x3ea, float:1.404E-42)
            r7.onStateChanged(r6)
        L5d:
            return
        L5e:
            long r0 = android.os.SystemClock.elapsedRealtime()
            r5.d = r0
            com.vivo.push.e$a r0 = new com.vivo.push.e$a
            r0.<init>(r2, r7)
            java.lang.String r7 = r5.a(r0)
            r2.b(r7)
            java.lang.String r0 = r5.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L7e
            r6 = 30001(0x7531, float:4.204E-41)
            r5.a(r7, r6)
            return
        L7e:
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L8a
            r6 = 30002(0x7532, float:4.2042E-41)
            r5.a(r7, r6)
            return
        L8a:
            int r6 = r6.length()
            long r0 = (long) r6
            r3 = 70
            int r6 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r6 <= 0) goto L9b
            r6 = 30003(0x7533, float:4.2043E-41)
            r5.a(r7, r6)
            return
        L9b:
            r5.a(r2)
            r5.e(r7)
            return
        La2:
            r5.a(r2)
            if (r7 == 0) goto Laa
            r7.onStateChanged(r1)
        Laa:
            return
    }

    final void a(java.util.ArrayList<java.lang.String> r6, com.vivo.push.IPushActionListener r7) {
            r5 = this;
            android.content.Context r0 = r5.h
            if (r0 != 0) goto Lc
            if (r7 == 0) goto Lb
            r6 = 102(0x66, float:1.43E-43)
            r7.onStateChanged(r6)
        Lb:
            return
        Lc:
            com.vivo.push.b.z r0 = new com.vivo.push.b.z
            r1 = 1
            android.content.Context r2 = r5.h
            java.lang.String r2 = r2.getPackageName()
            r0.<init>(r1, r2, r6)
            r1 = 500(0x1f4, float:7.0E-43)
            r0.a(r1)
            boolean r2 = r5.q
            if (r2 == 0) goto La8
            boolean r2 = r5.n()
            if (r2 != 0) goto L2f
            if (r7 == 0) goto L2e
            r6 = 101(0x65, float:1.42E-43)
            r7.onStateChanged(r6)
        L2e:
            return
        L2f:
            long r2 = r5.f
            boolean r2 = a(r2)
            if (r2 != 0) goto L3f
            if (r7 == 0) goto L3e
            r6 = 1002(0x3ea, float:1.404E-42)
            r7.onStateChanged(r6)
        L3e:
            return
        L3f:
            long r2 = android.os.SystemClock.elapsedRealtime()
            r5.f = r2
            com.vivo.push.e$a r2 = new com.vivo.push.e$a
            r2.<init>(r0, r7)
            java.lang.String r7 = r5.a(r2)
            r0.b(r7)
            java.lang.String r2 = r5.k
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L5f
            r6 = 20001(0x4e21, float:2.8027E-41)
            r5.a(r7, r6)
            return
        L5f:
            int r2 = r6.size()
            if (r2 >= 0) goto L6b
            r6 = 20002(0x4e22, float:2.8029E-41)
            r5.a(r7, r6)
            return
        L6b:
            java.util.List r2 = r5.c()
            int r2 = r2.size()
            int r3 = r6.size()
            int r3 = r3 + r2
            if (r3 <= r1) goto L80
            r6 = 20004(0x4e24, float:2.8032E-41)
            r5.a(r7, r6)
            return
        L80:
            java.util.Iterator r6 = r6.iterator()
        L84:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto La1
            java.lang.Object r1 = r6.next()
            java.lang.String r1 = (java.lang.String) r1
            int r1 = r1.length()
            long r1 = (long) r1
            r3 = 70
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L84
            r6 = 20003(0x4e23, float:2.803E-41)
            r5.a(r7, r6)
            return
        La1:
            r5.a(r0)
            r5.e(r7)
            return
        La8:
            r5.a(r0)
            if (r7 == 0) goto Lb1
            r6 = 0
            r7.onStateChanged(r6)
        Lb1:
            return
    }

    public final void a(java.util.List<java.lang.String> r6) {
            r5 = this;
            java.lang.String r0 = "APP_TAGS"
            int r1 = r6.size()     // Catch: org.json.JSONException -> L50
            if (r1 > 0) goto L9
            return
        L9:
            com.vivo.push.util.b r1 = r5.j     // Catch: org.json.JSONException -> L50
            r2 = 0
            java.lang.String r1 = r1.b(r0, r2)     // Catch: org.json.JSONException -> L50
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L50
            if (r2 == 0) goto L1c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L50
            r1.<init>()     // Catch: org.json.JSONException -> L50
            goto L22
        L1c:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L50
            r2.<init>(r1)     // Catch: org.json.JSONException -> L50
            r1 = r2
        L22:
            java.util.Iterator r6 = r6.iterator()     // Catch: org.json.JSONException -> L50
        L26:
            boolean r2 = r6.hasNext()     // Catch: org.json.JSONException -> L50
            if (r2 == 0) goto L3a
            java.lang.Object r2 = r6.next()     // Catch: org.json.JSONException -> L50
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L50
            long r3 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> L50
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L50
            goto L26
        L3a:
            java.lang.String r6 = r1.toString()     // Catch: org.json.JSONException -> L50
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: org.json.JSONException -> L50
            if (r1 == 0) goto L4a
            com.vivo.push.util.b r6 = r5.j     // Catch: org.json.JSONException -> L50
            r6.b(r0)     // Catch: org.json.JSONException -> L50
            return
        L4a:
            com.vivo.push.util.b r1 = r5.j     // Catch: org.json.JSONException -> L50
            r1.a(r0, r6)     // Catch: org.json.JSONException -> L50
            return
        L50:
            r6 = move-exception
            r6.printStackTrace()
            com.vivo.push.util.b r6 = r5.j
            r6.b(r0)
            return
    }

    protected final void a(boolean r1) {
            r0 = this;
            r0.i = r1
            return
    }

    protected final void b() {
            r1 = this;
            android.content.Context r0 = r1.h
            if (r0 == 0) goto L7
            com.vivo.push.util.z.b(r0)
        L7:
            return
    }

    final void b(com.vivo.push.IPushActionListener r6) {
            r5 = this;
            android.content.Context r0 = r5.h
            r1 = 102(0x66, float:1.43E-43)
            if (r0 != 0) goto Lc
            if (r6 == 0) goto Lb
            r6.onStateChanged(r1)
        Lb:
            return
        Lc:
            java.lang.String r0 = r5.k
            java.lang.String r2 = ""
            boolean r0 = r2.equals(r0)
            r2 = 0
            if (r0 == 0) goto L1b
            r6.onStateChanged(r2)
            return
        L1b:
            long r3 = r5.c
            boolean r0 = a(r3)
            if (r0 != 0) goto L2b
            if (r6 == 0) goto L2a
            r0 = 1002(0x3ea, float:1.404E-42)
            r6.onStateChanged(r0)
        L2a:
            return
        L2b:
            long r3 = android.os.SystemClock.elapsedRealtime()
            r5.c = r3
            android.content.Context r0 = r5.h
            java.lang.String r0 = r0.getPackageName()
            android.content.Context r3 = r5.h
            r4 = 0
            if (r3 != 0) goto L42
            if (r6 == 0) goto L92
            r6.onStateChanged(r1)
            goto L92
        L42:
            com.vivo.push.b.b r1 = new com.vivo.push.b.b
            r1.<init>(r2, r0)
            r1.d()
            r1.e()
            r1.g()
            r0 = 100
            r1.a(r0)
            boolean r0 = r5.q
            if (r0 == 0) goto L7c
            boolean r0 = r5.n()
            if (r0 != 0) goto L67
            if (r6 == 0) goto L92
            r0 = 101(0x65, float:1.42E-43)
            r6.onStateChanged(r0)
            goto L92
        L67:
            com.vivo.push.e$a r4 = new com.vivo.push.e$a
            r4.<init>(r1, r6)
            java.lang.String r6 = r5.a(r4)
            r1.b(r6)
            com.vivo.push.j r0 = new com.vivo.push.j
            r0.<init>(r5, r1, r6)
            r4.a(r0)
            goto L92
        L7c:
            android.content.Context r0 = r5.h
            int r0 = r1.a(r0)
            r3 = 2
            if (r0 != r3) goto L8a
            com.vivo.push.e$a r4 = r5.a(r1, r6)
            goto L92
        L8a:
            r5.a(r1)
            if (r6 == 0) goto L92
            r6.onStateChanged(r2)
        L92:
            if (r4 != 0) goto L95
            return
        L95:
            com.vivo.push.i r6 = new com.vivo.push.i
            r6.<init>(r5)
            r4.a(r6)
            r4.a()
            return
    }

    public final void b(java.lang.String r3) {
            r2 = this;
            r2.l = r3
            com.vivo.push.util.b r0 = r2.j
            java.lang.String r1 = "APP_ALIAS"
            r0.a(r1, r3)
            return
    }

    final void b(java.lang.String r6, com.vivo.push.IPushActionListener r7) {
            r5 = this;
            android.content.Context r0 = r5.h
            if (r0 != 0) goto Lc
            if (r7 == 0) goto Lb
            r6 = 102(0x66, float:1.43E-43)
            r7.onStateChanged(r6)
        Lb:
            return
        Lc:
            java.lang.String r0 = r5.l
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 == 0) goto L1b
            if (r7 == 0) goto L1a
            r7.onStateChanged(r1)
        L1a:
            return
        L1b:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.add(r6)
            com.vivo.push.b.a r2 = new com.vivo.push.b.a
            android.content.Context r3 = r5.h
            java.lang.String r3 = r3.getPackageName()
            r2.<init>(r1, r3, r0)
            r0 = 100
            r2.a(r0)
            boolean r0 = r5.q
            if (r0 == 0) goto L99
            boolean r0 = r5.n()
            if (r0 != 0) goto L45
            if (r7 == 0) goto L44
            r6 = 101(0x65, float:1.42E-43)
            r7.onStateChanged(r6)
        L44:
            return
        L45:
            long r0 = r5.e
            boolean r0 = a(r0)
            if (r0 != 0) goto L55
            if (r7 == 0) goto L54
            r6 = 1002(0x3ea, float:1.404E-42)
            r7.onStateChanged(r6)
        L54:
            return
        L55:
            long r0 = android.os.SystemClock.elapsedRealtime()
            r5.e = r0
            com.vivo.push.e$a r0 = new com.vivo.push.e$a
            r0.<init>(r2, r7)
            java.lang.String r7 = r5.a(r0)
            r2.b(r7)
            java.lang.String r0 = r5.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L75
            r6 = 30001(0x7531, float:4.204E-41)
            r5.a(r7, r6)
            return
        L75:
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L81
            r6 = 30002(0x7532, float:4.2042E-41)
            r5.a(r7, r6)
            return
        L81:
            int r6 = r6.length()
            long r0 = (long) r6
            r3 = 70
            int r6 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r6 <= 0) goto L92
            r6 = 30003(0x7533, float:4.2043E-41)
            r5.a(r7, r6)
            return
        L92:
            r5.a(r2)
            r5.e(r7)
            return
        L99:
            r5.a(r2)
            if (r7 == 0) goto La1
            r7.onStateChanged(r1)
        La1:
            return
    }

    final void b(java.util.ArrayList<java.lang.String> r6, com.vivo.push.IPushActionListener r7) {
            r5 = this;
            android.content.Context r0 = r5.h
            if (r0 != 0) goto Lc
            if (r7 == 0) goto Lb
            r6 = 102(0x66, float:1.43E-43)
            r7.onStateChanged(r6)
        Lb:
            return
        Lc:
            com.vivo.push.b.z r0 = new com.vivo.push.b.z
            android.content.Context r1 = r5.h
            java.lang.String r1 = r1.getPackageName()
            r2 = 0
            r0.<init>(r2, r1, r6)
            r1 = 500(0x1f4, float:7.0E-43)
            r0.a(r1)
            boolean r3 = r5.q
            if (r3 == 0) goto L9f
            boolean r2 = r5.n()
            if (r2 != 0) goto L2f
            if (r7 == 0) goto L2e
            r6 = 101(0x65, float:1.42E-43)
            r7.onStateChanged(r6)
        L2e:
            return
        L2f:
            long r2 = r5.g
            boolean r2 = a(r2)
            if (r2 != 0) goto L3f
            if (r7 == 0) goto L3e
            r6 = 1002(0x3ea, float:1.404E-42)
            r7.onStateChanged(r6)
        L3e:
            return
        L3f:
            long r2 = android.os.SystemClock.elapsedRealtime()
            r5.g = r2
            com.vivo.push.e$a r2 = new com.vivo.push.e$a
            r2.<init>(r0, r7)
            java.lang.String r7 = r5.a(r2)
            r0.b(r7)
            java.lang.String r2 = r5.k
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L5f
            r6 = 20001(0x4e21, float:2.8027E-41)
            r5.a(r7, r6)
            return
        L5f:
            int r2 = r6.size()
            if (r2 >= 0) goto L6b
            r6 = 20002(0x4e22, float:2.8029E-41)
            r5.a(r7, r6)
            return
        L6b:
            int r2 = r6.size()
            if (r2 <= r1) goto L77
            r6 = 20004(0x4e24, float:2.8032E-41)
            r5.a(r7, r6)
            return
        L77:
            java.util.Iterator r6 = r6.iterator()
        L7b:
            boolean r1 = r6.hasNext()
            if (r1 == 0) goto L98
            java.lang.Object r1 = r6.next()
            java.lang.String r1 = (java.lang.String) r1
            int r1 = r1.length()
            long r1 = (long) r1
            r3 = 70
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L7b
            r6 = 20003(0x4e23, float:2.803E-41)
            r5.a(r7, r6)
            return
        L98:
            r5.a(r0)
            r5.e(r7)
            return
        L9f:
            r5.a(r0)
            if (r7 == 0) goto La7
            r7.onStateChanged(r2)
        La7:
            return
    }

    public final void b(java.util.List<java.lang.String> r4) {
            r3 = this;
            java.lang.String r0 = "APP_TAGS"
            int r1 = r4.size()     // Catch: org.json.JSONException -> L4c
            if (r1 > 0) goto L9
            return
        L9:
            com.vivo.push.util.b r1 = r3.j     // Catch: org.json.JSONException -> L4c
            r2 = 0
            java.lang.String r1 = r1.b(r0, r2)     // Catch: org.json.JSONException -> L4c
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L4c
            if (r2 == 0) goto L1c
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L4c
            r1.<init>()     // Catch: org.json.JSONException -> L4c
            goto L22
        L1c:
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: org.json.JSONException -> L4c
            r2.<init>(r1)     // Catch: org.json.JSONException -> L4c
            r1 = r2
        L22:
            java.util.Iterator r4 = r4.iterator()     // Catch: org.json.JSONException -> L4c
        L26:
            boolean r2 = r4.hasNext()     // Catch: org.json.JSONException -> L4c
            if (r2 == 0) goto L36
            java.lang.Object r2 = r4.next()     // Catch: org.json.JSONException -> L4c
            java.lang.String r2 = (java.lang.String) r2     // Catch: org.json.JSONException -> L4c
            r1.remove(r2)     // Catch: org.json.JSONException -> L4c
            goto L26
        L36:
            java.lang.String r4 = r1.toString()     // Catch: org.json.JSONException -> L4c
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: org.json.JSONException -> L4c
            if (r1 == 0) goto L46
            com.vivo.push.util.b r4 = r3.j     // Catch: org.json.JSONException -> L4c
            r4.b(r0)     // Catch: org.json.JSONException -> L4c
            return
        L46:
            com.vivo.push.util.b r1 = r3.j     // Catch: org.json.JSONException -> L4c
            r1.a(r0, r4)     // Catch: org.json.JSONException -> L4c
            return
        L4c:
            r4 = move-exception
            r4.printStackTrace()
            com.vivo.push.util.b r4 = r3.j
            r4.b(r0)
            return
    }

    public final java.util.List<java.lang.String> c() {
            r4 = this;
            com.vivo.push.util.b r0 = r4.j
            java.lang.String r1 = "APP_TAGS"
            r2 = 0
            java.lang.String r0 = r0.b(r1, r2)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: org.json.JSONException -> L2c
            if (r3 == 0) goto L15
            return r2
        L15:
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L2c
            r3.<init>(r0)     // Catch: org.json.JSONException -> L2c
            java.util.Iterator r0 = r3.keys()     // Catch: org.json.JSONException -> L2c
        L1e:
            boolean r3 = r0.hasNext()     // Catch: org.json.JSONException -> L2c
            if (r3 == 0) goto L3b
            java.lang.Object r3 = r0.next()     // Catch: org.json.JSONException -> L2c
            r2.add(r3)     // Catch: org.json.JSONException -> L2c
            goto L1e
        L2c:
            com.vivo.push.util.b r0 = r4.j
            r0.b(r1)
            r2.clear()
            java.lang.String r0 = "PushClientManager"
            java.lang.String r1 = "getTags error"
            com.vivo.push.util.p.d(r0, r1)
        L3b:
            return r2
    }

    public final void c(java.util.List<java.lang.String> r2) {
            r1 = this;
            java.lang.String r0 = r1.l
            boolean r2 = r2.contains(r0)
            if (r2 == 0) goto Lb
            r1.m()
        Lb:
            return
    }

    public final boolean d() {
            r2 = this;
            android.content.Context r0 = r2.h
            if (r0 != 0) goto Ld
            java.lang.String r0 = "PushClientManager"
            java.lang.String r1 = "support:context is null"
            com.vivo.push.util.p.d(r0, r1)
            r0 = 0
            return r0
        Ld:
            boolean r0 = r2.n()
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r2.o = r0
            boolean r0 = r0.booleanValue()
            return r0
    }

    public final boolean e() {
            r1 = this;
            boolean r0 = r1.q
            return r0
    }

    public final java.lang.String f() {
            r3 = this;
            java.lang.String r0 = r3.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r3.k
            return r0
        Lb:
            com.vivo.push.util.b r0 = r3.j
            if (r0 == 0) goto L17
            r1 = 0
            java.lang.String r2 = "APP_TOKEN"
            java.lang.String r0 = r0.b(r2, r1)
            goto L19
        L17:
            java.lang.String r0 = ""
        L19:
            r3.c(r0)
            return r0
    }

    public final boolean g() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public final android.content.Context h() {
            r1 = this;
            android.content.Context r0 = r1.h
            return r0
    }

    public final void i() {
            r1 = this;
            com.vivo.push.util.b r0 = r1.j
            r0.a()
            return
    }

    public final java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public final int k() {
            r1 = this;
            int r0 = r1.s
            return r0
    }

    public final long l() {
            r2 = this;
            android.content.Context r0 = r2.h
            if (r0 != 0) goto L7
            r0 = -1
            return r0
        L7:
            java.lang.Long r1 = r2.p
            if (r1 != 0) goto L15
            long r0 = com.vivo.push.util.z.a(r0)
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            r2.p = r0
        L15:
            java.lang.Long r0 = r2.p
            long r0 = r0.longValue()
            return r0
    }
}
