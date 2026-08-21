package com.loc;

public final class ff {
    public static long A;
    static long d;
    static long e;
    static long f;
    public static long g;
    static long h;
    public static java.util.HashMap<java.lang.String, java.lang.Long> w;
    public static long x;
    static int y;
    volatile boolean B;
    private volatile android.net.wifi.WifiInfo C;
    private long D;
    private com.loc.es E;
    android.net.wifi.WifiManager a;
    java.util.ArrayList<com.loc.eg> b;
    java.util.ArrayList<com.loc.eg> c;
    android.content.Context i;
    boolean j;
    java.lang.StringBuilder k;
    boolean l;
    boolean m;
    boolean n;
    java.lang.String o;
    java.util.TreeMap<java.lang.Integer, com.loc.eg> p;
    public boolean q;
    public boolean r;
    public boolean s;
    com.loc.fe t;
    java.lang.String u;
    long v;
    android.net.ConnectivityManager z;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 36
            r0.<init>(r1)
            com.loc.ff.w = r0
            r0 = 0
            com.loc.ff.x = r0
            r2 = 0
            com.loc.ff.y = r2
            com.loc.ff.A = r0
            return
    }

    public ff(android.content.Context r5, android.net.wifi.WifiManager r6, android.os.Handler r7) {
            r4 = this;
            r4.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.b = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.c = r0
            r0 = 0
            r4.j = r0
            r1 = 0
            r4.k = r1
            r2 = 1
            r4.l = r2
            r4.m = r2
            r4.n = r2
            r4.C = r1
            r4.o = r1
            r4.p = r1
            r4.q = r2
            r4.r = r2
            r4.s = r0
            java.lang.String r2 = ""
            r4.u = r2
            r2 = 0
            r4.v = r2
            r4.z = r1
            r1 = 30000(0x7530, double:1.4822E-319)
            r4.D = r1
            r4.B = r0
            r4.a = r6
            r4.i = r5
            com.loc.fe r6 = new com.loc.fe
            java.lang.String r0 = "wifiAgee"
            r6.<init>(r5, r0, r7)
            r4.t = r6
            r6.a()
            return
    }

    private void A() {
            r2 = this;
            android.content.Context r0 = r2.i     // Catch: java.lang.Throwable -> L13
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19XSUZJX1NUQVRF"
            boolean r0 = com.loc.fz.c(r0, r1)     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L12
            android.net.wifi.WifiManager r0 = r2.a     // Catch: java.lang.Throwable -> L13
            boolean r0 = r0.isWifiEnabled()     // Catch: java.lang.Throwable -> L13
            r2.r = r0     // Catch: java.lang.Throwable -> L13
        L12:
            return
        L13:
            com.loc.ft.b()
            return
    }

    private boolean B() {
            r9 = this;
            boolean r0 = r9.v()
            r9.q = r0
            r9.A()
            boolean r0 = r9.q
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L11
        Lf:
            r1 = 0
            goto L44
        L11:
            boolean r0 = r9.l
            if (r0 != 0) goto L16
            goto Lf
        L16:
            long r3 = com.loc.ff.f
            r5 = 0
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto L1f
            goto L44
        L1f:
            long r3 = com.loc.fz.b()
            long r5 = com.loc.ff.f
            long r3 = r3 - r5
            r5 = 4900(0x1324, double:2.421E-320)
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 >= 0) goto L2d
            goto Lf
        L2d:
            long r3 = com.loc.fz.b()
            long r7 = com.loc.ff.g
            long r3 = r3 - r7
            r7 = 1500(0x5dc, double:7.41E-321)
            int r0 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r0 >= 0) goto L3b
            goto Lf
        L3b:
            long r2 = com.loc.fz.b()
            long r7 = com.loc.ff.g
            long r2 = r2 - r7
            int r0 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
        L44:
            return r1
    }

    private static boolean a(int r3) {
            r0 = 20
            int r0 = android.net.wifi.WifiManager.calculateSignalLevel(r3, r0)     // Catch: java.lang.ArithmeticException -> L7
            goto Lf
        L7:
            r3 = move-exception
            java.lang.String r1 = "Aps"
            java.lang.String r2 = "wifiSigFine"
            com.loc.fr.a(r3, r1, r2)
        Lf:
            if (r0 <= 0) goto L13
            r3 = 1
            return r3
        L13:
            r3 = 0
            return r3
    }

    public static boolean a(android.net.wifi.WifiInfo r2) {
            r0 = 0
            if (r2 != 0) goto L4
            goto L1b
        L4:
            java.lang.String r1 = r2.getSSID()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto Lf
            goto L1b
        Lf:
            java.lang.String r2 = r2.getBSSID()
            boolean r2 = com.loc.fz.a(r2)
            if (r2 != 0) goto L1a
            goto L1b
        L1a:
            r0 = 1
        L1b:
            return r0
    }

    public static long b() {
            long r0 = com.loc.fz.b()
            long r2 = com.loc.ff.x
            long r0 = r0 - r2
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 / r2
            r2 = 1
            long r0 = r0 + r2
            return r0
    }

    private void d(boolean r6) {
            r5 = this;
            java.util.ArrayList<com.loc.eg> r0 = r5.b
            if (r0 == 0) goto Ld3
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto Lc
            goto Ld3
        Lc:
            long r0 = com.loc.fz.b()
            long r2 = com.loc.ff.g
            long r0 = r0 - r2
            r2 = 3600000(0x36ee80, double:1.7786363E-317)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L1d
            r5.g()
        L1d:
            java.util.TreeMap<java.lang.Integer, com.loc.eg> r0 = r5.p
            if (r0 != 0) goto L2c
            java.util.TreeMap r0 = new java.util.TreeMap
            java.util.Comparator r1 = java.util.Collections.reverseOrder()
            r0.<init>(r1)
            r5.p = r0
        L2c:
            java.util.TreeMap<java.lang.Integer, com.loc.eg> r0 = r5.p
            r0.clear()
            boolean r0 = r5.s
            if (r0 == 0) goto L3c
            if (r6 == 0) goto L3c
            java.util.ArrayList<com.loc.eg> r0 = r5.c     // Catch: java.lang.Throwable -> L3c
            r0.clear()     // Catch: java.lang.Throwable -> L3c
        L3c:
            java.util.ArrayList<com.loc.eg> r0 = r5.b
            int r0 = r0.size()
            r1 = 0
            r5.v = r1
            r1 = 0
        L47:
            if (r1 >= r0) goto Lad
            java.util.ArrayList<com.loc.eg> r2 = r5.b
            java.lang.Object r2 = r2.get(r1)
            com.loc.eg r2 = (com.loc.eg) r2
            boolean r3 = r2.h
            if (r3 == 0) goto L59
            long r3 = r2.f
            r5.v = r3
        L59:
            if (r2 == 0) goto L62
            long r3 = r2.a
            java.lang.String r3 = com.loc.eg.a(r3)
            goto L64
        L62:
            java.lang.String r3 = ""
        L64:
            boolean r3 = com.loc.fz.a(r3)
            if (r3 == 0) goto Laa
            r3 = 20
            if (r0 <= r3) goto L76
            int r3 = r2.c
            boolean r3 = a(r3)
            if (r3 == 0) goto Laa
        L76:
            boolean r3 = r5.s
            if (r3 == 0) goto L81
            if (r6 == 0) goto L81
            java.util.ArrayList<com.loc.eg> r3 = r5.c
            r3.add(r2)
        L81:
            java.lang.String r3 = r2.b
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L98
            java.lang.String r3 = r2.b
            java.lang.String r4 = "<unknown ssid>"
            boolean r3 = r4.equals(r3)
            if (r3 != 0) goto L9c
            java.lang.String r3 = java.lang.String.valueOf(r1)
            goto L9a
        L98:
            java.lang.String r3 = "unkwn"
        L9a:
            r2.b = r3
        L9c:
            java.util.TreeMap<java.lang.Integer, com.loc.eg> r3 = r5.p
            int r4 = r2.c
            int r4 = r4 * 25
            int r4 = r4 + r1
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r3.put(r4, r2)
        Laa:
            int r1 = r1 + 1
            goto L47
        Lad:
            java.util.ArrayList<com.loc.eg> r6 = r5.b
            r6.clear()
            java.util.TreeMap<java.lang.Integer, com.loc.eg> r6 = r5.p
            java.util.Collection r6 = r6.values()
            java.util.Iterator r6 = r6.iterator()
        Lbc:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto Lce
            java.lang.Object r0 = r6.next()
            com.loc.eg r0 = (com.loc.eg) r0
            java.util.ArrayList<com.loc.eg> r1 = r5.b
            r1.add(r0)
            goto Lbc
        Lce:
            java.util.TreeMap<java.lang.Integer, com.loc.eg> r6 = r5.p
            r6.clear()
        Ld3:
            return
    }

    public static java.lang.String p() {
            long r0 = com.loc.fz.b()
            long r2 = com.loc.ff.g
            long r0 = r0 - r2
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
    }

    private java.util.List<com.loc.eg> r() {
            r14 = this;
            android.net.wifi.WifiManager r0 = r14.a
            r1 = 0
            if (r0 == 0) goto L115
            android.content.Context r0 = r14.i     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r2 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19XSUZJX1NUQVRF"
            boolean r0 = com.loc.fz.c(r0, r2)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r0 == 0) goto L16
            android.net.wifi.WifiManager r0 = r14.a     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.util.List r0 = r0.getScanResults()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            goto L25
        L16:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r2 = "gst_n_aws"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r2 = "OPENSDK_WMW"
            java.lang.String r3 = "gsr_n_aws"
            com.loc.fr.a(r0, r2, r3)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r0 = r1
        L25:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r3 = 17
            if (r2 < r3) goto L69
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r4 = 36
            r2.<init>(r4)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r0 == 0) goto L50
            java.util.Iterator r4 = r0.iterator()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
        L38:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r5 == 0) goto L50
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            android.net.wifi.ScanResult r5 = (android.net.wifi.ScanResult) r5     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r6 = r5.BSSID     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            long r7 = r5.timestamp     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.Long r5 = java.lang.Long.valueOf(r7)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r2.put(r6, r5)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            goto L38
        L50:
            java.util.HashMap<java.lang.String, java.lang.Long> r4 = com.loc.ff.w     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            boolean r4 = r4.isEmpty()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r4 != 0) goto L60
            java.util.HashMap<java.lang.String, java.lang.Long> r4 = com.loc.ff.w     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            boolean r4 = r4.equals(r2)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r4 != 0) goto L6e
        L60:
            com.loc.ff.w = r2     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            long r4 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
        L66:
            com.loc.ff.x = r4     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            goto L6e
        L69:
            long r4 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            goto L66
        L6e:
            r14.o = r1     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r2.<init>()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r4 = ""
            r14.u = r4     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            android.net.wifi.WifiInfo r4 = r14.m()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r14.C = r4     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            android.net.wifi.WifiInfo r4 = r14.C     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            boolean r4 = a(r4)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r4 == 0) goto L8f
            android.net.wifi.WifiInfo r4 = r14.C     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r4 = r4.getBSSID()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r14.u = r4     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
        L8f:
            if (r0 == 0) goto Lfd
            int r4 = r0.size()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r4 <= 0) goto Lfd
            int r4 = r0.size()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r5 = 0
            r6 = 0
        L9d:
            if (r6 >= r4) goto Lfd
            java.lang.Object r7 = r0.get(r6)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            android.net.wifi.ScanResult r7 = (android.net.wifi.ScanResult) r7     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r8 = r7.BSSID     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r9 = r14.u     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r9 != 0) goto Lb9
            java.lang.String r9 = r14.u     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            boolean r8 = r9.equals(r8)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r8 == 0) goto Lb9
            r8 = 1
            goto Lba
        Lb9:
            r8 = 0
        Lba:
            com.loc.eg r9 = new com.loc.eg     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r9.<init>(r8)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r8 = r7.SSID     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r9.b = r8     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            int r8 = r7.frequency     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r9.d = r8     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            long r10 = r7.timestamp     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r9.e = r10     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            java.lang.String r8 = r7.BSSID     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            long r10 = com.loc.eg.a(r8)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r9.a = r10     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            int r8 = r7.level     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            short r8 = (short) r8     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r9.c = r8     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            int r8 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r8 < r3) goto Lf1
            long r7 = r7.timestamp     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r10 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 / r10
            long r12 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            long r12 = r12 - r7
            long r12 = r12 / r10
            int r7 = (int) r12     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            short r7 = (short) r7     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r9.g = r7     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            short r7 = r9.g     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            if (r7 >= 0) goto Lf1
            r9.g = r5     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
        Lf1:
            long r7 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r9.f = r7     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r2.add(r9)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            int r6 = r6 + 1
            goto L9d
        Lfd:
            com.loc.fe r0 = r14.t     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            r0.a(r2)     // Catch: java.lang.Throwable -> L103 java.lang.SecurityException -> L10e
            return r2
        L103:
            r0 = move-exception
            r14.o = r1
            java.lang.String r2 = "WifiManagerWrapper"
            java.lang.String r3 = "getScanResults"
            com.loc.fr.a(r0, r2, r3)
            goto L115
        L10e:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            r14.o = r0
        L115:
            return r1
    }

    private int s() {
            r1 = this;
            android.net.wifi.WifiManager r0 = r1.a
            if (r0 == 0) goto L9
            int r0 = r0.getWifiState()
            return r0
        L9:
            r0 = 4
            return r0
    }

    private boolean t() {
            r11 = this;
            long r0 = com.loc.fz.b()
            long r2 = com.loc.ff.d
            long r0 = r0 - r2
            r2 = 0
            r3 = 4900(0x1324, double:2.421E-320)
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 >= 0) goto Lf
            return r2
        Lf:
            boolean r3 = r11.u()
            if (r3 == 0) goto L1c
            r3 = 9900(0x26ac, double:4.8912E-320)
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 >= 0) goto L1c
            return r2
        L1c:
            int r3 = com.loc.ff.y
            r4 = 1
            if (r3 <= r4) goto L45
            long r5 = r11.D
            r7 = 30000(0x7530, double:1.4822E-319)
            int r3 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r3 == 0) goto L2a
            goto L3a
        L2a:
            long r5 = com.loc.fq.o()
            r9 = -1
            int r3 = (r5 > r9 ? 1 : (r5 == r9 ? 0 : -1))
            if (r3 == 0) goto L39
            long r5 = com.loc.fq.o()
            goto L3a
        L39:
            r5 = r7
        L3a:
            int r3 = android.os.Build.VERSION.SDK_INT
            r7 = 28
            if (r3 < r7) goto L45
            int r3 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r3 >= 0) goto L45
            return r2
        L45:
            android.net.wifi.WifiManager r0 = r11.a
            if (r0 == 0) goto L76
            long r0 = com.loc.fz.b()
            com.loc.ff.d = r0
            int r0 = com.loc.ff.y
            r1 = 2
            if (r0 >= r1) goto L57
            int r0 = r0 + r4
            com.loc.ff.y = r0
        L57:
            android.content.Context r0 = r11.i
            java.lang.String r1 = "WYW5kcm9pZC5wZXJtaXNzaW9uLkNIQU5HRV9XSUZJX1NUQVRF"
            boolean r0 = com.loc.fz.c(r0, r1)
            if (r0 == 0) goto L68
            android.net.wifi.WifiManager r0 = r11.a
            boolean r0 = r0.startScan()
            return r0
        L68:
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "n_cws"
            r0.<init>(r1)
            java.lang.String r1 = "OPENSDK_WMW"
            java.lang.String r3 = "wfs_n_cws"
            com.loc.fr.a(r0, r1, r3)
        L76:
            return r2
    }

    private boolean u() {
            r2 = this;
            android.net.ConnectivityManager r0 = r2.z
            if (r0 != 0) goto L10
            android.content.Context r0 = r2.i
            java.lang.String r1 = "connectivity"
            java.lang.Object r0 = com.loc.fz.a(r0, r1)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            r2.z = r0
        L10:
            android.net.ConnectivityManager r0 = r2.z
            boolean r0 = r2.a(r0)
            return r0
    }

    private boolean v() {
            r1 = this;
            android.net.wifi.WifiManager r0 = r1.a
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.content.Context r0 = r1.i
            boolean r0 = com.loc.fz.g(r0)
            return r0
    }

    private void w() {
            r8 = this;
            boolean r0 = r8.B()
            if (r0 == 0) goto L3b
            long r0 = com.loc.fz.b()
            r2 = 20
            long r3 = com.loc.ff.e
            long r3 = r0 - r3
            r5 = 10000(0x2710, double:4.9407E-320)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 < 0) goto L1f
            java.util.ArrayList<com.loc.eg> r3 = r8.b
            r3.clear()
            long r3 = com.loc.ff.g
            com.loc.ff.h = r3
        L1f:
            r8.x()
            long r3 = com.loc.ff.e
            long r0 = r0 - r3
            int r3 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r3 < 0) goto L3b
        L29:
            if (r2 <= 0) goto L3b
            long r0 = com.loc.ff.g
            long r3 = com.loc.ff.h
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 != 0) goto L3b
            r0 = 150(0x96, double:7.4E-322)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.Throwable -> L38
        L38:
            int r2 = r2 + (-1)
            goto L29
        L3b:
            return
    }

    private void x() {
            r3 = this;
            boolean r0 = r3.B()
            if (r0 == 0) goto L1b
            boolean r0 = r3.t()     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L12
            long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L13
            com.loc.ff.f = r0     // Catch: java.lang.Throwable -> L13
        L12:
            return
        L13:
            r0 = move-exception
            java.lang.String r1 = "WifiManager"
            java.lang.String r2 = "wifiScan"
            com.loc.fr.a(r0, r1, r2)
        L1b:
            return
    }

    private void y() {
            r5 = this;
            long r0 = com.loc.ff.h
            long r2 = com.loc.ff.g
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L2c
            r0 = 0
            java.util.List r0 = r5.r()     // Catch: java.lang.Throwable -> Le
            goto L16
        Le:
            r1 = move-exception
            java.lang.String r2 = "WifiManager"
            java.lang.String r3 = "updateScanResult"
            com.loc.fr.a(r1, r2, r3)
        L16:
            long r1 = com.loc.ff.g
            com.loc.ff.h = r1
            if (r0 == 0) goto L27
            java.util.ArrayList<com.loc.eg> r1 = r5.b
            r1.clear()
            java.util.ArrayList<com.loc.eg> r1 = r5.b
            r1.addAll(r0)
            return
        L27:
            java.util.ArrayList<com.loc.eg> r0 = r5.b
            r0.clear()
        L2c:
            return
    }

    private void z() {
            r4 = this;
            android.net.wifi.WifiManager r0 = r4.a     // Catch: java.lang.Throwable -> L2a
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 4
            int r1 = r4.s()     // Catch: java.lang.Throwable -> Lb
            goto L14
        Lb:
            r1 = move-exception
            java.lang.String r2 = "OPENSDK_WMW"
            java.lang.String r3 = "cwsc"
            com.loc.fr.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L2a
            r1 = 4
        L14:
            java.util.ArrayList<com.loc.eg> r2 = r4.b     // Catch: java.lang.Throwable -> L2a
            if (r2 != 0) goto L1f
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2a
            r2.<init>()     // Catch: java.lang.Throwable -> L2a
            r4.b = r2     // Catch: java.lang.Throwable -> L2a
        L1f:
            if (r1 == 0) goto L27
            r2 = 1
            if (r1 == r2) goto L27
            if (r1 == r0) goto L27
            goto L2a
        L27:
            r4.g()     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    public final java.util.ArrayList<com.loc.eg> a() {
            r1 = this;
            boolean r0 = r1.s
            if (r0 != 0) goto L7
            java.util.ArrayList<com.loc.eg> r0 = r1.c
            return r0
        L7:
            r0 = 1
            r1.b(r0)
            java.util.ArrayList<com.loc.eg> r0 = r1.c
            return r0
    }

    public final void a(com.loc.es r1) {
            r0 = this;
            r0.E = r1
            return
    }

    public final void a(boolean r9) {
            r8 = this;
            android.content.Context r0 = r8.i
            boolean r1 = com.loc.fq.n()
            if (r1 == 0) goto L71
            boolean r1 = r8.n
            if (r1 != 0) goto Ld
            goto L71
        Ld:
            android.net.wifi.WifiManager r1 = r8.a
            if (r1 == 0) goto L71
            if (r0 == 0) goto L71
            if (r9 != 0) goto L16
            goto L71
        L16:
            int r9 = com.loc.fz.c()
            r1 = 17
            if (r9 > r1) goto L1f
            return
        L1f:
            android.content.ContentResolver r9 = r0.getContentResolver()
            java.lang.String r0 = "android.provider.Settings$Global"
            r1 = 2
            java.lang.Object[] r2 = new java.lang.Object[r1]
            r3 = 0
            r2[r3] = r9
            java.lang.String r4 = "wifi_scan_always_enabled"
            r5 = 1
            r2[r5] = r4
            java.lang.Class[] r6 = new java.lang.Class[r1]
            java.lang.Class<android.content.ContentResolver> r7 = android.content.ContentResolver.class
            r6[r3] = r7
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r5] = r7
            java.lang.String r7 = "getInt"
            java.lang.Object r2 = com.loc.fv.a(r0, r7, r2, r6)     // Catch: java.lang.Throwable -> L69
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L69
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L69
            if (r2 != 0) goto L68
            r2 = 3
            java.lang.Object[] r6 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L69
            r6[r3] = r9     // Catch: java.lang.Throwable -> L69
            r6[r5] = r4     // Catch: java.lang.Throwable -> L69
            java.lang.Integer r9 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L69
            r6[r1] = r9     // Catch: java.lang.Throwable -> L69
            java.lang.Class[] r9 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L69
            java.lang.Class<android.content.ContentResolver> r2 = android.content.ContentResolver.class
            r9[r3] = r2     // Catch: java.lang.Throwable -> L69
            java.lang.Class<java.lang.String> r2 = java.lang.String.class
            r9[r5] = r2     // Catch: java.lang.Throwable -> L69
            java.lang.Class r2 = java.lang.Integer.TYPE     // Catch: java.lang.Throwable -> L69
            r9[r1] = r2     // Catch: java.lang.Throwable -> L69
            java.lang.String r1 = "putInt"
            com.loc.fv.a(r0, r1, r6, r9)     // Catch: java.lang.Throwable -> L69
        L68:
            return
        L69:
            r9 = move-exception
            java.lang.String r0 = "WifiManagerWrapper"
            java.lang.String r1 = "enableWifiAlwaysScan"
            com.loc.fr.a(r9, r0, r1)
        L71:
            return
    }

    public final void a(boolean r1, boolean r2, boolean r3, long r4) {
            r0 = this;
            r0.l = r1
            r0.m = r2
            r0.n = r3
            r1 = 10000(0x2710, double:4.9407E-320)
            int r3 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r3 >= 0) goto Lf
            r0.D = r1
            return
        Lf:
            r0.D = r4
            return
    }

    public final boolean a(android.net.ConnectivityManager r4) {
            r3 = this;
            r0 = 0
            android.net.NetworkInfo r4 = r4.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L18
            int r4 = com.loc.fz.a(r4)     // Catch: java.lang.Throwable -> L18
            r1 = 1
            if (r4 != r1) goto L20
            android.net.wifi.WifiInfo r4 = r3.c()     // Catch: java.lang.Throwable -> L18
            boolean r4 = a(r4)     // Catch: java.lang.Throwable -> L18
            if (r4 == 0) goto L20
            r0 = 1
            goto L20
        L18:
            r4 = move-exception
            java.lang.String r1 = "WifiManagerWrapper"
            java.lang.String r2 = "wifiAccess"
            com.loc.fr.a(r4, r1, r2)
        L20:
            return r0
    }

    public final void b(boolean r6) {
            r5 = this;
            if (r6 == 0) goto L6
            r5.w()
            goto L9
        L6:
            r5.x()
        L9:
            boolean r6 = r5.B
            r0 = 0
            if (r6 == 0) goto L13
            r5.B = r0
            r5.z()
        L13:
            r5.y()
            long r1 = com.loc.fz.b()
            long r3 = com.loc.ff.g
            long r1 = r1 - r3
            r3 = 20000(0x4e20, double:9.8813E-320)
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 <= 0) goto L28
            java.util.ArrayList<com.loc.eg> r6 = r5.b
            r6.clear()
        L28:
            long r1 = com.loc.fz.b()
            com.loc.ff.e = r1
            java.util.ArrayList<com.loc.eg> r6 = r5.b
            boolean r6 = r6.isEmpty()
            if (r6 == 0) goto L48
            long r1 = com.loc.fz.b()
            com.loc.ff.g = r1
            java.util.List r6 = r5.r()
            if (r6 == 0) goto L48
            java.util.ArrayList<com.loc.eg> r0 = r5.b
            r0.addAll(r6)
            r0 = 1
        L48:
            r5.d(r0)
            return
    }

    public final android.net.wifi.WifiInfo c() {
            r3 = this;
            java.lang.String r0 = "gci_n_aws"
            android.net.wifi.WifiManager r1 = r3.a     // Catch: java.lang.Throwable -> L22
            if (r1 == 0) goto L2a
            android.content.Context r1 = r3.i     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19XSUZJX1NUQVRF"
            boolean r1 = com.loc.fz.c(r1, r2)     // Catch: java.lang.Throwable -> L22
            if (r1 == 0) goto L17
            android.net.wifi.WifiManager r0 = r3.a     // Catch: java.lang.Throwable -> L22
            android.net.wifi.WifiInfo r0 = r0.getConnectionInfo()     // Catch: java.lang.Throwable -> L22
            return r0
        L17:
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Throwable -> L22
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = "OPENSDK_WMW"
            com.loc.fr.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L22
            goto L2a
        L22:
            r0 = move-exception
            java.lang.String r1 = "WifiManagerWrapper"
            java.lang.String r2 = "getConnectionInfo"
            com.loc.fr.a(r0, r1, r2)
        L2a:
            r0 = 0
            return r0
    }

    public final void c(boolean r2) {
            r1 = this;
            r1.g()
            java.util.ArrayList<com.loc.eg> r0 = r1.b
            r0.clear()
            com.loc.fe r0 = r1.t
            r0.a(r2)
            return
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.o
            return r0
    }

    public final java.util.ArrayList<com.loc.eg> e() {
            r2 = this;
            java.util.ArrayList<com.loc.eg> r0 = r2.b
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.ArrayList<com.loc.eg> r1 = r2.b
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L18
            java.util.ArrayList<com.loc.eg> r1 = r2.b
            r0.addAll(r1)
        L18:
            return r0
    }

    public final void f() {
            r3 = this;
            r0 = 1
            r3.s = r0     // Catch: java.lang.Throwable -> L16
            java.util.List r1 = r3.r()     // Catch: java.lang.Throwable -> L16
            if (r1 == 0) goto L13
            java.util.ArrayList<com.loc.eg> r2 = r3.b     // Catch: java.lang.Throwable -> L16
            r2.clear()     // Catch: java.lang.Throwable -> L16
            java.util.ArrayList<com.loc.eg> r2 = r3.b     // Catch: java.lang.Throwable -> L16
            r2.addAll(r1)     // Catch: java.lang.Throwable -> L16
        L13:
            r3.d(r0)     // Catch: java.lang.Throwable -> L16
        L16:
            return
    }

    public final void g() {
            r1 = this;
            r0 = 0
            r1.C = r0
            java.util.ArrayList<com.loc.eg> r0 = r1.b
            r0.clear()
            return
    }

    public final void h() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            com.loc.ff.A = r0
            com.loc.es r0 = r2.E
            if (r0 == 0) goto Ld
            r0.b()
        Ld:
            return
    }

    public final void i() {
            r5 = this;
            android.net.wifi.WifiManager r0 = r5.a
            if (r0 != 0) goto L5
            return
        L5:
            long r0 = com.loc.fz.b()
            long r2 = com.loc.ff.g
            long r0 = r0 - r2
            r2 = 4900(0x1324, double:2.421E-320)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L18
            long r0 = com.loc.fz.b()
            com.loc.ff.g = r0
        L18:
            return
    }

    public final void j() {
            r1 = this;
            android.net.wifi.WifiManager r0 = r1.a
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 1
            r1.B = r0
            return
    }

    public final boolean k() {
            r1 = this;
            boolean r0 = r1.q
            return r0
    }

    public final boolean l() {
            r1 = this;
            boolean r0 = r1.r
            return r0
    }

    public final android.net.wifi.WifiInfo m() {
            r1 = this;
            android.net.wifi.WifiInfo r0 = r1.c()
            r1.C = r0
            android.net.wifi.WifiInfo r0 = r1.C
            return r0
    }

    public final boolean n() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }

    public final java.lang.String o() {
            r12 = this;
            java.lang.StringBuilder r0 = r12.k
            r1 = 0
            if (r0 != 0) goto Lf
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r2 = 700(0x2bc, float:9.81E-43)
            r0.<init>(r2)
            r12.k = r0
            goto L16
        Lf:
            int r2 = r0.length()
            r0.delete(r1, r2)
        L16:
            r12.j = r1
            java.util.ArrayList<com.loc.eg> r0 = r12.b
            int r0 = r0.size()
            r2 = 0
            r3 = 0
            r4 = 0
        L21:
            r5 = 1
            if (r2 >= r0) goto L7a
            java.util.ArrayList<com.loc.eg> r6 = r12.b
            java.lang.Object r6 = r6.get(r2)
            com.loc.eg r6 = (com.loc.eg) r6
            long r6 = r6.a
            java.lang.String r6 = com.loc.eg.a(r6)
            boolean r7 = r12.m
            if (r7 != 0) goto L49
            java.util.ArrayList<com.loc.eg> r7 = r12.b
            java.lang.Object r7 = r7.get(r2)
            com.loc.eg r7 = (com.loc.eg) r7
            java.lang.String r7 = r7.b
            java.lang.String r8 = "<unknown ssid>"
            boolean r7 = r8.equals(r7)
            if (r7 != 0) goto L49
            r3 = 1
        L49:
            java.lang.String r7 = r12.u
            boolean r7 = android.text.TextUtils.isEmpty(r7)
            if (r7 != 0) goto L5d
            java.lang.String r7 = r12.u
            boolean r7 = r7.equals(r6)
            if (r7 == 0) goto L5d
            java.lang.String r4 = "access"
            r7 = 1
            goto L62
        L5d:
            java.lang.String r7 = "nb"
            r11 = r7
            r7 = r4
            r4 = r11
        L62:
            java.lang.StringBuilder r8 = r12.k
            java.util.Locale r9 = java.util.Locale.US
            r10 = 2
            java.lang.Object[] r10 = new java.lang.Object[r10]
            r10[r1] = r6
            r10[r5] = r4
            java.lang.String r4 = "#%s,%s"
            java.lang.String r4 = java.lang.String.format(r9, r4, r10)
            r8.append(r4)
            int r2 = r2 + 1
            r4 = r7
            goto L21
        L7a:
            java.util.ArrayList<com.loc.eg> r0 = r12.b
            int r0 = r0.size()
            if (r0 != 0) goto L83
            r3 = 1
        L83:
            boolean r0 = r12.m
            if (r0 != 0) goto L8b
            if (r3 != 0) goto L8b
            r12.j = r5
        L8b:
            if (r4 != 0) goto La8
            java.lang.String r0 = r12.u
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto La8
            java.lang.StringBuilder r0 = r12.k
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r1 = r12.u
            r0.append(r1)
            java.lang.StringBuilder r0 = r12.k
            java.lang.String r1 = ",access"
            r0.append(r1)
        La8:
            java.lang.StringBuilder r0 = r12.k
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final long q() {
            r2 = this;
            long r0 = r2.v
            return r0
    }
}
