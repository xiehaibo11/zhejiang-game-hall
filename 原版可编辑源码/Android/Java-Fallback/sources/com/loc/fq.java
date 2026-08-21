package com.loc;

public final class fq {
    private static double A = 0.0d;
    private static boolean B = false;
    private static int C = 0;
    private static int D = 0;
    private static boolean E = false;
    private static boolean F = false;
    private static boolean G = false;
    private static boolean H = false;
    private static long I = 0;
    private static boolean J = false;
    private static int K = 0;
    private static boolean L = false;
    private static int M = 0;
    private static boolean N = false;
    private static java.lang.String O = null;
    private static long P = 0;
    static long a = 0;
    public static volatile long b = 0;
    static boolean c = false;
    public static boolean d = false;
    public static boolean e = false;
    public static int f = 0;
    public static int g = 0;
    public static boolean h = false;
    private static volatile boolean i = false;
    private static boolean j = true;
    private static int k = 1000;
    private static int l = 200;
    private static boolean m = false;
    private static int n = 20;
    private static int o = 0;
    private static volatile int p = 0;
    private static boolean q = true;
    private static boolean r = false;
    private static int s = -1;
    private static long t;
    private static java.util.ArrayList<java.lang.String> u;
    private static java.util.ArrayList<java.lang.String> v;
    private static volatile boolean w;
    private static boolean x;
    private static long y;
    private static boolean z;


    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.loc.fq.u = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.loc.fq.v = r0
            r0 = 0
            com.loc.fq.w = r0
            r1 = 1
            com.loc.fq.x = r1
            r2 = 300000(0x493e0, double:1.482197E-318)
            com.loc.fq.y = r2
            com.loc.fq.z = r0
            r2 = 4603741668684706349(0x3fe3c6a7ef9db22d, double:0.618)
            com.loc.fq.A = r2
            com.loc.fq.B = r1
            r2 = 80
            com.loc.fq.C = r2
            r2 = 5
            com.loc.fq.D = r2
            r3 = 3600000(0x36ee80, double:1.7786363E-317)
            com.loc.fq.a = r3
            com.loc.fq.E = r0
            com.loc.fq.F = r1
            com.loc.fq.G = r0
            r3 = 0
            com.loc.fq.b = r3
            com.loc.fq.c = r0
            com.loc.fq.H = r1
            r5 = -1
            com.loc.fq.I = r5
            com.loc.fq.J = r1
            com.loc.fq.K = r1
            com.loc.fq.L = r0
            com.loc.fq.M = r2
            com.loc.fq.N = r0
            java.lang.String r1 = "CMjAzLjEwNy4xLjEvMTU0MDgxL2Q"
            com.loc.fq.O = r1
            com.loc.fq.P = r3
            com.loc.fq.d = r0
            com.loc.fq.e = r0
            r1 = 20480(0x5000, float:2.8699E-41)
            com.loc.fq.f = r1
            r1 = 10800000(0xa4cb80, float:1.5134023E-38)
            com.loc.fq.g = r1
            com.loc.fq.h = r0
            return
    }

    public static void a(android.content.Context r3) {
            boolean r0 = com.loc.fq.i
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            com.loc.fq.i = r0
            com.loc.w r0 = com.loc.fr.c()
            java.lang.String r1 = com.loc.fr.d()
            com.loc.fq$1 r2 = new com.loc.fq$1
            r2.<init>(r3)
            com.loc.m.a(r3, r0, r1, r2)
            return
    }

    private static void a(android.content.Context r5, org.json.JSONObject r6, android.content.SharedPreferences.Editor r7) {
            java.lang.String r0 = "asw"
            java.lang.String r1 = "AuthUtil"
            java.lang.String r2 = "13S"
            org.json.JSONObject r6 = r6.optJSONObject(r2)     // Catch: java.lang.Throwable -> L74
            if (r6 == 0) goto L73
            java.lang.String r2 = "at"
            r3 = 123(0x7b, float:1.72E-43)
            int r2 = r6.optInt(r2, r3)     // Catch: java.lang.Throwable -> L21
            int r2 = r2 * 60
            int r2 = r2 * 1000
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L21
            com.loc.fq.a = r2     // Catch: java.lang.Throwable -> L21
            java.lang.String r4 = "13S_at"
            com.loc.fy.a(r7, r4, r2)     // Catch: java.lang.Throwable -> L21
            goto L27
        L21:
            r2 = move-exception
            java.lang.String r3 = "requestSdkAuthInterval"
            com.loc.fr.a(r2, r1, r3)     // Catch: java.lang.Throwable -> L74
        L27:
            e(r6, r7)     // Catch: java.lang.Throwable -> L74
            r1 = 1
            java.lang.String r2 = "nla"
            java.lang.String r2 = r6.optString(r2)     // Catch: java.lang.Throwable -> L3c
            boolean r2 = com.loc.m.a(r2, r1)     // Catch: java.lang.Throwable -> L3c
            com.loc.fq.F = r2     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = "13S_nla"
            com.loc.fy.a(r7, r3, r2)     // Catch: java.lang.Throwable -> L3c
        L3c:
            java.lang.String r2 = r6.optString(r0)     // Catch: java.lang.Throwable -> L49
            boolean r1 = com.loc.m.a(r2, r1)     // Catch: java.lang.Throwable -> L49
            com.loc.fq.H = r1     // Catch: java.lang.Throwable -> L49
            com.loc.fy.a(r7, r0, r1)     // Catch: java.lang.Throwable -> L49
        L49:
            java.lang.String r0 = "mlpl"
            org.json.JSONArray r6 = r6.optJSONArray(r0)     // Catch: java.lang.Throwable -> L73
            java.lang.String r0 = "13S_mlpl"
            if (r6 == 0) goto L6d
            int r1 = r6.length()     // Catch: java.lang.Throwable -> L73
            if (r1 <= 0) goto L6d
            if (r5 == 0) goto L6d
            java.lang.String r1 = r6.toString()     // Catch: java.lang.Throwable -> L73
            java.lang.String r1 = com.loc.x.b(r1)     // Catch: java.lang.Throwable -> L73
            com.loc.fy.a(r7, r0, r1)     // Catch: java.lang.Throwable -> L73
            boolean r5 = a(r5, r6)     // Catch: java.lang.Throwable -> L73
            com.loc.fq.G = r5     // Catch: java.lang.Throwable -> L73
            return
        L6d:
            r5 = 0
            com.loc.fq.G = r5     // Catch: java.lang.Throwable -> L73
            com.loc.fy.a(r7, r0)     // Catch: java.lang.Throwable -> L73
        L73:
            return
        L74:
            r5 = move-exception
            java.lang.String r6 = "loadConfigAbleStatus"
            com.loc.fr.a(r5, r1, r6)
            return
    }

    private static void a(com.loc.m.b r9, android.content.SharedPreferences.Editor r10) {
            com.loc.m$b$a r9 = r9.g     // Catch: java.lang.Throwable -> L8b
            if (r9 == 0) goto L8a
            boolean r0 = r9.a     // Catch: java.lang.Throwable -> L8b
            com.loc.fq.j = r0     // Catch: java.lang.Throwable -> L8b
            java.lang.String r1 = "exception"
            com.loc.fy.a(r10, r1, r0)     // Catch: java.lang.Throwable -> L8b
            org.json.JSONObject r9 = r9.c     // Catch: java.lang.Throwable -> L8b
            java.lang.String r0 = "pms"
            java.lang.String r1 = "rot"
            java.lang.String r2 = "ms"
            java.lang.String r3 = "igu"
            java.lang.String r4 = "mpn"
            java.lang.String r5 = "fn"
            if (r9 == 0) goto L5a
            int r6 = com.loc.fq.k     // Catch: java.lang.Throwable -> L8b
            int r6 = r9.optInt(r5, r6)     // Catch: java.lang.Throwable -> L8b
            com.loc.fq.k = r6     // Catch: java.lang.Throwable -> L8b
            int r6 = com.loc.fq.l     // Catch: java.lang.Throwable -> L8b
            int r6 = r9.optInt(r4, r6)     // Catch: java.lang.Throwable -> L8b
            com.loc.fq.l = r6     // Catch: java.lang.Throwable -> L8b
            r7 = 500(0x1f4, float:7.0E-43)
            if (r6 <= r7) goto L33
            com.loc.fq.l = r7     // Catch: java.lang.Throwable -> L8b
        L33:
            int r6 = com.loc.fq.l     // Catch: java.lang.Throwable -> L8b
            r7 = 30
            if (r6 >= r7) goto L3b
            com.loc.fq.l = r7     // Catch: java.lang.Throwable -> L8b
        L3b:
            java.lang.String r6 = r9.optString(r3)     // Catch: java.lang.Throwable -> L8b
            r7 = 0
            boolean r6 = com.loc.m.a(r6, r7)     // Catch: java.lang.Throwable -> L8b
            com.loc.fq.m = r6     // Catch: java.lang.Throwable -> L8b
            int r6 = com.loc.fq.n     // Catch: java.lang.Throwable -> L8b
            int r6 = r9.optInt(r2, r6)     // Catch: java.lang.Throwable -> L8b
            com.loc.fq.n = r6     // Catch: java.lang.Throwable -> L8b
            int r6 = r9.optInt(r1, r7)     // Catch: java.lang.Throwable -> L8b
            com.loc.fq.p = r6     // Catch: java.lang.Throwable -> L8b
            int r9 = r9.optInt(r0, r7)     // Catch: java.lang.Throwable -> L8b
            com.loc.fq.o = r9     // Catch: java.lang.Throwable -> L8b
        L5a:
            int r9 = com.loc.fq.k     // Catch: java.lang.Throwable -> L8b
            boolean r6 = com.loc.fq.m     // Catch: java.lang.Throwable -> L8b
            int r7 = com.loc.fq.n     // Catch: java.lang.Throwable -> L8b
            int r8 = com.loc.fq.o     // Catch: java.lang.Throwable -> L8b
            com.loc.by.a(r9, r6, r7, r8)     // Catch: java.lang.Throwable -> L8b
            boolean r9 = com.loc.fq.m     // Catch: java.lang.Throwable -> L8b
            int r6 = com.loc.fq.o     // Catch: java.lang.Throwable -> L8b
            com.loc.ca.a(r9, r6)     // Catch: java.lang.Throwable -> L8b
            int r9 = com.loc.fq.k     // Catch: java.lang.Throwable -> L8b
            com.loc.fy.a(r10, r5, r9)     // Catch: java.lang.Throwable -> L8b
            int r9 = com.loc.fq.l     // Catch: java.lang.Throwable -> L8b
            com.loc.fy.a(r10, r4, r9)     // Catch: java.lang.Throwable -> L8b
            boolean r9 = com.loc.fq.m     // Catch: java.lang.Throwable -> L8b
            com.loc.fy.a(r10, r3, r9)     // Catch: java.lang.Throwable -> L8b
            int r9 = com.loc.fq.n     // Catch: java.lang.Throwable -> L8b
            com.loc.fy.a(r10, r2, r9)     // Catch: java.lang.Throwable -> L8b
            int r9 = com.loc.fq.p     // Catch: java.lang.Throwable -> L8b
            com.loc.fy.a(r10, r1, r9)     // Catch: java.lang.Throwable -> L8b
            int r9 = com.loc.fq.o     // Catch: java.lang.Throwable -> L8b
            com.loc.fy.a(r10, r0, r9)     // Catch: java.lang.Throwable -> L8b
        L8a:
            return
        L8b:
            r9 = move-exception
            java.lang.String r10 = "AuthUtil"
            java.lang.String r0 = "loadConfigDataUploadException"
            com.loc.fr.a(r9, r10, r0)
            return
    }

    private static void a(org.json.JSONObject r7, android.content.SharedPreferences.Editor r8) {
            java.lang.String r0 = "11G"
            org.json.JSONObject r7 = r7.optJSONObject(r0)     // Catch: java.lang.Throwable -> L6e
            if (r7 == 0) goto L6d
            java.lang.String r0 = "able"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L6e
            r1 = 1
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L6e
            com.loc.fq.x = r0     // Catch: java.lang.Throwable -> L6e
            if (r0 == 0) goto L24
            java.lang.String r0 = "c"
            r1 = 300(0x12c, float:4.2E-43)
            int r0 = r7.optInt(r0, r1)     // Catch: java.lang.Throwable -> L6e
            int r0 = r0 * 1000
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L6e
            com.loc.fq.y = r0     // Catch: java.lang.Throwable -> L6e
        L24:
            java.lang.String r0 = "fa"
            java.lang.String r0 = r7.optString(r0)     // Catch: java.lang.Throwable -> L6e
            r1 = 0
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L6e
            com.loc.fq.z = r0     // Catch: java.lang.Throwable -> L6e
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r2 = 4596373779694328218(0x3fc999999999999a, double:0.2)
            java.lang.String r4 = "ms"
            r5 = 4603741668684706349(0x3fe3c6a7ef9db22d, double:0.618)
            double r4 = r7.optDouble(r4, r5)     // Catch: java.lang.Throwable -> L6e
            double r2 = java.lang.Math.max(r2, r4)     // Catch: java.lang.Throwable -> L6e
            double r0 = java.lang.Math.min(r0, r2)     // Catch: java.lang.Throwable -> L6e
            com.loc.fq.A = r0     // Catch: java.lang.Throwable -> L6e
            java.lang.String r7 = "ca"
            boolean r0 = com.loc.fq.x     // Catch: java.lang.Throwable -> L6e
            com.loc.fy.a(r8, r7, r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r7 = "ct"
            long r0 = com.loc.fq.y     // Catch: java.lang.Throwable -> L6e
            com.loc.fy.a(r8, r7, r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r7 = "11G_fa"
            boolean r0 = com.loc.fq.z     // Catch: java.lang.Throwable -> L6e
            com.loc.fy.a(r8, r7, r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r7 = "11G_ms"
            double r0 = com.loc.fq.A     // Catch: java.lang.Throwable -> L6e
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L6e
            com.loc.fy.a(r8, r7, r0)     // Catch: java.lang.Throwable -> L6e
        L6d:
            return
        L6e:
            r7 = move-exception
            java.lang.String r8 = "AuthUtil"
            java.lang.String r0 = "loadConfigDataCacheAble"
            com.loc.fr.a(r7, r8, r0)
            return
    }

    public static boolean a() {
            boolean r0 = com.loc.fq.j
            return r0
    }

    public static boolean a(long r6) {
            boolean r0 = com.loc.fq.x
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            long r2 = com.loc.fz.a()
            long r2 = r2 - r6
            long r6 = com.loc.fq.y
            r4 = 0
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 < 0) goto L19
            int r0 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r0 >= 0) goto L18
            goto L19
        L18:
            return r1
        L19:
            r6 = 1
            return r6
    }

    static boolean a(android.content.Context r2, com.loc.m.b r3) {
            java.lang.String r0 = "pref"
            android.content.SharedPreferences$Editor r0 = com.loc.fy.a(r2, r0)     // Catch: java.lang.Throwable -> L38
            a(r3, r0)     // Catch: java.lang.Throwable -> L39
            c(r2)     // Catch: java.lang.Throwable -> L39
            org.json.JSONObject r3 = r3.f     // Catch: java.lang.Throwable -> L39
            r1 = 1
            if (r3 != 0) goto L17
            if (r0 == 0) goto L16
            com.loc.fy.a(r0)     // Catch: java.lang.Throwable -> L16
        L16:
            return r1
        L17:
            a(r2, r3, r0)     // Catch: java.lang.Throwable -> L39
            a(r3, r0)     // Catch: java.lang.Throwable -> L39
            d(r3, r0)     // Catch: java.lang.Throwable -> L39
            f(r3, r0)     // Catch: java.lang.Throwable -> L39
            h(r3, r0)     // Catch: java.lang.Throwable -> L39
            g(r3, r0)     // Catch: java.lang.Throwable -> L39
            i(r3, r0)     // Catch: java.lang.Throwable -> L39
            b(r3, r0)     // Catch: java.lang.Throwable -> L39
            c(r3, r0)     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L37
            com.loc.fy.a(r0)     // Catch: java.lang.Throwable -> L37
        L37:
            return r1
        L38:
            r0 = 0
        L39:
            if (r0 == 0) goto L3e
            com.loc.fy.a(r0)     // Catch: java.lang.Throwable -> L3e
        L3e:
            r2 = 0
            return r2
    }

    private static boolean a(android.content.Context r3, org.json.JSONArray r4) {
            r0 = 0
            if (r4 == 0) goto L21
            int r1 = r4.length()     // Catch: java.lang.Throwable -> L21
            if (r1 <= 0) goto L21
            if (r3 == 0) goto L21
            r1 = 0
        Lc:
            int r2 = r4.length()     // Catch: java.lang.Throwable -> L21
            if (r1 >= r2) goto L21
            java.lang.String r2 = r4.getString(r1)     // Catch: java.lang.Throwable -> L21
            boolean r2 = com.loc.fz.b(r3, r2)     // Catch: java.lang.Throwable -> L21
            if (r2 == 0) goto L1e
            r3 = 1
            return r3
        L1e:
            int r1 = r1 + 1
            goto Lc
        L21:
            return r0
    }

    public static int b() {
            int r0 = com.loc.fq.l
            return r0
    }

    public static void b(android.content.Context r8) {
            java.lang.String r0 = ""
            java.lang.String r1 = "AuthUtil"
            java.lang.String r2 = "pref"
            boolean r3 = com.loc.fq.w
            if (r3 == 0) goto Lb
            return
        Lb:
            r3 = 1
            com.loc.fq.w = r3
            java.lang.String r3 = "exception"
            boolean r4 = com.loc.fq.j     // Catch: java.lang.Throwable -> L1c
            boolean r3 = com.loc.fy.a(r8, r2, r3, r4)     // Catch: java.lang.Throwable -> L1c
            com.loc.fq.j = r3     // Catch: java.lang.Throwable -> L1c
            c(r8)     // Catch: java.lang.Throwable -> L1c
            goto L22
        L1c:
            r3 = move-exception
            java.lang.String r4 = "loadLastAbleState p1"
            com.loc.fr.a(r3, r1, r4)
        L22:
            r3 = 0
            java.lang.String r4 = "fn"
            int r5 = com.loc.fq.k     // Catch: java.lang.Throwable -> L6c
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L6c
            com.loc.fq.k = r4     // Catch: java.lang.Throwable -> L6c
            java.lang.String r4 = "mpn"
            int r5 = com.loc.fq.l     // Catch: java.lang.Throwable -> L6c
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L6c
            com.loc.fq.l = r4     // Catch: java.lang.Throwable -> L6c
            java.lang.String r4 = "igu"
            boolean r5 = com.loc.fq.m     // Catch: java.lang.Throwable -> L6c
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L6c
            com.loc.fq.m = r4     // Catch: java.lang.Throwable -> L6c
            java.lang.String r4 = "ms"
            int r5 = com.loc.fq.n     // Catch: java.lang.Throwable -> L6c
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L6c
            com.loc.fq.n = r4     // Catch: java.lang.Throwable -> L6c
            java.lang.String r4 = "rot"
            int r4 = com.loc.fy.a(r8, r2, r4, r3)     // Catch: java.lang.Throwable -> L6c
            com.loc.fq.p = r4     // Catch: java.lang.Throwable -> L6c
            java.lang.String r4 = "pms"
            int r4 = com.loc.fy.a(r8, r2, r4, r3)     // Catch: java.lang.Throwable -> L6c
            com.loc.fq.o = r4     // Catch: java.lang.Throwable -> L6c
            int r5 = com.loc.fq.k     // Catch: java.lang.Throwable -> L6c
            boolean r6 = com.loc.fq.m     // Catch: java.lang.Throwable -> L6c
            int r7 = com.loc.fq.n     // Catch: java.lang.Throwable -> L6c
            com.loc.by.a(r5, r6, r7, r4)     // Catch: java.lang.Throwable -> L6c
            boolean r4 = com.loc.fq.m     // Catch: java.lang.Throwable -> L6c
            int r5 = com.loc.fq.o     // Catch: java.lang.Throwable -> L6c
            com.loc.ca.a(r4, r5)     // Catch: java.lang.Throwable -> L6c
            goto L72
        L6c:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p2"
            com.loc.fr.a(r4, r1, r5)
        L72:
            java.lang.String r4 = "ca"
            boolean r5 = com.loc.fq.x     // Catch: java.lang.Throwable -> Lb2
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> Lb2
            com.loc.fq.x = r4     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r4 = "ct"
            long r5 = com.loc.fq.y     // Catch: java.lang.Throwable -> Lb2
            long r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> Lb2
            com.loc.fq.y = r4     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r4 = "11G_fa"
            boolean r5 = com.loc.fq.z     // Catch: java.lang.Throwable -> Lb2
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> Lb2
            com.loc.fq.z = r4     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r4 = "11G_ms"
            double r5 = com.loc.fq.A     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> Lb2
            java.lang.Double r4 = java.lang.Double.valueOf(r4)     // Catch: java.lang.Throwable -> Lb2
            double r4 = r4.doubleValue()     // Catch: java.lang.Throwable -> Lb2
            com.loc.fq.A = r4     // Catch: java.lang.Throwable -> Lb2
            r6 = 4596373779694328218(0x3fc999999999999a, double:0.2)
            double r4 = java.lang.Math.max(r6, r4)     // Catch: java.lang.Throwable -> Lb2
            com.loc.fq.A = r4     // Catch: java.lang.Throwable -> Lb2
            goto Lb8
        Lb2:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p3"
            com.loc.fr.a(r4, r1, r5)
        Lb8:
            java.lang.String r4 = "fr"
            boolean r5 = com.loc.fq.c     // Catch: java.lang.Throwable -> Lc3
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> Lc3
            com.loc.fq.c = r4     // Catch: java.lang.Throwable -> Lc3
            goto Lc9
        Lc3:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p4"
            com.loc.fr.a(r4, r1, r5)
        Lc9:
            java.lang.String r4 = "asw"
            boolean r5 = com.loc.fq.H     // Catch: java.lang.Throwable -> Ld4
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> Ld4
            com.loc.fq.H = r4     // Catch: java.lang.Throwable -> Ld4
            goto Lda
        Ld4:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p5"
            com.loc.fr.a(r4, r1, r5)
        Lda:
            java.lang.String r4 = "awsi"
            long r5 = com.loc.fq.I     // Catch: java.lang.Throwable -> Le5
            long r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> Le5
            com.loc.fq.I = r4     // Catch: java.lang.Throwable -> Le5
            goto Leb
        Le5:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p6"
            com.loc.fr.a(r4, r1, r5)
        Leb:
            java.lang.String r4 = "15ua"
            boolean r5 = com.loc.fq.J     // Catch: java.lang.Throwable -> L10a
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L10a
            com.loc.fq.J = r4     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "15un"
            int r5 = com.loc.fq.K     // Catch: java.lang.Throwable -> L10a
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L10a
            com.loc.fq.K = r4     // Catch: java.lang.Throwable -> L10a
            java.lang.String r4 = "15ust"
            long r5 = com.loc.fq.P     // Catch: java.lang.Throwable -> L10a
            long r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L10a
            com.loc.fq.P = r4     // Catch: java.lang.Throwable -> L10a
            goto L110
        L10a:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p7"
            com.loc.fr.a(r4, r1, r5)
        L110:
            java.lang.String r4 = "ok9"
            boolean r5 = com.loc.fq.L     // Catch: java.lang.Throwable -> L12f
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L12f
            com.loc.fq.L = r4     // Catch: java.lang.Throwable -> L12f
            java.lang.String r4 = "ok10"
            int r5 = com.loc.fq.M     // Catch: java.lang.Throwable -> L12f
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L12f
            com.loc.fq.M = r4     // Catch: java.lang.Throwable -> L12f
            java.lang.String r4 = "ok11"
            java.lang.String r5 = com.loc.fq.O     // Catch: java.lang.Throwable -> L12f
            java.lang.String r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L12f
            com.loc.fq.O = r4     // Catch: java.lang.Throwable -> L12f
            goto L135
        L12f:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p8"
            com.loc.fr.a(r4, r1, r5)
        L135:
            java.lang.String r4 = "17ya"
            boolean r4 = com.loc.fy.a(r8, r2, r4, r3)     // Catch: java.lang.Throwable -> L161
            com.loc.fq.d = r4     // Catch: java.lang.Throwable -> L161
            java.lang.String r4 = "17ym"
            boolean r4 = com.loc.fy.a(r8, r2, r4, r3)     // Catch: java.lang.Throwable -> L161
            com.loc.fq.e = r4     // Catch: java.lang.Throwable -> L161
            java.lang.String r4 = "17yi"
            r5 = 2
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L161
            int r4 = r4 * 60
            int r4 = r4 * 60
            int r4 = r4 * 1000
            com.loc.fq.g = r4     // Catch: java.lang.Throwable -> L161
            java.lang.String r4 = "17yx"
            r5 = 100
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L161
            int r4 = r4 * 1024
            com.loc.fq.f = r4     // Catch: java.lang.Throwable -> L161
            goto L167
        L161:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p9"
            com.loc.fr.a(r4, r1, r5)
        L167:
            long r4 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L1a0
            com.loc.fq.b = r4     // Catch: java.lang.Throwable -> L1a0
            java.lang.String r4 = "13S_at"
            long r5 = com.loc.fq.a     // Catch: java.lang.Throwable -> L1a0
            long r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L1a0
            com.loc.fq.a = r4     // Catch: java.lang.Throwable -> L1a0
            java.lang.String r4 = "13S_nla"
            boolean r5 = com.loc.fq.F     // Catch: java.lang.Throwable -> L1a0
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L1a0
            com.loc.fq.F = r4     // Catch: java.lang.Throwable -> L1a0
            java.lang.String r4 = "13J_able"
            boolean r5 = com.loc.fq.B     // Catch: java.lang.Throwable -> L1a0
            boolean r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L1a0
            com.loc.fq.B = r4     // Catch: java.lang.Throwable -> L1a0
            java.lang.String r4 = "13J_c"
            int r5 = com.loc.fq.C     // Catch: java.lang.Throwable -> L1a0
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L1a0
            com.loc.fq.C = r4     // Catch: java.lang.Throwable -> L1a0
            java.lang.String r4 = "13J_t"
            int r5 = com.loc.fq.D     // Catch: java.lang.Throwable -> L1a0
            int r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L1a0
            com.loc.fq.D = r4     // Catch: java.lang.Throwable -> L1a0
            goto L1a6
        L1a0:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p10"
            com.loc.fr.a(r4, r1, r5)
        L1a6:
            com.loc.m.b(r8)
            java.lang.String r4 = "13S_mlpl"
            r5 = 0
            java.lang.String r4 = com.loc.fy.a(r8, r2, r4, r5)     // Catch: java.lang.Throwable -> L1c6
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L1c6
            if (r5 != 0) goto L1cc
            java.lang.String r4 = com.loc.x.c(r4)     // Catch: java.lang.Throwable -> L1c6
            org.json.JSONArray r5 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L1c6
            r5.<init>(r4)     // Catch: java.lang.Throwable -> L1c6
            boolean r4 = a(r8, r5)     // Catch: java.lang.Throwable -> L1c6
            com.loc.fq.G = r4     // Catch: java.lang.Throwable -> L1c6
            goto L1cc
        L1c6:
            r4 = move-exception
            java.lang.String r5 = "loadLastAbleState p11"
            com.loc.fr.a(r4, r1, r5)
        L1cc:
            java.lang.String r4 = "197a"
            boolean r4 = com.loc.fy.a(r8, r2, r4, r3)     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r5 = "197dv"
            java.lang.String r5 = com.loc.fy.a(r8, r2, r5, r0)     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r6 = "197tv"
            java.lang.String r0 = com.loc.fy.a(r8, r2, r6, r0)     // Catch: java.lang.Throwable -> L1fa
            if (r4 == 0) goto L200
            java.lang.String r4 = com.loc.fr.a     // Catch: java.lang.Throwable -> L1fa
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L1fa
            if (r4 == 0) goto L200
            java.lang.String[] r4 = com.loc.fr.b     // Catch: java.lang.Throwable -> L1fa
            int r5 = r4.length     // Catch: java.lang.Throwable -> L1fa
        L1eb:
            if (r3 >= r5) goto L200
            r6 = r4[r3]     // Catch: java.lang.Throwable -> L1fa
            boolean r6 = r6.equals(r0)     // Catch: java.lang.Throwable -> L1fa
            if (r6 == 0) goto L1f7
            com.loc.fr.a = r0     // Catch: java.lang.Throwable -> L1fa
        L1f7:
            int r3 = r3 + 1
            goto L1eb
        L1fa:
            r0 = move-exception
            java.lang.String r3 = "loadLastAbleState p12"
            com.loc.fr.a(r0, r1, r3)
        L200:
            java.lang.String r0 = "1A6"
            boolean r3 = com.loc.fq.h     // Catch: java.lang.Throwable -> L20b
            boolean r8 = com.loc.fy.a(r8, r2, r0, r3)     // Catch: java.lang.Throwable -> L20b
            com.loc.fq.h = r8     // Catch: java.lang.Throwable -> L20b
            return
        L20b:
            r8 = move-exception
            java.lang.String r0 = "loadSdkEnableConfig p13"
            com.loc.fr.a(r8, r1, r0)
            return
    }

    private static void b(org.json.JSONObject r4, android.content.SharedPreferences.Editor r5) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "197"
            org.json.JSONObject r4 = r4.getJSONObject(r0)     // Catch: java.lang.Throwable -> L3c
            if (r4 == 0) goto L3c
            java.lang.String r0 = "able"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L3c
            r1 = 0
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = "197a"
            com.loc.fy.a(r5, r1, r0)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = "197tv"
            java.lang.String r2 = "197dv"
            java.lang.String r3 = ""
            if (r0 == 0) goto L36
            java.lang.String r0 = "sv"
            java.lang.String r0 = r4.optString(r0, r3)     // Catch: java.lang.Throwable -> L3c
            com.loc.fy.a(r5, r2, r0)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r0 = "tv"
            java.lang.String r4 = r4.optString(r0, r3)     // Catch: java.lang.Throwable -> L3c
            com.loc.fy.a(r5, r1, r4)     // Catch: java.lang.Throwable -> L3c
            return
        L36:
            com.loc.fy.a(r5, r2, r3)     // Catch: java.lang.Throwable -> L3c
            com.loc.fy.a(r5, r1, r3)     // Catch: java.lang.Throwable -> L3c
        L3c:
            return
    }

    public static int c() {
            int r0 = com.loc.fq.p
            if (r0 >= 0) goto L7
            r0 = 0
            com.loc.fq.p = r0
        L7:
            int r0 = com.loc.fq.p
            return r0
    }

    public static void c(android.content.Context r2) {
            com.loc.w r0 = com.loc.fr.c()     // Catch: java.lang.Throwable -> Lc
            boolean r1 = com.loc.fq.j     // Catch: java.lang.Throwable -> Lc
            r0.a(r1)     // Catch: java.lang.Throwable -> Lc
            com.loc.av.a(r2, r0)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    private static void c(org.json.JSONObject r2, android.content.SharedPreferences.Editor r3) {
            java.lang.String r0 = "1A6"
            if (r2 != 0) goto L5
            return
        L5:
            org.json.JSONObject r2 = r2.getJSONObject(r0)     // Catch: java.lang.Throwable -> L1b
            if (r2 == 0) goto L1b
            java.lang.String r1 = "ic"
            java.lang.String r2 = r2.optString(r1)     // Catch: java.lang.Throwable -> L1b
            r1 = 0
            boolean r2 = com.loc.m.a(r2, r1)     // Catch: java.lang.Throwable -> L1b
            com.loc.fy.a(r3, r0, r2)     // Catch: java.lang.Throwable -> L1b
            com.loc.fq.h = r2     // Catch: java.lang.Throwable -> L1b
        L1b:
            return
    }

    public static long d() {
            long r0 = com.loc.fq.y
            return r0
    }

    private static void d(org.json.JSONObject r2, android.content.SharedPreferences.Editor r3) {
            java.lang.String r0 = "13J"
            org.json.JSONObject r2 = r2.optJSONObject(r0)     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L40
            java.lang.String r0 = "able"
            java.lang.String r0 = r2.optString(r0)     // Catch: java.lang.Throwable -> L41
            r1 = 1
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L41
            com.loc.fq.B = r0     // Catch: java.lang.Throwable -> L41
            if (r0 == 0) goto L2b
            java.lang.String r0 = "c"
            int r1 = com.loc.fq.C     // Catch: java.lang.Throwable -> L41
            int r0 = r2.optInt(r0, r1)     // Catch: java.lang.Throwable -> L41
            com.loc.fq.C = r0     // Catch: java.lang.Throwable -> L41
            java.lang.String r0 = "t"
            int r1 = com.loc.fq.D     // Catch: java.lang.Throwable -> L41
            int r2 = r2.optInt(r0, r1)     // Catch: java.lang.Throwable -> L41
            com.loc.fq.D = r2     // Catch: java.lang.Throwable -> L41
        L2b:
            java.lang.String r2 = "13J_able"
            boolean r0 = com.loc.fq.B     // Catch: java.lang.Throwable -> L41
            com.loc.fy.a(r3, r2, r0)     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "13J_c"
            int r0 = com.loc.fq.C     // Catch: java.lang.Throwable -> L41
            com.loc.fy.a(r3, r2, r0)     // Catch: java.lang.Throwable -> L41
            java.lang.String r2 = "13J_t"
            int r0 = com.loc.fq.D     // Catch: java.lang.Throwable -> L41
            com.loc.fy.a(r3, r2, r0)     // Catch: java.lang.Throwable -> L41
        L40:
            return
        L41:
            r2 = move-exception
            java.lang.String r3 = "AuthUtil"
            java.lang.String r0 = "loadConfigDataGpsGeoAble"
            com.loc.fr.a(r2, r3, r0)
            return
    }

    private static void e(org.json.JSONObject r1, android.content.SharedPreferences.Editor r2) {
            if (r1 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "re"
            java.lang.String r1 = r1.optString(r0)     // Catch: java.lang.Throwable -> L16
            r0 = 0
            boolean r1 = com.loc.m.a(r1, r0)     // Catch: java.lang.Throwable -> L16
            com.loc.fq.c = r1     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = "fr"
            com.loc.fy.a(r2, r0, r1)     // Catch: java.lang.Throwable -> L16
            return
        L16:
            r1 = move-exception
            java.lang.String r2 = "AuthUtil"
            java.lang.String r0 = "checkReLocationAble"
            com.loc.fr.a(r1, r2, r0)
            return
    }

    public static boolean e() {
            boolean r0 = com.loc.fq.x
            return r0
    }

    private static void f(org.json.JSONObject r2, android.content.SharedPreferences.Editor r3) {
            java.lang.String r0 = "15O"
            org.json.JSONObject r2 = r2.optJSONObject(r0)     // Catch: java.lang.Throwable -> L48
            if (r2 == 0) goto L48
            java.lang.String r0 = "able"
            java.lang.String r0 = r2.optString(r0)     // Catch: java.lang.Throwable -> L48
            r1 = 0
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L3d
            java.lang.String r0 = "fl"
            org.json.JSONArray r0 = r2.optJSONArray(r0)     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L2f
            int r1 = r0.length()     // Catch: java.lang.Throwable -> L48
            if (r1 <= 0) goto L2f
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L48
            java.lang.String r1 = android.os.Build.MANUFACTURER     // Catch: java.lang.Throwable -> L48
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> L48
            if (r0 == 0) goto L3d
        L2f:
            java.lang.String r0 = "iv"
            r1 = 30
            int r2 = r2.optInt(r0, r1)     // Catch: java.lang.Throwable -> L48
            int r2 = r2 * 1000
            long r0 = (long) r2     // Catch: java.lang.Throwable -> L48
            com.loc.fq.I = r0     // Catch: java.lang.Throwable -> L48
            goto L41
        L3d:
            r0 = -1
            com.loc.fq.I = r0     // Catch: java.lang.Throwable -> L48
        L41:
            java.lang.String r2 = "awsi"
            long r0 = com.loc.fq.I     // Catch: java.lang.Throwable -> L48
            com.loc.fy.a(r3, r2, r0)     // Catch: java.lang.Throwable -> L48
        L48:
            return
    }

    public static boolean f() {
            boolean r0 = com.loc.fq.z
            return r0
    }

    public static double g() {
            double r0 = com.loc.fq.A
            return r0
    }

    private static void g(org.json.JSONObject r3, android.content.SharedPreferences.Editor r4) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "17Y"
            org.json.JSONObject r3 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L57
            if (r3 == 0) goto L57
            java.lang.String r0 = "able"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Throwable -> L57
            r1 = 0
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L57
            com.loc.fq.d = r0     // Catch: java.lang.Throwable -> L57
            java.lang.String r2 = "17ya"
            com.loc.fy.a(r4, r2, r0)     // Catch: java.lang.Throwable -> L57
            java.lang.String r0 = "mup"
            java.lang.String r0 = r3.optString(r0)     // Catch: java.lang.Throwable -> L57
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L57
            com.loc.fq.e = r0     // Catch: java.lang.Throwable -> L57
            java.lang.String r1 = "17ym"
            com.loc.fy.a(r4, r1, r0)     // Catch: java.lang.Throwable -> L57
            java.lang.String r0 = "max"
            r1 = 20
            int r0 = r3.optInt(r0, r1)     // Catch: java.lang.Throwable -> L57
            if (r0 <= 0) goto L41
            java.lang.String r1 = "17yx"
            com.loc.fy.a(r4, r1, r0)     // Catch: java.lang.Throwable -> L57
            int r0 = r0 * 1024
            com.loc.fq.f = r0     // Catch: java.lang.Throwable -> L57
        L41:
            java.lang.String r0 = "inv"
            r1 = 3
            int r3 = r3.optInt(r0, r1)     // Catch: java.lang.Throwable -> L57
            if (r3 <= 0) goto L57
            java.lang.String r0 = "17yi"
            com.loc.fy.a(r4, r0, r3)     // Catch: java.lang.Throwable -> L57
            int r3 = r3 * 60
            int r3 = r3 * 60
            int r3 = r3 * 1000
            com.loc.fq.g = r3     // Catch: java.lang.Throwable -> L57
        L57:
            return
    }

    private static void h(org.json.JSONObject r5, android.content.SharedPreferences.Editor r6) {
            java.lang.String r0 = "15U"
            org.json.JSONObject r5 = r5.optJSONObject(r0)     // Catch: java.lang.Throwable -> L36
            if (r5 == 0) goto L36
            java.lang.String r0 = "able"
            java.lang.String r0 = r5.optString(r0)     // Catch: java.lang.Throwable -> L36
            r1 = 1
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L36
            java.lang.String r1 = "yn"
            int r2 = com.loc.fq.K     // Catch: java.lang.Throwable -> L36
            int r1 = r5.optInt(r1, r2)     // Catch: java.lang.Throwable -> L36
            java.lang.String r2 = "sysTime"
            long r3 = com.loc.fq.P     // Catch: java.lang.Throwable -> L36
            long r2 = r5.optLong(r2, r3)     // Catch: java.lang.Throwable -> L36
            com.loc.fq.P = r2     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = "15ua"
            com.loc.fy.a(r6, r5, r0)     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = "15un"
            com.loc.fy.a(r6, r5, r1)     // Catch: java.lang.Throwable -> L36
            java.lang.String r5 = "15ust"
            long r0 = com.loc.fq.P     // Catch: java.lang.Throwable -> L36
            com.loc.fy.a(r6, r5, r0)     // Catch: java.lang.Throwable -> L36
        L36:
            return
    }

    public static boolean h() {
            boolean r0 = com.loc.fq.B
            return r0
    }

    public static int i() {
            int r0 = com.loc.fq.C
            return r0
    }

    private static void i(org.json.JSONObject r4, android.content.SharedPreferences.Editor r5) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "17J"
            org.json.JSONObject r4 = r4.optJSONObject(r0)     // Catch: java.lang.Throwable -> L5e
            if (r4 == 0) goto L5e
            java.lang.String r0 = "able"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L5e
            r1 = 0
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L5e
            com.loc.fq.L = r0     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = "ok9"
            com.loc.fy.a(r5, r2, r0)     // Catch: java.lang.Throwable -> L5e
            if (r0 == 0) goto L5e
            java.lang.String r0 = "auth"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r2 = "ht"
            java.lang.String r2 = r4.optString(r2)     // Catch: java.lang.Throwable -> L5e
            com.loc.fq.O = r2     // Catch: java.lang.Throwable -> L5e
            java.lang.String r3 = "ok11"
            com.loc.fy.a(r5, r3, r2)     // Catch: java.lang.Throwable -> L5e
            com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L5e
            java.lang.String r0 = "nr"
            java.lang.String r0 = r4.optString(r0)     // Catch: java.lang.Throwable -> L5e
            boolean r0 = com.loc.m.a(r0, r1)     // Catch: java.lang.Throwable -> L5e
            com.loc.fq.N = r0     // Catch: java.lang.Throwable -> L5e
            java.lang.String r0 = "tm"
            java.lang.String r4 = r4.optString(r0)     // Catch: java.lang.Throwable -> L5e
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L5e
            if (r0 != 0) goto L5e
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L5e
            if (r4 <= 0) goto L5e
            r0 = 20
            if (r4 >= r0) goto L5e
            com.loc.fq.M = r4     // Catch: java.lang.Throwable -> L5e
            java.lang.String r0 = "ok10"
            com.loc.fy.a(r5, r0, r4)     // Catch: java.lang.Throwable -> L5e
        L5e:
            return
    }

    public static int j() {
            int r0 = com.loc.fq.D
            return r0
    }

    public static boolean k() {
            boolean r0 = com.loc.fq.F
            return r0
    }

    public static boolean l() {
            boolean r0 = com.loc.fq.G
            return r0
    }

    public static boolean m() {
            boolean r0 = com.loc.fq.c
            return r0
    }

    public static boolean n() {
            boolean r0 = com.loc.fq.H
            return r0
    }

    public static long o() {
            long r0 = com.loc.fq.I
            return r0
    }

    public static boolean p() {
            boolean r0 = com.loc.fq.N
            return r0
    }

    public static boolean q() {
            boolean r0 = com.loc.fq.L
            return r0
    }

    public static java.lang.String r() {
            java.lang.String r0 = com.loc.fq.O
            java.lang.String r0 = com.loc.x.c(r0)
            return r0
    }

    public static boolean s() {
            boolean r0 = com.loc.fq.J
            if (r0 == 0) goto La
            int r0 = com.loc.fq.K
            if (r0 <= 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public static int t() {
            int r0 = com.loc.fq.K
            return r0
    }

    public static long u() {
            long r0 = com.loc.fq.P
            return r0
    }
}
