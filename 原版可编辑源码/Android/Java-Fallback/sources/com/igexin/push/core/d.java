package com.igexin.push.core;

public class d {
    public static java.lang.String A = null;
    public static java.lang.String B = null;
    public static java.lang.String C = null;
    public static java.lang.String D = null;
    public static java.lang.String E = null;
    public static long F = 0;
    public static long G = 0;
    public static long H = 0;
    public static long I = 0;
    public static java.lang.String J = null;
    public static boolean K = false;
    public static long L = 0;
    public static long M = 0;
    public static java.lang.String N = null;
    public static long O = 0;
    public static int P = 0;
    public static java.lang.String Q = null;
    public static java.lang.String R = null;
    public static java.lang.String S = null;
    public static long T = 0;
    public static java.lang.String U = null;
    public static byte[] V = null;
    public static boolean W = false;
    public static boolean X = false;
    public static boolean Y = false;
    public static java.util.Map<java.lang.String, com.igexin.push.core.bean.PushTaskBean> Z = null;
    public static java.lang.String a = "";
    public static java.util.Map<java.lang.String, java.lang.Integer> aa = null;
    public static java.util.HashMap<java.lang.String, java.lang.Long> ab = null;
    public static int ac = 0;
    public static java.lang.String ad = null;
    public static long ae = 0;
    public static java.lang.String af = null;
    public static java.lang.String ag = null;
    public static java.lang.String ah = null;
    public static java.lang.String ai = null;
    public static java.lang.String aj = null;
    public static java.lang.String ak = null;
    public static boolean al = false;
    public static int am = 0;
    public static int an = 0;
    public static byte[] ao = null;
    private static java.util.Map<java.lang.String, java.lang.Integer> ap = null;
    public static java.lang.String b = "";
    public static java.lang.String c = "";
    public static java.lang.String d = "";
    public static java.lang.String e = "";
    public static java.lang.String f = "";
    public static android.content.Context g;
    public static java.util.concurrent.atomic.AtomicBoolean h;
    public static boolean i;
    public static volatile boolean j;
    public static volatile boolean k;
    public static volatile boolean l;
    public static boolean m;
    public static volatile boolean n;
    public static volatile boolean o;
    public static boolean p;
    public static int q;
    public static int r;
    public static int s;
    public static long t;
    public static java.lang.String u;
    public static java.lang.String v;
    public static java.lang.String w;
    public static java.lang.String x;
    public static java.lang.String y;
    public static java.lang.String z;

    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r1 = 0
            r0.<init>(r1)
            com.igexin.push.core.d.h = r0
            r0 = 1
            com.igexin.push.core.d.i = r0
            com.igexin.push.core.d.j = r1
            com.igexin.push.core.d.l = r0
            com.igexin.push.core.d.m = r0
            com.igexin.push.core.d.p = r0
            com.igexin.push.core.d.q = r1
            com.igexin.push.core.d.r = r1
            com.igexin.push.core.d.s = r1
            r2 = 0
            com.igexin.push.core.d.t = r2
            java.lang.String r0 = android.os.Build.MODEL
            com.igexin.push.core.d.y = r0
            r4 = -1
            com.igexin.push.core.d.F = r4
            com.igexin.push.core.d.G = r4
            com.igexin.push.core.d.H = r2
            com.igexin.push.core.d.I = r2
            java.lang.String r0 = com.igexin.push.config.n.a
            java.lang.String r4 = "debug"
            boolean r0 = r0.equals(r4)
            com.igexin.push.core.d.K = r0
            com.igexin.push.core.d.L = r2
            com.igexin.push.core.d.M = r2
            com.igexin.push.core.d.O = r2
            com.igexin.push.core.d.P = r1
            com.igexin.push.core.d.ac = r1
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int a(java.lang.String r3, boolean r4) {
            java.lang.Class<com.igexin.push.core.d> r0 = com.igexin.push.core.d.class
            monitor-enter(r0)
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L37
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L37
            if (r1 != 0) goto L15
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L37
            r2 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L37
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L37
        L15:
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L37
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> L37
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> L37
            int r1 = r1.intValue()     // Catch: java.lang.Throwable -> L37
            if (r4 == 0) goto L35
            int r1 = r1 + (-1)
            java.util.Map<java.lang.String, java.lang.Integer> r4 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L37
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L37
            r4.put(r3, r2)     // Catch: java.lang.Throwable -> L37
            if (r1 != 0) goto L35
            java.util.Map<java.lang.String, java.lang.Integer> r4 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L37
            r4.remove(r3)     // Catch: java.lang.Throwable -> L37
        L35:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            return r1
        L37:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L37
            throw r3
    }

    public static java.lang.String a() {
            java.lang.String r0 = ""
            return r0
    }

    public static void a(long r0) {
            com.igexin.push.core.d.t = r0
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r0 = com.igexin.b.b.a.a(r0)
            com.igexin.push.core.d.u = r0
            return
    }

    public static boolean a(android.content.Context r3) {
            com.igexin.push.core.d.g = r3
            java.lang.String r0 = r3.getPackageName()
            com.igexin.push.core.d.e = r0
            java.lang.String r0 = com.igexin.push.util.c.b(r3)
            com.igexin.push.core.d.f = r0
            boolean r0 = d()
            r1 = 0
            if (r0 != 0) goto L1d
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.String r0 = "CoreRuntimeInfo|parseManifests failed"
            com.igexin.b.a.c.b.a(r0, r3)
            return r1
        L1d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = com.igexin.push.core.d.a
            r0.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.c
            r0.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.b
            r0.append(r2)
            java.lang.String r2 = r3.getPackageName()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r0 = com.igexin.b.b.a.a(r0)
            byte[] r0 = r0.getBytes()
            com.igexin.push.core.d.V = r0
            c()
            b()
            boolean r0 = com.igexin.push.util.a.f()
            com.igexin.push.core.d.i = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.igexin.push.core.d.Z = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.igexin.push.core.d.aa = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.igexin.push.core.d.ab = r0
            com.igexin.sdk.a.d r0 = new com.igexin.sdk.a.d
            r0.<init>(r3)
            boolean r3 = r0.c()
            com.igexin.push.core.d.k = r3
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            com.igexin.push.core.d.ap = r3
            e()
            r3 = 1
            com.igexin.push.core.d.al = r3
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "CoreRuntimeInfo|getui sdk init success, isPushOn = "
            r0.append(r2)
            boolean r2 = com.igexin.push.core.d.k
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            return r3
    }

    public static boolean a(java.lang.String r2, java.lang.Integer r3, boolean r4) {
            java.lang.Class<com.igexin.push.core.d> r0 = com.igexin.push.core.d.class
            monitor-enter(r0)
            int r1 = r3.intValue()     // Catch: java.lang.Throwable -> L39
            if (r4 == 0) goto L2d
            java.util.Map<java.lang.String, java.lang.Integer> r4 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L39
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L39
            if (r4 == 0) goto L2d
            java.util.Map<java.lang.String, java.lang.Integer> r4 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L39
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L39
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L39
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L39
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L39
            int r1 = r4 + r3
            if (r1 != 0) goto L2d
            java.util.Map<java.lang.String, java.lang.Integer> r3 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L39
            r3.remove(r2)     // Catch: java.lang.Throwable -> L39
            r2 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
            return r2
        L2d:
            java.util.Map<java.lang.String, java.lang.Integer> r3 = com.igexin.push.core.d.ap     // Catch: java.lang.Throwable -> L39
            java.lang.Integer r4 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L39
            r3.put(r2, r4)     // Catch: java.lang.Throwable -> L39
            r2 = 1
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
            return r2
        L39:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L39
            throw r2
    }

    private static void b() {
            java.lang.String r0 = "/sdcard/libs//"
            r1 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = "/sdcard/libs/"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lde
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> Lde
            if (r3 == 0) goto L20
            boolean r3 = r2.isFile()     // Catch: java.lang.Throwable -> Lde
            if (r3 == 0) goto L20
            java.lang.String r3 = "CoreRuntimeInfo|libs is file not directory, delete libs file ++++"
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lde
            com.igexin.b.a.c.b.a(r3, r4)     // Catch: java.lang.Throwable -> Lde
            r2.delete()     // Catch: java.lang.Throwable -> Lde
        L20:
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> Lde
            if (r3 != 0) goto L33
            boolean r2 = r2.mkdir()     // Catch: java.lang.Throwable -> Lde
            if (r2 != 0) goto L33
            java.lang.String r2 = "CoreRuntimeInfo|create libs directory failed ++++++"
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lde
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Throwable -> Lde
        L33:
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> Lde
            r2.getFilesDir()     // Catch: java.lang.Throwable -> Lde
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L76
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L76
            r3.<init>()     // Catch: java.lang.Throwable -> L76
            java.io.File r4 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L76
            java.lang.String r4 = r4.getPath()     // Catch: java.lang.Throwable -> L76
            r3.append(r4)     // Catch: java.lang.Throwable -> L76
            java.lang.String r4 = "/system/tmp/local"
            r3.append(r4)     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L76
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L76
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L76
            if (r3 == 0) goto L91
            com.igexin.push.core.e r3 = new com.igexin.push.core.e     // Catch: java.lang.Throwable -> L76
            r3.<init>()     // Catch: java.lang.Throwable -> L76
            java.io.File[] r2 = r2.listFiles(r3)     // Catch: java.lang.Throwable -> L76
            if (r2 == 0) goto L91
            int r3 = r2.length     // Catch: java.lang.Throwable -> L76
            if (r3 <= 0) goto L91
            int r3 = r2.length     // Catch: java.lang.Throwable -> L76
            r4 = r1
        L6c:
            if (r4 >= r3) goto L91
            r5 = r2[r4]     // Catch: java.lang.Throwable -> L76
            r5.delete()     // Catch: java.lang.Throwable -> L76
            int r4 = r4 + 1
            goto L6c
        L76:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r3.<init>()     // Catch: java.lang.Throwable -> Lde
            java.lang.String r4 = "CoreRuntimeInfo|"
            r3.append(r4)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lde
            r3.append(r2)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Lde
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lde
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Throwable -> Lde
        L91:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r2.<init>()     // Catch: java.lang.Throwable -> Lde
            r2.append(r0)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = com.igexin.push.core.d.e     // Catch: java.lang.Throwable -> Lde
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = ".db"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lde
            com.igexin.push.core.d.R = r2     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = "/sdcard/libs//com.igexin.sdk.deviceId.db"
            com.igexin.push.core.d.S = r2     // Catch: java.lang.Throwable -> Lde
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r2.<init>()     // Catch: java.lang.Throwable -> Lde
            r2.append(r0)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = com.igexin.push.core.d.e     // Catch: java.lang.Throwable -> Lde
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r3 = ".properties"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lde
            com.igexin.push.core.d.Q = r2     // Catch: java.lang.Throwable -> Lde
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lde
            r2.<init>()     // Catch: java.lang.Throwable -> Lde
            r2.append(r0)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r0 = com.igexin.push.core.d.e     // Catch: java.lang.Throwable -> Lde
            r2.append(r0)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r0 = ".bin"
            r2.append(r0)     // Catch: java.lang.Throwable -> Lde
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> Lde
            com.igexin.push.core.d.U = r0     // Catch: java.lang.Throwable -> Lde
            goto Lf9
        Lde:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CoreRuntimeInfo|initFile exception = "
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
        Lf9:
            return
    }

    private static void c() {
            r0 = 0
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Exception -> L20
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = com.igexin.push.core.d.e     // Catch: java.lang.Exception -> L20
            r3 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r3)     // Catch: java.lang.Exception -> L20
            if (r1 == 0) goto L3b
            java.lang.String[] r2 = r1.requestedPermissions     // Catch: java.lang.Exception -> L20
            if (r2 == 0) goto L3b
            java.lang.String[] r1 = r1.requestedPermissions     // Catch: java.lang.Exception -> L20
            int r2 = r1.length     // Catch: java.lang.Exception -> L20
            r3 = r0
        L19:
            if (r3 >= r2) goto L3b
            r4 = r1[r3]     // Catch: java.lang.Exception -> L20
            int r3 = r3 + 1
            goto L19
        L20:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "CoreRuntimeInfo|init exception : "
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
        L3b:
            return
    }

    private static boolean d() {
            android.content.Context r0 = com.igexin.push.core.d.g
            java.lang.String r0 = com.igexin.push.core.b.a.a(r0)
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r1 = com.igexin.push.core.b.a.b(r1)
            android.content.Context r2 = com.igexin.push.core.d.g
            java.lang.String r2 = com.igexin.push.core.b.a.c(r2)
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            r4 = 0
            if (r3 != 0) goto L25
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L25
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L66
        L25:
            android.content.Context r0 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L8f
            android.content.pm.PackageManager r0 = r0.getPackageManager()     // Catch: java.lang.Throwable -> L8f
            java.lang.String r1 = com.igexin.push.core.d.e     // Catch: java.lang.Throwable -> L8f
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ApplicationInfo r0 = r0.getApplicationInfo(r1, r2)     // Catch: java.lang.Throwable -> L8f
            if (r0 == 0) goto L8e
            android.os.Bundle r1 = r0.metaData     // Catch: java.lang.Throwable -> L8f
            if (r1 == 0) goto L8e
            android.os.Bundle r1 = r0.metaData     // Catch: java.lang.Throwable -> L8f
            java.lang.String r2 = "PUSH_APPID"
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Throwable -> L8f
            android.os.Bundle r2 = r0.metaData     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = "PUSH_APPSECRET"
            java.lang.String r2 = r2.getString(r3)     // Catch: java.lang.Throwable -> L8f
            android.os.Bundle r0 = r0.metaData     // Catch: java.lang.Throwable -> L8f
            java.lang.String r3 = "PUSH_APPKEY"
            java.lang.String r0 = r0.getString(r3)     // Catch: java.lang.Throwable -> L8f
            if (r1 == 0) goto L57
            java.lang.String r1 = r1.trim()     // Catch: java.lang.Throwable -> L8f
        L57:
            if (r2 == 0) goto L5d
            java.lang.String r2 = r2.trim()     // Catch: java.lang.Throwable -> L8f
        L5d:
            if (r0 == 0) goto L63
            java.lang.String r0 = r0.trim()     // Catch: java.lang.Throwable -> L8f
        L63:
            r5 = r1
            r1 = r0
            r0 = r5
        L66:
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L87
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L87
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 == 0) goto L79
            goto L87
        L79:
            com.igexin.push.core.d.a = r0
            com.igexin.push.core.d.b = r1
            com.igexin.push.core.d.c = r2
            java.lang.String r0 = com.igexin.push.config.SDKUrlConfig.getLocation()
            com.igexin.push.core.d.d = r0
            r0 = 1
            return r0
        L87:
            java.lang.Object[] r0 = new java.lang.Object[r4]
            java.lang.String r1 = "CoreRuntimeInfo|getui sdk init error, missing parm #####"
            com.igexin.b.a.c.b.a(r1, r0)
        L8e:
            return r4
        L8f:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "CoreRuntimeInfo|get ApplicationInfo meta data exception :"
            r1.append(r2)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.Object[] r1 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r0, r1)
            return r4
    }

    private static void e() {
            r0 = 0
            com.igexin.push.core.c r1 = com.igexin.push.core.c.a()     // Catch: java.lang.Throwable -> L1e
            com.igexin.push.b.b r2 = r1.k()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r3 = "message"
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r0 = r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L1e
            if (r0 == 0) goto L1b
            int r1 = r0.getCount()     // Catch: java.lang.Throwable -> L1e
            com.igexin.push.core.d.an = r1     // Catch: java.lang.Throwable -> L1e
        L1b:
            if (r0 == 0) goto L23
            goto L20
        L1e:
            if (r0 == 0) goto L23
        L20:
            r0.close()
        L23:
            return
    }
}
