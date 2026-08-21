package com.loc;

public final class er {
    static int C = -1;
    public static java.lang.String[] F;
    public static java.lang.String G;
    private static boolean M;
    private static volatile boolean S;
    com.loc.ey A;
    boolean B;
    com.loc.ev D;
    java.lang.String E;
    boolean H;
    android.content.IntentFilter I;
    android.location.LocationManager J;
    private int K;
    private java.lang.String L;
    private java.lang.String N;
    private boolean O;
    private android.os.Handler P;
    private com.loc.fd Q;
    private java.lang.String R;
    private com.loc.es T;
    android.content.Context a;
    android.net.ConnectivityManager b;
    com.loc.ff c;
    com.loc.fb d;
    com.loc.fh e;
    com.loc.fo f;
    java.util.ArrayList<com.loc.eg> g;
    com.loc.er.a h;
    com.amap.api.location.AMapLocationClientOption i;
    com.loc.ew j;
    long k;
    com.loc.fp l;
    boolean m;
    com.loc.fm n;
    java.lang.StringBuilder o;
    boolean p;
    boolean q;
    com.amap.api.location.AMapLocationClientOption.GeoLanguage r;
    boolean s;
    boolean t;
    android.net.wifi.WifiInfo u;
    boolean v;
    java.lang.StringBuilder w;
    boolean x;
    public boolean y;
    int z;

    static class 1 {
        static final int[] a = null;

        static {
                com.amap.api.location.AMapLocationClientOption$GeoLanguage[] r0 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.loc.er.1.a = r0
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r1 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.loc.er.1.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r1 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.ZH     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.loc.er.1.a     // Catch: java.lang.NoSuchFieldError -> L28
                com.amap.api.location.AMapLocationClientOption$GeoLanguage r1 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.EN     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    class a extends android.content.BroadcastReceiver {
        final com.loc.er a;

        a(com.loc.er r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onReceive(android.content.Context r2, android.content.Intent r3) {
                r1 = this;
                if (r2 == 0) goto L64
                if (r3 != 0) goto L5
                goto L64
            L5:
                java.lang.String r2 = r3.getAction()     // Catch: java.lang.Throwable -> L5c
                boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L5c
                if (r0 == 0) goto L10
                return
            L10:
                java.lang.String r0 = "android.net.wifi.SCAN_RESULTS"
                boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L5c
                if (r0 == 0) goto L46
                com.loc.er r2 = r1.a     // Catch: java.lang.Throwable -> L5c
                com.loc.ff r2 = r2.c     // Catch: java.lang.Throwable -> L5c
                if (r2 == 0) goto L25
                com.loc.er r2 = r1.a     // Catch: java.lang.Throwable -> L5c
                com.loc.ff r2 = r2.c     // Catch: java.lang.Throwable -> L5c
                r2.i()     // Catch: java.lang.Throwable -> L5c
            L25:
                android.os.Bundle r2 = r3.getExtras()     // Catch: java.lang.Throwable -> L45
                if (r2 == 0) goto L45
                android.os.Bundle r2 = r3.getExtras()     // Catch: java.lang.Throwable -> L45
                java.lang.String r3 = "resultsUpdated"
                r0 = 1
                boolean r2 = r2.getBoolean(r3, r0)     // Catch: java.lang.Throwable -> L45
                if (r2 == 0) goto L45
                com.loc.er r2 = r1.a     // Catch: java.lang.Throwable -> L45
                com.loc.ff r2 = r2.c     // Catch: java.lang.Throwable -> L45
                if (r2 == 0) goto L45
                com.loc.er r2 = r1.a     // Catch: java.lang.Throwable -> L45
                com.loc.ff r2 = r2.c     // Catch: java.lang.Throwable -> L45
                r2.h()     // Catch: java.lang.Throwable -> L45
            L45:
                return
            L46:
                java.lang.String r3 = "android.net.wifi.WIFI_STATE_CHANGED"
                boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L5c
                if (r2 == 0) goto L5b
                com.loc.er r2 = r1.a     // Catch: java.lang.Throwable -> L5c
                com.loc.ff r2 = r2.c     // Catch: java.lang.Throwable -> L5c
                if (r2 == 0) goto L5b
                com.loc.er r2 = r1.a     // Catch: java.lang.Throwable -> L5c
                com.loc.ff r2 = r2.c     // Catch: java.lang.Throwable -> L5c
                r2.j()     // Catch: java.lang.Throwable -> L5c
            L5b:
                return
            L5c:
                r2 = move-exception
                java.lang.String r3 = "Aps"
                java.lang.String r0 = "onReceive"
                com.loc.fr.a(r2, r3, r0)
            L64:
                return
        }
    }

    static {
            java.lang.String r0 = "android.permission.ACCESS_COARSE_LOCATION"
            java.lang.String r1 = "android.permission.ACCESS_FINE_LOCATION"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            com.loc.er.F = r0
            java.lang.String r0 = "android.permission.ACCESS_BACKGROUND_LOCATION"
            com.loc.er.G = r0
            r0 = 0
            com.loc.er.S = r0
            return
    }

    public er(boolean r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.a = r0
            r4.b = r0
            r4.c = r0
            r4.d = r0
            r4.e = r0
            r4.f = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r4.g = r1
            r4.h = r0
            com.amap.api.location.AMapLocationClientOption r1 = new com.amap.api.location.AMapLocationClientOption
            r1.<init>()
            r4.i = r1
            r4.j = r0
            r1 = 0
            r4.k = r1
            r1 = 0
            r4.K = r1
            r4.l = r0
            r4.m = r1
            r4.L = r0
            r4.n = r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r4.o = r2
            r2 = 1
            r4.p = r2
            r4.q = r2
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r3 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
            r4.r = r3
            r4.s = r2
            r4.t = r1
            r4.u = r0
            r4.v = r2
            r4.N = r0
            r4.w = r0
            r4.x = r1
            r4.y = r1
            r3 = 12
            r4.z = r3
            r4.O = r2
            r4.A = r0
            r4.B = r1
            r4.D = r0
            r4.E = r0
            r4.H = r1
            r4.I = r0
            r4.J = r0
            r4.H = r5
            return
    }

    private static com.loc.ew a(int r2, java.lang.String r3) {
            com.loc.ew r0 = new com.loc.ew
            java.lang.String r1 = ""
            r0.<init>(r1)
            r0.setErrorCode(r2)
            r0.setLocationDetail(r3)
            r3 = 15
            if (r2 != r3) goto L17
            r2 = 0
            r3 = 2151(0x867, float:3.014E-42)
            com.loc.fx.a(r2, r3)
        L17:
            return r0
    }

    private com.loc.ew a(com.loc.ew r7, com.loc.bu r8, com.loc.eq r9) {
            r6 = this;
            r0 = 4
            java.lang.String r1 = "#0403"
            if (r8 == 0) goto L7e
            byte[] r2 = r8.a     // Catch: java.lang.Throwable -> La7
            if (r2 == 0) goto L7e
            byte[] r2 = r8.a     // Catch: java.lang.Throwable -> La7
            int r2 = r2.length     // Catch: java.lang.Throwable -> La7
            if (r2 != 0) goto Lf
            goto L7e
        Lf:
            com.loc.fo r2 = new com.loc.fo     // Catch: java.lang.Throwable -> La7
            r2.<init>()     // Catch: java.lang.Throwable -> La7
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> La7
            byte[] r4 = r8.a     // Catch: java.lang.Throwable -> La7
            java.lang.String r5 = "UTF-8"
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> La7
            java.lang.String r4 = "\"status\":\"0\""
            boolean r4 = r3.contains(r4)     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L35
            android.content.Context r4 = r6.a     // Catch: java.lang.Throwable -> La7
            com.loc.ew r7 = r2.a(r3, r4, r8, r9)     // Catch: java.lang.Throwable -> La7
            java.lang.StringBuilder r8 = r6.w     // Catch: java.lang.Throwable -> La7
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> La7
            r7.h(r8)     // Catch: java.lang.Throwable -> La7
            return r7
        L35:
            java.lang.String r8 = "</body></html>"
            boolean r8 = r3.contains(r8)     // Catch: java.lang.Throwable -> La7
            r2 = 0
            if (r8 == 0) goto L7d
            r8 = 5
            r7.setErrorCode(r8)     // Catch: java.lang.Throwable -> La7
            com.loc.ff r8 = r6.c     // Catch: java.lang.Throwable -> La7
            if (r8 == 0) goto L62
            com.loc.ff r8 = r6.c     // Catch: java.lang.Throwable -> La7
            android.net.ConnectivityManager r3 = r6.b     // Catch: java.lang.Throwable -> La7
            boolean r8 = r8.a(r3)     // Catch: java.lang.Throwable -> La7
            if (r8 == 0) goto L62
            java.lang.String r8 = "#0501"
            r9.f(r8)     // Catch: java.lang.Throwable -> La7
            java.lang.StringBuilder r8 = r6.o     // Catch: java.lang.Throwable -> La7
            java.lang.String r3 = "您连接的是一个需要登录的网络，请确认已经登入网络#0501"
            r8.append(r3)     // Catch: java.lang.Throwable -> La7
            r8 = 2051(0x803, float:2.874E-42)
            com.loc.fx.a(r2, r8)     // Catch: java.lang.Throwable -> La7
            goto L73
        L62:
            java.lang.String r8 = "#0502"
            r9.f(r8)     // Catch: java.lang.Throwable -> La7
            java.lang.StringBuilder r8 = r6.o     // Catch: java.lang.Throwable -> La7
            java.lang.String r3 = "请求可能被劫持了#0502"
            r8.append(r3)     // Catch: java.lang.Throwable -> La7
            r8 = 2052(0x804, float:2.875E-42)
            com.loc.fx.a(r2, r8)     // Catch: java.lang.Throwable -> La7
        L73:
            java.lang.StringBuilder r8 = r6.o     // Catch: java.lang.Throwable -> La7
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> La7
            r7.setLocationDetail(r8)     // Catch: java.lang.Throwable -> La7
            return r7
        L7d:
            return r2
        L7e:
            r7.setErrorCode(r0)     // Catch: java.lang.Throwable -> La7
            java.lang.StringBuilder r2 = r6.o     // Catch: java.lang.Throwable -> La7
            java.lang.String r3 = "网络异常,请求异常#0403"
            r2.append(r3)     // Catch: java.lang.Throwable -> La7
            r9.f(r1)     // Catch: java.lang.Throwable -> La7
            java.lang.StringBuilder r2 = r6.w     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> La7
            r7.h(r2)     // Catch: java.lang.Throwable -> La7
            java.lang.StringBuilder r2 = r6.o     // Catch: java.lang.Throwable -> La7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> La7
            r7.setLocationDetail(r2)     // Catch: java.lang.Throwable -> La7
            if (r8 == 0) goto La6
            java.lang.String r8 = r8.d     // Catch: java.lang.Throwable -> La7
            r2 = 2041(0x7f9, float:2.86E-42)
            com.loc.fx.a(r8, r2)     // Catch: java.lang.Throwable -> La7
        La6:
            return r7
        La7:
            r8 = move-exception
            r7.setErrorCode(r0)
            java.lang.String r0 = "Aps"
            java.lang.String r2 = "checkResponseEntity"
            com.loc.fr.a(r8, r0, r2)
            r9.f(r1)
            java.lang.StringBuilder r9 = r6.o
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "check response exception ex is"
            r0.<init>(r2)
            java.lang.String r8 = r8.getMessage()
            r0.append(r8)
            r0.append(r1)
            java.lang.String r8 = r0.toString()
            r9.append(r8)
            java.lang.StringBuilder r8 = r6.o
            java.lang.String r8 = r8.toString()
            r7.setLocationDetail(r8)
            return r7
    }

    private java.lang.StringBuilder a(java.lang.StringBuilder r3) {
            r2 = this;
            if (r3 != 0) goto La
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r0 = 700(0x2bc, float:9.81E-43)
            r3.<init>(r0)
            goto L12
        La:
            r0 = 0
            int r1 = r3.length()
            r3.delete(r0, r1)
        L12:
            com.loc.fb r0 = r2.d
            java.lang.String r0 = r0.m()
            r3.append(r0)
            com.loc.ff r0 = r2.c
            java.lang.String r0 = r0.o()
            r3.append(r0)
            return r3
    }

    private boolean a(long r6) {
            r5 = this;
            boolean r0 = r5.O
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L9
            r5.O = r1
            return r2
        L9:
            long r3 = com.loc.fz.b()
            long r3 = r3 - r6
            r6 = 800(0x320, double:3.953E-321)
            int r0 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r0 >= 0) goto L30
            r6 = 0
            com.loc.ew r0 = r5.j
            boolean r0 = com.loc.fz.a(r0)
            if (r0 == 0) goto L29
            long r6 = com.loc.fz.a()
            com.loc.ew r0 = r5.j
            long r3 = r0.getTime()
            long r6 = r6 - r3
        L29:
            r3 = 10000(0x2710, double:4.9407E-320)
            int r0 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r0 > 0) goto L30
            goto L31
        L30:
            r1 = 0
        L31:
            return r1
    }

    private com.loc.ew b(boolean r12, com.loc.eq r13) {
            r11 = this;
            java.lang.String r0 = "FAIL"
            java.lang.String r1 = r11.R     // Catch: java.lang.Throwable -> L3c
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L30
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3c
            r1.<init>()     // Catch: java.lang.Throwable -> L3c
            android.content.Context r2 = r11.a     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = com.loc.o.a(r2)     // Catch: java.lang.Throwable -> L3c
            r1.append(r2)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = ","
            r1.append(r2)     // Catch: java.lang.Throwable -> L3c
            android.content.Context r2 = r11.a     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = com.loc.o.f(r2)     // Catch: java.lang.Throwable -> L3c
            r1.append(r2)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = com.loc.x.b(r1)     // Catch: java.lang.Throwable -> L3c
            r11.R = r1     // Catch: java.lang.Throwable -> L3c
        L30:
            java.lang.StringBuilder r1 = r11.o     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = "#id:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r2 = r11.R     // Catch: java.lang.Throwable -> L3c
            r1.append(r2)     // Catch: java.lang.Throwable -> L3c
        L3c:
            com.loc.ew r1 = new com.loc.ew
            java.lang.String r2 = ""
            r1.<init>(r2)
            r3 = 0
            byte[] r6 = r11.m()     // Catch: java.lang.Throwable -> L2b9
            long r4 = com.loc.fz.b()
            r11.k = r4
            r13.a(r4)
            r10 = 0
            android.content.Context r4 = r11.a     // Catch: java.lang.Throwable -> L1fc
            com.loc.fr.c(r4)     // Catch: java.lang.Throwable -> L1fc
            com.loc.fm r4 = r11.n     // Catch: java.lang.Throwable -> L1fc
            android.content.Context r5 = r11.a     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r7 = com.loc.fr.a()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r8 = com.loc.fr.b()     // Catch: java.lang.Throwable -> L1fc
            r9 = r12
            com.loc.fn r12 = r4.a(r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L1fc
            r12.b()     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r4 = r12.c()     // Catch: java.lang.Throwable -> L1fc
            android.content.Context r5 = r11.a     // Catch: java.lang.Throwable -> L1fc
            com.loc.m.a(r5)     // Catch: java.lang.Throwable -> L1fc
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L1fc
            r6 = 1
            if (r5 != 0) goto L85
            java.lang.String r5 = "dualstack"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> L1fc
            if (r4 == 0) goto L85
            r4 = 1
            goto L86
        L85:
            r4 = 0
        L86:
            int r5 = com.loc.fk.a     // Catch: java.lang.Throwable -> L1fc
            boolean r7 = com.loc.m.a()     // Catch: java.lang.Throwable -> L1fc
            if (r7 == 0) goto L98
            boolean r7 = com.loc.m.c()     // Catch: java.lang.Throwable -> L1fc
            if (r7 == 0) goto L98
            if (r4 == 0) goto L98
            int r5 = com.loc.fk.b     // Catch: java.lang.Throwable -> L1fc
        L98:
            boolean r4 = com.loc.m.b()     // Catch: java.lang.Throwable -> L1fc
            if (r4 != 0) goto La8
            android.content.Context r3 = r11.a     // Catch: java.lang.Throwable -> L1fc
            com.loc.fk r3 = com.loc.fk.a(r3)     // Catch: java.lang.Throwable -> L1fc
            java.lang.String r3 = r3.a(r12, r5)     // Catch: java.lang.Throwable -> L1fc
        La8:
            int r4 = com.loc.fk.b     // Catch: java.lang.Throwable -> L1fc
            if (r5 != r4) goto Laf
            java.lang.String r4 = "v6"
            goto Lb1
        Laf:
            java.lang.String r4 = "v4"
        Lb1:
            r13.a(r4)     // Catch: java.lang.Throwable -> L1fc
            com.loc.fm r4 = r11.n     // Catch: java.lang.Throwable -> L1fc
            com.loc.bu r12 = r4.a(r12)     // Catch: java.lang.Throwable -> L1fc
            long r7 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L1fc
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1fc
            if (r4 != 0) goto Le4
            boolean r4 = r12.f     // Catch: java.lang.Throwable -> L1fc
            if (r4 != 0) goto Ld2
            android.content.Context r4 = r11.a     // Catch: java.lang.Throwable -> L1fc
            com.loc.fk r4 = com.loc.fk.a(r4)     // Catch: java.lang.Throwable -> L1fc
            r4.a(r6, r5)     // Catch: java.lang.Throwable -> L1fc
            goto Le4
        Ld2:
            android.content.Context r4 = r11.a     // Catch: java.lang.Throwable -> L1fc
            com.loc.fk r4 = com.loc.fk.a(r4)     // Catch: java.lang.Throwable -> L1fc
            r4.a(r10, r5)     // Catch: java.lang.Throwable -> L1fc
            android.content.Context r4 = r11.a     // Catch: java.lang.Throwable -> L1fc
            com.loc.fk r4 = com.loc.fk.a(r4)     // Catch: java.lang.Throwable -> L1fc
            r4.a(r5)     // Catch: java.lang.Throwable -> L1fc
        Le4:
            java.lang.String r4 = "SUCCESS"
            if (r12 == 0) goto Lff
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1fc
            if (r5 != 0) goto Lff
            boolean r5 = r12.f     // Catch: java.lang.Throwable -> L1fc
            if (r5 != 0) goto Lf9
            r13.b(r3)     // Catch: java.lang.Throwable -> L1fc
            r13.c(r4)     // Catch: java.lang.Throwable -> L1fc
            goto L102
        Lf9:
            r13.b(r3)     // Catch: java.lang.Throwable -> L1fc
            r13.c(r0)     // Catch: java.lang.Throwable -> L1fc
        Lff:
            r13.d(r4)     // Catch: java.lang.Throwable -> L1fc
        L102:
            com.loc.es r3 = r11.T     // Catch: java.lang.Throwable -> L1fc
            if (r3 == 0) goto L10b
            com.loc.es r3 = r11.T     // Catch: java.lang.Throwable -> L1fc
            r3.d()     // Catch: java.lang.Throwable -> L1fc
        L10b:
            r13.b(r7)
            if (r12 == 0) goto L139
            java.lang.String r0 = r12.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L12d
            java.lang.StringBuilder r0 = r11.o
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "#csid:"
            r3.<init>(r4)
            java.lang.String r4 = r12.c
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r0.append(r3)
        L12d:
            java.lang.String r0 = r12.d
            java.lang.StringBuilder r3 = r11.w
            java.lang.String r3 = r3.toString()
            r1.h(r3)
            goto L13a
        L139:
            r0 = r2
        L13a:
            com.loc.ew r3 = r11.a(r1, r12, r13)
            if (r3 == 0) goto L141
            return r3
        L141:
            byte[] r12 = r12.a
            byte[] r12 = com.loc.fg.b(r12)
            if (r12 != 0) goto L168
            r12 = 5
            r1.setErrorCode(r12)
            java.lang.String r12 = "#0503"
            r13.f(r12)
            java.lang.StringBuilder r12 = r11.o
            java.lang.String r13 = "解密数据失败#0503"
            r12.append(r13)
            java.lang.StringBuilder r12 = r11.o
            java.lang.String r12 = r12.toString()
            r1.setLocationDetail(r12)
            r12 = 2053(0x805, float:2.877E-42)
            com.loc.fx.a(r0, r12)
            return r1
        L168:
            com.loc.fo r3 = r11.f
            com.loc.ew r12 = r3.a(r1, r12, r13)
            boolean r1 = com.loc.fz.a(r12)
            if (r1 != 0) goto L1d1
            java.lang.String r1 = r12.b()
            r11.L = r1
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L183
            r1 = 2062(0x80e, float:2.89E-42)
            goto L185
        L183:
            r1 = 2061(0x80d, float:2.888E-42)
        L185:
            com.loc.fx.a(r0, r1)
            r0 = 6
            r12.setErrorCode(r0)
            java.lang.String r0 = "#0601"
            r13.f(r0)
            java.lang.StringBuilder r13 = r11.o
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r3 = "location faile retype:"
            r1.<init>(r3)
            java.lang.String r3 = r12.d()
            r1.append(r3)
            java.lang.String r3 = " rdesc:"
            r1.append(r3)
            java.lang.String r3 = r11.L
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L1af
            goto L1b1
        L1af:
            java.lang.String r2 = r11.L
        L1b1:
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r13.append(r0)
            java.lang.StringBuilder r13 = r11.w
            java.lang.String r13 = r13.toString()
            r12.h(r13)
            java.lang.StringBuilder r13 = r11.o
            java.lang.String r13 = r13.toString()
            r12.setLocationDetail(r13)
            return r12
        L1d1:
            c(r12)
            boolean r13 = r11.q
            r12.setOffset(r13)
            boolean r13 = r11.p
            r12.a(r13)
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r13 = r11.r
            java.lang.String r13 = java.lang.String.valueOf(r13)
            r12.f(r13)
            java.lang.String r13 = "new"
            r12.e(r13)
            java.lang.StringBuilder r13 = r11.o
            java.lang.String r13 = r13.toString()
            r12.setLocationDetail(r13)
            java.lang.String r13 = r12.a()
            r11.E = r13
            return r12
        L1fc:
            r12 = move-exception
            com.loc.fz.b()
            r13.d(r0)
            android.content.Context r0 = r11.a
            com.loc.fk r0 = com.loc.fk.a(r0)
            int r1 = com.loc.fk.a
            r0.a(r10, r1)
            java.lang.String r0 = "Aps"
            java.lang.String r1 = "getApsLoc req"
            com.loc.fr.a(r12, r0, r1)
            java.lang.String r0 = "/mobile/binary"
            com.loc.fx.a(r0, r12)
            android.content.Context r0 = r11.a
            boolean r0 = com.loc.fz.d(r0)
            if (r0 != 0) goto L230
            java.lang.String r12 = "#0401"
            r13.f(r12)
            java.lang.StringBuilder r12 = r11.o
            java.lang.String r13 = "网络异常，未连接到网络，请连接网络#0401"
        L22b:
            r12.append(r13)
            goto L2a4
        L230:
            boolean r0 = r12 instanceof com.loc.k
            java.lang.String r1 = "网络异常,请求异常#0403"
            java.lang.String r2 = "#0403,"
            if (r0 == 0) goto L28c
            r0 = r12
            com.loc.k r0 = (com.loc.k) r0
            java.lang.String r3 = r0.a()
            java.lang.String r4 = "网络异常状态码"
            boolean r3 = r3.contains(r4)
            if (r3 == 0) goto L25b
            java.lang.String r12 = "#0404"
            r13.f(r12)
            java.lang.StringBuilder r12 = r11.o
            java.lang.String r13 = "网络异常，状态码错误#0404"
            r12.append(r13)
            int r13 = r0.f()
            r12.append(r13)
            goto L2a4
        L25b:
            int r0 = r0.f()
            r3 = 23
            if (r0 == r3) goto L282
            long r3 = com.loc.fz.b()
            long r5 = r11.k
            long r3 = r3 - r5
            com.amap.api.location.AMapLocationClientOption r0 = r11.i
            long r5 = r0.getHttpTimeOut()
            long r3 = r3 - r5
            long r3 = java.lang.Math.abs(r3)
            r5 = 500(0x1f4, double:2.47E-321)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 >= 0) goto L27c
            goto L282
        L27c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
            goto L291
        L282:
            java.lang.String r12 = "#0402"
            r13.f(r12)
            java.lang.StringBuilder r12 = r11.o
            java.lang.String r13 = "网络异常，连接超时#0402"
            goto L22b
        L28c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>(r2)
        L291:
            java.lang.String r12 = r12.getMessage()
            r0.append(r12)
            java.lang.String r12 = r0.toString()
            r13.f(r12)
            java.lang.StringBuilder r12 = r11.o
            r12.append(r1)
        L2a4:
            r12 = 4
            java.lang.StringBuilder r13 = r11.o
            java.lang.String r13 = r13.toString()
            com.loc.ew r12 = a(r12, r13)
            java.lang.StringBuilder r13 = r11.w
            java.lang.String r13 = r13.toString()
            r12.h(r13)
            return r12
        L2b9:
            r12 = move-exception
            java.lang.String r0 = "#0301"
            r13.f(r0)
            java.lang.StringBuilder r13 = r11.o
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "get parames error:"
            r1.<init>(r2)
            java.lang.String r12 = r12.getMessage()
            r1.append(r12)
            r1.append(r0)
            java.lang.String r12 = r1.toString()
            r13.append(r12)
            r12 = 2031(0x7ef, float:2.846E-42)
            com.loc.fx.a(r3, r12)
            r12 = 3
            java.lang.StringBuilder r13 = r11.o
            java.lang.String r13 = r13.toString()
            com.loc.ew r12 = a(r12, r13)
            java.lang.StringBuilder r13 = r11.w
            java.lang.String r13 = r13.toString()
            r12.h(r13)
            return r12
    }

    private void b(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "EYW5kcm9pZC5wZXJtaXNzaW9uLldSSVRFX1NFQ1VSRV9TRVRUSU5HUw=="
            java.lang.String r0 = com.loc.x.c(r0)     // Catch: java.lang.Throwable -> Lf
            int r2 = r2.checkCallingOrSelfPermission(r0)     // Catch: java.lang.Throwable -> Lf
            if (r2 != 0) goto Lf
            r2 = 1
            r1.m = r2     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    private java.lang.String c(com.loc.eq r17) {
            r16 = this;
            r0 = r16
            r1 = r17
            com.loc.fb r2 = r0.d
            int r2 = r2.h()
            com.loc.fb r3 = r0.d
            com.loc.fa r3 = r3.e()
            com.loc.fb r4 = r0.d
            com.loc.fa r4 = r4.f()
            java.util.ArrayList<com.loc.eg> r5 = r0.g
            r6 = 1
            r7 = 0
            if (r5 == 0) goto L25
            boolean r5 = r5.isEmpty()
            if (r5 == 0) goto L23
            goto L25
        L23:
            r5 = 0
            goto L26
        L25:
            r5 = 1
        L26:
            java.lang.String r8 = ""
            r9 = 0
            if (r3 != 0) goto L1e2
            if (r4 != 0) goto L1e2
            if (r5 == 0) goto L1e2
            android.net.ConnectivityManager r2 = r0.b
            if (r2 != 0) goto L3f
            android.content.Context r2 = r0.a
            java.lang.String r3 = "connectivity"
            java.lang.Object r2 = com.loc.fz.a(r2, r3)
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2
            r0.b = r2
        L3f:
            int r2 = com.loc.fz.c()
            r3 = 31
            r4 = 2132(0x854, float:2.988E-42)
            r5 = 18
            if (r2 < r3) goto L6d
            android.content.Context r2 = r0.a
            boolean r2 = com.loc.fz.a(r2)
            if (r2 == 0) goto L8f
            com.loc.ff r2 = r0.c
            boolean r2 = r2.l()
            if (r2 != 0) goto L8f
            r0.z = r5
            java.lang.StringBuilder r2 = r0.o
            java.lang.String r3 = "飞行模式下关闭了WIFI开关，请关闭飞行模式或者打开WIFI开关#1802"
            r2.append(r3)
            com.loc.fx.a(r9, r4)
            java.lang.String r2 = "#1802"
            r1.f(r2)
            return r8
        L6d:
            android.content.Context r2 = r0.a
            boolean r2 = com.loc.fz.a(r2)
            if (r2 == 0) goto L8f
            com.loc.ff r2 = r0.c
            boolean r2 = r2.k()
            if (r2 != 0) goto L8f
            r0.z = r5
            java.lang.StringBuilder r2 = r0.o
            java.lang.String r3 = "飞行模式下关闭了WIFI开关，请关闭飞行模式或者打开WIFI开关#1801"
            r2.append(r3)
            com.loc.fx.a(r9, r4)
            java.lang.String r2 = "#1801"
            r1.f(r2)
            return r8
        L8f:
            int r2 = com.loc.fz.c()
            java.lang.String r3 = "#1206"
            java.lang.String r4 = "定位服务没有开启，请在设置中打开定位服务开关#1206"
            r5 = 28
            r6 = 2121(0x849, float:2.972E-42)
            r10 = 12
            if (r2 < r5) goto Ld3
            android.location.LocationManager r2 = r0.J
            if (r2 != 0) goto Lb3
            android.content.Context r2 = r0.a
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r11 = "location"
            java.lang.Object r2 = r2.getSystemService(r11)
            android.location.LocationManager r2 = (android.location.LocationManager) r2
            r0.J = r2
        Lb3:
            android.location.LocationManager r2 = r0.J
            java.lang.Object[] r11 = new java.lang.Object[r7]
            java.lang.String r12 = "isLocationEnabled"
            java.lang.Object r2 = com.loc.fv.a(r2, r12, r11)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            if (r2 != 0) goto Ld3
            r0.z = r10
            java.lang.StringBuilder r2 = r0.o
            r2.append(r4)
            r1.f(r3)
            com.loc.fx.a(r9, r6)
            return r8
        Ld3:
            android.content.Context r2 = r0.a
            boolean r2 = com.loc.fz.e(r2)
            if (r2 != 0) goto Led
            r0.z = r10
            java.lang.StringBuilder r2 = r0.o
            java.lang.String r3 = "定位权限被禁用,请授予应用定位权限#1201"
            r2.append(r3)
            java.lang.String r2 = "#1201"
            r1.f(r2)
            com.loc.fx.a(r9, r6)
            return r8
        Led:
            int r2 = com.loc.fz.c()
            r11 = 24
            if (r2 < r11) goto L117
            int r2 = com.loc.fz.c()
            if (r2 >= r5) goto L117
            android.content.Context r2 = r0.a
            android.content.ContentResolver r2 = r2.getContentResolver()
            java.lang.String r5 = "location_mode"
            int r2 = android.provider.Settings.Secure.getInt(r2, r5, r7)
            if (r2 != 0) goto L117
            r0.z = r10
            r1.f(r3)
            java.lang.StringBuilder r1 = r0.o
            r1.append(r4)
            com.loc.fx.a(r9, r6)
            return r8
        L117:
            com.loc.fb r2 = r0.d
            java.lang.String r2 = r2.k()
            com.loc.ff r3 = r0.c
            java.lang.String r3 = r3.d()
            com.loc.ff r4 = r0.c
            android.net.ConnectivityManager r5 = r0.b
            boolean r4 = r4.a(r5)
            if (r4 == 0) goto L141
            if (r3 == 0) goto L141
            r0.z = r10
            java.lang.String r2 = "#1202"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "获取基站与获取WIFI的权限都被禁用，请在安全软件中打开应用的定位权限#1202"
            r1.append(r2)
            com.loc.fx.a(r9, r6)
            return r8
        L141:
            if (r2 == 0) goto L167
            r0.z = r10
            com.loc.ff r2 = r0.c
            boolean r2 = r2.k()
            if (r2 != 0) goto L157
            java.lang.String r2 = "#1204"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "WIFI开关关闭，并且获取基站权限被禁用，请在安全软件中打开应用的定位权限或者打开WIFI开关#1204"
            goto L160
        L157:
            java.lang.String r2 = "#1205"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "获取的WIFI列表为空，并且获取基站权限被禁用，请在安全软件中打开应用的定位权限#1205"
        L160:
            r1.append(r2)
            com.loc.fx.a(r9, r6)
            return r8
        L167:
            com.loc.ff r2 = r0.c
            boolean r2 = r2.k()
            if (r2 != 0) goto L18d
            com.loc.fb r2 = r0.d
            boolean r2 = r2.n()
            if (r2 != 0) goto L18d
            r2 = 19
            r0.z = r2
            java.lang.String r2 = "#1901"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "没有检查到SIM卡，并且WIFI开关关闭，请打开WIFI开关或者插入SIM卡#1901"
            r1.append(r2)
            r1 = 2133(0x855, float:2.989E-42)
            com.loc.fx.a(r9, r1)
            return r8
        L18d:
            com.loc.ff r2 = r0.c
            boolean r2 = r2.k()
            if (r2 != 0) goto L1a2
            java.lang.String r2 = "#1301"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "获取到的基站为空，并且关闭了WIFI开关，请您打开WIFI开关再发起定位#1301"
        L19e:
            r1.append(r2)
            goto L1d8
        L1a2:
            java.lang.String r2 = "#1302"
            r1.f(r2)
            com.loc.ff r1 = r0.c
            android.net.wifi.WifiInfo r1 = r1.c()
            java.lang.String r3 = "或后台运行没有后台定位权限"
            if (r1 == 0) goto L1c1
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r4 = "获取到的基站和WIFI信息均为空，请检查是否授予APP定位权限"
            r1.append(r4)
            android.content.Context r1 = r0.a
            boolean r1 = com.loc.fz.f(r1)
            if (r1 != 0) goto L1d5
            goto L1d0
        L1c1:
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r4 = "获取到的基站和WIFI信息均为空，请移动到有WIFI的区域，若确定当前区域有WIFI，请检查是否授予APP定位权限"
            r1.append(r4)
            android.content.Context r1 = r0.a
            boolean r1 = com.loc.fz.f(r1)
            if (r1 != 0) goto L1d5
        L1d0:
            java.lang.StringBuilder r1 = r0.o
            r1.append(r3)
        L1d5:
            java.lang.StringBuilder r1 = r0.o
            goto L19e
        L1d8:
            r1 = 13
            r0.z = r1
            r1 = 2131(0x853, float:2.986E-42)
            com.loc.fx.a(r9, r1)
            return r8
        L1e2:
            com.loc.ff r5 = r0.c
            android.net.wifi.WifiInfo r5 = r5.m()
            r0.u = r5
            boolean r5 = com.loc.ff.a(r5)
            r0.v = r5
            java.lang.String r5 = "cgi"
            java.lang.String r10 = "cgiwifi"
            r11 = 2
            java.lang.String r12 = "#"
            java.lang.String r13 = "network"
            if (r2 == 0) goto L29c
            if (r2 == r6) goto L259
            if (r2 == r11) goto L216
            r2 = 11
            r0.z = r2
            r2 = 2111(0x83f, float:2.958E-42)
            com.loc.fx.a(r9, r2)
            java.lang.String r2 = "#1101"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "get cgi failure#1101"
            r1.append(r2)
            goto L374
        L216:
            if (r3 == 0) goto L374
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r3.a
            r1.append(r2)
            r1.append(r12)
            int r2 = r3.b
            r1.append(r2)
            r1.append(r12)
            int r2 = r3.h
            r1.append(r2)
            r1.append(r12)
            int r2 = r3.i
            r1.append(r2)
            r1.append(r12)
            int r2 = r3.j
            r1.append(r2)
            r1.append(r12)
            r1.append(r13)
            r1.append(r12)
            java.util.ArrayList<com.loc.eg> r2 = r0.g
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L257
            boolean r2 = r0.v
            if (r2 == 0) goto L293
        L257:
            r5 = r10
            goto L293
        L259:
            if (r3 == 0) goto L374
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r3.a
            r1.append(r2)
            r1.append(r12)
            int r2 = r3.b
            r1.append(r2)
            r1.append(r12)
            int r2 = r3.c
            r1.append(r2)
            r1.append(r12)
            int r2 = r3.d
            r1.append(r2)
            r1.append(r12)
            r1.append(r13)
            r1.append(r12)
            java.util.ArrayList<com.loc.eg> r2 = r0.g
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L257
            boolean r2 = r0.v
            if (r2 == 0) goto L293
            goto L257
        L293:
            r1.append(r5)
        L296:
            java.lang.String r8 = r1.toString()
            goto L374
        L29c:
            java.util.ArrayList<com.loc.eg> r2 = r0.g
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L2ab
            boolean r2 = r0.v
            if (r2 == 0) goto L2a9
            goto L2ab
        L2a9:
            r2 = 0
            goto L2ac
        L2ab:
            r2 = 1
        L2ac:
            if (r4 == 0) goto L2b0
            r3 = 1
            goto L2b1
        L2b0:
            r3 = 0
        L2b1:
            r14 = 2022(0x7e6, float:2.833E-42)
            if (r3 != 0) goto L30c
            boolean r15 = r0.v
            r7 = 2021(0x7e5, float:2.832E-42)
            if (r15 == 0) goto L2d5
            java.util.ArrayList<com.loc.eg> r15 = r0.g
            boolean r15 = r15.isEmpty()
            if (r15 == 0) goto L2d5
            r0.z = r11
            java.lang.String r2 = "#0201"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "当前基站为伪基站，并且WIFI权限被禁用，请在安全软件中打开应用的定位权限#0201"
            r1.append(r2)
            com.loc.fx.a(r9, r7)
            return r8
        L2d5:
            java.util.ArrayList<com.loc.eg> r15 = r0.g
            int r15 = r15.size()
            if (r15 != r6) goto L30c
            r0.z = r11
            boolean r15 = r0.v
            java.lang.String r11 = "当前基站为伪基站，并且搜到的WIFI数量不足，请移动到WIFI比较丰富的区域#0202"
            java.lang.String r6 = "#0202"
            if (r15 != 0) goto L2f3
            r1.f(r6)
            java.lang.StringBuilder r1 = r0.o
            r1.append(r11)
            com.loc.fx.a(r9, r14)
            return r8
        L2f3:
            java.util.ArrayList<com.loc.eg> r15 = r0.g
            r14 = 0
            java.lang.Object r15 = r15.get(r14)
            com.loc.eg r15 = (com.loc.eg) r15
            boolean r14 = r15.h
            if (r14 == 0) goto L30c
            r1.f(r6)
            java.lang.StringBuilder r1 = r0.o
            r1.append(r11)
            com.loc.fx.a(r9, r7)
            return r8
        L30c:
            java.util.Locale r6 = java.util.Locale.US
            r7 = 1
            java.lang.Object[] r7 = new java.lang.Object[r7]
            r11 = 0
            r7[r11] = r13
            java.lang.String r11 = "#%s#"
            java.lang.String r6 = java.lang.String.format(r6, r11, r7)
            if (r3 == 0) goto L33d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.b()
            r1.append(r2)
            java.util.ArrayList<com.loc.eg> r2 = r0.g
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L334
            boolean r2 = r0.v
            if (r2 == 0) goto L335
        L334:
            r5 = r10
        L335:
            r1.append(r13)
            r1.append(r12)
            goto L293
        L33d:
            if (r2 == 0) goto L34e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r6)
            java.lang.String r2 = "wifi"
            r1.append(r2)
            goto L296
        L34e:
            r2 = 2
            r0.z = r2
            com.loc.ff r2 = r0.c
            boolean r2 = r2.k()
            if (r2 != 0) goto L363
            java.lang.String r2 = "#0203"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "当前基站为伪基站,并且关闭了WIFI开关，请在设置中打开WIFI开关#0203"
            goto L36c
        L363:
            java.lang.String r2 = "#0204"
            r1.f(r2)
            java.lang.StringBuilder r1 = r0.o
            java.lang.String r2 = "当前基站为伪基站,并且没有搜索到WIFI，请移动到WIFI比较丰富的区域#0204"
        L36c:
            r1.append(r2)
            r1 = 2022(0x7e6, float:2.833E-42)
            com.loc.fx.a(r9, r1)
        L374:
            boolean r1 = android.text.TextUtils.isEmpty(r8)
            if (r1 != 0) goto L3a2
            boolean r1 = r8.startsWith(r12)
            if (r1 != 0) goto L38f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r12)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
        L38f:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.loc.fz.e()
            r1.append(r2)
            r1.append(r8)
            java.lang.String r8 = r1.toString()
        L3a2:
            return r8
    }

    private static void c(com.loc.ew r2) {
            int r0 = r2.getErrorCode()
            if (r0 != 0) goto L5e
            int r0 = r2.getLocationType()
            if (r0 != 0) goto L5e
            java.lang.String r0 = r2.d()
            java.lang.String r1 = "-5"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L5a
            java.lang.String r0 = r2.d()
            java.lang.String r1 = "1"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L5a
            java.lang.String r0 = r2.d()
            java.lang.String r1 = "2"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L5a
            java.lang.String r0 = r2.d()
            java.lang.String r1 = "14"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L5a
            java.lang.String r0 = r2.d()
            java.lang.String r1 = "24"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L5a
            java.lang.String r0 = r2.d()
            java.lang.String r1 = "-1"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L55
            goto L5a
        L55:
            r0 = 6
            r2.setLocationType(r0)
            goto L5e
        L5a:
            r0 = 5
            r2.setLocationType(r0)
        L5e:
            return
    }

    private void d(com.loc.ew r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.j = r1
        L4:
            return
    }

    private void i() {
            r6 = this;
            com.loc.fm r0 = r6.n
            if (r0 == 0) goto L2f
            com.amap.api.location.AMapLocationClientOption r0 = r6.i     // Catch: java.lang.Throwable -> L2f
            if (r0 != 0) goto Lf
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption     // Catch: java.lang.Throwable -> L2f
            r0.<init>()     // Catch: java.lang.Throwable -> L2f
            r6.i = r0     // Catch: java.lang.Throwable -> L2f
        Lf:
            int r0 = r6.j()     // Catch: java.lang.Throwable -> L2f
            com.loc.fm r1 = r6.n     // Catch: java.lang.Throwable -> L2f
            com.amap.api.location.AMapLocationClientOption r2 = r6.i     // Catch: java.lang.Throwable -> L2f
            long r2 = r2.getHttpTimeOut()     // Catch: java.lang.Throwable -> L2f
            com.amap.api.location.AMapLocationClientOption r4 = r6.i     // Catch: java.lang.Throwable -> L2f
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r4 = r4.getLocationProtocol()     // Catch: java.lang.Throwable -> L2f
            com.amap.api.location.AMapLocationClientOption$AMapLocationProtocol r5 = com.amap.api.location.AMapLocationClientOption.AMapLocationProtocol.HTTPS     // Catch: java.lang.Throwable -> L2f
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L2f
            if (r4 == 0) goto L2b
            r4 = 1
            goto L2c
        L2b:
            r4 = 0
        L2c:
            r1.a(r2, r4, r0)     // Catch: java.lang.Throwable -> L2f
        L2f:
            return
    }

    private int j() {
            r5 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r5.i
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r0.getGeoLanguage()
            r1 = 2
            r2 = 1
            r3 = 0
            if (r0 == 0) goto L23
            int[] r0 = com.loc.er.1.a
            com.amap.api.location.AMapLocationClientOption r4 = r5.i
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r4 = r4.getGeoLanguage()
            int r4 = r4.ordinal()
            r0 = r0[r4]
            if (r0 == r2) goto L23
            if (r0 == r1) goto L21
            r2 = 3
            if (r0 == r2) goto L24
            goto L23
        L21:
            r1 = 1
            goto L24
        L23:
            r1 = 0
        L24:
            return r1
    }

    private void k() {
            r6 = this;
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
            r1 = 1
            com.amap.api.location.AMapLocationClientOption r2 = r6.i     // Catch: java.lang.Throwable -> L45
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r2.getGeoLanguage()     // Catch: java.lang.Throwable -> L45
            com.amap.api.location.AMapLocationClientOption r2 = r6.i     // Catch: java.lang.Throwable -> L45
            boolean r2 = r2.isNeedAddress()     // Catch: java.lang.Throwable -> L45
            com.amap.api.location.AMapLocationClientOption r3 = r6.i     // Catch: java.lang.Throwable -> L46
            boolean r3 = r3.isOffset()     // Catch: java.lang.Throwable -> L46
            com.amap.api.location.AMapLocationClientOption r4 = r6.i     // Catch: java.lang.Throwable -> L43
            boolean r1 = r4.isLocationCacheEnable()     // Catch: java.lang.Throwable -> L43
            com.amap.api.location.AMapLocationClientOption r4 = r6.i     // Catch: java.lang.Throwable -> L3f
            boolean r4 = r4.isOnceLocationLatest()     // Catch: java.lang.Throwable -> L3f
            r6.t = r4     // Catch: java.lang.Throwable -> L3f
            com.amap.api.location.AMapLocationClientOption r4 = r6.i     // Catch: java.lang.Throwable -> L3f
            boolean r4 = r4.isSensorEnable()     // Catch: java.lang.Throwable -> L3f
            r6.B = r4     // Catch: java.lang.Throwable -> L3f
            boolean r4 = r6.q     // Catch: java.lang.Throwable -> L3f
            if (r3 != r4) goto L3b
            boolean r4 = r6.p     // Catch: java.lang.Throwable -> L3f
            if (r2 != r4) goto L3b
            boolean r4 = r6.s     // Catch: java.lang.Throwable -> L3f
            if (r1 != r4) goto L3b
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r4 = r6.r     // Catch: java.lang.Throwable -> L3f
            if (r0 == r4) goto L4a
        L3b:
            r6.r()     // Catch: java.lang.Throwable -> L3f
            goto L4a
        L3f:
            r5 = r3
            r3 = r1
            r1 = r5
            goto L47
        L43:
            r1 = r3
            goto L46
        L45:
            r2 = 1
        L46:
            r3 = 1
        L47:
            r5 = r3
            r3 = r1
            r1 = r5
        L4a:
            r6.q = r3
            r6.p = r2
            r6.s = r1
            r6.r = r0
            return
    }

    private void l() {
            r3 = this;
            com.loc.er$a r0 = r3.h     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto Lb
            com.loc.er$a r0 = new com.loc.er$a     // Catch: java.lang.Throwable -> L2c
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L2c
            r3.h = r0     // Catch: java.lang.Throwable -> L2c
        Lb:
            android.content.IntentFilter r0 = r3.I     // Catch: java.lang.Throwable -> L2c
            if (r0 != 0) goto L22
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Throwable -> L2c
            r0.<init>()     // Catch: java.lang.Throwable -> L2c
            r3.I = r0     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "android.net.wifi.WIFI_STATE_CHANGED"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L2c
            android.content.IntentFilter r0 = r3.I     // Catch: java.lang.Throwable -> L2c
            java.lang.String r1 = "android.net.wifi.SCAN_RESULTS"
            r0.addAction(r1)     // Catch: java.lang.Throwable -> L2c
        L22:
            android.content.Context r0 = r3.a     // Catch: java.lang.Throwable -> L2c
            com.loc.er$a r1 = r3.h     // Catch: java.lang.Throwable -> L2c
            android.content.IntentFilter r2 = r3.I     // Catch: java.lang.Throwable -> L2c
            r0.registerReceiver(r1, r2)     // Catch: java.lang.Throwable -> L2c
            return
        L2c:
            r0 = move-exception
            java.lang.String r1 = "Aps"
            java.lang.String r2 = "initBroadcastListener"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    private byte[] m() throws java.lang.Throwable {
            r10 = this;
            com.loc.fp r0 = r10.l
            if (r0 != 0) goto Lb
            com.loc.fp r0 = new com.loc.fp
            r0.<init>()
            r10.l = r0
        Lb:
            com.amap.api.location.AMapLocationClientOption r0 = r10.i
            if (r0 != 0) goto L16
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption
            r0.<init>()
            r10.i = r0
        L16:
            com.loc.fp r1 = r10.l
            android.content.Context r2 = r10.a
            com.amap.api.location.AMapLocationClientOption r0 = r10.i
            boolean r3 = r0.isNeedAddress()
            com.amap.api.location.AMapLocationClientOption r0 = r10.i
            boolean r4 = r0.isOffset()
            com.loc.fb r5 = r10.d
            com.loc.ff r6 = r10.c
            android.net.ConnectivityManager r7 = r10.b
            java.lang.String r8 = r10.E
            com.loc.fd r9 = r10.Q
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9)
            com.loc.fp r0 = r10.l
            byte[] r0 = r0.a()
            return r0
    }

    private boolean n() {
            r6 = this;
            long r0 = r6.k
            r2 = 1
            r3 = 0
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 != 0) goto La
            return r2
        La:
            long r0 = com.loc.fz.b()
            long r3 = r6.k
            long r0 = r0 - r3
            r3 = 20000(0x4e20, double:9.8813E-320)
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 <= 0) goto L18
            return r2
        L18:
            r0 = 0
            return r0
    }

    private void o() {
            r2 = this;
            com.loc.ff r0 = r2.c
            if (r0 != 0) goto L5
            return
        L5:
            boolean r1 = r2.m
            r0.a(r1)
            return
    }

    private boolean p() {
            r1 = this;
            com.loc.ff r0 = r1.c
            java.util.ArrayList r0 = r0.e()
            r1.g = r0
            if (r0 == 0) goto L12
            int r0 = r0.size()
            if (r0 <= 0) goto L12
            r0 = 0
            goto L13
        L12:
            r0 = 1
        L13:
            return r0
    }

    private void q() {
            r3 = this;
            java.lang.String r0 = r3.N
            if (r0 == 0) goto L7
            r0 = 0
            r3.N = r0
        L7:
            java.lang.StringBuilder r0 = r3.w
            if (r0 == 0) goto L13
            r1 = 0
            int r2 = r0.length()
            r0.delete(r1, r2)
        L13:
            return
    }

    private void r() {
            r3 = this;
            com.loc.fh r0 = r3.e     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L9
            com.loc.fh r0 = r3.e     // Catch: java.lang.Throwable -> L1a
            r0.a()     // Catch: java.lang.Throwable -> L1a
        L9:
            r0 = 0
            r3.d(r0)     // Catch: java.lang.Throwable -> L1a
            r0 = 0
            r3.O = r0     // Catch: java.lang.Throwable -> L1a
            com.loc.ev r0 = r3.D     // Catch: java.lang.Throwable -> L1a
            if (r0 == 0) goto L19
            com.loc.ev r0 = r3.D     // Catch: java.lang.Throwable -> L1a
            r0.a()     // Catch: java.lang.Throwable -> L1a
        L19:
            return
        L1a:
            r0 = move-exception
            java.lang.String r1 = "Aps"
            java.lang.String r2 = "cleanCache"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final com.loc.ew a(double r7, double r9) {
            r6 = this;
            com.loc.fm r0 = r6.n     // Catch: java.lang.Throwable -> L1f
            android.content.Context r1 = r6.a     // Catch: java.lang.Throwable -> L1f
            r2 = r7
            r4 = r9
            java.lang.String r0 = r0.a(r1, r2, r4)     // Catch: java.lang.Throwable -> L1f
            java.lang.String r1 = "\"status\":\"1\""
            boolean r1 = r0.contains(r1)     // Catch: java.lang.Throwable -> L1f
            if (r1 == 0) goto L1f
            com.loc.fo r1 = r6.f     // Catch: java.lang.Throwable -> L1f
            com.loc.ew r0 = r1.a(r0)     // Catch: java.lang.Throwable -> L1f
            r0.setLatitude(r7)     // Catch: java.lang.Throwable -> L1f
            r0.setLongitude(r9)     // Catch: java.lang.Throwable -> L1f
            return r0
        L1f:
            r7 = 0
            return r7
    }

    public final com.loc.ew a(com.loc.eq r18) throws java.lang.Throwable {
            r17 = this;
            r1 = r17
            r2 = r18
            java.lang.String r3 = "Aps"
            r17.d()
            java.lang.String r0 = "conitue"
            r2.e(r0)
            android.content.Context r0 = r1.a
            r4 = 1
            if (r0 != 0) goto L2a
            java.lang.String r0 = "#0101"
            r2.f(r0)
            java.lang.StringBuilder r0 = r1.o
            java.lang.String r2 = "context is null#0101"
            r0.append(r2)
            java.lang.StringBuilder r0 = r1.o
            java.lang.String r0 = r0.toString()
            com.loc.ew r0 = a(r4, r0)
            return r0
        L2a:
            int r0 = r1.K
            int r0 = r0 + r4
            r1.K = r0
            if (r0 != r4) goto L34
            r17.o()
        L34:
            long r5 = r1.k
            boolean r0 = r1.a(r5)
            r5 = 2
            if (r0 == 0) goto L5d
            com.loc.ew r0 = r1.j
            boolean r0 = com.loc.fz.a(r0)
            if (r0 == 0) goto L5d
            boolean r0 = r1.s
            if (r0 == 0) goto L5a
            com.loc.ew r0 = r1.j
            long r2 = r0.getTime()
            boolean r0 = com.loc.fq.a(r2)
            if (r0 == 0) goto L5a
            com.loc.ew r0 = r1.j
            r0.setLocationType(r5)
        L5a:
            com.loc.ew r0 = r1.j
            return r0
        L5d:
            com.loc.ey r0 = r1.A
            if (r0 == 0) goto L6c
            boolean r6 = r1.B
            if (r6 == 0) goto L69
            r0.a()
            goto L6c
        L69:
            r0.b()
        L6c:
            r6 = 0
            com.amap.api.location.AMapLocationClientOption r0 = r1.i     // Catch: java.lang.Throwable -> L8f
            boolean r0 = r0.isOnceLocationLatest()     // Catch: java.lang.Throwable -> L8f
            if (r0 != 0) goto L80
            com.amap.api.location.AMapLocationClientOption r0 = r1.i     // Catch: java.lang.Throwable -> L8f
            boolean r0 = r0.isOnceLocation()     // Catch: java.lang.Throwable -> L8f
            if (r0 != 0) goto L7e
            goto L80
        L7e:
            r0 = 0
            goto L81
        L80:
            r0 = 1
        L81:
            com.loc.ff r7 = r1.c     // Catch: java.lang.Throwable -> L8f
            r7.b(r0)     // Catch: java.lang.Throwable -> L8f
            com.loc.ff r0 = r1.c     // Catch: java.lang.Throwable -> L8f
            java.util.ArrayList r0 = r0.e()     // Catch: java.lang.Throwable -> L8f
            r1.g = r0     // Catch: java.lang.Throwable -> L8f
            goto L95
        L8f:
            r0 = move-exception
            java.lang.String r7 = "getLocation getScanResultsParam"
            com.loc.fr.a(r0, r3, r7)
        L95:
            com.loc.fb r0 = r1.d     // Catch: java.lang.Throwable -> L9f
            boolean r7 = r17.p()     // Catch: java.lang.Throwable -> L9f
            r0.a(r6, r7)     // Catch: java.lang.Throwable -> L9f
            goto La5
        L9f:
            r0 = move-exception
            java.lang.String r7 = "getLocation getCgiListParam"
            com.loc.fr.a(r0, r3, r7)
        La5:
            java.lang.String r0 = r17.c(r18)
            r1.N = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lbe
            int r0 = r1.z
            java.lang.StringBuilder r2 = r1.o
            java.lang.String r2 = r2.toString()
            com.loc.ew r0 = a(r0, r2)
            return r0
        Lbe:
            java.lang.StringBuilder r0 = r1.w
            java.lang.StringBuilder r0 = r1.a(r0)
            r1.w = r0
            com.loc.ff r0 = r1.c
            boolean r0 = r0.n()
            r3 = 4
            if (r0 == 0) goto Le3
            r0 = 15
            java.lang.String r5 = "networkLocation has been mocked!#1502"
            com.loc.ew r0 = a(r0, r5)
            java.lang.String r5 = "#1502"
            r2.f(r5)
            r0.setMock(r4)
            r0.setTrustedLevel(r3)
            return r0
        Le3:
            boolean r9 = r17.n()
            com.loc.fh r7 = r1.e
            com.loc.fb r8 = r1.d
            com.loc.ew r10 = r1.j
            com.loc.ff r11 = r1.c
            java.lang.StringBuilder r12 = r1.w
            java.lang.String r13 = r1.N
            android.content.Context r14 = r1.a
            r15 = 0
            com.loc.ew r0 = r7.a(r8, r9, r10, r11, r12, r13, r14, r15)
            boolean r7 = com.loc.fz.a(r0)
            if (r7 == 0) goto L107
            r0.setTrustedLevel(r5)
        L103:
            r1.d(r0)
            goto L154
        L107:
            com.loc.ew r0 = r1.b(r4, r2)
            boolean r7 = com.loc.fz.a(r0)
            if (r7 == 0) goto L12d
            java.lang.String r2 = "new"
            r0.e(r2)
            com.loc.fh r2 = r1.e
            java.lang.StringBuilder r7 = r1.w
            java.lang.String r7 = r7.toString()
            r2.a(r7)
            com.loc.fh r2 = r1.e
            com.loc.fb r7 = r1.d
            com.loc.fa r7 = r7.e()
            r2.a(r7)
            goto L103
        L12d:
            com.loc.fh r8 = r1.e
            com.loc.fb r9 = r1.d
            r10 = 0
            com.loc.ew r11 = r1.j
            com.loc.ff r12 = r1.c
            java.lang.StringBuilder r13 = r1.w
            java.lang.String r14 = r1.N
            android.content.Context r15 = r1.a
            r16 = 1
            com.loc.ew r7 = r8.a(r9, r10, r11, r12, r13, r14, r15, r16)
            boolean r8 = com.loc.fz.a(r7)
            if (r8 == 0) goto L154
            java.lang.String r0 = "#0001"
            r2.f(r0)
            r7.setTrustedLevel(r5)
            r1.d(r7)
            r0 = r7
        L154:
            com.loc.ff r2 = r1.c     // Catch: java.lang.Throwable -> L181
            if (r2 == 0) goto L182
            if (r0 == 0) goto L182
            long r7 = com.loc.ff.b()     // Catch: java.lang.Throwable -> L181
            r9 = 15
            int r2 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r2 > 0) goto L168
            r0.setTrustedLevel(r4)     // Catch: java.lang.Throwable -> L181
            goto L182
        L168:
            r9 = 120(0x78, double:5.93E-322)
            int r2 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r2 > 0) goto L172
            r0.setTrustedLevel(r5)     // Catch: java.lang.Throwable -> L181
            goto L182
        L172:
            r4 = 600(0x258, double:2.964E-321)
            int r2 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r2 > 0) goto L17d
            r2 = 3
            r0.setTrustedLevel(r2)     // Catch: java.lang.Throwable -> L181
            goto L182
        L17d:
            r0.setTrustedLevel(r3)     // Catch: java.lang.Throwable -> L181
            goto L182
        L181:
        L182:
            com.loc.fh r8 = r1.e
            java.lang.String r9 = r1.N
            java.lang.StringBuilder r10 = r1.w
            android.content.Context r12 = r1.a
            r13 = 1
            r11 = r0
            r8.a(r9, r10, r11, r12, r13)
            com.loc.fz.a(r0)
            java.lang.StringBuilder r2 = r1.w
            int r3 = r2.length()
            r2.delete(r6, r3)
            if (r0 == 0) goto L1c9
            boolean r2 = r1.B
            if (r2 == 0) goto L1bd
            com.loc.ey r2 = r1.A
            if (r2 == 0) goto L1bd
            double r2 = r2.c()
            r0.setAltitude(r2)
            com.loc.ey r2 = r1.A
            float r2 = r2.d()
            r0.setBearing(r2)
            com.loc.ey r2 = r1.A
            double r2 = r2.e()
            float r2 = (float) r2
            goto L1c6
        L1bd:
            r2 = 0
            r0.setAltitude(r2)
            r2 = 0
            r0.setBearing(r2)
        L1c6:
            r0.setSpeed(r2)
        L1c9:
            r1.d(r0)
            com.loc.ew r0 = r1.j
            return r0
    }

    public final com.loc.ew a(com.loc.ew r3) {
            r2 = this;
            com.loc.ev r0 = r2.D
            boolean r1 = r2.s
            r0.a(r1)
            com.loc.ev r0 = r2.D
            com.loc.ew r3 = r0.a(r3)
            return r3
    }

    public final com.loc.ew a(boolean r7) {
            r6 = this;
            com.loc.ff r0 = r6.c
            boolean r0 = r0.n()
            if (r0 == 0) goto L11
            r7 = 15
            java.lang.String r0 = "networkLocation has been mocked!#1502"
        Lc:
            com.loc.ew r7 = a(r7, r0)
            return r7
        L11:
            java.lang.String r0 = r6.N
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L22
            int r7 = r6.z
            java.lang.StringBuilder r0 = r6.o
            java.lang.String r0 = r0.toString()
            goto Lc
        L22:
            com.loc.fh r0 = r6.e
            android.content.Context r1 = r6.a
            java.lang.String r2 = r6.N
            java.lang.StringBuilder r3 = r6.w
            r4 = 1
            r5 = r7
            com.loc.ew r7 = r0.a(r1, r2, r3, r4, r5)
            boolean r0 = com.loc.fz.a(r7)
            if (r0 == 0) goto L39
            r6.d(r7)
        L39:
            return r7
    }

    public final com.loc.ew a(boolean r3, com.loc.eq r4) {
            r2 = this;
            if (r3 == 0) goto L5
            java.lang.String r0 = "statics"
            goto L7
        L5:
            java.lang.String r0 = "first"
        L7:
            r4.e(r0)
            android.content.Context r0 = r2.a
            r1 = 1
            if (r0 != 0) goto L2c
            java.lang.String r3 = "#0101"
            r4.f(r3)
            java.lang.StringBuilder r3 = r2.o
            java.lang.String r4 = "context is null#0101"
            r3.append(r4)
            r3 = 0
            r4 = 2011(0x7db, float:2.818E-42)
            com.loc.fx.a(r3, r4)
            java.lang.StringBuilder r3 = r2.o
            java.lang.String r3 = r3.toString()
            com.loc.ew r3 = a(r1, r3)
            return r3
        L2c:
            com.loc.ff r0 = r2.c
            boolean r0 = r0.n()
            if (r0 == 0) goto L42
            java.lang.String r3 = "#1502"
            r4.f(r3)
            r3 = 15
            java.lang.String r4 = "networkLocation has been mocked!#1502"
            com.loc.ew r3 = a(r3, r4)
            return r3
        L42:
            r2.b()
            java.lang.String r0 = r2.N
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L5a
            int r3 = r2.z
            java.lang.StringBuilder r4 = r2.o
            java.lang.String r4 = r4.toString()
            com.loc.ew r3 = a(r3, r4)
            return r3
        L5a:
            com.loc.ew r3 = r2.b(r3, r4)
            boolean r4 = com.loc.fz.a(r3)
            if (r4 == 0) goto L81
            boolean r4 = com.loc.er.S
            if (r4 != 0) goto L81
            com.loc.fh r4 = r2.e
            java.lang.StringBuilder r0 = r2.w
            java.lang.String r0 = r0.toString()
            r4.a(r0)
            com.loc.fh r4 = r2.e
            com.loc.fb r0 = r2.d
            com.loc.fa r0 = r0.e()
            r4.a(r0)
            r2.d(r3)
        L81:
            com.loc.er.S = r1
            return r3
    }

    public final void a() {
            r1 = this;
            com.loc.fb r0 = r1.d
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }

    public final void a(android.content.Context r5) {
            r4 = this;
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L5d
            if (r0 == 0) goto L5
            return
        L5:
            com.loc.ev r0 = new com.loc.ev     // Catch: java.lang.Throwable -> L5d
            r0.<init>()     // Catch: java.lang.Throwable -> L5d
            r4.D = r0     // Catch: java.lang.Throwable -> L5d
            android.content.Context r0 = r5.getApplicationContext()     // Catch: java.lang.Throwable -> L5d
            r4.a = r0     // Catch: java.lang.Throwable -> L5d
            com.loc.fz.b(r0)     // Catch: java.lang.Throwable -> L5d
            com.loc.ff r0 = r4.c     // Catch: java.lang.Throwable -> L5d
            if (r0 != 0) goto L2e
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L5d
            java.lang.String r1 = "wifi"
            java.lang.Object r0 = com.loc.fz.a(r0, r1)     // Catch: java.lang.Throwable -> L5d
            android.net.wifi.WifiManager r0 = (android.net.wifi.WifiManager) r0     // Catch: java.lang.Throwable -> L5d
            com.loc.ff r1 = new com.loc.ff     // Catch: java.lang.Throwable -> L5d
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L5d
            android.os.Handler r3 = r4.P     // Catch: java.lang.Throwable -> L5d
            r1.<init>(r2, r0, r3)     // Catch: java.lang.Throwable -> L5d
            r4.c = r1     // Catch: java.lang.Throwable -> L5d
        L2e:
            com.loc.fb r0 = r4.d     // Catch: java.lang.Throwable -> L5d
            if (r0 != 0) goto L3d
            com.loc.fb r0 = new com.loc.fb     // Catch: java.lang.Throwable -> L5d
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L5d
            android.os.Handler r2 = r4.P     // Catch: java.lang.Throwable -> L5d
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L5d
            r4.d = r0     // Catch: java.lang.Throwable -> L5d
        L3d:
            com.loc.fd r0 = new com.loc.fd     // Catch: java.lang.Throwable -> L5d
            android.os.Handler r1 = r4.P     // Catch: java.lang.Throwable -> L5d
            r0.<init>(r5, r1)     // Catch: java.lang.Throwable -> L5d
            r4.Q = r0     // Catch: java.lang.Throwable -> L5d
            com.loc.fh r5 = r4.e     // Catch: java.lang.Throwable -> L5d
            if (r5 != 0) goto L51
            com.loc.fh r5 = new com.loc.fh     // Catch: java.lang.Throwable -> L5d
            r5.<init>()     // Catch: java.lang.Throwable -> L5d
            r4.e = r5     // Catch: java.lang.Throwable -> L5d
        L51:
            com.loc.fo r5 = r4.f     // Catch: java.lang.Throwable -> L5d
            if (r5 != 0) goto L5c
            com.loc.fo r5 = new com.loc.fo     // Catch: java.lang.Throwable -> L5d
            r5.<init>()     // Catch: java.lang.Throwable -> L5d
            r4.f = r5     // Catch: java.lang.Throwable -> L5d
        L5c:
            return
        L5d:
            r5 = move-exception
            r5.printStackTrace()
            java.lang.String r0 = "Aps"
            java.lang.String r1 = "initBase"
            com.loc.fr.a(r5, r0, r1)
            return
    }

    public final void a(android.os.Handler r1) {
            r0 = this;
            r0.P = r1
            return
    }

    public final void a(com.amap.api.location.AMapLocation r4) {
            r3 = this;
            int r0 = r4.getErrorCode()
            if (r0 == 0) goto L7
            return
        L7:
            com.loc.fc r0 = new com.loc.fc
            r0.<init>()
            int r1 = r4.getLocationType()
            r0.a = r1
            long r1 = r4.getTime()
            r0.d = r1
            float r1 = r4.getAccuracy()
            int r1 = (int) r1
            r0.e = r1
            double r1 = r4.getLatitude()
            r0.b = r1
            double r1 = r4.getLongitude()
            r0.c = r1
            int r4 = r4.getLocationType()
            r1 = 1
            if (r4 != r1) goto L37
            com.loc.fd r4 = r3.Q
            r4.a(r0)
        L37:
            return
    }

    public final void a(com.amap.api.location.AMapLocationClientOption r8) {
            r7 = this;
            r7.i = r8
            if (r8 != 0) goto Lb
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption
            r0.<init>()
            r7.i = r0
        Lb:
            com.loc.ff r1 = r7.c
            if (r1 == 0) goto L2b
            com.amap.api.location.AMapLocationClientOption r0 = r7.i
            r0.isWifiActiveScan()
            com.amap.api.location.AMapLocationClientOption r0 = r7.i
            boolean r2 = r0.isWifiScan()
            com.amap.api.location.AMapLocationClientOption r0 = r7.i
            boolean r3 = r0.isMockEnable()
            boolean r4 = com.amap.api.location.AMapLocationClientOption.isOpenAlwaysScanWifi()
            long r5 = r8.getScanWifiInterval()
            r1.a(r2, r3, r4, r5)
        L2b:
            r7.i()
            com.loc.fh r8 = r7.e
            if (r8 == 0) goto L37
            com.amap.api.location.AMapLocationClientOption r0 = r7.i
            r8.a(r0)
        L37:
            com.loc.fo r8 = r7.f
            if (r8 == 0) goto L40
            com.amap.api.location.AMapLocationClientOption r0 = r7.i
            r8.a(r0)
        L40:
            r7.k()
            return
    }

    public final void a(com.loc.ew r4, int r5) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r4.getErrorCode()
            if (r0 == 0) goto La
            return
        La:
            com.loc.fc r0 = new com.loc.fc
            r0.<init>()
            long r1 = r4.getTime()
            r0.d = r1
            float r1 = r4.getAccuracy()
            int r1 = (int) r1
            r0.e = r1
            double r1 = r4.getLatitude()
            r0.b = r1
            double r1 = r4.getLongitude()
            r0.c = r1
            r0.a = r5
            java.lang.String r5 = r4.d()
            int r5 = java.lang.Integer.parseInt(r5)
            r0.g = r5
            int r4 = r4.l()
            r0.h = r4
            com.loc.fd r4 = r3.Q
            r4.b(r0)
            return
    }

    public final void b() {
            r2 = this;
            android.content.Context r0 = r2.a
            com.loc.fm r0 = com.loc.fm.a(r0)
            r2.n = r0
            r2.i()
            android.net.ConnectivityManager r0 = r2.b
            if (r0 != 0) goto L1b
            android.content.Context r0 = r2.a
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = com.loc.fz.a(r0, r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            r2.b = r0
        L1b:
            com.loc.fp r0 = r2.l
            if (r0 != 0) goto L26
            com.loc.fp r0 = new com.loc.fp
            r0.<init>()
            r2.l = r0
        L26:
            return
    }

    public final void b(com.loc.eq r4) {
            r3 = this;
            r0 = 1
            boolean r1 = r3.x     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L6
            return
        L6:
            r3.q()     // Catch: java.lang.Throwable -> L3d
            boolean r1 = r3.t     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L10
            r3.l()     // Catch: java.lang.Throwable -> L3d
        L10:
            com.loc.ff r1 = r3.c     // Catch: java.lang.Throwable -> L3d
            boolean r2 = r3.t     // Catch: java.lang.Throwable -> L3d
            r1.b(r2)     // Catch: java.lang.Throwable -> L3d
            com.loc.ff r1 = r3.c     // Catch: java.lang.Throwable -> L3d
            java.util.ArrayList r1 = r1.e()     // Catch: java.lang.Throwable -> L3d
            r3.g = r1     // Catch: java.lang.Throwable -> L3d
            com.loc.fb r1 = r3.d     // Catch: java.lang.Throwable -> L3d
            boolean r2 = r3.p()     // Catch: java.lang.Throwable -> L3d
            r1.a(r0, r2)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = r3.c(r4)     // Catch: java.lang.Throwable -> L3d
            r3.N = r4     // Catch: java.lang.Throwable -> L3d
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3d
            if (r4 != 0) goto L45
            java.lang.StringBuilder r4 = r3.w     // Catch: java.lang.Throwable -> L3d
            java.lang.StringBuilder r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L3d
            r3.w = r4     // Catch: java.lang.Throwable -> L3d
            goto L45
        L3d:
            r4 = move-exception
            java.lang.String r1 = "Aps"
            java.lang.String r2 = "initFirstLocateParam"
            com.loc.fr.a(r4, r1, r2)
        L45:
            r3.x = r0
            return
    }

    public final void b(com.loc.ew r8) {
            r7 = this;
            boolean r0 = com.loc.fz.a(r8)
            if (r0 == 0) goto L13
            com.loc.fh r1 = r7.e
            java.lang.String r2 = r7.N
            java.lang.StringBuilder r3 = r7.w
            android.content.Context r5 = r7.a
            r6 = 1
            r4 = r8
            r1.a(r2, r3, r4, r5, r6)
        L13:
            return
    }

    public final void c() {
            r3 = this;
            com.loc.ey r0 = r3.A
            if (r0 != 0) goto Ld
            com.loc.ey r0 = new com.loc.ey
            android.content.Context r1 = r3.a
            r0.<init>(r1)
            r3.A = r0
        Ld:
            r3.l()
            com.loc.ff r0 = r3.c
            r1 = 0
            r0.b(r1)
            com.loc.ff r0 = r3.c
            java.util.ArrayList r0 = r0.e()
            r3.g = r0
            com.loc.fb r0 = r3.d
            boolean r2 = r3.p()
            r0.a(r1, r2)
            com.loc.fh r0 = r3.e
            android.content.Context r1 = r3.a
            r0.a(r1)
            android.content.Context r0 = r3.a
            r3.b(r0)
            r0 = 1
            r3.y = r0
            return
    }

    public final void d() {
            r3 = this;
            java.lang.StringBuilder r0 = r3.o
            int r0 = r0.length()
            if (r0 <= 0) goto L12
            java.lang.StringBuilder r0 = r3.o
            r1 = 0
            int r2 = r0.length()
            r0.delete(r1, r2)
        L12:
            return
    }

    public final void e() {
            r4 = this;
            r0 = 0
            r4.E = r0
            r1 = 0
            r4.x = r1
            r4.y = r1
            com.loc.fh r1 = r4.e
            if (r1 == 0) goto L11
            android.content.Context r2 = r4.a
            r1.b(r2)
        L11:
            com.loc.ev r1 = r4.D
            if (r1 == 0) goto L18
            r1.a()
        L18:
            com.loc.fo r1 = r4.f
            if (r1 == 0) goto L1e
            r4.f = r0
        L1e:
            com.loc.fd r1 = r4.Q
            if (r1 == 0) goto L27
            boolean r2 = r4.H
            r1.a(r2)
        L27:
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L36
            com.loc.er$a r1 = r4.h     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L36
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L39
            com.loc.er$a r2 = r4.h     // Catch: java.lang.Throwable -> L39
            r1.unregisterReceiver(r2)     // Catch: java.lang.Throwable -> L39
        L36:
            r4.h = r0
            goto L42
        L39:
            r1 = move-exception
            java.lang.String r2 = "Aps"
            java.lang.String r3 = "destroy"
            com.loc.fr.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L6b
            goto L36
        L42:
            com.loc.fb r1 = r4.d
            if (r1 == 0) goto L4b
            boolean r2 = r4.H
            r1.a(r2)
        L4b:
            com.loc.ff r1 = r4.c
            if (r1 == 0) goto L54
            boolean r2 = r4.H
            r1.c(r2)
        L54:
            java.util.ArrayList<com.loc.eg> r1 = r4.g
            if (r1 == 0) goto L5b
            r1.clear()
        L5b:
            com.loc.ey r1 = r4.A
            if (r1 == 0) goto L62
            r1.f()
        L62:
            r4.j = r0
            r4.a = r0
            r4.w = r0
            r4.J = r0
            return
        L6b:
            r1 = move-exception
            r4.h = r0
            throw r1
    }

    public final void f() {
            r1 = this;
            com.loc.es r0 = r1.T
            if (r0 == 0) goto L7
            r0.d()
        L7:
            return
    }

    public final void g() {
            r4 = this;
            android.content.Context r0 = r4.a     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L5
            return
        L5:
            com.loc.es r0 = r4.T     // Catch: java.lang.Throwable -> L1e
            if (r0 != 0) goto L12
            com.loc.es r0 = new com.loc.es     // Catch: java.lang.Throwable -> L1e
            android.content.Context r1 = r4.a     // Catch: java.lang.Throwable -> L1e
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1e
            r4.T = r0     // Catch: java.lang.Throwable -> L1e
        L12:
            com.loc.es r0 = r4.T     // Catch: java.lang.Throwable -> L1e
            com.loc.fb r1 = r4.d     // Catch: java.lang.Throwable -> L1e
            com.loc.ff r2 = r4.c     // Catch: java.lang.Throwable -> L1e
            android.os.Handler r3 = r4.P     // Catch: java.lang.Throwable -> L1e
            r0.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L1e
            return
        L1e:
            r0 = move-exception
            java.lang.String r1 = "as"
            java.lang.String r2 = "stc"
            com.loc.av.b(r0, r1, r2)
            return
    }

    public final void h() {
            r1 = this;
            com.loc.es r0 = r1.T
            if (r0 == 0) goto L7
            r0.a()
        L7:
            return
    }
}
