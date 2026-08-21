package com.alipay.sdk.m.p0;

public class c {
    public static java.lang.String A = null;
    public static volatile com.alipay.sdk.m.p0.c B = null;
    public static volatile com.alipay.sdk.m.p0.b C = null;
    public static final java.lang.String a = "VMS_IDLG_SDK_Client";
    public static final java.lang.String b = "content://com.vivo.vms.IdProvider/IdentifierId";
    public static final java.lang.String c = "persist.sys.identifierid.supported";
    public static final java.lang.String d = "appid";
    public static final java.lang.String e = "type";
    public static final java.lang.String f = "OAID";
    public static final java.lang.String g = "VAID";
    public static final java.lang.String h = "AAID";
    public static final int i = 0;
    public static final int j = 1;
    public static final int k = 2;
    public static final int l = 4;
    public static final int m = 11;
    public static final int n = 2000;
    public static android.content.Context o;
    public static boolean p;
    public static com.alipay.sdk.m.p0.d q;
    public static com.alipay.sdk.m.p0.d r;
    public static com.alipay.sdk.m.p0.d s;
    public static java.lang.Object t;
    public static android.os.HandlerThread u;
    public static android.os.Handler v;
    public static java.lang.String w;
    public static java.lang.String x;
    public static java.lang.String y;
    public static java.lang.String z;

    public static class a extends android.os.Handler {
        public a(android.os.Looper r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void handleMessage(android.os.Message r3) {
                r2 = this;
                int r0 = r3.what
                r1 = 11
                if (r0 != r1) goto L36
                android.os.Bundle r0 = r3.getData()
                java.lang.String r1 = "type"
                int r0 = r0.getInt(r1)
                android.os.Bundle r3 = r3.getData()
                java.lang.String r1 = "appid"
                java.lang.String r3 = r3.getString(r1)
                com.alipay.sdk.m.p0.b r1 = com.alipay.sdk.m.p0.c.d()
                java.lang.String r3 = r1.a(r0, r3)
                com.alipay.sdk.m.p0.c.c(r3)
                java.lang.Object r3 = com.alipay.sdk.m.p0.c.e()
                monitor-enter(r3)
                java.lang.Object r0 = com.alipay.sdk.m.p0.c.e()     // Catch: java.lang.Throwable -> L33
                r0.notify()     // Catch: java.lang.Throwable -> L33
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L33
                goto L3d
            L33:
                r0 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> L33
                throw r0
            L36:
                java.lang.String r3 = "VMS_IDLG_SDK_Client"
                java.lang.String r0 = "message type valid"
                android.util.Log.e(r3, r0)
            L3d:
                return
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.alipay.sdk.m.p0.c.t = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.sdk.m.p0.c a(android.content.Context r2) {
            java.lang.Class<com.alipay.sdk.m.p0.c> r0 = com.alipay.sdk.m.p0.c.class
            com.alipay.sdk.m.p0.c r1 = com.alipay.sdk.m.p0.c.B
            if (r1 != 0) goto L19
            monitor-enter(r0)
            android.content.Context r1 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L16
            com.alipay.sdk.m.p0.c.o = r1     // Catch: java.lang.Throwable -> L16
            com.alipay.sdk.m.p0.c r1 = new com.alipay.sdk.m.p0.c     // Catch: java.lang.Throwable -> L16
            r1.<init>()     // Catch: java.lang.Throwable -> L16
            com.alipay.sdk.m.p0.c.B = r1     // Catch: java.lang.Throwable -> L16
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            goto L19
        L16:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L16
            throw r2
        L19:
            com.alipay.sdk.m.p0.b r1 = com.alipay.sdk.m.p0.c.C
            if (r1 != 0) goto L38
            monitor-enter(r0)
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L35
            com.alipay.sdk.m.p0.c.o = r2     // Catch: java.lang.Throwable -> L35
            g()     // Catch: java.lang.Throwable -> L35
            com.alipay.sdk.m.p0.b r2 = new com.alipay.sdk.m.p0.b     // Catch: java.lang.Throwable -> L35
            android.content.Context r1 = com.alipay.sdk.m.p0.c.o     // Catch: java.lang.Throwable -> L35
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L35
            com.alipay.sdk.m.p0.c.C = r2     // Catch: java.lang.Throwable -> L35
            f()     // Catch: java.lang.Throwable -> L35
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            goto L38
        L35:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
            throw r2
        L38:
            com.alipay.sdk.m.p0.c r2 = com.alipay.sdk.m.p0.c.B
            return r2
    }

    public static java.lang.String a(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            r2[r5] = r7     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            java.lang.String r7 = "unknown"
            r2[r6] = r7     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            java.lang.Object r7 = r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L2c
            return r7
        L28:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Throwable -> L2c
        L2c:
            return r8
    }

    public static void a(android.content.Context r3, int r4, java.lang.String r5) {
            r0 = 1
            r1 = 0
            if (r4 == 0) goto L5a
            if (r4 == r0) goto L32
            r0 = 2
            if (r4 == r0) goto La
            goto L73
        La:
            com.alipay.sdk.m.p0.d r4 = new com.alipay.sdk.m.p0.d
            com.alipay.sdk.m.p0.c r2 = com.alipay.sdk.m.p0.c.B
            r4.<init>(r2, r0, r5)
            com.alipay.sdk.m.p0.c.s = r4
            android.content.ContentResolver r3 = r3.getContentResolver()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "content://com.vivo.vms.IdProvider/IdentifierId/AAID_"
            r4.append(r0)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.net.Uri r4 = android.net.Uri.parse(r4)
            com.alipay.sdk.m.p0.d r5 = com.alipay.sdk.m.p0.c.s
            r3.registerContentObserver(r4, r1, r5)
            goto L73
        L32:
            com.alipay.sdk.m.p0.d r4 = new com.alipay.sdk.m.p0.d
            com.alipay.sdk.m.p0.c r2 = com.alipay.sdk.m.p0.c.B
            r4.<init>(r2, r0, r5)
            com.alipay.sdk.m.p0.c.r = r4
            android.content.ContentResolver r3 = r3.getContentResolver()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "content://com.vivo.vms.IdProvider/IdentifierId/VAID_"
            r4.append(r0)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            android.net.Uri r4 = android.net.Uri.parse(r4)
            com.alipay.sdk.m.p0.d r5 = com.alipay.sdk.m.p0.c.r
            r3.registerContentObserver(r4, r1, r5)
            goto L73
        L5a:
            com.alipay.sdk.m.p0.d r4 = new com.alipay.sdk.m.p0.d
            com.alipay.sdk.m.p0.c r5 = com.alipay.sdk.m.p0.c.B
            r2 = 0
            r4.<init>(r5, r1, r2)
            com.alipay.sdk.m.p0.c.q = r4
            android.content.ContentResolver r3 = r3.getContentResolver()
            java.lang.String r4 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r4 = android.net.Uri.parse(r4)
            com.alipay.sdk.m.p0.d r5 = com.alipay.sdk.m.p0.c.q
            r3.registerContentObserver(r4, r0, r5)
        L73:
            return
    }

    private void b(int r4, java.lang.String r5) {
            r3 = this;
            android.os.Handler r0 = com.alipay.sdk.m.p0.c.v
            android.os.Message r0 = r0.obtainMessage()
            r1 = 11
            r0.what = r1
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "type"
            r1.putInt(r2, r4)
            r2 = 1
            if (r4 == r2) goto L1a
            r2 = 2
            if (r4 != r2) goto L1f
        L1a:
            java.lang.String r4 = "appid"
            r1.putString(r4, r5)
        L1f:
            r0.setData(r1)
            android.os.Handler r4 = com.alipay.sdk.m.p0.c.v
            r4.sendMessage(r0)
            return
    }

    public static java.lang.String c(java.lang.String r0) {
            com.alipay.sdk.m.p0.c.w = r0
            return r0
    }

    public static com.alipay.sdk.m.p0.b d() {
            com.alipay.sdk.m.p0.b r0 = com.alipay.sdk.m.p0.c.C
            return r0
    }

    public static java.lang.Object e() {
            java.lang.Object r0 = com.alipay.sdk.m.p0.c.t
            return r0
    }

    public static void f() {
            java.lang.String r0 = "persist.sys.identifierid.supported"
            java.lang.String r1 = "0"
            java.lang.String r0 = a(r0, r1)
            java.lang.String r1 = "1"
            boolean r0 = r1.equals(r0)
            com.alipay.sdk.m.p0.c.p = r0
            return
    }

    public static void g() {
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "SqlWorkThread"
            r0.<init>(r1)
            com.alipay.sdk.m.p0.c.u = r0
            r0.start()
            com.alipay.sdk.m.p0.c$a r0 = new com.alipay.sdk.m.p0.c$a
            android.os.HandlerThread r1 = com.alipay.sdk.m.p0.c.u
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r1)
            com.alipay.sdk.m.p0.c.v = r0
            return
    }

    public java.lang.String a() {
            r3 = this;
            boolean r0 = r3.c()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.String r0 = com.alipay.sdk.m.p0.c.x
            if (r0 == 0) goto Ld
            return r0
        Ld:
            r0 = 0
            r3.a(r0, r1)
            com.alipay.sdk.m.p0.d r2 = com.alipay.sdk.m.p0.c.q
            if (r2 != 0) goto L1a
            android.content.Context r2 = com.alipay.sdk.m.p0.c.o
            a(r2, r0, r1)
        L1a:
            java.lang.String r0 = com.alipay.sdk.m.p0.c.x
            return r0
    }

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.c()
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            java.lang.String r0 = com.alipay.sdk.m.p0.c.z
            if (r0 == 0) goto Ld
            return r0
        Ld:
            r0 = 2
            r2.a(r0, r3)
            com.alipay.sdk.m.p0.d r1 = com.alipay.sdk.m.p0.c.s
            if (r1 != 0) goto L1e
            java.lang.String r1 = com.alipay.sdk.m.p0.c.z
            if (r1 == 0) goto L1e
            android.content.Context r1 = com.alipay.sdk.m.p0.c.o
            a(r1, r0, r3)
        L1e:
            java.lang.String r3 = com.alipay.sdk.m.p0.c.z
            return r3
    }

    public void a(int r8, java.lang.String r9) {
            r7 = this;
            java.lang.Object r0 = com.alipay.sdk.m.p0.c.t
            monitor-enter(r0)
            r7.b(r8, r9)     // Catch: java.lang.Throwable -> L68
            long r1 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> L68
            r3 = 2000(0x7d0, double:9.88E-321)
            java.lang.Object r9 = com.alipay.sdk.m.p0.c.t     // Catch: java.lang.InterruptedException -> L12 java.lang.Throwable -> L68
            r9.wait(r3)     // Catch: java.lang.InterruptedException -> L12 java.lang.Throwable -> L68
            goto L16
        L12:
            r9 = move-exception
            r9.printStackTrace()     // Catch: java.lang.Throwable -> L68
        L16:
            long r5 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> L68
            long r5 = r5 - r1
            int r9 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r9 >= 0) goto L5f
            r9 = 0
            if (r8 == 0) goto L58
            r1 = 1
            if (r8 == r1) goto L45
            r1 = 2
            if (r8 == r1) goto L2c
            r1 = 4
            if (r8 == r1) goto L3e
            goto L66
        L2c:
            java.lang.String r8 = com.alipay.sdk.m.p0.c.w     // Catch: java.lang.Throwable -> L68
            if (r8 == 0) goto L37
            java.lang.String r8 = com.alipay.sdk.m.p0.c.w     // Catch: java.lang.Throwable -> L68
            com.alipay.sdk.m.p0.c.z = r8     // Catch: java.lang.Throwable -> L68
            com.alipay.sdk.m.p0.c.w = r9     // Catch: java.lang.Throwable -> L68
            goto L3e
        L37:
            java.lang.String r8 = "VMS_IDLG_SDK_Client"
            java.lang.String r1 = "get aaid failed"
            android.util.Log.e(r8, r1)     // Catch: java.lang.Throwable -> L68
        L3e:
            java.lang.String r8 = com.alipay.sdk.m.p0.c.w     // Catch: java.lang.Throwable -> L68
            com.alipay.sdk.m.p0.c.A = r8     // Catch: java.lang.Throwable -> L68
            com.alipay.sdk.m.p0.c.w = r9     // Catch: java.lang.Throwable -> L68
            goto L66
        L45:
            java.lang.String r8 = com.alipay.sdk.m.p0.c.w     // Catch: java.lang.Throwable -> L68
            if (r8 == 0) goto L50
            java.lang.String r8 = com.alipay.sdk.m.p0.c.w     // Catch: java.lang.Throwable -> L68
            com.alipay.sdk.m.p0.c.y = r8     // Catch: java.lang.Throwable -> L68
            com.alipay.sdk.m.p0.c.w = r9     // Catch: java.lang.Throwable -> L68
            goto L66
        L50:
            java.lang.String r8 = "VMS_IDLG_SDK_Client"
            java.lang.String r9 = "get vaid failed"
            android.util.Log.e(r8, r9)     // Catch: java.lang.Throwable -> L68
            goto L66
        L58:
            java.lang.String r8 = com.alipay.sdk.m.p0.c.w     // Catch: java.lang.Throwable -> L68
            com.alipay.sdk.m.p0.c.x = r8     // Catch: java.lang.Throwable -> L68
            com.alipay.sdk.m.p0.c.w = r9     // Catch: java.lang.Throwable -> L68
            goto L66
        L5f:
            java.lang.String r8 = "VMS_IDLG_SDK_Client"
            java.lang.String r9 = "query timeout"
            android.util.Log.d(r8, r9)     // Catch: java.lang.Throwable -> L68
        L66:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L68
            return
        L68:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L68
            throw r8
    }

    public java.lang.String b() {
            r2 = this;
            boolean r0 = r2.c()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r0 = 4
            r2.a(r0, r1)
            java.lang.String r0 = com.alipay.sdk.m.p0.c.A
            return r0
    }

    public java.lang.String b(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.c()
            if (r0 != 0) goto L8
            r3 = 0
            return r3
        L8:
            java.lang.String r0 = com.alipay.sdk.m.p0.c.y
            if (r0 == 0) goto Ld
            return r0
        Ld:
            r0 = 1
            r2.a(r0, r3)
            com.alipay.sdk.m.p0.d r1 = com.alipay.sdk.m.p0.c.r
            if (r1 != 0) goto L1e
            java.lang.String r1 = com.alipay.sdk.m.p0.c.y
            if (r1 == 0) goto L1e
            android.content.Context r1 = com.alipay.sdk.m.p0.c.o
            a(r1, r0, r3)
        L1e:
            java.lang.String r3 = com.alipay.sdk.m.p0.c.y
            return r3
    }

    public boolean c() {
            r1 = this;
            boolean r0 = com.alipay.sdk.m.p0.c.p
            return r0
    }
}
