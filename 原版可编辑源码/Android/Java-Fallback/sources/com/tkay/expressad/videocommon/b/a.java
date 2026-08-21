package com.tkay.expressad.videocommon.b;

public class a implements java.io.Serializable {
    public static final java.lang.String a = "2000077";
    protected static final java.lang.String b = "CampaignDownLoadTask";
    private static final long d = -510642107992871538L;
    private static final int e = 1;
    private static final int f = 2000;
    private static final int h = 1;
    private static final int i = 2;
    private static final int j = 3;
    private static final int k = 4;
    private static final int l = 5;
    private static final java.lang.String m = "errorMsg";
    private static final int p = 10010;
    private java.lang.Object A;
    private java.lang.Class B;
    private java.lang.Object C;
    private com.tkay.expressad.foundation.d.c D;
    private java.lang.String E;
    private boolean F;
    private android.content.Context G;
    private long H;
    private java.lang.String I;
    private long J;
    private int K;
    private java.lang.String L;
    private boolean M;
    private boolean N;
    private long O;
    private com.tkay.expressad.videocommon.d.b P;
    private com.tkay.expressad.videocommon.d.b Q;
    private int R;
    private boolean S;
    private boolean T;
    private java.lang.String U;
    private com.tkay.expressad.foundation.g.f.d.b.a V;
    private int W;
    private com.tkay.expressad.videocommon.b.d X;
    private android.os.Handler Y;
    private int Z;
    com.tkay.expressad.videocommon.b.m c;
    private boolean g;
    private int n;
    private boolean o;
    private int q;
    private java.lang.String r;
    private java.lang.String s;
    private java.lang.Runnable t;
    private volatile int u;
    private java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.d> v;
    private com.tkay.expressad.videocommon.b.d w;
    private java.util.concurrent.ExecutorService x;
    private com.tkay.expressad.videocommon.b.o y;
    private java.lang.Class z;




    public a(android.content.Context r5, com.tkay.expressad.foundation.d.c r6, java.util.concurrent.ExecutorService r7, java.lang.String r8) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.g = r0
            r1 = 1
            r4.n = r1
            r4.o = r0
            r4.u = r0
            java.util.concurrent.CopyOnWriteArrayList r2 = new java.util.concurrent.CopyOnWriteArrayList
            r2.<init>()
            r4.v = r2
            r4.F = r0
            r2 = 0
            r4.J = r2
            r4.K = r0
            r4.M = r0
            r4.N = r0
            r2 = 100
            r4.R = r2
            r4.S = r0
            r4.T = r0
            r4.W = r1
            com.tkay.expressad.videocommon.b.a$1 r1 = new com.tkay.expressad.videocommon.b.a$1
            r1.<init>(r4)
            r4.X = r1
            com.tkay.expressad.videocommon.b.a$2 r1 = new com.tkay.expressad.videocommon.b.a$2
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r4, r2)
            r4.Y = r1
            if (r5 != 0) goto L41
            if (r6 != 0) goto L41
            return
        L41:
            long r1 = java.lang.System.currentTimeMillis()
            r4.O = r1
            com.tkay.expressad.foundation.b.b r5 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r5 = r5.d()
            r4.G = r5
            r4.D = r6
            r4.E = r8
            r4.x = r7
            if (r6 == 0) goto L5f
            java.lang.String r5 = r6.S()
            r4.I = r5
        L5f:
            java.lang.String r5 = r4.I
            java.lang.String r5 = com.tkay.expressad.foundation.h.m.d(r5)
            r4.U = r5
            com.tkay.expressad.videocommon.b.l.a()
            java.lang.String r5 = r4.I
            java.lang.String r5 = com.tkay.expressad.videocommon.b.l.a(r5)
            r4.L = r5
            r4.o = r0
            java.lang.String r5 = r4.I     // Catch: java.lang.Exception -> L86
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L86
            if (r5 != 0) goto L85
            int r5 = r4.n     // Catch: java.lang.Exception -> L86
            r6 = 3
            if (r5 != r6) goto L82
            goto L85
        L82:
            r4.x()     // Catch: java.lang.Exception -> L86
        L85:
            return
        L86:
            r5 = move-exception
            r5.getMessage()
            return
    }

    private void A() {
            r8 = this;
            java.lang.Class r0 = r8.z     // Catch: java.lang.Exception -> L70
            java.lang.String r1 = "insertExcludeId"
            r2 = 1
            r3 = 0
            r4 = 2
            if (r0 == 0) goto Ld
            java.lang.Object r0 = r8.A     // Catch: java.lang.Exception -> L70
            if (r0 != 0) goto L3a
        Ld:
            java.lang.String r0 = "com.tkay.expressad.reward.b.a"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L70
            r8.z = r0     // Catch: java.lang.Exception -> L70
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L70
            r8.A = r0     // Catch: java.lang.Exception -> L70
            java.lang.Class r0 = r8.z     // Catch: java.lang.Exception -> L70
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L70
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r3] = r6     // Catch: java.lang.Exception -> L70
            java.lang.Class<com.tkay.expressad.foundation.d.c> r6 = com.tkay.expressad.foundation.d.c.class
            r5[r2] = r6     // Catch: java.lang.Exception -> L70
            java.lang.reflect.Method r0 = r0.getMethod(r1, r5)     // Catch: java.lang.Exception -> L70
            java.lang.Object r5 = r8.A     // Catch: java.lang.Exception -> L70
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L70
            java.lang.String r7 = r8.E     // Catch: java.lang.Exception -> L70
            r6[r3] = r7     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.foundation.d.c r7 = r8.D     // Catch: java.lang.Exception -> L70
            r6[r2] = r7     // Catch: java.lang.Exception -> L70
            r0.invoke(r5, r6)     // Catch: java.lang.Exception -> L70
        L3a:
            java.lang.Class r0 = r8.B     // Catch: java.lang.Exception -> L70
            if (r0 == 0) goto L42
            java.lang.Object r0 = r8.C     // Catch: java.lang.Exception -> L70
            if (r0 != 0) goto L6f
        L42:
            java.lang.String r0 = "com.tkay.expressad.atnative.controller.NativeController"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L70
            r8.B = r0     // Catch: java.lang.Exception -> L70
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L70
            r8.C = r0     // Catch: java.lang.Exception -> L70
            java.lang.Class r0 = r8.B     // Catch: java.lang.Exception -> L70
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L70
            java.lang.Class<java.lang.String> r6 = java.lang.String.class
            r5[r3] = r6     // Catch: java.lang.Exception -> L70
            java.lang.Class<com.tkay.expressad.foundation.d.c> r6 = com.tkay.expressad.foundation.d.c.class
            r5[r2] = r6     // Catch: java.lang.Exception -> L70
            java.lang.reflect.Method r0 = r0.getMethod(r1, r5)     // Catch: java.lang.Exception -> L70
            java.lang.Object r1 = r8.C     // Catch: java.lang.Exception -> L70
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L70
            java.lang.String r5 = r8.E     // Catch: java.lang.Exception -> L70
            r4[r3] = r5     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.foundation.d.c r3 = r8.D     // Catch: java.lang.Exception -> L70
            r4[r2] = r3     // Catch: java.lang.Exception -> L70
            r0.invoke(r1, r4)     // Catch: java.lang.Exception -> L70
        L6f:
            return
        L70:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private static void B() {
            return
    }

    private void C() {
            r4 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r1 = 10010(0x271a, float:1.4027E-41)
            r0.what = r1
            com.tkay.expressad.foundation.d.c r1 = r4.D
            if (r1 == 0) goto Ld0
            java.lang.String r1 = r4.E
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Ld0
            com.tkay.expressad.foundation.d.c r1 = r4.D
            java.lang.String r1 = r1.Z()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Ld0
            com.tkay.expressad.foundation.d.c r1 = r4.D
            java.lang.String r1 = r1.S()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2e
            goto Ld0
        L2e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key=2000077&unit_id="
            r1.append(r2)
            java.lang.String r2 = r4.E
            r1.append(r2)
            java.lang.String r2 = "&request_id="
            r1.append(r2)
            com.tkay.expressad.foundation.d.c r2 = r4.D
            java.lang.String r2 = r2.Z()
            r1.append(r2)
            java.lang.String r2 = "&request_id_notice="
            r1.append(r2)
            com.tkay.expressad.foundation.d.c r2 = r4.D
            java.lang.String r2 = r2.aa()
            r1.append(r2)
            java.lang.String r2 = "&package_name="
            r1.append(r2)
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.a()
            r1.append(r2)
            java.lang.String r2 = "&app_id="
            r1.append(r2)
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.e()
            r1.append(r2)
            java.lang.String r2 = "&video_url="
            r1.append(r2)
            com.tkay.expressad.foundation.d.c r2 = r4.D
            java.lang.String r2 = r2.S()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r1.append(r2)
            java.lang.String r2 = "&process_size="
            r1.append(r2)
            long r2 = r4.J
            r1.append(r2)
            java.lang.String r2 = "&file_size="
            r1.append(r2)
            long r2 = r4.H
            r1.append(r2)
            java.lang.String r2 = "&ready_rate="
            r1.append(r2)
            int r2 = r4.R
            r1.append(r2)
            java.lang.String r2 = "&cd_rate="
            r1.append(r2)
            int r2 = r4.q
            r1.append(r2)
            java.lang.String r2 = "&cid="
            r1.append(r2)
            com.tkay.expressad.foundation.d.c r2 = r4.D
            java.lang.String r2 = r2.aZ()
            r1.append(r2)
            java.lang.String r2 = "&type="
            r1.append(r2)
            int r2 = r4.u
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto Ld2
        Ld0:
            java.lang.String r1 = ""
        Ld2:
            r0.obj = r1
            android.os.Handler r1 = r4.Y
            r1.sendMessage(r0)
            return
    }

    private static void D() {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.d()
            return
    }

    private java.lang.String E() {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.D
            if (r0 == 0) goto Lc8
            java.lang.String r0 = r3.E
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc8
            com.tkay.expressad.foundation.d.c r0 = r3.D
            java.lang.String r0 = r0.Z()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc8
            com.tkay.expressad.foundation.d.c r0 = r3.D
            java.lang.String r0 = r0.S()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L26
            goto Lc8
        L26:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "key=2000077&unit_id="
            r0.append(r1)
            java.lang.String r1 = r3.E
            r0.append(r1)
            java.lang.String r1 = "&request_id="
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r3.D
            java.lang.String r1 = r1.Z()
            r0.append(r1)
            java.lang.String r1 = "&request_id_notice="
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r3.D
            java.lang.String r1 = r1.aa()
            r0.append(r1)
            java.lang.String r1 = "&package_name="
            r0.append(r1)
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.a()
            r0.append(r1)
            java.lang.String r1 = "&app_id="
            r0.append(r1)
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
            r0.append(r1)
            java.lang.String r1 = "&video_url="
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r3.D
            java.lang.String r1 = r1.S()
            java.lang.String r1 = java.net.URLEncoder.encode(r1)
            r0.append(r1)
            java.lang.String r1 = "&process_size="
            r0.append(r1)
            long r1 = r3.J
            r0.append(r1)
            java.lang.String r1 = "&file_size="
            r0.append(r1)
            long r1 = r3.H
            r0.append(r1)
            java.lang.String r1 = "&ready_rate="
            r0.append(r1)
            int r1 = r3.R
            r0.append(r1)
            java.lang.String r1 = "&cd_rate="
            r0.append(r1)
            int r1 = r3.q
            r0.append(r1)
            java.lang.String r1 = "&cid="
            r0.append(r1)
            com.tkay.expressad.foundation.d.c r1 = r3.D
            java.lang.String r1 = r1.aZ()
            r0.append(r1)
            java.lang.String r1 = "&type="
            r0.append(r1)
            int r1 = r3.u
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        Lc8:
            java.lang.String r0 = ""
            return r0
    }

    private static double a(double r1, double r3, int r5) {
            if (r5 < 0) goto L1e
            java.math.BigDecimal r0 = new java.math.BigDecimal
            java.lang.String r1 = java.lang.Double.toString(r1)
            r0.<init>(r1)
            java.math.BigDecimal r1 = new java.math.BigDecimal
            java.lang.String r2 = java.lang.Double.toString(r3)
            r1.<init>(r2)
            r2 = 4
            java.math.BigDecimal r1 = r0.divide(r1, r5, r2)
            double r1 = r1.doubleValue()
            return r1
        L1e:
            java.lang.IllegalAccessException r1 = new java.lang.IllegalAccessException
            java.lang.String r2 = "Accuracy cannot be less than 0"
            r1.<init>(r2)
            throw r1
    }

    static int a(com.tkay.expressad.videocommon.b.a r0, int r1) {
            r0.u = r1
            return r1
    }

    static long a(com.tkay.expressad.videocommon.b.a r0, long r1) {
            r0.H = r1
            return r1
    }

    private void a(long r6, int r8) {
            r5 = this;
            r5.J = r6
            int r0 = r5.R
            long r1 = (long) r0
            long r3 = r5.H
            long r1 = r1 * r3
            r3 = 100
            long r3 = r3 * r6
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            r2 = 4
            r3 = 5
            if (r1 < 0) goto L23
            boolean r1 = r5.S
            if (r1 != 0) goto L23
            if (r8 == r2) goto L23
            r1 = 100
            if (r0 != r1) goto L20
            if (r8 == r3) goto L20
            r5.u = r3
            return
        L20:
            r5.v()
        L23:
            boolean r0 = r5.F
            if (r0 == 0) goto L5f
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.d> r0 = r5.v
            if (r0 == 0) goto L41
            java.util.Iterator r0 = r0.iterator()
        L2f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L41
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.videocommon.b.d r1 = (com.tkay.expressad.videocommon.b.d) r1
            if (r1 == 0) goto L2f
            r1.a(r6, r8)
            goto L2f
        L41:
            com.tkay.expressad.videocommon.b.d r0 = r5.w
            if (r0 == 0) goto L5f
            int r0 = r5.u
            if (r0 == r3) goto L57
            int r0 = r5.u
            if (r0 == r2) goto L57
            int r0 = r5.u
            r1 = 2
            if (r0 == r1) goto L57
            int r0 = r5.u
            r1 = 6
            if (r0 != r1) goto L5f
        L57:
            com.tkay.expressad.videocommon.b.d r0 = r5.w
            r0.a(r6, r8)
            r6 = 0
            r5.w = r6
        L5f:
            return
    }

    static void a(com.tkay.expressad.videocommon.b.a r5, long r6, int r8) {
            r5.J = r6
            int r0 = r5.R
            long r1 = (long) r0
            long r3 = r5.H
            long r1 = r1 * r3
            r3 = 100
            long r3 = r3 * r6
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            r2 = 4
            r3 = 5
            if (r1 < 0) goto L23
            boolean r1 = r5.S
            if (r1 != 0) goto L23
            if (r8 == r2) goto L23
            r1 = 100
            if (r0 != r1) goto L20
            if (r8 == r3) goto L20
            r5.u = r3
            return
        L20:
            r5.v()
        L23:
            boolean r0 = r5.F
            if (r0 == 0) goto L5f
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.d> r0 = r5.v
            if (r0 == 0) goto L41
            java.util.Iterator r0 = r0.iterator()
        L2f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L41
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.videocommon.b.d r1 = (com.tkay.expressad.videocommon.b.d) r1
            if (r1 == 0) goto L2f
            r1.a(r6, r8)
            goto L2f
        L41:
            com.tkay.expressad.videocommon.b.d r0 = r5.w
            if (r0 == 0) goto L5f
            int r0 = r5.u
            if (r0 == r3) goto L57
            int r0 = r5.u
            if (r0 == r2) goto L57
            int r0 = r5.u
            r1 = 2
            if (r0 == r1) goto L57
            int r0 = r5.u
            r1 = 6
            if (r0 != r1) goto L5f
        L57:
            com.tkay.expressad.videocommon.b.d r0 = r5.w
            r0.a(r6, r8)
            r6 = 0
            r5.w = r6
        L5f:
            return
    }

    static void a(com.tkay.expressad.videocommon.b.a r4, java.lang.String r5) {
            int r0 = r4.K
            r1 = 1
            int r0 = r0 + r1
            r4.K = r0
            android.content.Context r0 = r4.G     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L31
            android.content.Context r0 = r4.G     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r2)     // Catch: java.lang.Throwable -> L2d
            r2 = 0
            boolean r3 = r0 instanceof android.net.ConnectivityManager     // Catch: java.lang.Throwable -> L2d
            if (r3 == 0) goto L1a
            r2 = r0
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Throwable -> L2d
        L1a:
            if (r2 == 0) goto L31
            android.net.NetworkInfo r0 = r2.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L31
            android.net.NetworkInfo r0 = r2.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L2d
            boolean r0 = r0.isAvailable()     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L31
            return
        L2d:
            r0 = move-exception
            r0.printStackTrace()
        L31:
            int r0 = r4.K
            if (r0 > r1) goto L3e
            android.os.Handler r4 = r4.Y
            r5 = 5
            r0 = 2000(0x7d0, double:9.88E-321)
            r4.sendEmptyMessageDelayed(r5, r0)
            return
        L3e:
            r4.A()
            com.tkay.expressad.videocommon.d.b r0 = r4.P
            if (r0 == 0) goto L4a
            java.lang.String r1 = r4.I
            r0.a(r5, r1)
        L4a:
            com.tkay.expressad.videocommon.d.b r0 = r4.Q
            if (r0 == 0) goto L53
            java.lang.String r1 = r4.I
            r0.a(r5, r1)
        L53:
            r5 = 4
            r4.u = r5
            android.os.Message r5 = android.os.Message.obtain()
            r0 = 3
            r5.what = r0
            android.os.Handler r4 = r4.Y
            r4.sendMessage(r5)
            return
    }

    static boolean a(com.tkay.expressad.videocommon.b.a r0) {
            boolean r0 = r0.F
            return r0
    }

    static long b(com.tkay.expressad.videocommon.b.a r2) {
            long r0 = r2.J
            return r0
    }

    private void b(com.tkay.expressad.videocommon.b.d r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.d> r0 = r1.v
            if (r0 == 0) goto L7
            r0.add(r2)
        L7:
            return
    }

    private void b(com.tkay.expressad.videocommon.d.b r1) {
            r0 = this;
            r0.Q = r1
            return
    }

    private void b(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.videocommon.d.b r0 = r2.P
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.I
            r0.a(r3, r1)
        L9:
            com.tkay.expressad.videocommon.d.b r0 = r2.Q
            if (r0 == 0) goto L12
            java.lang.String r1 = r2.I
            r0.a(r3, r1)
        L12:
            r3 = 4
            r2.u = r3
            android.os.Message r3 = android.os.Message.obtain()
            r0 = 3
            r3.what = r0
            android.os.Handler r0 = r2.Y
            r0.sendMessage(r3)
            return
    }

    static int c(com.tkay.expressad.videocommon.b.a r0) {
            int r0 = r0.u
            return r0
    }

    private void c(java.lang.String r5) {
            r4 = this;
            int r0 = r4.K
            r1 = 1
            int r0 = r0 + r1
            r4.K = r0
            android.content.Context r0 = r4.G     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L31
            android.content.Context r0 = r4.G     // Catch: java.lang.Throwable -> L2d
            java.lang.String r2 = "connectivity"
            java.lang.Object r0 = r0.getSystemService(r2)     // Catch: java.lang.Throwable -> L2d
            r2 = 0
            boolean r3 = r0 instanceof android.net.ConnectivityManager     // Catch: java.lang.Throwable -> L2d
            if (r3 == 0) goto L1a
            r2 = r0
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Throwable -> L2d
        L1a:
            if (r2 == 0) goto L31
            android.net.NetworkInfo r0 = r2.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L31
            android.net.NetworkInfo r0 = r2.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L2d
            boolean r0 = r0.isAvailable()     // Catch: java.lang.Throwable -> L2d
            if (r0 != 0) goto L31
            return
        L2d:
            r0 = move-exception
            r0.printStackTrace()
        L31:
            int r0 = r4.K
            if (r0 > r1) goto L3e
            android.os.Handler r5 = r4.Y
            r0 = 5
            r1 = 2000(0x7d0, double:9.88E-321)
            r5.sendEmptyMessageDelayed(r0, r1)
            return
        L3e:
            r4.A()
            com.tkay.expressad.videocommon.d.b r0 = r4.P
            if (r0 == 0) goto L4a
            java.lang.String r1 = r4.I
            r0.a(r5, r1)
        L4a:
            com.tkay.expressad.videocommon.d.b r0 = r4.Q
            if (r0 == 0) goto L53
            java.lang.String r1 = r4.I
            r0.a(r5, r1)
        L53:
            r5 = 4
            r4.u = r5
            android.os.Message r5 = android.os.Message.obtain()
            r0 = 3
            r5.what = r0
            android.os.Handler r0 = r4.Y
            r0.sendMessage(r5)
            return
    }

    static boolean d(com.tkay.expressad.videocommon.b.a r1) {
            r0 = 0
            r1.g = r0
            return r0
    }

    static long e(com.tkay.expressad.videocommon.b.a r2) {
            long r0 = r2.H
            return r0
    }

    static int f(com.tkay.expressad.videocommon.b.a r0) {
            int r0 = r0.R
            return r0
    }

    static android.os.Handler g(com.tkay.expressad.videocommon.b.a r0) {
            android.os.Handler r0 = r0.Y
            return r0
    }

    static void s() {
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            r0.d()
            return
    }

    private void t() {
            r2 = this;
            java.lang.String r0 = r2.I     // Catch: java.lang.Exception -> L12
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L12
            if (r0 != 0) goto L11
            int r0 = r2.n     // Catch: java.lang.Exception -> L12
            r1 = 3
            if (r0 != r1) goto Le
            goto L11
        Le:
            r2.x()     // Catch: java.lang.Exception -> L12
        L11:
            return
        L12:
            r0 = move-exception
            r0.getMessage()
            return
    }

    private void u() {
            r4 = this;
            com.tkay.expressad.videocommon.b.m r0 = r4.c
            if (r0 != 0) goto L19
            com.tkay.expressad.videocommon.b.m r0 = new com.tkay.expressad.videocommon.b.m
            java.lang.String r1 = r4.I
            int r2 = r4.R
            int r3 = r4.W
            r0.<init>(r1, r2, r3)
            r4.c = r0
            com.tkay.expressad.videocommon.b.a$3 r1 = new com.tkay.expressad.videocommon.b.a$3
            r1.<init>(r4)
            r0.a(r1)
        L19:
            return
    }

    private void v() {
            r2 = this;
            boolean r0 = r2.S
            if (r0 != 0) goto L19
            r0 = 1
            r2.S = r0
            com.tkay.expressad.videocommon.d.b r0 = r2.P
            if (r0 == 0) goto L10
            java.lang.String r1 = r2.I
            r0.a(r1)
        L10:
            com.tkay.expressad.videocommon.d.b r0 = r2.Q
            if (r0 == 0) goto L19
            java.lang.String r1 = r2.I
            r0.a(r1)
        L19:
            return
    }

    private boolean w() {
            r1 = this;
            boolean r0 = r1.F
            return r0
    }

    private void x() {
            r5 = this;
            com.tkay.expressad.videocommon.b.l.a()
            java.lang.String r0 = r5.I
            java.lang.String r0 = com.tkay.expressad.videocommon.b.l.a(r0)
            r5.L = r0
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r5.L
            r0.<init>(r1)
            long r1 = r0.length()
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L23
            long r0 = r0.length()
            r5.J = r0
            goto L25
        L23:
            r5.J = r3
        L25:
            long r0 = r5.H
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L3d
            com.tkay.core.common.a.j r0 = com.tkay.core.common.a.j.a()
            java.lang.String r1 = r5.I
            com.tkay.core.common.a.i r0 = r0.a(r1)
            if (r0 == 0) goto L3d
            long r0 = r0.d()
            r5.H = r0
        L3d:
            return
    }

    private com.tkay.expressad.videocommon.b.d y() {
            r1 = this;
            com.tkay.expressad.videocommon.b.d r0 = r1.X
            return r0
    }

    private static void z() {
            return
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.I
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public final void a(com.tkay.expressad.foundation.d.c r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public final void a(com.tkay.expressad.videocommon.b.d r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public final void a(com.tkay.expressad.videocommon.d.b r1) {
            r0 = this;
            r0.P = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public final void a(boolean r2) {
            r1 = this;
            if (r2 != 0) goto L5
            r0 = 0
            r1.o = r0
        L5:
            r1.T = r2
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.N = r1
            return
    }

    public final boolean b() {
            r1 = this;
            boolean r0 = r1.T
            return r0
    }

    public final long c() {
            r2 = this;
            long r0 = r2.O
            return r0
    }

    public final void c(int r2) {
            r1 = this;
            r1.W = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "mVideoCtnType:"
            r2.<init>(r0)
            int r0 = r1.W
            r2.append(r0)
            return
    }

    public final void d(int r2) {
            r1 = this;
            r1.R = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "mReadyRate:"
            r2.<init>(r0)
            int r0 = r1.R
            r2.append(r0)
            return
    }

    public final boolean d() {
            r1 = this;
            boolean r0 = r1.N
            return r0
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.L
            return r0
    }

    public final void e(int r1) {
            r0 = this;
            r0.Z = r1
            return
    }

    public final long f() {
            r2 = this;
            long r0 = r2.H
            return r0
    }

    public final void g() {
            r2 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r1 = 5
            r2.u = r1
            r1 = 4
            r0.what = r1
            android.os.Handler r1 = r2.Y
            r1.sendMessage(r0)
            return
    }

    public final void h() {
            r2 = this;
            java.lang.String r0 = r2.I
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L9
            return
        L9:
            int r0 = r2.u
            r1 = 5
            if (r0 != r1) goto L12
            r2.v()
            return
        L12:
            int r0 = r2.n
            r1 = 3
            if (r0 != r1) goto L1b
            r2.g()
            return
        L1b:
            int r0 = r2.R
            if (r0 != 0) goto L23
            r2.g()
            return
        L23:
            r2.x()
            r2.u()
            com.tkay.expressad.videocommon.b.m r0 = r2.c
            if (r0 == 0) goto L37
            r0 = 1
            r2.u = r0
            r2.F = r0
            com.tkay.expressad.videocommon.b.m r0 = r2.c
            r0.a()
        L37:
            return
    }

    public final void i() {
            r1 = this;
            r1.x()
            r1.u()
            com.tkay.expressad.videocommon.b.m r0 = r1.c
            if (r0 == 0) goto L14
            r0 = 1
            r1.u = r0
            r1.F = r0
            com.tkay.expressad.videocommon.b.m r0 = r1.c
            r0.b()
        L14:
            return
    }

    public final void j() {
            r1 = this;
            r1.A()
            r0 = 4
            r1.u = r0
            return
    }

    public final int k() {
            r1 = this;
            int r0 = r1.u
            return r0
    }

    public final void l() {
            r1 = this;
            r0 = 0
            r1.u = r0
            return
    }

    public final java.lang.String m() {
            r6 = this;
            int r0 = r6.n
            java.lang.String r1 = ""
            r2 = 3
            if (r0 != r2) goto L8
            return r1
        L8:
            java.io.File r0 = new java.io.File
            java.lang.String r2 = r6.L
            r0.<init>(r2)
            long r2 = r0.length()     // Catch: java.lang.Throwable -> L31
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L2e
            boolean r2 = r0.canRead()     // Catch: java.lang.Throwable -> L31
            if (r2 == 0) goto L2b
            long r2 = r0.length()     // Catch: java.lang.Throwable -> L31
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L28
            goto L3d
        L28:
            java.lang.String r1 = "file length is 0 "
            goto L3d
        L2b:
            java.lang.String r1 = "file can not read "
            goto L3d
        L2e:
            java.lang.String r1 = "file is not exist "
            goto L3d
        L31:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L3d
            r0.printStackTrace()
        L3d:
            return r1
    }

    public final com.tkay.expressad.foundation.d.c n() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.D
            return r0
    }

    public final void o() {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.videocommon.b.d> r0 = r1.v
            if (r0 == 0) goto L7
            r0 = 0
            r1.v = r0
        L7:
            return
    }

    public final long p() {
            r2 = this;
            long r0 = r2.J
            return r0
    }

    public final void q() {
            r4 = this;
            android.os.Message r0 = android.os.Message.obtain()
            r1 = 10010(0x271a, float:1.4027E-41)
            r0.what = r1
            com.tkay.expressad.foundation.d.c r1 = r4.D
            if (r1 == 0) goto Ld0
            java.lang.String r1 = r4.E
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Ld0
            com.tkay.expressad.foundation.d.c r1 = r4.D
            java.lang.String r1 = r1.Z()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto Ld0
            com.tkay.expressad.foundation.d.c r1 = r4.D
            java.lang.String r1 = r1.S()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2e
            goto Ld0
        L2e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "key=2000077&unit_id="
            r1.append(r2)
            java.lang.String r2 = r4.E
            r1.append(r2)
            java.lang.String r2 = "&request_id="
            r1.append(r2)
            com.tkay.expressad.foundation.d.c r2 = r4.D
            java.lang.String r2 = r2.Z()
            r1.append(r2)
            java.lang.String r2 = "&request_id_notice="
            r1.append(r2)
            com.tkay.expressad.foundation.d.c r2 = r4.D
            java.lang.String r2 = r2.aa()
            r1.append(r2)
            java.lang.String r2 = "&package_name="
            r1.append(r2)
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.a()
            r1.append(r2)
            java.lang.String r2 = "&app_id="
            r1.append(r2)
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r2 = r2.e()
            r1.append(r2)
            java.lang.String r2 = "&video_url="
            r1.append(r2)
            com.tkay.expressad.foundation.d.c r2 = r4.D
            java.lang.String r2 = r2.S()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r1.append(r2)
            java.lang.String r2 = "&process_size="
            r1.append(r2)
            long r2 = r4.J
            r1.append(r2)
            java.lang.String r2 = "&file_size="
            r1.append(r2)
            long r2 = r4.H
            r1.append(r2)
            java.lang.String r2 = "&ready_rate="
            r1.append(r2)
            int r2 = r4.R
            r1.append(r2)
            java.lang.String r2 = "&cd_rate="
            r1.append(r2)
            int r2 = r4.q
            r1.append(r2)
            java.lang.String r2 = "&cid="
            r1.append(r2)
            com.tkay.expressad.foundation.d.c r2 = r4.D
            java.lang.String r2 = r2.aZ()
            r1.append(r2)
            java.lang.String r2 = "&type="
            r1.append(r2)
            int r2 = r4.u
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            goto Ld2
        Ld0:
            java.lang.String r1 = ""
        Ld2:
            r0.obj = r1
            android.os.Handler r1 = r4.Y
            r1.sendMessage(r0)
            return
    }

    public final java.lang.String r() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }
}
