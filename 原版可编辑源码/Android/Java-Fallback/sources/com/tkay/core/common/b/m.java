package com.tkay.core.common.b;

public class m {
    public static final int a = 0;
    public static final int b = 1;
    private static volatile com.tkay.core.common.b.m j;
    private final java.lang.String A;
    private boolean B;
    private boolean C;
    private long D;
    private long E;
    private java.lang.String F;
    private java.lang.String G;
    private boolean H;
    private boolean I;
    private boolean J;
    private com.tkay.core.common.g.c K;
    private android.location.Location L;
    private java.lang.String M;
    private org.json.JSONArray N;
    private java.util.List<java.lang.String> O;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<java.lang.String>> P;
    private java.lang.String Q;
    private com.tkay.core.api.ATDebuggerConfig R;
    private boolean S;
    private int T;
    private boolean U;
    private boolean V;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.ITYAdFilter> W;
    private java.lang.String X;
    private com.tkay.core.api.ATPrivacyConfig Y;
    private int Z;
    private com.tkay.core.common.f.al aa;
    private long ab;
    java.lang.Boolean c;
    long d;
    java.lang.ref.WeakReference<android.app.Activity> e;
    private int f;
    private final java.lang.String g;
    private final java.lang.String h;
    private boolean i;
    private android.content.Context k;
    private java.lang.String l;
    private java.lang.String m;
    private android.os.Handler n;
    private java.lang.String o;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> p;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.Map<java.lang.String, java.lang.Object>> q;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.TYCustomAdapterConfig> r;
    private java.util.Map<java.lang.String, java.lang.Boolean> s;
    private java.lang.String t;
    private org.json.JSONObject u;
    private android.content.BroadcastReceiver v;
    private java.lang.String w;
    private java.lang.String x;
    private java.lang.String y;
    private com.tkay.core.api.IExHandler z;

    final class 1 implements java.lang.Runnable {
        final com.tkay.core.common.b.m a;

        1(com.tkay.core.common.b.m r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r6 = this;
                com.tkay.core.common.b.m r0 = r6.a     // Catch: java.lang.Exception -> L12
                android.content.Context r0 = com.tkay.core.common.b.m.a(r0)     // Catch: java.lang.Exception -> L12
                com.tkay.core.common.l.d.a(r0)     // Catch: java.lang.Exception -> L12
                com.tkay.core.common.b.m r0 = r6.a     // Catch: java.lang.Exception -> L12
                android.content.Context r0 = com.tkay.core.common.b.m.a(r0)     // Catch: java.lang.Exception -> L12
                com.tkay.core.common.l.d.q(r0)     // Catch: java.lang.Exception -> L12
            L12:
                com.tkay.core.common.b.m r0 = r6.a
                boolean r0 = r0.z()
                if (r0 == 0) goto L8f
                com.tkay.core.common.b.m r0 = r6.a
                android.content.Context r0 = com.tkay.core.common.b.m.a(r0)
                java.lang.String r0 = com.tkay.core.common.l.d.d(r0)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "********************************** "
                r1.<init>(r2)
                java.lang.String r3 = com.tkay.core.common.l.g.a()
                r1.append(r3)
                java.lang.String r3 = " *************************************"
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                java.lang.String r4 = "tkay"
                android.util.Log.i(r4, r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r5 = "GAID(ADID): "
                r1.<init>(r5)
                java.lang.String r5 = com.tkay.core.common.l.d.f()
                r1.append(r5)
                java.lang.String r5 = " , AndroidID: "
                r1.append(r5)
                r1.append(r0)
                java.lang.String r1 = r1.toString()
                android.util.Log.i(r4, r1)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>(r2)
                java.lang.String r2 = com.tkay.core.common.l.g.a()
                r1.append(r2)
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                android.util.Log.i(r4, r1)
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 != 0) goto L8f
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "You can use \"TYSDK.setDebuggerConfig(context, \""
                r1.<init>(r2)
                r1.append(r0)
                java.lang.String r0 = "\",new ATDebuggerConfig.Builder(the NetworkFirmId you want to test).build());\" to open the debugger mode."
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                android.util.Log.i(r4, r0)
            L8f:
                return
        }
    }

    final class 10 extends android.content.BroadcastReceiver {
        final com.tkay.core.common.b.m a;



        10(com.tkay.core.common.b.m r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onReceive(android.content.Context r4, android.content.Intent r5) {
                r3 = this;
                boolean r0 = com.tkay.core.common.l.h.a(r4)
                if (r0 == 0) goto L34
                com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
                com.tkay.core.common.b.m$10$1 r1 = new com.tkay.core.common.b.m$10$1
                r1.<init>(r3)
                r0.a(r1)
                com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
                com.tkay.core.common.b.m$10$2 r1 = new com.tkay.core.common.b.m$10$2
                r1.<init>(r3)
                r0.a(r1)
                com.tkay.core.common.k.b r0 = com.tkay.core.common.k.b.a()
                r0.b()
                com.tkay.core.common.b.m r0 = r3.a
                java.lang.String r1 = r0.o()
                com.tkay.core.common.b.m r2 = r3.a
                java.lang.String r2 = r2.p()
                r0.a(r4, r1, r2)
            L34:
                java.lang.String r4 = r5.getAction()
                java.lang.String r0 = "tkay_log_agent"
                boolean r4 = android.text.TextUtils.equals(r4, r0)
                if (r4 == 0) goto L49
                java.lang.String r4 = "tkay_log_agent_data"
                java.lang.String r4 = r5.getStringExtra(r4)
                com.tkay.core.common.k.c.a(r4)
            L49:
                return
        }
    }

    final class 11 implements java.lang.Runnable {
        final android.content.Context a;
        final java.lang.String b;
        final com.tkay.core.common.b.m c;

        11(com.tkay.core.common.b.m r1, android.content.Context r2, java.lang.String r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                android.content.Context r0 = r2.a
                android.content.Context r0 = r0.getApplicationContext()
                com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
                java.lang.String r1 = r2.b
                com.tkay.core.c.a r0 = r0.b(r1)
                if (r0 == 0) goto L40
                boolean r1 = r0.G()
                if (r1 != 0) goto L25
                com.tkay.core.common.b.m r1 = r2.c
                android.content.Context r1 = com.tkay.core.common.b.m.a(r1)
                com.tkay.core.common.r r1 = com.tkay.core.common.r.a(r1)
                r1.a(r0)
            L25:
                android.content.Context r0 = r2.a
                android.content.Context r0 = r0.getApplicationContext()
                com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
                java.lang.String r1 = r2.b
                boolean r0 = r0.a(r1)
                if (r0 != 0) goto L40
                android.content.Context r0 = r2.a
                android.content.Context r0 = r0.getApplicationContext()
                com.tkay.core.c.b.a(r0)
            L40:
                return
        }
    }






    final class 5 implements java.lang.Runnable {
        final com.tkay.core.api.TYInitConfig a;
        final android.content.Context b;
        final com.tkay.core.common.b.m c;

        5(com.tkay.core.common.b.m r1, com.tkay.core.api.TYInitConfig r2, android.content.Context r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r11 = this;
                com.tkay.core.api.TYInitConfig r0 = r11.a     // Catch: java.lang.Throwable -> Ldc
                com.tkay.core.api.TYInitMediation r0 = r0.getInitMediation()     // Catch: java.lang.Throwable -> Ldc
                if (r0 == 0) goto Ldb
                java.lang.String r1 = r0.getNetworkName()     // Catch: java.lang.Throwable -> Ldc
                com.tkay.core.common.b.m r2 = r11.c     // Catch: java.lang.Throwable -> Ldc
                android.content.Context r2 = com.tkay.core.common.b.m.a(r2)     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r3 = "tkay_network_init_data"
                java.lang.String r4 = ""
                java.lang.String r2 = com.tkay.core.common.l.p.b(r2, r3, r1, r4)     // Catch: java.lang.Throwable -> Ldc
                boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Ldc
                if (r3 != 0) goto L25
                java.util.Map r2 = com.tkay.core.common.l.h.c(r2)     // Catch: java.lang.Throwable -> Ldc
                goto L32
            L25:
                com.tkay.core.api.TYInitConfig r2 = r11.a     // Catch: java.lang.Throwable -> Ldc
                java.util.Map r2 = r2.getRequestParamMap()     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r3 = "tkay_local"
                java.lang.Boolean r4 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> Ldc
                r2.put(r3, r4)     // Catch: java.lang.Throwable -> Ldc
            L32:
                r3 = 0
                android.content.Context r4 = r11.b     // Catch: java.lang.Throwable -> L52
                com.tkay.core.common.b.p r4 = com.tkay.core.common.b.p.a(r4)     // Catch: java.lang.Throwable -> L52
                boolean r4 = r4.c()     // Catch: java.lang.Throwable -> L52
                android.content.Context r5 = r11.b     // Catch: java.lang.Throwable -> L4f
                com.tkay.core.common.b.p r5 = com.tkay.core.common.b.p.a(r5)     // Catch: java.lang.Throwable -> L4f
                boolean r5 = r5.d()     // Catch: java.lang.Throwable -> L4f
                android.content.Context r6 = r11.b     // Catch: java.lang.Throwable -> L4d
                r0.setUserDataConsent(r6, r4, r5)     // Catch: java.lang.Throwable -> L4d
                goto L58
            L4d:
                r6 = move-exception
                goto L55
            L4f:
                r6 = move-exception
                r5 = r3
                goto L55
            L52:
                r6 = move-exception
                r4 = r3
                r5 = r4
            L55:
                r6.printStackTrace()     // Catch: java.lang.Throwable -> Ldc
            L58:
                android.content.Context r6 = r11.b     // Catch: java.lang.Throwable -> Ldc
                com.tkay.core.c.b r6 = com.tkay.core.c.b.a(r6)     // Catch: java.lang.Throwable -> Ldc
                com.tkay.core.common.b.m r7 = r11.c     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r7 = com.tkay.core.common.b.m.e(r7)     // Catch: java.lang.Throwable -> Ldc
                com.tkay.core.c.a r6 = r6.b(r7)     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r7 = "app_ccpa_switch"
                int r8 = r6.p()     // Catch: java.lang.Throwable -> Ldc
                r9 = 3
                r10 = 1
                if (r8 != r9) goto L74
                r8 = r10
                goto L75
            L74:
                r8 = r3
            L75:
                java.lang.Boolean r8 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Throwable -> Ldc
                r2.put(r7, r8)     // Catch: java.lang.Throwable -> Ldc
                boolean r7 = com.tkay.core.common.l.g.b()     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r8 = "app_coppa_switch"
                int r6 = r6.q()     // Catch: java.lang.Throwable -> Ldc
                r9 = 2
                if (r6 != r9) goto L8c
                if (r7 == 0) goto L8c
                r3 = r10
            L8c:
                java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Throwable -> Ldc
                r2.put(r8, r3)     // Catch: java.lang.Throwable -> Ldc
                com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ldc
                boolean r3 = r3.z()     // Catch: java.lang.Throwable -> Ldc
                if (r3 == 0) goto Ld1
                java.lang.String r3 = "tkay"
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r7 = "pre init network: ["
                r6.<init>(r7)     // Catch: java.lang.Throwable -> Ldc
                r6.append(r1)     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r1 = "], params: "
                r6.append(r1)     // Catch: java.lang.Throwable -> Ldc
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ldc
                r1.<init>(r2)     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Ldc
                r6.append(r1)     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r1 = ", gdpr: "
                r6.append(r1)     // Catch: java.lang.Throwable -> Ldc
                r6.append(r4)     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r1 = ", in eu: "
                r6.append(r1)     // Catch: java.lang.Throwable -> Ldc
                r6.append(r5)     // Catch: java.lang.Throwable -> Ldc
                java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> Ldc
                android.util.Log.i(r3, r1)     // Catch: java.lang.Throwable -> Ldc
            Ld1:
                com.tkay.core.common.b.m r1 = r11.c     // Catch: java.lang.Throwable -> Ldc
                android.content.Context r1 = com.tkay.core.common.b.m.a(r1)     // Catch: java.lang.Throwable -> Ldc
                r3 = 0
                r0.initSDK(r1, r2, r3)     // Catch: java.lang.Throwable -> Ldc
            Ldb:
                return
            Ldc:
                r0 = move-exception
                r0.printStackTrace()
                return
        }
    }





    private m() {
            r5 = this;
            r5.<init>()
            java.lang.String r0 = "SDK.init"
            r5.g = r0
            java.lang.String r0 = "com.tkay.pd.ExHandler"
            r5.h = r0
            r0 = 0
            r5.i = r0
            r5.B = r0
            r5.C = r0
            r1 = 0
            r5.D = r1
            r5.E = r1
            r5.J = r0
            java.lang.String r3 = ""
            r5.M = r3
            r4 = 1
            r5.T = r4
            r5.U = r0
            r5.V = r0
            r5.X = r3
            r5.Z = r4
            r5.d = r1
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r5.n = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r5.q = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r5.p = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            java.lang.String r1 = "tkay.test"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.A = r0
            r5.H = r4
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r5.P = r0
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r5.u = r0
            long r0 = java.lang.System.currentTimeMillis()
            r5.ab = r0
            return
    }

    private void M() {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.m$1 r1 = new com.tkay.core.common.b.m$1
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    private void N() {
            r3 = this;
            android.content.BroadcastReceiver r0 = r3.v     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L16
            android.content.Context r0 = r3.k     // Catch: java.lang.Throwable -> L19
            android.content.BroadcastReceiver r1 = r3.v     // Catch: java.lang.Throwable -> L19
            r0.unregisterReceiver(r1)     // Catch: java.lang.Throwable -> L19
            android.content.Context r0 = r3.k     // Catch: java.lang.Throwable -> L19
            com.tkay.core.common.b.j r0 = com.tkay.core.common.b.j.a(r0)     // Catch: java.lang.Throwable -> L19
            android.content.BroadcastReceiver r1 = r3.v     // Catch: java.lang.Throwable -> L19
            r0.a(r1)     // Catch: java.lang.Throwable -> L19
        L16:
            r0 = 0
            r3.v = r0     // Catch: java.lang.Throwable -> L19
        L19:
            com.tkay.core.common.b.m$10 r0 = new com.tkay.core.common.b.m$10     // Catch: java.lang.Throwable -> L41
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L41
            r3.v = r0     // Catch: java.lang.Throwable -> L41
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L41
            r0.<init>()     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L41
            java.lang.String r1 = "tkay_log_agent"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L41
            android.content.Context r1 = r3.k     // Catch: java.lang.Throwable -> L41
            android.content.BroadcastReceiver r2 = r3.v     // Catch: java.lang.Throwable -> L41
            r1.registerReceiver(r2, r0)     // Catch: java.lang.Throwable -> L41
            android.content.Context r1 = r3.k     // Catch: java.lang.Throwable -> L41
            com.tkay.core.common.b.j r1 = com.tkay.core.common.b.j.a(r1)     // Catch: java.lang.Throwable -> L41
            android.content.BroadcastReceiver r2 = r3.v     // Catch: java.lang.Throwable -> L41
            r1.a(r2, r0)     // Catch: java.lang.Throwable -> L41
        L41:
            return
    }

    private void O() {
            r5 = this;
            android.content.Context r0 = r5.k
            r1 = 0
            if (r0 == 0) goto L35
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L2d
            android.content.Context r2 = r5.k     // Catch: java.lang.Throwable -> L2d
            r3 = 0
            java.io.File r2 = r2.getExternalFilesDir(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r5.A     // Catch: java.lang.Throwable -> L2d
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2d
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L34
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2b
            android.content.Context r2 = r5.k     // Catch: java.lang.Throwable -> L2b
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = r5.A     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2b
            boolean r0 = r1.exists()     // Catch: java.lang.Throwable -> L2b
            goto L34
        L2b:
            r1 = move-exception
            goto L31
        L2d:
            r0 = move-exception
            r4 = r1
            r1 = r0
            r0 = r4
        L31:
            r1.printStackTrace()
        L34:
            r1 = r0
        L35:
            r5.B = r1
            return
    }

    private boolean P() {
            r1 = this;
            boolean r0 = r1.H
            return r0
    }

    private long Q() {
            r2 = this;
            long r0 = r2.ab
            return r0
    }

    private static long a(long r2) {
            java.util.Date r0 = new java.util.Date
            r0.<init>(r2)
            java.util.Date r2 = new java.util.Date
            int r3 = r0.getYear()
            int r1 = r0.getMonth()
            int r0 = r0.getDate()
            r2.<init>(r3, r1, r0)
            long r2 = r2.getTime()
            return r2
    }

    static android.content.Context a(com.tkay.core.common.b.m r0) {
            android.content.Context r0 = r0.k
            return r0
    }

    public static com.tkay.core.common.b.m a() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.j
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.b.m> r0 = com.tkay.core.common.b.m.class
            monitor-enter(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.j     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.b.m r1 = new com.tkay.core.common.b.m     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.b.m.j = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.j
            return r0
    }

    private void a(android.content.Context r7, com.tkay.core.api.TYNetworkConfig r8) {
            r6 = this;
            if (r8 != 0) goto L7
            com.tkay.core.api.TYNetworkConfig r8 = new com.tkay.core.api.TYNetworkConfig
            r8.<init>()
        L7:
            java.util.List r8 = r8.getTYInitConfigList()
            if (r8 != 0) goto L13
            java.util.ArrayList r8 = new java.util.ArrayList
            r0 = 2
            r8.<init>(r0)
        L13:
            boolean r0 = r6.u()
            if (r0 == 0) goto L1c
            r8.clear()
        L1c:
            int r0 = r8.size()
            r1 = 1
            r2 = 0
            if (r0 <= 0) goto L26
            r0 = r1
            goto L27
        L26:
            r0 = r2
        L27:
            r6.J = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            r4 = 0
            if (r0 == r3) goto L52
            java.lang.String r0 = "com.tkay.network.facebook.FacebookTYInitConfig"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L52
            java.lang.Class<com.tkay.core.api.TYInitConfig> r3 = com.tkay.core.api.TYInitConfig.class
            java.lang.Class r0 = r0.asSubclass(r3)     // Catch: java.lang.Throwable -> L52
            r3 = r4
            java.lang.Class[] r3 = (java.lang.Class[]) r3     // Catch: java.lang.Throwable -> L52
            java.lang.reflect.Constructor r0 = r0.getDeclaredConstructor(r3)     // Catch: java.lang.Throwable -> L52
            r0.setAccessible(r1)     // Catch: java.lang.Throwable -> L52
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L52
            java.lang.Object r0 = r0.newInstance(r3)     // Catch: java.lang.Throwable -> L52
            com.tkay.core.api.TYInitConfig r0 = (com.tkay.core.api.TYInitConfig) r0     // Catch: java.lang.Throwable -> L52
            r8.add(r2, r0)     // Catch: java.lang.Throwable -> L51
        L51:
            r4 = r0
        L52:
            java.util.Iterator r8 = r8.iterator()
        L56:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L8c
            java.lang.Object r0 = r8.next()
            com.tkay.core.api.TYInitConfig r0 = (com.tkay.core.api.TYInitConfig) r0
            if (r0 == 0) goto L56
            if (r4 == 0) goto L7f
            java.lang.Class r3 = r4.getClass()
            java.lang.String r3 = r3.getSimpleName()
            java.lang.Class r5 = r0.getClass()
            java.lang.String r5 = r5.getSimpleName()
            boolean r3 = android.text.TextUtils.equals(r3, r5)
            if (r3 == 0) goto L7f
            if (r2 != 0) goto L56
            r2 = r1
        L7f:
            com.tkay.core.common.l.b.a r3 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.m$5 r5 = new com.tkay.core.common.b.m$5
            r5.<init>(r6, r0, r7)
            r3.a(r5)
            goto L56
        L8c:
            return
    }

    static void a(com.tkay.core.common.b.m r21, android.content.Context r22) {
            java.lang.String r0 = ""
            java.lang.String r1 = "playRecord"
            java.lang.String r2 = "tkay_sdk"
            r3 = r21
            long r3 = r3.d
            r5 = 0
            com.tkay.core.common.b.m r7 = a()     // Catch: java.lang.Exception -> La3
            android.content.Context r7 = r7.k     // Catch: java.lang.Exception -> La3
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            r8.<init>()     // Catch: java.lang.Exception -> La3
            com.tkay.core.common.b.m r9 = a()     // Catch: java.lang.Exception -> La3
            java.lang.String r9 = r9.o()     // Catch: java.lang.Exception -> La3
            r8.append(r9)     // Catch: java.lang.Exception -> La3
            r8.append(r1)     // Catch: java.lang.Exception -> La3
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> La3
            java.lang.String r7 = com.tkay.core.common.l.p.b(r7, r2, r8, r0)     // Catch: java.lang.Exception -> La3
            boolean r8 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> La3
            if (r8 != 0) goto Lc3
            org.json.JSONObject r8 = new org.json.JSONObject     // Catch: java.lang.Exception -> La3
            r8.<init>(r7)     // Catch: java.lang.Exception -> La3
            java.lang.String r7 = "start_time"
            long r15 = r8.optLong(r7)     // Catch: java.lang.Exception -> La3
            java.lang.String r7 = "end_time"
            long r17 = r8.optLong(r7)     // Catch: java.lang.Exception -> La3
            java.lang.String r7 = "psid"
            java.lang.String r14 = r8.optString(r7)     // Catch: java.lang.Exception -> La3
            java.lang.String r7 = "launch_mode"
            int r7 = r8.optInt(r7)     // Catch: java.lang.Exception -> La3
            int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            r19 = 1000(0x3e8, double:4.94E-321)
            if (r8 == 0) goto L72
            r8 = 1
            if (r7 != r8) goto L5b
            r7 = 4
            goto L5c
        L5b:
            r7 = 2
        L5c:
            r9 = r7
            r10 = r15
            r12 = r17
            com.tkay.core.common.k.c.a(r9, r10, r12, r14)     // Catch: java.lang.Exception -> La3
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            java.lang.String r8 = "Create new psid, SDKContext.init to send playTime:"
            r7.<init>(r8)     // Catch: java.lang.Exception -> La3
            long r17 = r17 - r15
            long r8 = r17 / r19
            r7.append(r8)     // Catch: java.lang.Exception -> La3
            goto L81
        L72:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La2
            java.lang.String r4 = "Psid is old, use pervioud statime,close before:"
            r3.<init>(r4)     // Catch: java.lang.Exception -> La2
            long r17 = r17 - r15
            long r7 = r17 / r19
            r3.append(r7)     // Catch: java.lang.Exception -> La2
            r3 = r15
        L81:
            com.tkay.core.common.b.m r7 = a()     // Catch: java.lang.Exception -> La3
            android.content.Context r7 = r7.k     // Catch: java.lang.Exception -> La3
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La3
            r8.<init>()     // Catch: java.lang.Exception -> La3
            com.tkay.core.common.b.m r9 = a()     // Catch: java.lang.Exception -> La3
            java.lang.String r9 = r9.o()     // Catch: java.lang.Exception -> La3
            r8.append(r9)     // Catch: java.lang.Exception -> La3
            r8.append(r1)     // Catch: java.lang.Exception -> La3
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> La3
            com.tkay.core.common.l.p.a(r7, r2, r8, r0)     // Catch: java.lang.Exception -> La3
            goto Lc3
        La2:
            r3 = r15
        La3:
            com.tkay.core.common.b.m r7 = a()
            android.content.Context r7 = r7.k
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            com.tkay.core.common.b.m r9 = a()
            java.lang.String r9 = r9.o()
            r8.append(r9)
            r8.append(r1)
            java.lang.String r1 = r8.toString()
            com.tkay.core.common.l.p.a(r7, r2, r1, r0)
        Lc3:
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto Ld8
            java.lang.Long r0 = java.lang.Long.valueOf(r5)
            java.lang.String r1 = "SPU_INIT_TIME_KEY"
            r7 = r22
            java.lang.Long r0 = com.tkay.core.common.l.p.a(r7, r2, r1, r0)
            long r3 = r0.longValue()
            goto Lda
        Ld8:
            r7 = r22
        Lda:
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto Le2
            long r3 = java.lang.System.currentTimeMillis()
        Le2:
            android.content.Context r0 = r22.getApplicationContext()
            android.app.Application r0 = (android.app.Application) r0
            com.tkay.core.common.b.d r1 = new com.tkay.core.common.b.d
            r1.<init>(r3)
            r0.registerActivityLifecycleCallbacks(r1)
            return
    }

    static void a(com.tkay.core.common.b.m r6, android.content.Context r7, com.tkay.core.api.TYNetworkConfig r8) {
            if (r8 != 0) goto L7
            com.tkay.core.api.TYNetworkConfig r8 = new com.tkay.core.api.TYNetworkConfig
            r8.<init>()
        L7:
            java.util.List r8 = r8.getTYInitConfigList()
            if (r8 != 0) goto L13
            java.util.ArrayList r8 = new java.util.ArrayList
            r0 = 2
            r8.<init>(r0)
        L13:
            boolean r0 = r6.u()
            if (r0 == 0) goto L1c
            r8.clear()
        L1c:
            int r0 = r8.size()
            r1 = 1
            r2 = 0
            if (r0 <= 0) goto L26
            r0 = r1
            goto L27
        L26:
            r0 = r2
        L27:
            r6.J = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 29
            r4 = 0
            if (r0 == r3) goto L52
            java.lang.String r0 = "com.tkay.network.facebook.FacebookTYInitConfig"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L52
            java.lang.Class<com.tkay.core.api.TYInitConfig> r3 = com.tkay.core.api.TYInitConfig.class
            java.lang.Class r0 = r0.asSubclass(r3)     // Catch: java.lang.Throwable -> L52
            r3 = r4
            java.lang.Class[] r3 = (java.lang.Class[]) r3     // Catch: java.lang.Throwable -> L52
            java.lang.reflect.Constructor r0 = r0.getDeclaredConstructor(r3)     // Catch: java.lang.Throwable -> L52
            r0.setAccessible(r1)     // Catch: java.lang.Throwable -> L52
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L52
            java.lang.Object r0 = r0.newInstance(r3)     // Catch: java.lang.Throwable -> L52
            com.tkay.core.api.TYInitConfig r0 = (com.tkay.core.api.TYInitConfig) r0     // Catch: java.lang.Throwable -> L52
            r8.add(r2, r0)     // Catch: java.lang.Throwable -> L51
        L51:
            r4 = r0
        L52:
            java.util.Iterator r8 = r8.iterator()
        L56:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L8c
            java.lang.Object r0 = r8.next()
            com.tkay.core.api.TYInitConfig r0 = (com.tkay.core.api.TYInitConfig) r0
            if (r0 == 0) goto L56
            if (r4 == 0) goto L7f
            java.lang.Class r3 = r4.getClass()
            java.lang.String r3 = r3.getSimpleName()
            java.lang.Class r5 = r0.getClass()
            java.lang.String r5 = r5.getSimpleName()
            boolean r3 = android.text.TextUtils.equals(r3, r5)
            if (r3 == 0) goto L7f
            if (r2 != 0) goto L56
            r2 = r1
        L7f:
            com.tkay.core.common.l.b.a r3 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.m$5 r5 = new com.tkay.core.common.b.m$5
            r5.<init>(r6, r0, r7)
            r3.a(r5)
            goto L56
        L8c:
            return
    }

    static boolean a(android.content.Context r7, java.util.List<java.lang.String> r8) {
            r0 = 1
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Iterator r8 = r8.iterator()
            r2 = 0
        Le:
            boolean r3 = r8.hasNext()
            if (r3 == 0) goto L4b
            java.lang.Object r3 = r8.next()
            java.lang.String r3 = (java.lang.String) r3
            android.content.pm.PackageManager r4 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L3c
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Throwable -> L3c
            java.lang.Class r6 = java.lang.Class.forName(r3)     // Catch: java.lang.Throwable -> L3c
            r5.<init>(r7, r6)     // Catch: java.lang.Throwable -> L3c
            r6 = 131072(0x20000, float:1.83671E-40)
            java.util.List r4 = r4.queryIntentActivities(r5, r6)     // Catch: java.lang.Throwable -> L3c
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L3c
            if (r4 > 0) goto Le
            java.lang.String r0 = ", "
            r1.append(r0)     // Catch: java.lang.Throwable -> L3c
            r1.append(r3)     // Catch: java.lang.Throwable -> L3c
            goto L49
        L3c:
            r0 = move-exception
            java.lang.String r3 = ", error: "
            r1.append(r3)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
        L49:
            r0 = r2
            goto Le
        L4b:
            int r7 = r1.length()
            r8 = 2
            if (r7 <= r8) goto L55
            r1.delete(r2, r8)
        L55:
            java.lang.String r7 = "tkay"
            if (r0 == 0) goto L5f
            java.lang.String r8 = "Activities : VERIFIED"
            android.util.Log.i(r7, r8)
            goto L79
        L5f:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r2 = "Activities : Missing "
            r8.<init>(r2)
            java.lang.String r1 = r1.toString()
            r8.append(r1)
            java.lang.String r1 = " declare in AndroidManifest"
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            android.util.Log.e(r7, r8)
        L79:
            return r0
    }

    static boolean a(android.content.Context r10, java.util.List<java.lang.String> r11, boolean r12) {
            r0 = 1
            if (r11 == 0) goto Lc0
            int r1 = r11.size()
            if (r1 != 0) goto Lb
            goto Lc0
        Lb:
            java.lang.String r1 = ""
            r2 = 0
            int r3 = r11.size()     // Catch: java.lang.Throwable -> L91
            r5 = r0
            r4 = r2
        L14:
            if (r4 >= r3) goto L8f
            java.lang.Object r6 = r11.get(r4)     // Catch: java.lang.Throwable -> L91
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Throwable -> L91
            boolean r7 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L95
            if (r7 == 0) goto L3b
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L95
            r7.<init>()     // Catch: java.lang.Throwable -> L95
            java.lang.String r8 = "_"
            java.lang.String[] r8 = r6.split(r8)     // Catch: java.lang.Throwable -> L95
            r8 = r8[r2]     // Catch: java.lang.Throwable -> L95
            r7.append(r8)     // Catch: java.lang.Throwable -> L95
            java.lang.String r8 = "_*"
            r7.append(r8)     // Catch: java.lang.Throwable -> L95
            java.lang.String r1 = r7.toString()     // Catch: java.lang.Throwable -> L95
        L3b:
            android.content.res.Resources r7 = r10.getResources()     // Catch: java.lang.Throwable -> L95
            java.lang.String r8 = "layout"
            java.lang.String r9 = r10.getPackageName()     // Catch: java.lang.Throwable -> L95
            int r6 = r7.getIdentifier(r6, r8, r9)     // Catch: java.lang.Throwable -> L95
            if (r6 > 0) goto L4c
            goto L95
        L4c:
            r7 = 0
            android.content.res.Resources r8 = r10.getResources()     // Catch: java.lang.Throwable -> L7e
            android.content.res.XmlResourceParser r7 = r8.getLayout(r6)     // Catch: java.lang.Throwable -> L7e
        L55:
            int r6 = r7.next()     // Catch: java.lang.Throwable -> L7e
            if (r6 == r0) goto L78
            r8 = 2
            if (r6 != r8) goto L55
            java.lang.String r6 = "x"
            java.lang.String r8 = r7.getName()     // Catch: java.lang.Throwable -> L7e
            boolean r6 = r6.equalsIgnoreCase(r8)     // Catch: java.lang.Throwable -> L7e
            if (r6 == 0) goto L72
            int r6 = r7.getAttributeCount()     // Catch: java.lang.Throwable -> L7e
            if (r6 != 0) goto L55
            r5 = r2
            goto L78
        L72:
            int r6 = r7.getAttributeCount()     // Catch: java.lang.Throwable -> L7e
            if (r6 < 0) goto L55
        L78:
            if (r7 == 0) goto L85
        L7a:
            r7.close()     // Catch: java.lang.Throwable -> L95
            goto L85
        L7e:
            r6 = move-exception
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L88
            if (r7 == 0) goto L85
            goto L7a
        L85:
            int r4 = r4 + 1
            goto L14
        L88:
            r10 = move-exception
            if (r7 == 0) goto L8e
            r7.close()     // Catch: java.lang.Throwable -> L95
        L8e:
            throw r10     // Catch: java.lang.Throwable -> L95
        L8f:
            r2 = r5
            goto L95
        L91:
            r10 = move-exception
            r10.printStackTrace()
        L95:
            java.lang.String r10 = "tkay"
            if (r2 == 0) goto La1
            if (r12 != 0) goto Lbf
            java.lang.String r11 = "Resource: VERIFIED"
            android.util.Log.i(r10, r11)
            goto Lbf
        La1:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r12 = "Resource: The "
            r11.<init>(r12)
            r11.append(r1)
            java.lang.String r12 = " resources are missing. If shrinkResources is enabled, the "
            r11.append(r12)
            r11.append(r1)
            java.lang.String r12 = " resources must be added to the whitelist (keep.xml)"
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            android.util.Log.e(r10, r11)
        Lbf:
            return r2
        Lc0:
            return r0
    }

    private void b(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            android.content.Context r0 = r2.getApplicationContext()
            r1.a(r0, r3, r4)
            com.tkay.core.common.l.b.a r4 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.m$11 r0 = new com.tkay.core.common.b.m$11
            r0.<init>(r1, r2, r3)
            r4.a(r0)
            return
    }

    static void b(com.tkay.core.common.b.m r5) {
            android.content.Context r0 = r5.k
            r1 = 0
            if (r0 == 0) goto L35
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L2d
            android.content.Context r2 = r5.k     // Catch: java.lang.Throwable -> L2d
            r3 = 0
            java.io.File r2 = r2.getExternalFilesDir(r3)     // Catch: java.lang.Throwable -> L2d
            java.lang.String r3 = r5.A     // Catch: java.lang.Throwable -> L2d
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2d
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L34
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2b
            android.content.Context r2 = r5.k     // Catch: java.lang.Throwable -> L2b
            java.io.File r2 = r2.getFilesDir()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = r5.A     // Catch: java.lang.Throwable -> L2b
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L2b
            boolean r0 = r1.exists()     // Catch: java.lang.Throwable -> L2b
            goto L34
        L2b:
            r1 = move-exception
            goto L31
        L2d:
            r0 = move-exception
            r4 = r1
            r1 = r0
            r0 = r4
        L31:
            r1.printStackTrace()
        L34:
            r1 = r0
        L35:
            r5.B = r1
            return
    }

    public static void b(java.lang.Runnable r1) {
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r0.a(r1)
            return
    }

    static boolean b(android.content.Context r7, java.util.List<java.lang.String> r8) {
            r0 = 1
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.pm.PackageManager r2 = r7.getPackageManager()
            java.util.Iterator r8 = r8.iterator()
            r3 = 0
        L12:
            boolean r4 = r8.hasNext()
            if (r4 == 0) goto L4b
            java.lang.Object r4 = r8.next()
            java.lang.String r4 = (java.lang.String) r4
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Throwable -> L3c
            java.lang.Class r6 = java.lang.Class.forName(r4)     // Catch: java.lang.Throwable -> L3c
            r5.<init>(r7, r6)     // Catch: java.lang.Throwable -> L3c
            r6 = 131072(0x20000, float:1.83671E-40)
            java.util.List r5 = r2.queryIntentServices(r5, r6)     // Catch: java.lang.Throwable -> L3c
            int r5 = r5.size()     // Catch: java.lang.Throwable -> L3c
            if (r5 > 0) goto L12
            java.lang.String r0 = ", "
            r1.append(r0)     // Catch: java.lang.Throwable -> L3c
            r1.append(r4)     // Catch: java.lang.Throwable -> L3c
            goto L49
        L3c:
            r0 = move-exception
            java.lang.String r4 = ", error: "
            r1.append(r4)
            java.lang.String r0 = r0.getMessage()
            r1.append(r0)
        L49:
            r0 = r3
            goto L12
        L4b:
            int r7 = r1.length()
            r8 = 2
            if (r7 <= r8) goto L55
            r1.delete(r3, r8)
        L55:
            java.lang.String r7 = "tkay"
            if (r0 == 0) goto L5f
            java.lang.String r8 = "Services : VERIFIED"
            android.util.Log.i(r7, r8)
            goto L79
        L5f:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r2 = "Services : Missing "
            r8.<init>(r2)
            java.lang.String r1 = r1.toString()
            r8.append(r1)
            java.lang.String r1 = " declare in AndroidManifest"
            r8.append(r1)
            java.lang.String r8 = r8.toString()
            android.util.Log.e(r7, r8)
        L79:
            return r0
    }

    static boolean b(java.util.Map<java.lang.String, java.lang.Boolean> r6) {
            r0 = 1
            if (r6 != 0) goto L4
            return r0
        L4:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.util.Set r2 = r6.keySet()
            java.util.Iterator r2 = r2.iterator()
        L11:
            boolean r3 = r2.hasNext()
            r4 = 0
            if (r3 == 0) goto L34
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r5 = r6.get(r3)
            java.lang.Boolean r5 = (java.lang.Boolean) r5
            boolean r5 = r5.booleanValue()
            if (r5 != 0) goto L11
            java.lang.String r0 = ", "
            r1.append(r0)
            r1.append(r3)
            r0 = r4
            goto L11
        L34:
            int r6 = r1.length()
            r2 = 2
            if (r6 <= r2) goto L3e
            r1.delete(r4, r2)
        L3e:
            java.lang.String r6 = "tkay"
            if (r0 == 0) goto L48
            java.lang.String r1 = "Dependence Plugin: VERIFIED"
            android.util.Log.i(r6, r1)
            goto L55
        L48:
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "Dependence Plugin: Missing "
            java.lang.String r1 = r2.concat(r1)
            android.util.Log.e(r6, r1)
        L55:
            return r0
    }

    static com.tkay.core.api.IExHandler c(com.tkay.core.common.b.m r0) {
            com.tkay.core.api.IExHandler r0 = r0.z
            return r0
    }

    static void c(android.content.Context r5) {
            java.lang.String r0 = "com.tkay.network.adx.AdxTYInitManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L43
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L43
            r3 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L17
            java.lang.Object r3 = r1.invoke(r3, r2)     // Catch: java.lang.Throwable -> L17
            goto L33
        L17:
            java.lang.String r1 = "tkay"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            java.lang.String r4 = "Cannot instantiate "
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L43
            r2.append(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = ", please check if SDK is imported"
            r2.append(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L43
            android.util.Log.e(r1, r0)     // Catch: java.lang.Throwable -> L43
        L33:
            if (r3 == 0) goto L43
            boolean r0 = r3 instanceof com.tkay.core.api.TYInitMediation     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L43
            com.tkay.core.api.TYInitMediation r3 = (com.tkay.core.api.TYInitMediation) r3     // Catch: java.lang.Throwable -> L43
            java.util.List r0 = r3.getResourceStatus()     // Catch: java.lang.Throwable -> L43
            r1 = 1
            a(r5, r0, r1)     // Catch: java.lang.Throwable -> L43
        L43:
            return
    }

    static boolean c(android.content.Context r8, java.util.List<java.lang.String> r9) {
            r0 = 1
            if (r9 != 0) goto L4
            return r0
        L4:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            android.content.pm.PackageManager r2 = r8.getPackageManager()
            r3 = 0
            r4 = 0
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Throwable -> L1b
            r5 = 8
            android.content.pm.PackageInfo r3 = r2.getPackageInfo(r8, r5)     // Catch: java.lang.Throwable -> L1b
            r8 = r0
            goto L29
        L1b:
            r8 = move-exception
            java.lang.String r2 = ", error: "
            r1.append(r2)
            java.lang.String r8 = r8.getMessage()
            r1.append(r8)
            r8 = r4
        L29:
            if (r3 != 0) goto L2c
            return r4
        L2c:
            android.content.pm.ProviderInfo[] r2 = r3.providers
            java.util.Iterator r9 = r9.iterator()
        L32:
            boolean r3 = r9.hasNext()
            if (r3 == 0) goto L5e
            java.lang.Object r3 = r9.next()
            java.lang.String r3 = (java.lang.String) r3
            int r5 = r2.length
            r6 = r4
        L40:
            if (r6 >= r5) goto L51
            r7 = r2[r6]
            java.lang.String r7 = r7.name
            boolean r7 = android.text.TextUtils.equals(r7, r3)
            if (r7 == 0) goto L4e
            r5 = r0
            goto L52
        L4e:
            int r6 = r6 + 1
            goto L40
        L51:
            r5 = r4
        L52:
            if (r5 != 0) goto L32
            java.lang.String r8 = ", "
            r1.append(r8)
            r1.append(r3)
            r8 = r4
            goto L32
        L5e:
            int r9 = r1.length()
            r0 = 2
            if (r9 <= r0) goto L68
            r1.delete(r4, r0)
        L68:
            java.lang.String r9 = "tkay"
            if (r8 == 0) goto L72
            java.lang.String r0 = "Providers : VERIFIED"
            android.util.Log.i(r9, r0)
            goto L8c
        L72:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "Providers : Missing "
            r0.<init>(r2)
            java.lang.String r1 = r1.toString()
            r0.append(r1)
            java.lang.String r1 = " declare in AndroidManifest"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.util.Log.e(r9, r0)
        L8c:
            return r8
    }

    private static void d(android.content.Context r5) {
            java.lang.String r0 = "com.tkay.network.adx.AdxTYInitManager"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r1 = "getInstance"
            r2 = 0
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L43
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L43
            r3 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L17
            java.lang.Object r3 = r1.invoke(r3, r2)     // Catch: java.lang.Throwable -> L17
            goto L33
        L17:
            java.lang.String r1 = "tkay"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            java.lang.String r4 = "Cannot instantiate "
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = r0.getName()     // Catch: java.lang.Throwable -> L43
            r2.append(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = ", please check if SDK is imported"
            r2.append(r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L43
            android.util.Log.e(r1, r0)     // Catch: java.lang.Throwable -> L43
        L33:
            if (r3 == 0) goto L43
            boolean r0 = r3 instanceof com.tkay.core.api.TYInitMediation     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L43
            com.tkay.core.api.TYInitMediation r3 = (com.tkay.core.api.TYInitMediation) r3     // Catch: java.lang.Throwable -> L43
            java.util.List r0 = r3.getResourceStatus()     // Catch: java.lang.Throwable -> L43
            r1 = 1
            a(r5, r0, r1)     // Catch: java.lang.Throwable -> L43
        L43:
            return
    }

    public static void d(java.lang.Runnable r3) {
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            r1 = 1000(0x3e8, double:4.94E-321)
            r0.a(r3, r1)
            return
    }

    static boolean d(android.content.Context r7, java.util.List<java.lang.String> r8) {
            r0 = 1
            if (r8 == 0) goto L7e
            int r1 = r8.size()
            if (r1 != 0) goto Lb
            goto L7e
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
            android.content.pm.PackageManager r3 = r7.getPackageManager()     // Catch: java.lang.Throwable -> L55
            java.lang.String r7 = r7.getPackageName()     // Catch: java.lang.Throwable -> L55
            r4 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r7 = r3.getApplicationInfo(r7, r4)     // Catch: java.lang.Throwable -> L55
            int r3 = r8.size()     // Catch: java.lang.Throwable -> L55
            r4 = r2
        L24:
            if (r4 >= r3) goto L49
            java.lang.Object r5 = r8.get(r4)     // Catch: java.lang.Throwable -> L55
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L55
            android.os.Bundle r6 = r7.metaData     // Catch: java.lang.Throwable -> L55
            java.lang.String r6 = r6.getString(r5)     // Catch: java.lang.Throwable -> L55
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L55
            if (r6 == 0) goto L46
            java.lang.String r0 = ", \""
            r1.append(r0)     // Catch: java.lang.Throwable -> L55
            r1.append(r5)     // Catch: java.lang.Throwable -> L55
            java.lang.String r0 = "\""
            r1.append(r0)     // Catch: java.lang.Throwable -> L55
            r0 = r2
        L46:
            int r4 = r4 + 1
            goto L24
        L49:
            int r7 = r1.length()     // Catch: java.lang.Throwable -> L55
            r8 = 2
            if (r7 <= r8) goto L53
            r1.delete(r2, r8)     // Catch: java.lang.Throwable -> L55
        L53:
            r2 = r0
            goto L59
        L55:
            r7 = move-exception
            r7.printStackTrace()
        L59:
            java.lang.String r7 = "tkay"
            if (r2 == 0) goto L63
            java.lang.String r8 = "meta-data: VERIFIED"
            android.util.Log.i(r7, r8)
            goto L7d
        L63:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            java.lang.String r0 = "meta-data: Missing "
            r8.<init>(r0)
            java.lang.String r0 = r1.toString()
            r8.append(r0)
            java.lang.String r0 = " declare in AndroidManifest"
            r8.append(r0)
            java.lang.String r8 = r8.toString()
            android.util.Log.e(r7, r8)
        L7d:
            return r2
        L7e:
            return r0
    }

    static boolean d(com.tkay.core.common.b.m r0) {
            boolean r0 = r0.I
            return r0
    }

    static java.lang.String e(com.tkay.core.common.b.m r0) {
            java.lang.String r0 = r0.l
            return r0
    }

    private void e(boolean r1) {
            r0 = this;
            r0.U = r1
            return
    }

    private static boolean e(android.content.Context r5) {
            r0 = 0
            java.lang.String r1 = "activity"
            java.lang.Object r1 = r5.getSystemService(r1)     // Catch: java.lang.Throwable -> L32
            android.app.ActivityManager r1 = (android.app.ActivityManager) r1     // Catch: java.lang.Throwable -> L32
            java.util.List r1 = r1.getRunningAppProcesses()     // Catch: java.lang.Throwable -> L32
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L32
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L31
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L32
            android.app.ActivityManager$RunningAppProcessInfo r2 = (android.app.ActivityManager.RunningAppProcessInfo) r2     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = r2.processName     // Catch: java.lang.Throwable -> L32
            java.lang.String r4 = r5.getPackageName()     // Catch: java.lang.Throwable -> L32
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L32
            if (r3 == 0) goto L11
            int r5 = r2.importance     // Catch: java.lang.Throwable -> L32
            r1 = 100
            if (r5 != r1) goto L31
            r5 = 1
            return r5
        L31:
            return r0
        L32:
            r5 = move-exception
            r5.printStackTrace()
            return r0
    }

    static boolean e(android.content.Context r11, java.util.List<java.lang.String> r12) {
            r0 = 1
            if (r12 != 0) goto L4
            return r0
        L4:
            int r1 = r12.size()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r3 = 0
            android.content.pm.PackageManager r4 = r11.getPackageManager()     // Catch: java.lang.Throwable -> L71
            java.lang.String r11 = r11.getPackageName()     // Catch: java.lang.Throwable -> L71
            r5 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r11 = r4.getPackageInfo(r11, r5)     // Catch: java.lang.Throwable -> L71
            java.lang.String[] r11 = r11.requestedPermissions     // Catch: java.lang.Throwable -> L71
            java.lang.String r4 = ", "
            if (r11 == 0) goto L59
            r6 = r0
            r5 = r3
        L27:
            if (r5 >= r1) goto L57
            java.lang.Object r7 = r12.get(r5)     // Catch: java.lang.Throwable -> L71
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L71
            int r8 = r11.length     // Catch: java.lang.Throwable -> L71
            r9 = r3
        L31:
            if (r9 >= r8) goto L40
            r10 = r11[r9]     // Catch: java.lang.Throwable -> L71
            boolean r10 = android.text.TextUtils.equals(r7, r10)     // Catch: java.lang.Throwable -> L71
            if (r10 == 0) goto L3d
            r8 = r0
            goto L41
        L3d:
            int r9 = r9 + 1
            goto L31
        L40:
            r8 = r3
        L41:
            if (r8 != 0) goto L54
            int r6 = r2.length()     // Catch: java.lang.Throwable -> L71
            if (r6 != 0) goto L4d
            r2.append(r7)     // Catch: java.lang.Throwable -> L71
            goto L53
        L4d:
            r2.append(r4)     // Catch: java.lang.Throwable -> L71
            r2.append(r7)     // Catch: java.lang.Throwable -> L71
        L53:
            r6 = r3
        L54:
            int r5 = r5 + 1
            goto L27
        L57:
            r3 = r6
            goto L75
        L59:
            r11 = r3
        L5a:
            if (r11 >= r1) goto L75
            java.lang.Object r0 = r12.get(r11)     // Catch: java.lang.Throwable -> L71
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L71
            if (r11 != 0) goto L68
            r2.append(r0)     // Catch: java.lang.Throwable -> L71
            goto L6e
        L68:
            r2.append(r4)     // Catch: java.lang.Throwable -> L71
            r2.append(r0)     // Catch: java.lang.Throwable -> L71
        L6e:
            int r11 = r11 + 1
            goto L5a
        L71:
            r11 = move-exception
            r11.printStackTrace()
        L75:
            java.lang.String r11 = "tkay"
            if (r3 == 0) goto L7f
            java.lang.String r12 = "Permission: VERIFIED"
            android.util.Log.i(r11, r12)
            goto L99
        L7f:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            java.lang.String r0 = "Permission: Missing "
            r12.<init>(r0)
            java.lang.String r0 = r2.toString()
            r12.append(r0)
            java.lang.String r0 = " declare in AndroidManifest"
            r12.append(r0)
            java.lang.String r12 = r12.toString()
            android.util.Log.e(r11, r12)
        L99:
            return r3
    }

    private boolean f(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = com.tkay.core.common.l.d.d(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 1
            if (r1 != 0) goto L14
            java.lang.String r1 = r3.Q
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L14
            return r2
        L14:
            java.lang.String r0 = com.tkay.core.common.l.d.f()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L27
            java.lang.String r1 = r3.Q
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L27
            return r2
        L27:
            com.tkay.core.common.b.m r0 = a()
            com.tkay.core.api.IExHandler r0 = r0.b()
            if (r0 == 0) goto L3a
            java.lang.String r1 = r3.Q
            boolean r4 = r0.checkDebuggerDevice(r4, r1)
            if (r4 == 0) goto L3a
            return r2
        L3a:
            r4 = 0
            return r4
    }

    private void g(android.content.Context r23) {
            r22 = this;
            java.lang.String r0 = ""
            java.lang.String r1 = "playRecord"
            java.lang.String r2 = "tkay_sdk"
            r3 = r22
            long r4 = r3.d
            r6 = 0
            com.tkay.core.common.b.m r8 = a()     // Catch: java.lang.Exception -> La6
            android.content.Context r8 = r8.k     // Catch: java.lang.Exception -> La6
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La6
            r9.<init>()     // Catch: java.lang.Exception -> La6
            com.tkay.core.common.b.m r10 = a()     // Catch: java.lang.Exception -> La6
            java.lang.String r10 = r10.o()     // Catch: java.lang.Exception -> La6
            r9.append(r10)     // Catch: java.lang.Exception -> La6
            r9.append(r1)     // Catch: java.lang.Exception -> La6
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> La6
            java.lang.String r8 = com.tkay.core.common.l.p.b(r8, r2, r9, r0)     // Catch: java.lang.Exception -> La6
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> La6
            if (r9 != 0) goto Lc6
            org.json.JSONObject r9 = new org.json.JSONObject     // Catch: java.lang.Exception -> La6
            r9.<init>(r8)     // Catch: java.lang.Exception -> La6
            java.lang.String r8 = "start_time"
            long r16 = r9.optLong(r8)     // Catch: java.lang.Exception -> La6
            java.lang.String r8 = "end_time"
            long r18 = r9.optLong(r8)     // Catch: java.lang.Exception -> La6
            java.lang.String r8 = "psid"
            java.lang.String r15 = r9.optString(r8)     // Catch: java.lang.Exception -> La6
            java.lang.String r8 = "launch_mode"
            int r8 = r9.optInt(r8)     // Catch: java.lang.Exception -> La6
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            r20 = 1000(0x3e8, double:4.94E-321)
            if (r9 == 0) goto L73
            r9 = 1
            if (r8 != r9) goto L5b
            r8 = 4
            goto L5c
        L5b:
            r8 = 2
        L5c:
            r10 = r8
            r11 = r16
            r13 = r18
            com.tkay.core.common.k.c.a(r10, r11, r13, r15)     // Catch: java.lang.Exception -> La6
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La6
            java.lang.String r9 = "Create new psid, SDKContext.init to send playTime:"
            r8.<init>(r9)     // Catch: java.lang.Exception -> La6
            long r18 = r18 - r16
            long r9 = r18 / r20
            r8.append(r9)     // Catch: java.lang.Exception -> La6
            goto L83
        L73:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La4
            java.lang.String r5 = "Psid is old, use pervioud statime,close before:"
            r4.<init>(r5)     // Catch: java.lang.Exception -> La4
            long r18 = r18 - r16
            long r8 = r18 / r20
            r4.append(r8)     // Catch: java.lang.Exception -> La4
            r4 = r16
        L83:
            com.tkay.core.common.b.m r8 = a()     // Catch: java.lang.Exception -> La6
            android.content.Context r8 = r8.k     // Catch: java.lang.Exception -> La6
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La6
            r9.<init>()     // Catch: java.lang.Exception -> La6
            com.tkay.core.common.b.m r10 = a()     // Catch: java.lang.Exception -> La6
            java.lang.String r10 = r10.o()     // Catch: java.lang.Exception -> La6
            r9.append(r10)     // Catch: java.lang.Exception -> La6
            r9.append(r1)     // Catch: java.lang.Exception -> La6
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> La6
            com.tkay.core.common.l.p.a(r8, r2, r9, r0)     // Catch: java.lang.Exception -> La6
            goto Lc6
        La4:
            r4 = r16
        La6:
            com.tkay.core.common.b.m r8 = a()
            android.content.Context r8 = r8.k
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            com.tkay.core.common.b.m r10 = a()
            java.lang.String r10 = r10.o()
            r9.append(r10)
            r9.append(r1)
            java.lang.String r1 = r9.toString()
            com.tkay.core.common.l.p.a(r8, r2, r1, r0)
        Lc6:
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto Ldb
            java.lang.Long r0 = java.lang.Long.valueOf(r6)
            java.lang.String r1 = "SPU_INIT_TIME_KEY"
            r8 = r23
            java.lang.Long r0 = com.tkay.core.common.l.p.a(r8, r2, r1, r0)
            long r4 = r0.longValue()
            goto Ldd
        Ldb:
            r8 = r23
        Ldd:
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto Le5
            long r4 = java.lang.System.currentTimeMillis()
        Le5:
            android.content.Context r0 = r23.getApplicationContext()
            android.app.Application r0 = (android.app.Application) r0
            com.tkay.core.common.b.d r1 = new com.tkay.core.common.b.d
            r1.<init>(r4)
            r0.registerActivityLifecycleCallbacks(r1)
            return
    }

    private static void h(android.content.Context r1) {
            com.tkay.core.common.e.a r0 = com.tkay.core.common.e.a.a()
            r0.a(r1)
            return
    }

    static boolean h(java.lang.String r1) {
            java.lang.String r0 = "tkay"
            java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> Lc
            java.lang.String r1 = "SDK: VERIFIED"
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> Lc
            r1 = 1
            return r1
        Lc:
            java.lang.String r1 = "SDK: NOT VERIFIED"
            android.util.Log.i(r0, r1)
            r1 = 0
            return r1
    }

    public static void n(java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            java.lang.String r1 = "tkay"
            if (r0 == 0) goto Le
            java.lang.String r6 = "AdSourceId is empty"
            android.util.Log.e(r1, r6)
            return
        Le:
            long r2 = java.lang.Long.parseLong(r6)     // Catch: java.lang.Exception -> L1e
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L1d
            java.lang.String r0 = "AdSourceId can't set 0"
            android.util.Log.e(r1, r0)     // Catch: java.lang.Exception -> L1e
        L1d:
            return
        L1e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "AdSourceId '"
            r0.<init>(r2)
            r0.append(r6)
            java.lang.String r6 = "' is not compliant"
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            android.util.Log.e(r1, r6)
            return
    }

    private java.util.Map<java.lang.String, java.lang.Object> q(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.Map<java.lang.String, java.lang.Object>> r0 = r1.q
            if (r0 == 0) goto L13
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L13
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.Map<java.lang.String, java.lang.Object>> r0 = r1.q
            java.lang.Object r2 = r0.get(r2)
            java.util.Map r2 = (java.util.Map) r2
            return r2
        L13:
            r2 = 0
            return r2
    }

    private void r(java.lang.String r4) {
            r3 = this;
            r3.l = r4
            android.content.Context r0 = r3.k
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "tkay_appid"
            com.tkay.core.common.l.p.a(r0, r1, r2, r4)
            return
    }

    private void s(java.lang.String r4) {
            r3 = this;
            r3.m = r4
            android.content.Context r0 = r3.k
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "tkay_appkey"
            com.tkay.core.common.l.p.a(r0, r1, r2, r4)
            return
    }

    @java.lang.Deprecated
    private void t(java.lang.String r1) {
            r0 = this;
            r0.Q = r1
            return
    }

    private synchronized java.lang.String u(java.lang.String r9) {
            r8 = this;
            monitor-enter(r8)
            org.json.JSONObject r0 = r8.u     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = r0.optString(r9)     // Catch: java.lang.Throwable -> La1
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La1
            if (r1 != 0) goto Lf
            monitor-exit(r8)
            return r0
        Lf:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r0.<init>()     // Catch: java.lang.Throwable -> La1
            r0.append(r9)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = ": sessionid is empty."
            r0.append(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = r8.w()     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = ""
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La1
            if (r2 == 0) goto L59
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r0.<init>()     // Catch: java.lang.Throwable -> La1
            android.content.Context r1 = r8.k     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = com.tkay.core.common.l.d.d(r1)     // Catch: java.lang.Throwable -> La1
            r0.append(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = com.tkay.core.common.l.d.f()     // Catch: java.lang.Throwable -> La1
            r0.append(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r1.<init>()     // Catch: java.lang.Throwable -> La1
            java.util.Random r2 = new java.util.Random     // Catch: java.lang.Throwable -> La1
            r2.<init>()     // Catch: java.lang.Throwable -> La1
            r3 = 10000000(0x989680, float:1.4012985E-38)
            int r2 = r2.nextInt(r3)     // Catch: java.lang.Throwable -> La1
            r1.append(r2)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> La1
        L59:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> La1
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r4.<init>()     // Catch: java.lang.Throwable -> La1
            r4.append(r0)     // Catch: java.lang.Throwable -> La1
            r4.append(r9)     // Catch: java.lang.Throwable -> La1
            r4.append(r1)     // Catch: java.lang.Throwable -> La1
            r4.append(r2)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = com.tkay.core.common.l.f.a(r0)     // Catch: java.lang.Throwable -> La1
            org.json.JSONObject r4 = r8.u     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> La1
            r4.put(r9, r0)     // Catch: java.lang.Exception -> L7b java.lang.Throwable -> La1
        L7b:
            android.content.Context r4 = r8.k     // Catch: java.lang.Throwable -> La1
            java.lang.String r5 = "tkay_sdk"
            java.lang.String r6 = "SPU_SESSIONID_KEY"
            org.json.JSONObject r7 = r8.u     // Catch: java.lang.Throwable -> La1
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> La1
            com.tkay.core.common.l.p.a(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> La1
            java.lang.String r4 = "2"
            java.lang.String r5 = r8.w()     // Catch: java.lang.Throwable -> La1
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> La1
            if (r5 == 0) goto L97
            goto L98
        L97:
            r1 = 0
        L98:
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> La1
            com.tkay.core.common.k.c.a(r9, r4, r1, r2)     // Catch: java.lang.Throwable -> La1
            monitor-exit(r8)
            return r0
        La1:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final com.tkay.core.common.g.c A() {
            r1 = this;
            com.tkay.core.common.g.c r0 = r1.K
            if (r0 != 0) goto Lb
            com.tkay.core.common.i.d r0 = new com.tkay.core.common.i.d
            r0.<init>()
            r1.K = r0
        Lb:
            com.tkay.core.common.g.c r0 = r1.K
            return r0
    }

    public final boolean B() {
            r1 = this;
            boolean r0 = r1.U
            return r0
    }

    public final boolean C() {
            r1 = this;
            boolean r0 = r1.V
            return r0
    }

    public final android.content.Context D() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.e
            if (r0 == 0) goto L13
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L13
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.e
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            return r0
        L13:
            android.content.Context r0 = r1.k
            return r0
    }

    public final android.app.Activity E() {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.e
            if (r0 == 0) goto L13
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L13
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.e
            java.lang.Object r0 = r0.get()
            android.app.Activity r0 = (android.app.Activity) r0
            return r0
        L13:
            r0 = 0
            return r0
    }

    public final java.lang.String F() {
            r1 = this;
            java.lang.String r0 = r1.X
            return r0
    }

    public final boolean G() {
            r1 = this;
            java.lang.Boolean r0 = r1.c
            if (r0 == 0) goto L9
            boolean r0 = r0.booleanValue()
            return r0
        L9:
            java.lang.String r0 = "com.reyun.mobdna.MobDNA"
            java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L13
            java.lang.Boolean r0 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L13
            r1.c = r0     // Catch: java.lang.Throwable -> L13
            goto L17
        L13:
            java.lang.Boolean r0 = java.lang.Boolean.FALSE
            r1.c = r0
        L17:
            java.lang.Boolean r0 = r1.c
            boolean r0 = r0.booleanValue()
            return r0
    }

    public final boolean H() {
            r1 = this;
            boolean r0 = r1.J
            return r0
    }

    public final com.tkay.core.api.ATPrivacyConfig I() {
            r1 = this;
            com.tkay.core.api.ATPrivacyConfig r0 = r1.Y
            return r0
    }

    public final int J() {
            r1 = this;
            int r0 = r1.Z
            return r0
    }

    public final com.tkay.core.common.f.al K() {
            r2 = this;
            com.tkay.core.common.f.al r0 = r2.aa
            if (r0 != 0) goto Lb
            com.tkay.core.common.f.al r0 = new com.tkay.core.common.f.al
            r0.<init>()
            r2.aa = r0
        Lb:
            com.tkay.core.common.f.al r0 = r2.aa     // Catch: java.lang.Throwable -> L39
            com.tkay.core.common.b.m r1 = a()     // Catch: java.lang.Throwable -> L39
            android.content.Context r1 = r1.k     // Catch: java.lang.Throwable -> L39
            int r1 = com.tkay.core.common.l.d.s(r1)     // Catch: java.lang.Throwable -> L39
            r0.a(r1)     // Catch: java.lang.Throwable -> L39
            com.tkay.core.common.f.al r0 = r2.aa     // Catch: java.lang.Throwable -> L39
            int r1 = com.tkay.core.common.l.d.k()     // Catch: java.lang.Throwable -> L39
            r0.b(r1)     // Catch: java.lang.Throwable -> L39
            com.tkay.core.common.f.al r0 = r2.aa     // Catch: java.lang.Throwable -> L39
            int r1 = com.tkay.core.common.l.d.m()     // Catch: java.lang.Throwable -> L39
            r0.c(r1)     // Catch: java.lang.Throwable -> L39
            com.tkay.core.common.f.al r0 = r2.aa     // Catch: java.lang.Throwable -> L39
            java.lang.String r1 = com.tkay.core.common.l.d.l()     // Catch: java.lang.Throwable -> L39
            int r1 = com.tkay.core.common.l.d.b(r1)     // Catch: java.lang.Throwable -> L39
            r0.d(r1)     // Catch: java.lang.Throwable -> L39
        L39:
            com.tkay.core.common.f.al r0 = r2.aa
            return r0
    }

    public final void L() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.ab = r0
            return
    }

    protected final synchronized long a(android.content.Context r12, java.lang.String r13, int r14) {
            r11 = this;
            monitor-enter(r11)
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r12)     // Catch: java.lang.Throwable -> L10f
            com.tkay.core.c.a r0 = r0.b(r13)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "SPU_PSID_KEY"
            java.lang.String r3 = ""
            java.lang.String r1 = com.tkay.core.common.l.p.b(r12, r1, r2, r3)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r2 = "tkay_sdk"
            java.lang.String r3 = "SPU_SESSIONID_KEY"
            java.lang.String r4 = ""
            java.lang.String r2 = com.tkay.core.common.l.p.b(r12, r2, r3, r4)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r3 = "tkay_sdk"
            java.lang.String r4 = "SPU_INIT_TIME_KEY"
            r5 = 0
            java.lang.Long r7 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L10f
            java.lang.Long r3 = com.tkay.core.common.l.p.a(r12, r3, r4, r7)     // Catch: java.lang.Throwable -> L10f
            long r3 = r3.longValue()     // Catch: java.lang.Throwable -> L10f
            long r7 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L10f
            long r9 = r7 - r3
            int r9 = (r9 > r5 ? 1 : (r9 == r5 ? 0 : -1))
            if (r9 >= 0) goto L3a
            r3 = r5
        L3a:
            long r3 = r7 - r3
            if (r14 != 0) goto L43
            long r9 = r0.N()     // Catch: java.lang.Throwable -> L10f
            goto L48
        L43:
            int r9 = r0.B()     // Catch: java.lang.Throwable -> L10f
            long r9 = (long) r9     // Catch: java.lang.Throwable -> L10f
        L48:
            int r3 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r3 > 0) goto L77
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = "psid updataTime<="
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L10f
            long r13 = r0.N()     // Catch: java.lang.Throwable -> L10f
            r12.append(r13)     // Catch: java.lang.Throwable -> L10f
            r11.t = r1     // Catch: java.lang.Throwable -> L10f
            boolean r12 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L10f
            if (r12 != 0) goto L69
            org.json.JSONObject r12 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10f
            r12.<init>(r2)     // Catch: java.lang.Throwable -> L10f
            r11.u = r12     // Catch: java.lang.Throwable -> L10f
        L69:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = "psid :"
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = r11.t     // Catch: java.lang.Throwable -> L10f
            r12.append(r13)     // Catch: java.lang.Throwable -> L10f
            monitor-exit(r11)
            return r5
        L77:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            java.lang.String r2 = "psid updataTime>"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L10f
            long r2 = r0.N()     // Catch: java.lang.Throwable -> L10f
            r1.append(r2)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r0 = r11.w()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r1 = ""
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L10f
            if (r2 == 0) goto Lb8
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r0.<init>()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r1 = com.tkay.core.common.l.d.d(r12)     // Catch: java.lang.Throwable -> L10f
            r0.append(r1)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r1 = com.tkay.core.common.l.d.f()     // Catch: java.lang.Throwable -> L10f
            r0.append(r1)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L10f
            java.util.Random r1 = new java.util.Random     // Catch: java.lang.Throwable -> L10f
            r1.<init>()     // Catch: java.lang.Throwable -> L10f
            r2 = 10000000(0x989680, float:1.4012985E-38)
            int r1 = r1.nextInt(r2)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L10f
        Lb8:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            r2.<init>()     // Catch: java.lang.Throwable -> L10f
            r2.append(r0)     // Catch: java.lang.Throwable -> L10f
            r2.append(r13)     // Catch: java.lang.Throwable -> L10f
            r2.append(r1)     // Catch: java.lang.Throwable -> L10f
            r2.append(r7)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = r2.toString()     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = com.tkay.core.common.l.f.a(r13)     // Catch: java.lang.Throwable -> L10f
            r11.t = r13     // Catch: java.lang.Throwable -> L10f
            org.json.JSONObject r13 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10f
            r13.<init>()     // Catch: java.lang.Throwable -> L10f
            r11.u = r13     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = "tkay_sdk"
            java.lang.String r0 = "SPU_PSID_KEY"
            java.lang.String r2 = r11.t     // Catch: java.lang.Throwable -> L10f
            com.tkay.core.common.l.p.a(r12, r13, r0, r2)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = "tkay_sdk"
            java.lang.String r0 = "SPU_SESSIONID_KEY"
            java.lang.String r2 = ""
            com.tkay.core.common.l.p.a(r12, r13, r0, r2)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = "tkay_sdk"
            java.lang.String r0 = "SPU_INIT_TIME_KEY"
            com.tkay.core.common.l.p.a(r12, r13, r0, r7)     // Catch: java.lang.Throwable -> L10f
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = "psid :"
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L10f
            java.lang.String r13 = r11.t     // Catch: java.lang.Throwable -> L10f
            r12.append(r13)     // Catch: java.lang.Throwable -> L10f
            r12 = 0
            java.lang.String r13 = "1"
            java.lang.String r0 = java.lang.String.valueOf(r7)     // Catch: java.lang.Throwable -> L10f
            com.tkay.core.common.k.c.a(r12, r13, r1, r0)     // Catch: java.lang.Throwable -> L10f
            if (r14 != 0) goto L10d
            r11.d = r7     // Catch: java.lang.Throwable -> L10f
        L10d:
            monitor-exit(r11)
            return r7
        L10f:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final void a(int r2) {
            r1 = this;
            r0 = 2
            if (r2 != r0) goto L6
            r1.T = r0
            return
        L6:
            r2 = 1
            r1.T = r2
            return
    }

    public final void a(android.app.Activity r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.app.Activity> r0 = r1.e
            if (r0 == 0) goto La
            java.lang.Object r0 = r0.get()
            if (r0 != 0) goto L11
        La:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.e = r0
        L11:
            return
    }

    public final void a(android.content.Context r2) {
            r1 = this;
            if (r2 != 0) goto La
            java.lang.String r2 = "SDK.init"
            java.lang.String r0 = "TYSDK.setContext() is null!"
            android.util.Log.w(r2, r0)
            return
        La:
            r1.k = r2
            return
    }

    public final void a(android.content.Context r3, com.tkay.core.api.DeviceInfoCallback r4) {
            r2 = this;
            boolean r0 = r2.I
            if (r0 != 0) goto L11
            java.lang.String r3 = "You should init SDK first."
            java.lang.String r0 = "tkay"
            android.util.Log.e(r0, r3)
            if (r4 == 0) goto L10
            r4.deviceInfo(r3)
        L10:
            return
        L11:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.m$3 r1 = new com.tkay.core.common.b.m$3
            r1.<init>(r2, r3, r4)
            r0.a(r1)
            return
    }

    public final void a(android.content.Context r4, java.lang.String r5, com.tkay.core.api.ATDebuggerConfig r6) {
            r3 = this;
            java.lang.String r0 = "SDK.init"
            if (r4 != 0) goto L10
            boolean r4 = r3.z()
            if (r4 == 0) goto Lf
            java.lang.String r4 = "setDebuggerConfig fail, because context is null."
            android.util.Log.e(r0, r4)
        Lf:
            return
        L10:
            com.tkay.core.common.b.m r1 = a()
            android.content.Context r1 = r1.k
            if (r1 != 0) goto L23
            com.tkay.core.common.b.m r1 = a()
            android.content.Context r2 = r4.getApplicationContext()
            r1.a(r2)
        L23:
            r3.Q = r5
            r3.R = r6
            java.lang.String r5 = com.tkay.core.common.l.d.d(r4)
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            r2 = 1
            if (r6 != 0) goto L3c
            java.lang.String r6 = r3.Q
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L3c
            goto L63
        L3c:
            java.lang.String r5 = com.tkay.core.common.l.d.f()
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L4f
            java.lang.String r6 = r3.Q
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L4f
            goto L63
        L4f:
            com.tkay.core.common.b.m r5 = a()
            com.tkay.core.api.IExHandler r5 = r5.b()
            if (r5 == 0) goto L62
            java.lang.String r6 = r3.Q
            boolean r4 = r5.checkDebuggerDevice(r4, r6)
            if (r4 == 0) goto L62
            goto L63
        L62:
            r2 = r1
        L63:
            r3.S = r2
            java.lang.String r4 = r3.Q
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L7b
            boolean r4 = r3.z()
            if (r4 == 0) goto L78
            java.lang.String r4 = "Setting Debugger's device fail, because deviceId is empty."
            android.util.Log.e(r0, r4)
        L78:
            r3.S = r1
            return
        L7b:
            boolean r4 = r3.S
            if (r4 == 0) goto L9a
            boolean r4 = r3.z()
            if (r4 == 0) goto L8a
            java.lang.String r4 = "Setting Debugger's device success."
            android.util.Log.i(r0, r4)
        L8a:
            com.tkay.core.api.ATDebuggerConfig r4 = r3.R
            if (r4 == 0) goto L99
            boolean r4 = r3.z()
            if (r4 == 0) goto L99
            java.lang.String r4 = "Debugger config is in effect now."
            android.util.Log.i(r0, r4)
        L99:
            return
        L9a:
            boolean r4 = r3.z()
            if (r4 == 0) goto La5
            java.lang.String r4 = "The incoming device id does not match the current device id, and the debugger mode cannot take effect."
            android.util.Log.e(r0, r4)
        La5:
            return
    }

    public final void a(android.content.Context r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.m$2 r1 = new com.tkay.core.common.b.m$2
            r1.<init>(r2, r3, r4, r5)
            r0.a(r1)
            return
    }

    public final synchronized void a(android.content.Context r9, java.lang.String r10, java.lang.String r11, com.tkay.core.api.TYNetworkConfig r12) {
            r8 = this;
            monitor-enter(r8)
            if (r9 != 0) goto L5
            monitor-exit(r8)
            return
        L5:
            android.content.Context r0 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> L14b
            r8.k = r0     // Catch: java.lang.Throwable -> L14b
            boolean r0 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L14b
            if (r0 != 0) goto L149
            boolean r0 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Throwable -> L14b
            if (r0 == 0) goto L19
            goto L149
        L19:
            boolean r0 = r8.I     // Catch: java.lang.Throwable -> L14b
            if (r0 == 0) goto L1f
            monitor-exit(r8)
            return
        L1f:
            r0 = 1
            r8.I = r0     // Catch: java.lang.Throwable -> L14b
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            java.lang.String r3 = "tkay_sdk"
            java.lang.String r4 = "tkay_init_time"
            r5 = 0
            java.lang.Long r7 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            java.lang.Long r3 = com.tkay.core.common.l.p.a(r9, r3, r4, r7)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            long r3 = r3.longValue()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r8.D = r3     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 != 0) goto L47
            r8.D = r1     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            java.lang.String r3 = "tkay_sdk"
            java.lang.String r4 = "tkay_init_time"
            com.tkay.core.common.l.p.a(r9, r3, r4, r1)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
        L47:
            long r1 = a(r1)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            long r3 = r8.D     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            long r3 = a(r3)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            long r1 = r1 - r3
            r3 = 86400000(0x5265c00, double:4.2687272E-316)
            long r1 = r1 / r3
            r3 = 1
            long r1 = r1 + r3
            r8.E = r1     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r8.d = r5     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.Context r1 = r9.getApplicationContext()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.a.a r1 = com.tkay.core.a.a.a(r1)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r1.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "r"
            int r0 = com.tkay.core.common.l.p.b(r9, r1, r2, r0)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r8.Z = r0     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.Context r0 = r9.getApplicationContext()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r8.a(r0)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r8.l = r10     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.Context r1 = r8.k     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            java.lang.String r2 = "tkay_sdk"
            java.lang.String r3 = "tkay_appid"
            com.tkay.core.common.l.p.a(r1, r2, r3, r10)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r8.m = r11     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.Context r1 = r8.k     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            java.lang.String r2 = "tkay_sdk"
            java.lang.String r3 = "tkay_appkey"
            com.tkay.core.common.l.p.a(r1, r2, r3, r11)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            boolean r1 = com.tkay.core.common.l.h.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r8.U = r1     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.e.a r1 = com.tkay.core.common.e.a.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r1.a(r9)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.BroadcastReceiver r1 = r8.v     // Catch: java.lang.Throwable -> Lb5
            if (r1 == 0) goto Lb2
            android.content.Context r1 = r8.k     // Catch: java.lang.Throwable -> Lb5
            android.content.BroadcastReceiver r2 = r8.v     // Catch: java.lang.Throwable -> Lb5
            r1.unregisterReceiver(r2)     // Catch: java.lang.Throwable -> Lb5
            android.content.Context r1 = r8.k     // Catch: java.lang.Throwable -> Lb5
            com.tkay.core.common.b.j r1 = com.tkay.core.common.b.j.a(r1)     // Catch: java.lang.Throwable -> Lb5
            android.content.BroadcastReceiver r2 = r8.v     // Catch: java.lang.Throwable -> Lb5
            r1.a(r2)     // Catch: java.lang.Throwable -> Lb5
        Lb2:
            r1 = 0
            r8.v = r1     // Catch: java.lang.Throwable -> Lb5
        Lb5:
            com.tkay.core.common.b.m$10 r1 = new com.tkay.core.common.b.m$10     // Catch: java.lang.Throwable -> Ldd
            r1.<init>(r8)     // Catch: java.lang.Throwable -> Ldd
            r8.v = r1     // Catch: java.lang.Throwable -> Ldd
            android.content.IntentFilter r1 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> Ldd
            r1.<init>()     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "android.net.conn.CONNECTIVITY_CHANGE"
            r1.addAction(r2)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = "tkay_log_agent"
            r1.addAction(r2)     // Catch: java.lang.Throwable -> Ldd
            android.content.Context r2 = r8.k     // Catch: java.lang.Throwable -> Ldd
            android.content.BroadcastReceiver r3 = r8.v     // Catch: java.lang.Throwable -> Ldd
            r2.registerReceiver(r3, r1)     // Catch: java.lang.Throwable -> Ldd
            android.content.Context r2 = r8.k     // Catch: java.lang.Throwable -> Ldd
            com.tkay.core.common.b.j r2 = com.tkay.core.common.b.j.a(r2)     // Catch: java.lang.Throwable -> Ldd
            android.content.BroadcastReceiver r3 = r8.v     // Catch: java.lang.Throwable -> Ldd
            r2.a(r3, r1)     // Catch: java.lang.Throwable -> Ldd
        Ldd:
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.b.m$6 r2 = new com.tkay.core.common.b.m$6     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r2.<init>(r8, r0, r10, r9)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r1.a(r2)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.Context r1 = r8.k     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            boolean r1 = e(r1)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.Context r2 = r8.k     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.app.Application r2 = (android.app.Application) r2     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.b.e r3 = new com.tkay.core.common.b.e     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r3.<init>(r1)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r2.registerActivityLifecycleCallbacks(r3)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.b.m$7 r1 = new com.tkay.core.common.b.m$7     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r1.<init>(r8, r0)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r2 = 5000(0x1388, double:2.4703E-320)
            r8.a(r1, r2)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.b.m$1 r2 = new com.tkay.core.common.b.m$1     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r2.<init>(r8)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r1.a(r2)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.p r1 = com.tkay.core.common.p.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.Context r2 = r8.k     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r1.a(r2)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.b.m$8 r2 = new com.tkay.core.common.b.m$8     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r2.<init>(r8, r9, r0)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r1.a(r2)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.b.m$9 r1 = new com.tkay.core.common.b.m$9     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r1.<init>(r8, r12)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r0.a(r1)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            android.content.Context r12 = r9.getApplicationContext()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r8.a(r12, r10, r11)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.l.b.a r11 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            com.tkay.core.common.b.m$11 r12 = new com.tkay.core.common.b.m$11     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r12.<init>(r8, r9, r10)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            r11.a(r12)     // Catch: java.lang.Exception -> L147 java.lang.Throwable -> L14b
            monitor-exit(r8)
            return
        L147:
            monitor-exit(r8)
            return
        L149:
            monitor-exit(r8)
            return
        L14b:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final void a(android.content.Context r11, java.lang.String r12, java.util.Map<java.lang.String, java.lang.Object> r13) {
            r10 = this;
            boolean r0 = r10.z()
            java.lang.String r1 = "tkay"
            if (r0 == 0) goto L49
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "Requesting placement("
            r0.<init>(r2)
            r0.append(r12)
            java.lang.String r2 = ") setting Info,please wait a moment."
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            android.util.Log.i(r1, r0)
            com.tkay.core.common.h.l r0 = new com.tkay.core.common.h.l
            com.tkay.core.common.b.m r1 = a()
            java.lang.String r4 = r1.o()
            com.tkay.core.common.b.m r1 = a()
            java.lang.String r5 = r1.p()
            java.util.HashMap r9 = new java.util.HashMap
            r1 = 1
            r9.<init>(r1)
            java.lang.String r7 = ""
            r2 = r0
            r3 = r11
            r6 = r12
            r8 = r13
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            r11 = 0
            com.tkay.core.common.b.m$13 r13 = new com.tkay.core.common.b.m$13
            r13.<init>(r10, r12)
            r0.a(r11, r13)
            return
        L49:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r13 = "********************************** Get Splash Config Start("
            r11.<init>(r13)
            r11.append(r12)
            java.lang.String r13 = ") *************************************"
            r11.append(r13)
            java.lang.String r11 = r11.toString()
            android.util.Log.i(r1, r11)
            java.lang.String r11 = "Only use in debug mode!"
            android.util.Log.i(r1, r11)
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            java.lang.String r0 = "********************************** Get Splash Config End("
            r11.<init>(r0)
            r11.append(r12)
            r11.append(r13)
            java.lang.String r11 = r11.toString()
            android.util.Log.i(r1, r11)
            return
    }

    public final synchronized void a(android.location.Location r1) {
            r0 = this;
            monitor-enter(r0)
            r0.L = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final void a(com.tkay.core.api.ATPrivacyConfig r1) {
            r0 = this;
            r0.Y = r1
            return
    }

    public final void a(java.lang.Runnable r3) {
            r2 = this;
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Le
            r3.run()
            return
        Le:
            android.os.Handler r0 = r2.n
            r0.post(r3)
            return
    }

    public final void a(java.lang.Runnable r3, long r4) {
            r2 = this;
            r0 = 0
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 > 0) goto L14
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto L14
            r3.run()
            return
        L14:
            android.os.Handler r0 = r2.n
            r0.postDelayed(r3, r4)
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public final synchronized void a(java.lang.String r2, com.tkay.core.api.TYCustomAdapterConfig r3) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L9
            monitor-exit(r1)
            return
        L9:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.TYCustomAdapterConfig> r0 = r1.r     // Catch: java.lang.Throwable -> L24
            if (r0 != 0) goto L14
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L24
            r0.<init>()     // Catch: java.lang.Throwable -> L24
            r1.r = r0     // Catch: java.lang.Throwable -> L24
        L14:
            if (r3 != 0) goto L1d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.TYCustomAdapterConfig> r3 = r1.r     // Catch: java.lang.Throwable -> L24
            r3.remove(r2)     // Catch: java.lang.Throwable -> L24
            monitor-exit(r1)
            return
        L1d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.TYCustomAdapterConfig> r0 = r1.r     // Catch: java.lang.Throwable -> L24
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L24
            monitor-exit(r1)
            return
        L24:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void a(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.util.Map<java.lang.String, java.lang.Object> r12) {
            r8 = this;
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.m$4 r7 = new com.tkay.core.common.b.m$4
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r11
            r5 = r10
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
            return
    }

    public final void a(java.lang.String r2, java.util.List<java.lang.String> r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r1.P
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r2, java.util.Map<java.lang.String, java.lang.Object> r3) {
            r1 = this;
            if (r3 == 0) goto L7
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.Map<java.lang.String, java.lang.Object>> r0 = r1.q
            r0.put(r2, r3)
        L7:
            return
    }

    public final void a(java.lang.String r5, java.util.Map<java.lang.String, java.lang.Object> r6, java.lang.String... r7) {
            r4 = this;
            java.lang.String r0 = "tkay_tracking_info"
            if (r6 == 0) goto L59
            java.lang.String r1 = "tkay_local"
            boolean r1 = r6.containsKey(r1)
            if (r1 == 0) goto Ld
            goto L59
        Ld:
            r1 = 0
            java.lang.Object r2 = r6.get(r0)     // Catch: java.lang.Throwable -> L15
            com.tkay.core.common.f.d r2 = (com.tkay.core.common.f.d) r2     // Catch: java.lang.Throwable -> L15
            goto L16
        L15:
            r2 = r1
        L16:
            r6.remove(r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r6)
            java.lang.String r6 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "Mismatched initialization parameters! server params: ["
            r0.<init>(r3)
            r0.append(r5)
            java.lang.String r3 = "], "
            r0.append(r3)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r3 = "tkay"
            android.util.Log.e(r3, r0)
            android.content.Context r0 = r4.k
            java.lang.String r3 = "tkay_network_init_data"
            com.tkay.core.common.l.p.a(r0, r3, r5, r6)
            if (r2 == 0) goto L59
            if (r7 == 0) goto L59
            r5 = 0
            r5 = r7[r5]     // Catch: java.lang.Throwable -> L55
            int r6 = r7.length     // Catch: java.lang.Throwable -> L55
            r0 = 1
            if (r6 <= r0) goto L51
            r1 = r7[r0]     // Catch: java.lang.Throwable -> L55
        L51:
            com.tkay.core.common.k.c.a(r2, r5, r1)     // Catch: java.lang.Throwable -> L55
            goto L59
        L55:
            r5 = move-exception
            r5.printStackTrace()
        L59:
            return
    }

    public final void a(java.util.List<java.lang.String> r2) {
            r1 = this;
            r1.O = r2     // Catch: java.lang.Exception -> L15
            if (r2 == 0) goto L12
            boolean r0 = r2.isEmpty()     // Catch: java.lang.Exception -> L15
            if (r0 != 0) goto L12
            org.json.JSONArray r0 = new org.json.JSONArray     // Catch: java.lang.Exception -> L15
            r0.<init>(r2)     // Catch: java.lang.Exception -> L15
            r1.N = r0     // Catch: java.lang.Exception -> L15
            return
        L12:
            r2 = 0
            r1.N = r2     // Catch: java.lang.Exception -> L15
        L15:
            return
    }

    public final void a(java.util.Map<java.lang.String, java.lang.Object> r6) {
            r5 = this;
            r0 = 0
            java.lang.String r1 = ""
            java.lang.String r2 = "channel"
            if (r6 == 0) goto L26
            boolean r3 = r6.containsKey(r2)
            if (r3 == 0) goto L26
            java.lang.Object r3 = r6.get(r2)
            if (r3 == 0) goto L18
            java.lang.String r3 = r3.toString()
            goto L19
        L18:
            r3 = r1
        L19:
            r5.F = r3
            boolean r3 = com.tkay.core.common.l.g.a(r3)
            if (r3 != 0) goto L26
            r5.F = r0
            r6.remove(r2)
        L26:
            java.lang.String r3 = "sub_channel"
            if (r6 == 0) goto L47
            boolean r4 = r6.containsKey(r3)
            if (r4 == 0) goto L47
            java.lang.Object r4 = r6.get(r3)
            if (r4 == 0) goto L3a
            java.lang.String r1 = r4.toString()
        L3a:
            r5.G = r1
            boolean r1 = com.tkay.core.common.l.g.b(r1)
            if (r1 != 0) goto L47
            r5.G = r0
            r6.remove(r3)
        L47:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r5.p
            r0.clear()
            if (r6 == 0) goto L53
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r5.p
            r0.putAll(r6)
        L53:
            java.lang.String r6 = r5.F
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L62
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r6 = r5.p
            java.lang.String r0 = r5.F
            r6.put(r2, r0)
        L62:
            java.lang.String r6 = r5.G
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            if (r6 != 0) goto L71
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r6 = r5.p
            java.lang.String r0 = r5.G
            r6.put(r3, r0)
        L71:
            return
    }

    public final synchronized void a(boolean r1) {
            r0 = this;
            monitor-enter(r0)
            if (r1 == 0) goto L6
            java.lang.String r1 = "1"
            goto L8
        L6:
            java.lang.String r1 = "2"
        L8:
            r0.M = r1     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r0)
            return
        Lc:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final synchronized void a(java.lang.String... r6) {
            r5 = this;
            monitor-enter(r5)
            if (r6 == 0) goto L1c
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L21
            r0.<init>()     // Catch: java.lang.Throwable -> L21
            r5.s = r0     // Catch: java.lang.Throwable -> L21
            int r0 = r6.length     // Catch: java.lang.Throwable -> L21
            r1 = 0
        Lc:
            if (r1 >= r0) goto L1a
            r2 = r6[r1]     // Catch: java.lang.Throwable -> L21
            java.util.Map<java.lang.String, java.lang.Boolean> r3 = r5.s     // Catch: java.lang.Throwable -> L21
            java.lang.Boolean r4 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L21
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L21
            int r1 = r1 + 1
            goto Lc
        L1a:
            monitor-exit(r5)
            return
        L1c:
            r6 = 0
            r5.s = r6     // Catch: java.lang.Throwable -> L21
            monitor-exit(r5)
            return
        L21:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final void a(java.lang.String[] r5, com.tkay.core.api.ITYAdFilter r6) {
            r4 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.ITYAdFilter> r0 = r4.W
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            if (r5 == 0) goto L26
            int r0 = r5.length
            if (r0 > 0) goto Ld
            goto L26
        Ld:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.ITYAdFilter> r0 = r4.W
            if (r0 != 0) goto L18
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r4.W = r0
        L18:
            int r0 = r5.length
            r1 = 0
        L1a:
            if (r1 >= r0) goto L26
            r2 = r5[r1]
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.ITYAdFilter> r3 = r4.W
            r3.put(r2, r6)
            int r1 = r1 + 1
            goto L1a
        L26:
            return
    }

    public final synchronized com.tkay.core.api.IExHandler b() {
            r3 = this;
            monitor-enter(r3)
            boolean r0 = r3.i     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L9
            com.tkay.core.api.IExHandler r0 = r3.z     // Catch: java.lang.Throwable -> L31
            monitor-exit(r3)
            return r0
        L9:
            r0 = 1
            java.lang.String r1 = "com.tkay.pd.ExHandler"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            java.lang.Class<com.tkay.core.api.IExHandler> r2 = com.tkay.core.api.IExHandler.class
            java.lang.Class r1 = r1.asSubclass(r2)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            r2 = 0
            java.lang.Class[] r2 = (java.lang.Class[]) r2     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            java.lang.reflect.Constructor r1 = r1.getDeclaredConstructor(r2)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            r1.setAccessible(r0)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            r2 = 0
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            java.lang.Object r1 = r1.newInstance(r2)     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            com.tkay.core.api.IExHandler r1 = (com.tkay.core.api.IExHandler) r1     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
            r3.z = r1     // Catch: java.lang.Exception -> L2b java.lang.Throwable -> L31
        L2b:
            r3.i = r0     // Catch: java.lang.Throwable -> L31
            com.tkay.core.api.IExHandler r0 = r3.z     // Catch: java.lang.Throwable -> L31
            monitor-exit(r3)
            return r0
        L31:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final com.tkay.core.api.TYCustomAdapterConfig b(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.TYCustomAdapterConfig> r0 = r1.r
            if (r0 == 0) goto L14
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lb
            goto L14
        Lb:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.TYCustomAdapterConfig> r0 = r1.r
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.api.TYCustomAdapterConfig r2 = (com.tkay.core.api.TYCustomAdapterConfig) r2
            return r2
        L14:
            r2 = 0
            return r2
    }

    public final void b(int r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void b(android.content.Context r3) {
            r2 = this;
            boolean r0 = r2.z()
            if (r0 != 0) goto L7
            return
        L7:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.common.b.m$12 r1 = new com.tkay.core.common.b.m$12
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final void b(java.lang.String r3, java.util.List<java.lang.String> r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r2.P
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "_network_firm"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.put(r3, r4)
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.o
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.Z = r1
            return
    }

    public final void c(java.lang.Runnable r2) {
            r1 = this;
            android.os.Handler r0 = r1.n
            r0.removeCallbacks(r2)
            return
    }

    public final void c(boolean r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public final synchronized boolean c(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.s     // Catch: java.lang.Throwable -> L10
            if (r0 != 0) goto L8
            r2 = 0
            monitor-exit(r1)
            return r2
        L8:
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r1.s     // Catch: java.lang.Throwable -> L10
            boolean r2 = r0.containsKey(r2)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r1)
            return r2
        L10:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final int d() {
            r1 = this;
            int r0 = r1.T
            return r0
    }

    public final long d(int r5) {
            r4 = this;
            r0 = 1
            if (r5 == r0) goto La
            r0 = 4
            if (r5 == r0) goto La
            r0 = 26214400(0x1900000, double:1.29516345E-316)
            return r0
        La:
            android.content.Context r5 = r4.k
            com.tkay.core.c.b.a(r5)
            long r0 = com.tkay.core.c.b.a()
            r2 = 1024(0x400, double:5.06E-321)
            long r0 = r0 * r2
            return r0
    }

    public final java.util.Map<java.lang.String, java.lang.Object> d(java.lang.String r5) {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.Map<java.lang.String, java.lang.Object>> r1 = r4.q
            java.lang.Object r5 = r1.get(r5)
            java.util.Map r5 = (java.util.Map) r5
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r1 = r4.p
            if (r1 == 0) goto L14
            r0.putAll(r1)
        L14:
            if (r5 == 0) goto L19
            r0.putAll(r5)
        L19:
            java.lang.String r5 = "channel"
            r0.remove(r5)
            java.lang.String r1 = "sub_channel"
            r0.remove(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r2 = r4.p
            java.lang.Object r2 = r2.get(r5)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r3 = r4.p
            java.lang.Object r3 = r3.get(r1)
            if (r2 == 0) goto L34
            r0.put(r5, r2)
        L34:
            if (r3 == 0) goto L39
            r0.put(r1, r3)
        L39:
            return r0
    }

    public final void d(boolean r1) {
            r0 = this;
            r0.V = r1
            return
    }

    public final void e(java.lang.String r3) {
            r2 = this;
            r2.F = r3
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r2.p
            java.lang.String r1 = "channel"
            r0.put(r1, r3)
            return
    }

    public final synchronized java.lang.String[] e() {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.s     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L18
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = r2.s     // Catch: java.lang.Throwable -> L1b
            java.util.Set r0 = r0.keySet()     // Catch: java.lang.Throwable -> L1b
            int r1 = r0.size()     // Catch: java.lang.Throwable -> L1b
            if (r1 <= 0) goto L18
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L1b
            r0.toArray(r1)     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r2)
            return r1
        L18:
            r0 = 0
            monitor-exit(r2)
            return r0
        L1b:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final android.content.Context f() {
            r1 = this;
            android.content.Context r0 = r1.k
            return r0
    }

    public final void f(java.lang.String r3) {
            r2 = this;
            r2.G = r3
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r2.p
            java.lang.String r1 = "sub_channel"
            r0.put(r1, r3)
            return
    }

    public final long g() {
            r2 = this;
            long r0 = r2.D
            return r0
    }

    public final java.lang.String g(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L9
            java.lang.String r3 = ""
            return r3
        L9:
            org.json.JSONObject r0 = r2.u
            java.lang.String r0 = r0.optString(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1a
            java.lang.String r0 = r2.u(r3)
            goto L27
        L1a:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = ": sessionid exists."
            r1.append(r3)
        L27:
            return r0
    }

    public final long h() {
            r2 = this;
            long r0 = r2.E
            return r0
    }

    public final int i() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final void i(java.lang.String r4) {
            r3 = this;
            r3.x = r4
            android.content.Context r0 = r3.k
            java.lang.String r1 = "exc_log"
            java.lang.String r2 = "exc_sys"
            com.tkay.core.common.l.p.a(r0, r1, r2, r4)
            return
    }

    public final java.util.List<java.lang.String> j() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.O
            return r0
    }

    public final void j(java.lang.String r4) {
            r3 = this;
            r3.y = r4
            android.content.Context r0 = r3.k
            java.lang.String r1 = "exc_log"
            java.lang.String r2 = "exc_bk"
            com.tkay.core.common.l.p.a(r0, r1, r2, r4)
            return
    }

    public final org.json.JSONArray k() {
            r1 = this;
            org.json.JSONArray r0 = r1.N
            return r0
    }

    public final void k(java.lang.String r4) {
            r3 = this;
            android.content.Context r0 = r3.k
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "UP_ID"
            com.tkay.core.common.l.p.a(r0, r1, r2, r4)
            r3.w = r4
            return
    }

    public final java.util.List<java.lang.String> l(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r1.P
            java.lang.Object r2 = r0.get(r2)
            java.util.List r2 = (java.util.List) r2
            return r2
    }

    public final java.util.Map<java.lang.String, java.lang.Object> l() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.p
            return r0
    }

    public final java.lang.String m() {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r2.p
            java.lang.String r1 = "channel"
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.toString()
            return r0
        Lf:
            java.lang.String r0 = ""
            return r0
    }

    public final java.util.List<java.lang.String> m(java.lang.String r3) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<java.lang.String>> r0 = r2.P
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "_network_firm"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.Object r3 = r0.get(r3)
            java.util.List r3 = (java.util.List) r3
            return r3
    }

    public final java.lang.String n() {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r2.p
            java.lang.String r1 = "sub_channel"
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.toString()
            return r0
        Lf:
            java.lang.String r0 = ""
            return r0
    }

    public final com.tkay.core.api.ITYAdFilter o(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.api.ITYAdFilter> r0 = r2.W
            if (r0 != 0) goto Ld
            return r1
        Ld:
            java.lang.Object r3 = r0.get(r3)
            com.tkay.core.api.ITYAdFilter r3 = (com.tkay.core.api.ITYAdFilter) r3
            return r3
    }

    public final java.lang.String o() {
            r4 = this;
            java.lang.String r0 = r4.l
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            android.content.Context r0 = r4.k
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "tkay_appid"
            java.lang.String r3 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r0, r1, r2, r3)
            r4.l = r0
        L16:
            java.lang.String r0 = r4.l
            return r0
    }

    public final java.lang.String p() {
            r4 = this;
            java.lang.String r0 = r4.m
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            android.content.Context r0 = r4.k
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "tkay_appkey"
            java.lang.String r3 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r0, r1, r2, r3)
            r4.m = r0
        L16:
            java.lang.String r0 = r4.m
            return r0
    }

    public final void p(java.lang.String r1) {
            r0 = this;
            r0.X = r1
            return
    }

    public final java.lang.String q() {
            r3 = this;
            java.lang.String r0 = r3.t     // Catch: java.lang.Exception -> L12
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L12
            if (r0 == 0) goto L12
            android.content.Context r0 = r3.k     // Catch: java.lang.Exception -> L12
            java.lang.String r1 = r3.o()     // Catch: java.lang.Exception -> L12
            r2 = 0
            r3.a(r0, r1, r2)     // Catch: java.lang.Exception -> L12
        L12:
            java.lang.String r0 = r3.t
            return r0
    }

    public final android.location.Location r() {
            r1 = this;
            android.location.Location r0 = r1.L
            return r0
    }

    public final java.lang.String s() {
            r1 = this;
            java.lang.String r0 = r1.M
            return r0
    }

    public final boolean t() {
            r1 = this;
            boolean r0 = r1.S
            return r0
    }

    public final boolean u() {
            r1 = this;
            boolean r0 = r1.S
            if (r0 == 0) goto La
            com.tkay.core.api.ATDebuggerConfig r0 = r1.R
            if (r0 == 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public final com.tkay.core.api.ATDebuggerConfig v() {
            r1 = this;
            com.tkay.core.api.ATDebuggerConfig r0 = r1.R
            return r0
    }

    public final java.lang.String w() {
            r4 = this;
            java.lang.String r0 = r4.w
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            android.content.Context r0 = r4.k
            java.lang.String r1 = "tkay_sdk"
            java.lang.String r2 = "UP_ID"
            java.lang.String r3 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r0, r1, r2, r3)
            r4.w = r0
        L16:
            java.lang.String r0 = r4.w
            return r0
    }

    public final java.lang.String x() {
            r4 = this;
            java.lang.String r0 = r4.x
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            android.content.Context r0 = r4.k
            java.lang.String r1 = "exc_log"
            java.lang.String r2 = "exc_sys"
            java.lang.String r3 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r0, r1, r2, r3)
            r4.x = r0
        L16:
            java.lang.String r0 = r4.x
            return r0
    }

    public final java.lang.String y() {
            r4 = this;
            java.lang.String r0 = r4.y
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L16
            android.content.Context r0 = r4.k
            java.lang.String r1 = "exc_log"
            java.lang.String r2 = "exc_bk"
            java.lang.String r3 = ""
            java.lang.String r0 = com.tkay.core.common.l.p.b(r0, r1, r2, r3)
            r4.y = r0
        L16:
            java.lang.String r0 = r4.y
            return r0
    }

    public final boolean z() {
            r1 = this;
            boolean r0 = r1.B
            if (r0 != 0) goto Lb
            boolean r0 = r1.C
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }
}
