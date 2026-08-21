package com.loc;

public final class o {
    private static java.lang.String A = "";
    private static boolean B = false;
    private static java.lang.String C = "";
    private static java.lang.String D = "";
    private static java.lang.String E = "";
    private static boolean F = false;
    private static boolean G = false;
    private static java.lang.String H = "";
    private static boolean I = false;
    private static boolean J = false;
    private static long K = 0;
    private static int L = 0;
    private static java.lang.String M = null;
    private static java.lang.String N = "";
    private static boolean O = true;
    private static boolean P = false;
    private static java.lang.String Q = "";
    private static boolean R = false;
    private static int S = -1;
    private static boolean T = false;
    private static java.lang.Object U = null;
    private static int V = -1;
    private static boolean W = false;
    private static volatile com.loc.o.b X = null;
    static java.lang.String a = "";
    static java.lang.String b = "";
    static volatile boolean c = true;
    public static boolean d = false;
    static java.lang.String e = "";
    static boolean f = false;
    public static com.loc.o.a g = null;
    static int h = -1;
    static java.lang.String i = "";
    static java.lang.String j = "";
    private static java.lang.String k = null;
    private static boolean l = false;
    private static java.lang.String m = "";
    private static volatile boolean n = false;
    private static java.lang.String o = "";
    private static boolean p = false;
    private static java.lang.String q = null;
    private static android.os.IBinder r = null;
    private static boolean s = false;
    private static boolean t = false;
    private static java.lang.String u = "";
    private static java.lang.String v = "";
    private static boolean w = false;
    private static boolean x = false;
    private static java.lang.String y = "";
    private static boolean z;



    public interface a {
        com.loc.bt a(byte[] r1, java.util.Map<java.lang.String, java.lang.String> r2);

        java.lang.String a();

        java.lang.String a(android.content.Context r1, java.lang.String r2);

        java.lang.String a(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4);

        java.util.Map<java.lang.String, java.lang.String> b();
    }

    public static class b {
        private static android.content.Context a;
        private static android.content.BroadcastReceiver b;
        private static android.net.ConnectivityManager c;
        private static android.net.NetworkRequest d;
        private static android.net.ConnectivityManager.NetworkCallback e;



        static {
                return
        }

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public final void a(android.content.Context r4) {
                r3 = this;
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 24
                if (r0 >= r1) goto L27
                if (r4 == 0) goto L71
                android.content.BroadcastReceiver r0 = com.loc.o.b.b
                if (r0 != 0) goto L71
                com.loc.o$b$1 r0 = new com.loc.o$b$1
                r0.<init>(r3)
                com.loc.o.b.b = r0
                android.content.IntentFilter r0 = new android.content.IntentFilter
                r0.<init>()
                java.lang.String r1 = "WYW5kcm9pZC5uZXQuY29ubi5DT05ORUNUSVZJVFlfQ0hBTkdF"
                java.lang.String r1 = com.loc.x.c(r1)
                r0.addAction(r1)
                android.content.BroadcastReceiver r1 = com.loc.o.b.b
                r4.registerReceiver(r1, r0)
                return
            L27:
                java.lang.String r0 = "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"
                java.lang.String r0 = com.loc.x.c(r0)
                boolean r0 = com.loc.o.a(r4, r0)
                if (r0 != 0) goto L34
                return
            L34:
                if (r4 == 0) goto L71
                android.net.ConnectivityManager r0 = com.loc.o.b.c
                if (r0 != 0) goto L71
                java.lang.String r0 = "connectivity"
                java.lang.Object r0 = r4.getSystemService(r0)
                android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
                com.loc.o.b.c = r0
                if (r0 == 0) goto L71
                android.net.NetworkRequest$Builder r0 = new android.net.NetworkRequest$Builder
                r0.<init>()
                r1 = 12
                android.net.NetworkRequest$Builder r0 = r0.addCapability(r1)
                r1 = 1
                android.net.NetworkRequest$Builder r0 = r0.addTransportType(r1)
                r1 = 0
                android.net.NetworkRequest$Builder r0 = r0.addTransportType(r1)
                android.net.NetworkRequest r0 = r0.build()
                com.loc.o.b.d = r0
                com.loc.o$b$2 r0 = new com.loc.o$b$2
                r0.<init>(r3)
                com.loc.o.b.e = r0
                android.net.ConnectivityManager r1 = com.loc.o.b.c
                android.net.NetworkRequest r2 = com.loc.o.b.d
                r1.registerNetworkCallback(r2, r0)
                com.loc.o.b.a = r4
            L71:
                return
        }
    }

    static class c implements android.content.ServiceConnection {
        c() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void onServiceConnected(android.content.ComponentName r1, android.os.IBinder r2) {
                r0 = this;
                com.loc.o.a(r2)
                return
        }

        @Override
        public final void onServiceDisconnected(android.content.ComponentName r1) {
                r0 = this;
                return
        }
    }

    static {
            return
    }

    private static java.lang.String A(android.content.Context r3) {
            java.lang.String r0 = "IeGlhb21p"
            java.lang.String r1 = com.loc.x.c(r0)
            java.lang.String r2 = android.os.Build.MANUFACTURER
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 != 0) goto Lf6
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto Lf6
            java.lang.String r0 = "IUkVETUk="
            java.lang.String r1 = com.loc.x.c(r0)
            java.lang.String r2 = android.os.Build.MANUFACTURER
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 != 0) goto Lf6
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L36
            goto Lf6
        L36:
            java.lang.String r0 = "Idml2bw"
            java.lang.String r1 = com.loc.x.c(r0)
            java.lang.String r2 = android.os.Build.MANUFACTURER
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 != 0) goto Lf1
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L52
            goto Lf1
        L52:
            java.lang.String r0 = "IaHVhd2Vp"
            java.lang.String r1 = com.loc.x.c(r0)
            java.lang.String r2 = android.os.Build.MANUFACTURER
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 != 0) goto Leb
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto Leb
            java.lang.String r0 = "ISE9OT1I="
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.MANUFACTURER
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L7b
            goto Leb
        L7b:
            java.lang.String r0 = "Mc2Ftc3VuZw"
            java.lang.String r1 = com.loc.x.c(r0)
            java.lang.String r2 = android.os.Build.MANUFACTURER
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 != 0) goto Le5
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L96
            goto Le5
        L96:
            java.lang.String r0 = "IT1BQTw"
            java.lang.String r1 = com.loc.x.c(r0)
            java.lang.String r2 = android.os.Build.MANUFACTURER
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 != 0) goto Ldf
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto Ldf
            java.lang.String r0 = "MT25lUGx1cw"
            java.lang.String r1 = com.loc.x.c(r0)
            java.lang.String r2 = android.os.Build.MANUFACTURER
            boolean r1 = r1.equalsIgnoreCase(r2)
            if (r1 != 0) goto Ldf
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 != 0) goto Ldf
            java.lang.String r0 = "IUkVBTE1F"
            java.lang.String r0 = com.loc.x.c(r0)
            java.lang.String r1 = android.os.Build.BRAND
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto Ld9
            goto Ldf
        Ld9:
            r3 = 1
            com.loc.o.p = r3
            java.lang.String r3 = com.loc.o.o
            return r3
        Ldf:
            r0 = 5
            java.lang.String r3 = a(r3, r0)
            return r3
        Le5:
            r0 = 4
            java.lang.String r3 = a(r3, r0)
            return r3
        Leb:
            r0 = 2
            java.lang.String r3 = a(r3, r0)
            return r3
        Lf1:
            java.lang.String r3 = z(r3)
            return r3
        Lf6:
            java.lang.String r3 = y(r3)
            return r3
    }

    private static java.lang.String B(android.content.Context r6) {
            java.lang.String r0 = ""
            java.lang.String r1 = "a1"
            java.lang.String r2 = "open_common"
            java.lang.String r3 = com.loc.o.H
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L11
            java.lang.String r6 = com.loc.o.H
            return r6
        L11:
            java.lang.String r3 = com.loc.bd.b(r6, r2, r1, r0)     // Catch: java.lang.Throwable -> L57
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L57
            if (r4 == 0) goto L4e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L57
            java.lang.String r4 = "amap"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L57
            java.util.UUID r4 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L57
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L57
            java.lang.String r5 = "_"
            java.lang.String r0 = r4.replace(r5, r0)     // Catch: java.lang.Throwable -> L57
            java.lang.String r0 = r0.toLowerCase()     // Catch: java.lang.Throwable -> L57
            r3.append(r0)     // Catch: java.lang.Throwable -> L57
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L57
            com.loc.o.H = r0     // Catch: java.lang.Throwable -> L57
            android.content.SharedPreferences$Editor r6 = com.loc.bd.a(r6, r2)     // Catch: java.lang.Throwable -> L57
            java.lang.String r0 = com.loc.o.H     // Catch: java.lang.Throwable -> L57
            java.lang.String r0 = com.loc.x.b(r0)     // Catch: java.lang.Throwable -> L57
            com.loc.bd.a(r6, r1, r0)     // Catch: java.lang.Throwable -> L57
            com.loc.bd.a(r6)     // Catch: java.lang.Throwable -> L57
            goto L54
        L4e:
            java.lang.String r6 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L57
            com.loc.o.H = r6     // Catch: java.lang.Throwable -> L57
        L54:
            java.lang.String r6 = com.loc.o.H
            return r6
        L57:
            java.lang.String r6 = com.loc.o.H
            return r6
    }

    private static java.lang.String C(android.content.Context r1) {
            boolean r0 = com.loc.o.R
            if (r0 == 0) goto L7
            java.lang.String r1 = com.loc.o.Q
            return r1
        L7:
            L(r1)
            android.telephony.TelephonyManager r1 = G(r1)
            if (r1 != 0) goto L13
            java.lang.String r1 = com.loc.o.Q
            return r1
        L13:
            java.lang.String r0 = r1.getSimOperatorName()
            com.loc.o.Q = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L25
            java.lang.String r1 = r1.getNetworkOperatorName()
            com.loc.o.Q = r1
        L25:
            r1 = 1
            com.loc.o.R = r1
            java.lang.String r1 = com.loc.o.Q
            return r1
    }

    private static int D(android.content.Context r1) {
            boolean r0 = com.loc.o.T
            if (r0 == 0) goto L7
            int r1 = com.loc.o.S
            return r1
        L7:
            L(r1)
            if (r1 == 0) goto L37
            java.lang.String r0 = "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"
            java.lang.String r0 = com.loc.x.c(r0)
            boolean r0 = b(r1, r0)
            if (r0 != 0) goto L19
            goto L37
        L19:
            android.net.ConnectivityManager r1 = E(r1)
            if (r1 != 0) goto L22
            int r1 = com.loc.o.S
            return r1
        L22:
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()
            r0 = 1
            if (r1 != 0) goto L2e
            com.loc.o.T = r0
            int r1 = com.loc.o.S
            return r1
        L2e:
            int r1 = r1.getType()
            com.loc.o.S = r1
            com.loc.o.T = r0
            return r1
        L37:
            int r1 = com.loc.o.S
            return r1
    }

    private static android.net.ConnectivityManager E(android.content.Context r1) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            return r1
    }

    private static int F(android.content.Context r1) {
            boolean r0 = com.loc.o.W
            if (r0 == 0) goto L7
            int r1 = com.loc.o.V
            return r1
        L7:
            L(r1)
            java.lang.String r0 = "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"
            java.lang.String r0 = com.loc.x.c(r0)
            boolean r0 = b(r1, r0)
            if (r0 != 0) goto L19
            int r1 = com.loc.o.V
            return r1
        L19:
            android.net.ConnectivityManager r1 = E(r1)
            if (r1 != 0) goto L22
            int r1 = com.loc.o.V
            return r1
        L22:
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()
            if (r1 == 0) goto L37
            boolean r0 = r1.isAvailable()
            if (r0 == 0) goto L37
            int r1 = r1.getSubtype()
            com.loc.o.V = r1
            r1 = 1
            com.loc.o.W = r1
        L37:
            int r1 = com.loc.o.V
            return r1
    }

    private static android.telephony.TelephonyManager G(android.content.Context r1) {
            java.lang.String r0 = "phone"
            java.lang.Object r1 = r1.getSystemService(r0)
            android.telephony.TelephonyManager r1 = (android.telephony.TelephonyManager) r1
            return r1
    }

    private static java.lang.String H(android.content.Context r6) {
            java.lang.String r0 = "UTF-8"
            boolean r1 = com.loc.o.c
            java.lang.String r2 = ""
            if (r1 != 0) goto L9
            return r2
        L9:
            r1 = 0
            java.lang.String r1 = I(r6)     // Catch: java.lang.Throwable -> Lf
            goto L10
        Lf:
        L10:
            boolean r6 = android.text.TextUtils.isEmpty(r1)
            r3 = 0
            if (r6 == 0) goto L1a
            com.loc.o.c = r3
            return r2
        L1a:
            java.lang.String r6 = "MAAAAAAAAAAAAAAAAAAAAAA"
            java.lang.String r6 = com.loc.x.c(r6)     // Catch: java.lang.Throwable -> L3c
            byte[] r6 = r6.getBytes(r0)     // Catch: java.lang.Throwable -> L3c
            byte[] r1 = com.loc.p.b(r1)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r4 = "HYW1hcGFkaXVhbWFwYWRpdWFtYXBhZGl1YW1hcGFkaXU"
            java.lang.String r4 = com.loc.x.c(r4)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Throwable -> L3c
            byte[] r4 = r4.getBytes(r0)     // Catch: java.lang.Throwable -> L3c
            byte[] r6 = com.loc.p.a(r4, r1, r6)     // Catch: java.lang.Throwable -> L3c
            r5.<init>(r6, r0)     // Catch: java.lang.Throwable -> L3c
            return r5
        L3c:
            com.loc.o.c = r3
            return r2
    }

    private static java.lang.String I(android.content.Context r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = J(r3)     // Catch: java.lang.Throwable -> L7
            goto L8
        L7:
            r1 = r0
        L8:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lf
            return r1
        Lf:
            if (r3 != 0) goto L12
            return r0
        L12:
            java.lang.String r1 = "SU2hhcmVkUHJlZmVyZW5jZUFkaXU"
            java.lang.String r1 = com.loc.x.c(r1)
            r2 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r1, r2)
            java.lang.String r1 = "RYW1hcF9kZXZpY2VfYWRpdQ"
            java.lang.String r1 = com.loc.x.c(r1)
            java.lang.String r1 = com.loc.s.a(r1)
            java.lang.String r3 = r3.getString(r1, r0)
            return r3
    }

    private static java.lang.String J(android.content.Context r8) {
            java.lang.String r0 = "SIw"
            int r1 = android.os.Build.VERSION.SDK_INT
            java.lang.String r2 = ""
            r3 = 19
            if (r1 < r3) goto L17
            java.lang.String r1 = "EYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfRVhURVJOQUxfU1RPUkFHRQ=="
            java.lang.String r1 = com.loc.x.c(r1)
            boolean r1 = b(r8, r1)
            if (r1 != 0) goto L17
            return r2
        L17:
            java.lang.String r1 = "LYW1hcF9kZXZpY2VfYWRpdQ"
            java.lang.String r1 = com.loc.x.c(r1)
            java.lang.String r1 = com.loc.s.a(r1)
            java.lang.String r8 = K(r8)
            boolean r3 = android.text.TextUtils.isEmpty(r8)
            if (r3 == 0) goto L2c
            return r2
        L2c:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r8)
            java.lang.String r8 = java.io.File.separator
            r3.append(r8)
            java.lang.String r8 = "KYmFja3Vwcw"
            java.lang.String r8 = com.loc.x.c(r8)
            r3.append(r8)
            java.lang.String r8 = r3.toString()
            java.io.File r3 = new java.io.File
            java.lang.String r4 = "MLmFkaXU"
            java.lang.String r4 = com.loc.x.c(r4)
            r3.<init>(r8, r4)
            boolean r8 = r3.exists()
            if (r8 == 0) goto Ld2
            boolean r8 = r3.canRead()
            if (r8 != 0) goto L5f
            goto Ld2
        L5f:
            long r4 = r3.length()
            r6 = 0
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 != 0) goto L6d
            r3.delete()
            return r2
        L6d:
            r8 = 0
            java.io.RandomAccessFile r4 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> Lcb
            java.lang.String r5 = "r"
            r4.<init>(r3, r5)     // Catch: java.lang.Throwable -> Lcb
            r3 = 1024(0x400, float:1.435E-42)
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> Lcc
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> Lcc
            r5.<init>()     // Catch: java.lang.Throwable -> Lcc
        L7e:
            int r8 = r4.read(r3)     // Catch: java.lang.Throwable -> Lc9
            r6 = -1
            r7 = 0
            if (r8 == r6) goto L8a
            r5.write(r3, r7, r8)     // Catch: java.lang.Throwable -> Lc9
            goto L7e
        L8a:
            java.lang.String r8 = new java.lang.String     // Catch: java.lang.Throwable -> Lc9
            byte[] r3 = r5.toByteArray()     // Catch: java.lang.Throwable -> Lc9
            java.lang.String r6 = "UTF-8"
            r8.<init>(r3, r6)     // Catch: java.lang.Throwable -> Lc9
            boolean r3 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> Lc9
            if (r3 != 0) goto Lc5
            java.lang.String r3 = com.loc.x.c(r0)     // Catch: java.lang.Throwable -> Lc9
            boolean r3 = r8.contains(r3)     // Catch: java.lang.Throwable -> Lc9
            if (r3 == 0) goto Lc5
            java.lang.String r0 = com.loc.x.c(r0)     // Catch: java.lang.Throwable -> Lc9
            java.lang.String[] r8 = r8.split(r0)     // Catch: java.lang.Throwable -> Lc9
            if (r8 == 0) goto Lc5
            int r0 = r8.length     // Catch: java.lang.Throwable -> Lc9
            r3 = 2
            if (r0 != r3) goto Lc5
            r0 = r8[r7]     // Catch: java.lang.Throwable -> Lc9
            boolean r0 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Throwable -> Lc9
            if (r0 == 0) goto Lc5
            r0 = 1
            r8 = r8[r0]     // Catch: java.lang.Throwable -> Lc9
            a(r5)
            a(r4)
            return r8
        Lc5:
            a(r5)
            goto Lcf
        Lc9:
            r8 = r5
            goto Lcc
        Lcb:
            r4 = r8
        Lcc:
            a(r8)
        Lcf:
            a(r4)
        Ld2:
            return r2
    }

    private static java.lang.String K(android.content.Context r9) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 9
            if (r0 >= r2) goto L8
            return r1
        L8:
            java.lang.String r0 = "storage"
            java.lang.Object r9 = r9.getSystemService(r0)     // Catch: java.lang.Throwable -> L6e
            android.os.storage.StorageManager r9 = (android.os.storage.StorageManager) r9     // Catch: java.lang.Throwable -> L6e
            java.lang.String r0 = "SYW5kcm9pZC5vcy5zdG9yYWdlLlN0b3JhZ2VWb2x1bWU"
            java.lang.String r0 = com.loc.x.c(r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.Class r2 = r9.getClass()     // Catch: java.lang.Throwable -> L6e
            java.lang.String r3 = "MZ2V0Vm9sdW1lTGlzdA"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L6e
            r4 = 0
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L6e
            java.lang.reflect.Method r2 = r2.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r3 = "FZ2V0UGF0aA"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L6e
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L6e
            java.lang.reflect.Method r3 = r0.getMethod(r3, r5)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r5 = "DaXNSZW1vdmFibGU"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> L6e
            java.lang.Class[] r6 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L6e
            java.lang.reflect.Method r0 = r0.getMethod(r5, r6)     // Catch: java.lang.Throwable -> L6e
            java.lang.Object[] r5 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L6e
            java.lang.Object r9 = r2.invoke(r9, r5)     // Catch: java.lang.Throwable -> L6e
            int r2 = java.lang.reflect.Array.getLength(r9)     // Catch: java.lang.Throwable -> L6e
            r5 = 0
        L4e:
            if (r5 >= r2) goto L6e
            java.lang.Object r6 = java.lang.reflect.Array.get(r9, r5)     // Catch: java.lang.Throwable -> L6e
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L6e
            java.lang.Object r7 = r3.invoke(r6, r7)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L6e
            java.lang.Object[] r8 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L6e
            java.lang.Object r6 = r0.invoke(r6, r8)     // Catch: java.lang.Throwable -> L6e
            java.lang.Boolean r6 = (java.lang.Boolean) r6     // Catch: java.lang.Throwable -> L6e
            boolean r6 = r6.booleanValue()     // Catch: java.lang.Throwable -> L6e
            if (r6 != 0) goto L6b
            return r7
        L6b:
            int r5 = r5 + 1
            goto L4e
        L6e:
            return r1
    }

    private static synchronized com.loc.o.b L(android.content.Context r2) {
            java.lang.Class<com.loc.o> r0 = com.loc.o.class
            monitor-enter(r0)
            com.loc.o$b r1 = com.loc.o.X     // Catch: java.lang.Throwable -> L1e
            if (r1 != 0) goto L1a
            if (r2 != 0) goto Lc
            r2 = 0
            monitor-exit(r0)
            return r2
        Lc:
            com.loc.o$b r1 = new com.loc.o$b     // Catch: java.lang.Throwable -> L1e
            r1.<init>()     // Catch: java.lang.Throwable -> L1e
            com.loc.o.X = r1     // Catch: java.lang.Throwable -> L1e
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L1e
            r1.a(r2)     // Catch: java.lang.Throwable -> L1e
        L1a:
            com.loc.o$b r2 = com.loc.o.X     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)
            return r2
        L1e:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static android.os.IBinder a(android.os.IBinder r0) {
            com.loc.o.r = r0
            return r0
    }

    public static java.lang.String a() {
            java.lang.String r0 = com.loc.o.k
            return r0
    }

    public static java.lang.String a(android.content.Context r3) {
            java.lang.String r0 = ""
            java.lang.String r1 = com.loc.o.b     // Catch: java.lang.Throwable -> L3a
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3a
            if (r1 != 0) goto Ld
            java.lang.String r3 = com.loc.o.b     // Catch: java.lang.Throwable -> L3a
            return r3
        Ld:
            if (r3 != 0) goto L10
            return r0
        L10:
            java.lang.String r1 = H(r3)     // Catch: java.lang.Throwable -> L3a
            com.loc.o.b = r1     // Catch: java.lang.Throwable -> L3a
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L3a
            if (r1 != 0) goto L1f
            java.lang.String r3 = com.loc.o.b     // Catch: java.lang.Throwable -> L3a
            return r3
        L1f:
            com.loc.o$a r1 = c()     // Catch: java.lang.Throwable -> L3a
            if (r1 != 0) goto L26
            return r0
        L26:
            boolean r1 = com.loc.o.n     // Catch: java.lang.Throwable -> L3a
            if (r1 == 0) goto L2b
            return r0
        L2b:
            r1 = 1
            com.loc.o.n = r1     // Catch: java.lang.Throwable -> L3a
            com.loc.cr r1 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L3a
            com.loc.o$1 r2 = new com.loc.o$1     // Catch: java.lang.Throwable -> L3a
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3a
            r1.b(r2)     // Catch: java.lang.Throwable -> L3a
        L3a:
            return r0
    }

    private static java.lang.String a(android.content.Context r12, int r13) {
            r0 = 1
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> Lee
            r1.<init>()     // Catch: java.lang.Throwable -> Lee
            r2 = 5
            r3 = 4
            r4 = 2
            if (r13 == r4) goto L3d
            if (r13 == r3) goto L2d
            if (r13 == r2) goto L14
            com.loc.o.p = r0     // Catch: java.lang.Throwable -> Lee
            java.lang.String r12 = com.loc.o.o     // Catch: java.lang.Throwable -> Lee
            return r12
        L14:
            java.lang.String r5 = "YY29tLmhleXRhcC5vcGVuaWQ"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r6 = "SY29tLmhleXRhcC5vcGVuaWQuSWRlbnRpZnlTZXJ2aWNl"
            java.lang.String r6 = com.loc.x.c(r6)     // Catch: java.lang.Throwable -> Lee
            r1.setClassName(r5, r6)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r5 = "EYWN0aW9uLmNvbS5oZXl0YXAub3BlbmlkLk9QRU5fSURfU0VSVklDRQ"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> Lee
            r1.setAction(r5)     // Catch: java.lang.Throwable -> Lee
            goto L4f
        L2d:
            java.lang.String r5 = "WY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2U"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r6 = "QY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2UuRGV2aWNlSWRTZXJ2aWNl"
            java.lang.String r6 = com.loc.x.c(r6)     // Catch: java.lang.Throwable -> Lee
            r1.setClassName(r5, r6)     // Catch: java.lang.Throwable -> Lee
            goto L4f
        L3d:
            java.lang.String r5 = "WY29tLnVvZGlzLm9wZW5kZXZpY2UuT1BFTklEU19TRVJWSUNF"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> Lee
            r1.setAction(r5)     // Catch: java.lang.Throwable -> Lee
            java.lang.String r5 = "UY29tLmh1YXdlaS5od2lk"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> Lee
            r1.setPackage(r5)     // Catch: java.lang.Throwable -> Lee
        L4f:
            com.loc.o$c r5 = new com.loc.o$c     // Catch: java.lang.Throwable -> Lee
            r5.<init>()     // Catch: java.lang.Throwable -> Lee
            boolean r1 = r12.bindService(r1, r5, r0)     // Catch: java.lang.Throwable -> Lee
            if (r1 == 0) goto Leb
            r1 = 0
            r6 = 0
        L5c:
            r7 = 100
            if (r6 >= r7) goto Le5
            java.lang.String r7 = com.loc.o.o     // Catch: java.lang.Throwable -> Lee
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lee
            if (r7 == 0) goto Le5
            int r6 = r6 + 1
            android.os.IBinder r7 = com.loc.o.r     // Catch: java.lang.Throwable -> Lee
            if (r7 == 0) goto Lde
            android.os.Parcel r7 = android.os.Parcel.obtain()     // Catch: java.lang.Throwable -> Lee
            android.os.Parcel r8 = android.os.Parcel.obtain()     // Catch: java.lang.Throwable -> Lee
            if (r13 == r4) goto La9
            if (r13 == r3) goto L9f
            if (r13 == r2) goto L7e
            r9 = 0
            goto Lb1
        L7e:
            java.lang.String r9 = "KY29tLmhleXRhcC5vcGVuaWQuSU9wZW5JRA"
            java.lang.String r9 = com.loc.x.c(r9)     // Catch: java.lang.Throwable -> Lc8
            r7.writeInterfaceToken(r9)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r9 = r12.getPackageName()     // Catch: java.lang.Throwable -> Lc8
            r7.writeString(r9)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r9 = x(r12)     // Catch: java.lang.Throwable -> Lc8
            r7.writeString(r9)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r9 = "IT1VJRA"
            java.lang.String r9 = com.loc.x.c(r9)     // Catch: java.lang.Throwable -> Lc8
            r7.writeString(r9)     // Catch: java.lang.Throwable -> Lc8
            goto Lb0
        L9f:
            java.lang.String r9 = "UY29tLnNhbXN1bmcuYW5kcm9pZC5kZXZpY2VpZHNlcnZpY2UuSURldmljZUlkU2VydmljZQ"
            java.lang.String r9 = com.loc.x.c(r9)     // Catch: java.lang.Throwable -> Lc8
        La5:
            r7.writeInterfaceToken(r9)     // Catch: java.lang.Throwable -> Lc8
            goto Lb0
        La9:
            java.lang.String r9 = "UY29tLnVvZGlzLm9wZW5kZXZpY2UuYWlkbC5PcGVuRGV2aWNlSWRlbnRpZmllclNlcnZpY2U"
            java.lang.String r9 = com.loc.x.c(r9)     // Catch: java.lang.Throwable -> Lc8
            goto La5
        Lb0:
            r9 = 1
        Lb1:
            if (r9 == 0) goto Lc1
            android.os.IBinder r9 = com.loc.o.r     // Catch: java.lang.Throwable -> Lc8
            r9.transact(r0, r7, r8, r1)     // Catch: java.lang.Throwable -> Lc8
            r8.readException()     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r9 = r8.readString()     // Catch: java.lang.Throwable -> Lc8
            com.loc.o.o = r9     // Catch: java.lang.Throwable -> Lc8
        Lc1:
            r8.recycle()     // Catch: java.lang.Throwable -> Lee
        Lc4:
            r7.recycle()     // Catch: java.lang.Throwable -> Lee
            goto Lde
        Lc8:
            r9 = move-exception
            java.lang.String r10 = "oac"
            java.lang.String r11 = java.lang.String.valueOf(r13)     // Catch: java.lang.Throwable -> Ld6
            com.loc.as.a(r9, r10, r11)     // Catch: java.lang.Throwable -> Ld6
            r8.recycle()     // Catch: java.lang.Throwable -> Lee
            goto Lc4
        Ld6:
            r12 = move-exception
            r8.recycle()     // Catch: java.lang.Throwable -> Lee
            r7.recycle()     // Catch: java.lang.Throwable -> Lee
            throw r12     // Catch: java.lang.Throwable -> Lee
        Lde:
            r7 = 15
            java.lang.Thread.sleep(r7)     // Catch: java.lang.Throwable -> Lee
            goto L5c
        Le5:
            r12.unbindService(r5)     // Catch: java.lang.Throwable -> Lee
            r12 = 0
            com.loc.o.r = r12     // Catch: java.lang.Throwable -> Lee
        Leb:
            java.lang.String r12 = com.loc.o.o     // Catch: java.lang.Throwable -> Lee
            return r12
        Lee:
            r12 = move-exception
            java.lang.String r13 = java.lang.String.valueOf(r13)
            java.lang.String r1 = "oa"
            com.loc.as.a(r12, r1, r13)
            com.loc.o.p = r0
            java.lang.String r12 = com.loc.o.o
            return r12
    }

    public static void a(com.loc.o.a r1) {
            com.loc.o$a r0 = com.loc.o.g
            if (r0 != 0) goto L6
            com.loc.o.g = r1
        L6:
            return
    }

    private static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L5
            r0.close()     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    public static void a(java.lang.String r0) {
            com.loc.o.k = r0
            return
    }

    static boolean a(android.content.Context r0, java.lang.String r1) {
            boolean r0 = b(r0, r1)
            return r0
    }

    public static java.lang.String b() {
            java.lang.String r0 = ""
            java.lang.String r1 = com.loc.o.e     // Catch: java.lang.Throwable -> L18
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto Ld
            java.lang.String r0 = com.loc.o.e     // Catch: java.lang.Throwable -> L18
            return r0
        Ld:
            com.loc.o$a r1 = com.loc.o.g     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L12
            return r0
        L12:
            com.loc.o$a r1 = com.loc.o.g     // Catch: java.lang.Throwable -> L18
            java.lang.String r0 = r1.a()     // Catch: java.lang.Throwable -> L18
        L18:
            return r0
    }

    public static java.lang.String b(android.content.Context r0) {
            java.lang.String r0 = C(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = ""
            return r0
    }

    private static boolean b(android.content.Context r0, java.lang.String r1) {
            if (r0 == 0) goto La
            int r0 = r0.checkCallingOrSelfPermission(r1)
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    public static int c(android.content.Context r0) {
            int r0 = F(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = -1
            return r0
    }

    public static com.loc.o.a c() {
            com.loc.o$a r0 = com.loc.o.g
            return r0
    }

    public static int d(android.content.Context r0) {
            int r0 = D(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            r0 = -1
            return r0
    }

    public static java.lang.String d() {
            int r0 = android.os.Build.VERSION.SDK_INT
            java.lang.String r1 = ""
            r2 = 29
            if (r0 < r2) goto L9
            return r1
        L9:
            java.lang.String r0 = n()     // Catch: java.lang.Throwable -> L1b
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L1b
            r3 = 5
            if (r2 >= r3) goto L15
            return r1
        L15:
            r2 = 3
            java.lang.String r0 = r0.substring(r2, r3)     // Catch: java.lang.Throwable -> L1b
            return r0
        L1b:
            r0 = move-exception
            r0.printStackTrace()
            return r1
    }

    public static java.lang.String e() {
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String e(android.content.Context r2) {
            boolean r0 = com.loc.o.p     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L7
            java.lang.String r2 = ""
            return r2
        L7:
            java.lang.String r0 = com.loc.o.o     // Catch: java.lang.Throwable -> L38
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            if (r0 != 0) goto L12
            java.lang.String r2 = com.loc.o.o     // Catch: java.lang.Throwable -> L38
            return r2
        L12:
            boolean r0 = com.loc.o.s     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L19
            java.lang.String r2 = com.loc.o.o     // Catch: java.lang.Throwable -> L38
            return r2
        L19:
            android.os.Looper r0 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L38
            android.os.Looper r1 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L38
            if (r0 != r1) goto L30
            com.loc.cr r0 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L38
            com.loc.o$2 r1 = new com.loc.o$2     // Catch: java.lang.Throwable -> L38
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L38
            r0.b(r1)     // Catch: java.lang.Throwable -> L38
            goto L38
        L30:
            r0 = 1
            com.loc.o.s = r0     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = A(r2)     // Catch: java.lang.Throwable -> L38
            return r2
        L38:
            java.lang.String r2 = com.loc.o.o
            return r2
    }

    public static java.lang.String f() {
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String f(android.content.Context r4) {
            boolean r0 = com.loc.o.t
            java.lang.String r1 = ""
            if (r0 == 0) goto Lc
            java.lang.String r4 = com.loc.o.a
            if (r4 != 0) goto Lb
            return r1
        Lb:
            return r4
        Lc:
            r0 = 1
            java.lang.String r2 = com.loc.o.a     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L1c
            java.lang.String r2 = com.loc.o.a     // Catch: java.lang.Throwable -> L41
            boolean r2 = r1.equals(r2)     // Catch: java.lang.Throwable -> L41
            if (r2 != 0) goto L1c
            java.lang.String r4 = com.loc.o.a     // Catch: java.lang.Throwable -> L41
            return r4
        L1c:
            java.lang.String r2 = "WYW5kcm9pZC5wZXJtaXNzaW9uLldSSVRFX1NFVFRJTkdT"
            java.lang.String r2 = com.loc.x.c(r2)     // Catch: java.lang.Throwable -> L41
            boolean r2 = b(r4, r2)     // Catch: java.lang.Throwable -> L41
            if (r2 == 0) goto L34
            android.content.ContentResolver r2 = r4.getContentResolver()     // Catch: java.lang.Throwable -> L41
            java.lang.String r3 = "mqBRboGZkQPcAkyk"
            java.lang.String r2 = android.provider.Settings.System.getString(r2, r3)     // Catch: java.lang.Throwable -> L41
            com.loc.o.a = r2     // Catch: java.lang.Throwable -> L41
        L34:
            java.lang.String r2 = com.loc.o.a     // Catch: java.lang.Throwable -> L41
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L41
            if (r2 != 0) goto L41
            com.loc.o.t = r0     // Catch: java.lang.Throwable -> L41
            java.lang.String r4 = com.loc.o.a     // Catch: java.lang.Throwable -> L41
            return r4
        L41:
            java.lang.String r2 = v(r4)     // Catch: java.lang.Throwable -> L52
            com.loc.o.a = r2     // Catch: java.lang.Throwable -> L52
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L52
            if (r2 != 0) goto L52
            com.loc.o.t = r0     // Catch: java.lang.Throwable -> L52
            java.lang.String r4 = com.loc.o.a     // Catch: java.lang.Throwable -> L52
            return r4
        L52:
            java.lang.String r4 = w(r4)     // Catch: java.lang.Throwable -> L5b
            com.loc.o.a = r4     // Catch: java.lang.Throwable -> L5b
            com.loc.o.t = r0     // Catch: java.lang.Throwable -> L5b
            goto L5c
        L5b:
        L5c:
            java.lang.String r4 = com.loc.o.a
            if (r4 != 0) goto L61
            return r1
        L61:
            return r4
    }

    public static java.lang.String g() {
            java.lang.String r0 = ""
            return r0
    }

    static java.lang.String g(android.content.Context r3) {
            java.lang.String r0 = ""
            android.telephony.TelephonyManager r3 = G(r3)     // Catch: java.lang.Throwable -> L21
            if (r3 != 0) goto L9
            return r0
        L9:
            java.lang.String r3 = r3.getNetworkOperator()     // Catch: java.lang.Throwable -> L21
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L21
            if (r1 != 0) goto L21
            int r1 = r3.length()     // Catch: java.lang.Throwable -> L21
            r2 = 3
            if (r1 >= r2) goto L1b
            goto L21
        L1b:
            r1 = 0
            java.lang.String r0 = r3.substring(r1, r2)     // Catch: java.lang.Throwable -> L21
        L21:
            return r0
    }

    public static java.lang.String h() {
            java.lang.String r0 = com.loc.o.y
            return r0
    }

    static java.lang.String h(android.content.Context r3) {
            boolean r0 = com.loc.o.B
            if (r0 == 0) goto L7
            java.lang.String r3 = com.loc.o.A
            return r3
        L7:
            L(r3)     // Catch: java.lang.Throwable -> L34
            android.telephony.TelephonyManager r3 = G(r3)     // Catch: java.lang.Throwable -> L34
            if (r3 != 0) goto L13
            java.lang.String r3 = com.loc.o.A     // Catch: java.lang.Throwable -> L34
            return r3
        L13:
            java.lang.String r3 = r3.getNetworkOperator()     // Catch: java.lang.Throwable -> L34
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L34
            r1 = 1
            if (r0 != 0) goto L2f
            int r0 = r3.length()     // Catch: java.lang.Throwable -> L34
            r2 = 3
            if (r0 >= r2) goto L26
            goto L2f
        L26:
            java.lang.String r3 = r3.substring(r2)     // Catch: java.lang.Throwable -> L34
            com.loc.o.A = r3     // Catch: java.lang.Throwable -> L34
            com.loc.o.B = r1     // Catch: java.lang.Throwable -> L34
            goto L34
        L2f:
            com.loc.o.B = r1     // Catch: java.lang.Throwable -> L34
            java.lang.String r3 = com.loc.o.A     // Catch: java.lang.Throwable -> L34
            return r3
        L34:
            java.lang.String r3 = com.loc.o.A
            return r3
    }

    public static int i(android.content.Context r0) {
            int r0 = F(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = -1
            return r0
    }

    static java.lang.String[] i() {
            java.lang.String r0 = ""
            java.lang.String[] r0 = new java.lang.String[]{r0, r0}
            return r0
    }

    public static int j(android.content.Context r0) {
            int r0 = D(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = -1
            return r0
    }

    public static java.lang.String j() {
            java.lang.String r0 = com.loc.o.i
            return r0
    }

    public static android.net.NetworkInfo k(android.content.Context r2) {
            java.lang.String r0 = "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"
            java.lang.String r0 = com.loc.x.c(r0)
            boolean r0 = b(r2, r0)
            r1 = 0
            if (r0 != 0) goto Le
            return r1
        Le:
            android.net.ConnectivityManager r2 = E(r2)
            if (r2 != 0) goto L15
            return r1
        L15:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()
            return r2
    }

    public static java.lang.String k() {
            java.lang.String r0 = com.loc.o.D
            return r0
    }

    static java.lang.String l(android.content.Context r1) {
            r0 = 0
            android.net.NetworkInfo r1 = k(r1)     // Catch: java.lang.Throwable -> Lc
            if (r1 != 0) goto L8
            return r0
        L8:
            java.lang.String r0 = r1.getExtraInfo()     // Catch: java.lang.Throwable -> Lc
        Lc:
            return r0
    }

    public static void l() {
            com.loc.ar.a()     // Catch: java.lang.Throwable -> L3
        L3:
            return
    }

    public static java.lang.String m() {
            java.lang.String r0 = ""
            return r0
    }

    static java.lang.String m(android.content.Context r3) {
            java.lang.String r0 = com.loc.o.C     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = ""
            if (r0 == 0) goto L11
            java.lang.String r0 = com.loc.o.C     // Catch: java.lang.Throwable -> L54
            boolean r0 = r1.equals(r0)     // Catch: java.lang.Throwable -> L54
            if (r0 != 0) goto L11
            java.lang.String r3 = com.loc.o.C     // Catch: java.lang.Throwable -> L54
            return r3
        L11:
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics     // Catch: java.lang.Throwable -> L54
            r0.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r2 = "window"
            java.lang.Object r3 = r3.getSystemService(r2)     // Catch: java.lang.Throwable -> L54
            android.view.WindowManager r3 = (android.view.WindowManager) r3     // Catch: java.lang.Throwable -> L54
            if (r3 != 0) goto L21
            return r1
        L21:
            android.view.Display r3 = r3.getDefaultDisplay()     // Catch: java.lang.Throwable -> L54
            r3.getMetrics(r0)     // Catch: java.lang.Throwable -> L54
            int r3 = r0.widthPixels     // Catch: java.lang.Throwable -> L54
            int r0 = r0.heightPixels     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = "*"
            if (r0 <= r3) goto L43
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r2.<init>()     // Catch: java.lang.Throwable -> L54
            r2.append(r3)     // Catch: java.lang.Throwable -> L54
            r2.append(r1)     // Catch: java.lang.Throwable -> L54
            r2.append(r0)     // Catch: java.lang.Throwable -> L54
        L3e:
            java.lang.String r3 = r2.toString()     // Catch: java.lang.Throwable -> L54
            goto L52
        L43:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r2.<init>()     // Catch: java.lang.Throwable -> L54
            r2.append(r0)     // Catch: java.lang.Throwable -> L54
            r2.append(r1)     // Catch: java.lang.Throwable -> L54
            r2.append(r3)     // Catch: java.lang.Throwable -> L54
            goto L3e
        L52:
            com.loc.o.C = r3     // Catch: java.lang.Throwable -> L54
        L54:
            java.lang.String r3 = com.loc.o.C
            return r3
    }

    public static java.lang.String n() {
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String n(android.content.Context r2) {
            java.lang.String r0 = ""
            java.lang.String r1 = "WYW5kcm9pZC5wZXJtaXNzaW9uLlJFQURfUEhPTkVfU1RBVEU="
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> L1d
            boolean r1 = b(r2, r1)     // Catch: java.lang.Throwable -> L1d
            if (r1 != 0) goto L11
            java.lang.String r2 = com.loc.o.N     // Catch: java.lang.Throwable -> L1d
            return r2
        L11:
            android.telephony.TelephonyManager r2 = G(r2)     // Catch: java.lang.Throwable -> L1d
            if (r2 != 0) goto L18
            return r0
        L18:
            java.lang.String r2 = r2.getNetworkOperatorName()     // Catch: java.lang.Throwable -> L1d
            return r2
        L1d:
            return r0
    }

    public static long o() {
            long r0 = com.loc.o.K
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L9
            return r0
        L9:
            android.os.StatFs r0 = new android.os.StatFs     // Catch: java.lang.Throwable -> L60
            java.io.File r1 = android.os.Environment.getRootDirectory()     // Catch: java.lang.Throwable -> L60
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> L60
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L60
            android.os.StatFs r1 = new android.os.StatFs     // Catch: java.lang.Throwable -> L60
            java.io.File r2 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L60
            java.lang.String r2 = r2.getAbsolutePath()     // Catch: java.lang.Throwable -> L60
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L60
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L60
            r3 = 18
            r4 = 1048576(0x100000, double:5.180654E-318)
            if (r2 < r3) goto L43
            long r2 = r0.getBlockCountLong()     // Catch: java.lang.Throwable -> L60
            long r6 = r0.getBlockSizeLong()     // Catch: java.lang.Throwable -> L60
            long r2 = r2 * r6
            long r2 = r2 / r4
            long r6 = r1.getBlockCountLong()     // Catch: java.lang.Throwable -> L60
            long r0 = r1.getBlockSizeLong()     // Catch: java.lang.Throwable -> L60
            long r6 = r6 * r0
            long r6 = r6 / r4
            goto L5d
        L43:
            int r2 = r0.getBlockCount()     // Catch: java.lang.Throwable -> L60
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L60
            int r0 = r0.getBlockSize()     // Catch: java.lang.Throwable -> L60
            long r6 = (long) r0     // Catch: java.lang.Throwable -> L60
            long r2 = r2 * r6
            long r2 = r2 / r4
            int r0 = r1.getBlockCount()     // Catch: java.lang.Throwable -> L60
            long r6 = (long) r0     // Catch: java.lang.Throwable -> L60
            int r0 = r1.getBlockSize()     // Catch: java.lang.Throwable -> L60
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L60
            long r6 = r6 * r0
            long r6 = r6 / r4
        L5d:
            long r2 = r2 + r6
            com.loc.o.K = r2     // Catch: java.lang.Throwable -> L60
        L60:
            long r0 = com.loc.o.K
            return r0
    }

    public static java.lang.String o(android.content.Context r2) {
            java.lang.String r0 = ""
            java.lang.String r1 = "AYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19ORVRXT1JLX1NUQVRF"
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> L22
            boolean r1 = b(r2, r1)     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto Lf
            return r0
        Lf:
            android.net.ConnectivityManager r2 = E(r2)     // Catch: java.lang.Throwable -> L22
            if (r2 != 0) goto L16
            return r0
        L16:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Throwable -> L22
            if (r2 != 0) goto L1d
            return r0
        L1d:
            java.lang.String r2 = r2.getTypeName()     // Catch: java.lang.Throwable -> L22
            return r2
        L22:
            return r0
    }

    public static java.lang.String p() {
            java.lang.String r0 = com.loc.o.M
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = com.loc.o.M
            return r0
        Lb:
            java.lang.String r0 = "os.arch"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            com.loc.o.M = r0
            return r0
    }

    public static java.lang.String p(android.content.Context r2) {
            java.lang.String r0 = k()     // Catch: java.lang.Throwable -> L37
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto Le
            java.lang.String r0 = a(r2)     // Catch: java.lang.Throwable -> L39
        Le:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L18
            java.lang.String r0 = f(r2)     // Catch: java.lang.Throwable -> L39
        L18:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L22
            java.lang.String r0 = e(r2)     // Catch: java.lang.Throwable -> L39
        L22:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L2c
            java.lang.String r0 = g()     // Catch: java.lang.Throwable -> L39
        L2c:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L39
            java.lang.String r0 = B(r2)     // Catch: java.lang.Throwable -> L39
            goto L39
        L37:
            java.lang.String r0 = ""
        L39:
            return r0
    }

    public static java.lang.String q(android.content.Context r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = k()
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            java.lang.String r2 = a(r3)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r3 = p(r3)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static void q() {
            r0 = -1
            com.loc.o.S = r0
            r1 = 0
            com.loc.o.T = r1
            com.loc.o.V = r0
            com.loc.o.W = r1
            java.lang.String r0 = ""
            com.loc.o.Q = r0
            com.loc.o.R = r1
            com.loc.o.A = r0
            com.loc.o.B = r1
            return
    }

    public static int r(android.content.Context r4) {
            int r0 = com.loc.o.L
            if (r0 == 0) goto L5
            return r0
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            r2 = 0
            if (r0 < r1) goto L26
            java.lang.String r0 = "activity"
            java.lang.Object r4 = r4.getSystemService(r0)
            android.app.ActivityManager r4 = (android.app.ActivityManager) r4
            if (r4 != 0) goto L17
            return r2
        L17:
            android.app.ActivityManager$MemoryInfo r0 = new android.app.ActivityManager$MemoryInfo
            r0.<init>()
            r4.getMemoryInfo(r0)
            long r0 = r0.totalMem
            r2 = 1024(0x400, double:5.06E-321)
            long r0 = r0 / r2
            int r2 = (int) r0
            goto L59
        L26:
            r4 = 0
            java.io.File r0 = new java.io.File     // Catch: java.lang.Throwable -> L53
            java.lang.String r1 = "/proc/meminfo"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L53
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L53
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.lang.Throwable -> L53
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L53
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L53
            java.lang.String r4 = r1.readLine()     // Catch: java.lang.Throwable -> L51
            java.lang.String r0 = "\\s+"
            java.lang.String[] r4 = r4.split(r0)     // Catch: java.lang.Throwable -> L51
            r0 = 1
            r4 = r4[r0]     // Catch: java.lang.Throwable -> L51
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L51
            int r2 = r4.intValue()     // Catch: java.lang.Throwable -> L51
            r1.close()     // Catch: java.io.IOException -> L59
            goto L59
        L51:
            r4 = r1
            goto L54
        L53:
        L54:
            if (r4 == 0) goto L59
            r4.close()     // Catch: java.io.IOException -> L59
        L59:
            int r2 = r2 / 1024
            com.loc.o.L = r2
            return r2
    }

    static boolean r() {
            r0 = 1
            com.loc.o.s = r0
            return r0
    }

    static java.lang.String s(android.content.Context r0) {
            java.lang.String r0 = C(r0)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String t(android.content.Context r1) {
            java.lang.String r0 = com.loc.o.m     // Catch: java.lang.Throwable -> Le
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto Le
            java.lang.String r1 = com.loc.ae.a(r1)     // Catch: java.lang.Throwable -> Le
            com.loc.o.m = r1     // Catch: java.lang.Throwable -> Le
        Le:
            java.lang.String r1 = com.loc.o.m
            return r1
    }

    static java.lang.String u(android.content.Context r0) {
            java.lang.String r0 = A(r0)
            return r0
    }

    private static java.lang.String v(android.content.Context r4) {
            java.lang.String r0 = "Alvin2"
            java.lang.String r1 = ""
            java.lang.String r2 = "UTDID2"
            java.lang.String r2 = com.loc.bd.b(r4, r0, r2, r1)     // Catch: java.lang.Throwable -> L17
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L17
            if (r3 == 0) goto L16
            java.lang.String r2 = "UTDID"
            java.lang.String r2 = com.loc.bd.b(r4, r0, r2, r1)     // Catch: java.lang.Throwable -> L17
        L16:
            return r2
        L17:
            return r1
    }

    private static java.lang.String w(android.content.Context r8) {
            r0 = 0
            java.lang.String r1 = "android.permission.READ_EXTERNAL_STORAGE"
            boolean r8 = com.loc.x.a(r8, r1)     // Catch: java.lang.Throwable -> L94
            if (r8 == 0) goto L8e
            java.lang.String r8 = "mounted"
            java.lang.String r1 = android.os.Environment.getExternalStorageState()     // Catch: java.lang.Throwable -> L94
            boolean r8 = r8.equals(r1)     // Catch: java.lang.Throwable -> L94
            if (r8 == 0) goto L8e
            java.io.File r8 = android.os.Environment.getExternalStorageDirectory()     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = r8.getAbsolutePath()     // Catch: java.lang.Throwable -> L94
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L94
            r1.<init>()     // Catch: java.lang.Throwable -> L94
            r1.append(r8)     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = "/.UTSystemConfig/Global/Alvin2.xml"
            r1.append(r8)     // Catch: java.lang.Throwable -> L94
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L94
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L94
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L94
            org.xmlpull.v1.XmlPullParser r8 = android.util.Xml.newPullParser()     // Catch: java.lang.Throwable -> L94
            int r2 = r8.getEventType()     // Catch: java.lang.Throwable -> L94
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L94
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L94
            java.lang.String r0 = "utf-8"
            r8.setInput(r3, r0)     // Catch: java.lang.Throwable -> L8c
            r0 = 0
            r1 = 0
        L47:
            r4 = 1
            if (r4 == r2) goto L8a
            r5 = 2
            if (r2 == r5) goto L60
            r4 = 3
            if (r2 == r4) goto L5e
            r4 = 4
            if (r2 == r4) goto L54
            goto L85
        L54:
            if (r1 == 0) goto L85
            java.lang.String r8 = r8.getText()     // Catch: java.lang.Throwable -> L8c
            r3.close()     // Catch: java.lang.Throwable -> L5d
        L5d:
            return r8
        L5e:
            r1 = 0
            goto L85
        L60:
            int r2 = r8.getAttributeCount()     // Catch: java.lang.Throwable -> L8c
            if (r2 <= 0) goto L85
            int r2 = r8.getAttributeCount()     // Catch: java.lang.Throwable -> L8c
            r5 = 0
        L6b:
            if (r5 >= r2) goto L85
            java.lang.String r6 = r8.getAttributeValue(r5)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r7 = "UTDID2"
            boolean r7 = r7.equals(r6)     // Catch: java.lang.Throwable -> L8c
            if (r7 != 0) goto L81
            java.lang.String r7 = "UTDID"
            boolean r6 = r7.equals(r6)     // Catch: java.lang.Throwable -> L8c
            if (r6 == 0) goto L82
        L81:
            r1 = 1
        L82:
            int r5 = r5 + 1
            goto L6b
        L85:
            int r2 = r8.next()     // Catch: java.lang.Throwable -> L8c
            goto L47
        L8a:
            r0 = r3
            goto L8e
        L8c:
            r0 = r3
            goto L94
        L8e:
            if (r0 == 0) goto L97
        L90:
            r0.close()     // Catch: java.lang.Throwable -> L97
            goto L97
        L94:
            if (r0 == 0) goto L97
            goto L90
        L97:
            java.lang.String r8 = ""
            return r8
    }

    private static java.lang.String x(android.content.Context r5) {
            java.lang.String r0 = com.loc.o.q     // Catch: java.lang.Throwable -> L5b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L5b
            if (r0 != 0) goto Lb
            java.lang.String r5 = com.loc.o.q     // Catch: java.lang.Throwable -> L5b
            return r5
        Lb:
            android.content.pm.PackageManager r0 = r5.getPackageManager()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r5 = r5.getPackageName()     // Catch: java.lang.Throwable -> L5b
            r1 = 64
            android.content.pm.PackageInfo r5 = r0.getPackageInfo(r5, r1)     // Catch: java.lang.Throwable -> L5b
            android.content.pm.Signature[] r5 = r5.signatures     // Catch: java.lang.Throwable -> L5b
            r0 = 0
            r5 = r5[r0]     // Catch: java.lang.Throwable -> L5b
            byte[] r5 = r5.toByteArray()     // Catch: java.lang.Throwable -> L5b
            java.lang.String r1 = "IU0hBMQ"
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> L5b
            java.security.MessageDigest r1 = java.security.MessageDigest.getInstance(r1)     // Catch: java.lang.Throwable -> L5b
            byte[] r5 = r1.digest(r5)     // Catch: java.lang.Throwable -> L5b
            java.lang.StringBuffer r1 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L5b
            r1.<init>()     // Catch: java.lang.Throwable -> L5b
        L35:
            int r2 = r5.length     // Catch: java.lang.Throwable -> L5b
            if (r0 >= r2) goto L4e
            r2 = r5[r0]     // Catch: java.lang.Throwable -> L5b
            r2 = r2 & 255(0xff, float:3.57E-43)
            r2 = r2 | 256(0x100, float:3.59E-43)
            java.lang.String r2 = java.lang.Integer.toHexString(r2)     // Catch: java.lang.Throwable -> L5b
            r3 = 3
            r4 = 1
            java.lang.String r2 = r2.substring(r4, r3)     // Catch: java.lang.Throwable -> L5b
            r1.append(r2)     // Catch: java.lang.Throwable -> L5b
            int r0 = r0 + 1
            goto L35
        L4e:
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L5b
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L5b
            if (r0 != 0) goto L5a
            com.loc.o.q = r5     // Catch: java.lang.Throwable -> L5b
        L5a:
            return r5
        L5b:
            java.lang.String r5 = ""
            return r5
    }

    private static java.lang.String y(android.content.Context r7) {
            r0 = 1
            java.lang.String r1 = "WY29tLmFuZHJvaWQuaWQuaW1wbC5JZFByb3ZpZGVySW1wbA"
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> L2f
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Throwable -> L2f
            java.lang.String r3 = "MZ2V0T0FJRA"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L2f
            java.lang.Class[] r4 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L2f
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L2f
            java.lang.reflect.Method r1 = r1.getMethod(r3, r4)     // Catch: java.lang.Throwable -> L2f
            java.lang.Object[] r3 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L2f
            r3[r6] = r7     // Catch: java.lang.Throwable -> L2f
            java.lang.Object r7 = r1.invoke(r2, r3)     // Catch: java.lang.Throwable -> L2f
            if (r7 == 0) goto L39
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L2f
            com.loc.o.o = r7     // Catch: java.lang.Throwable -> L2f
            return r7
        L2f:
            r7 = move-exception
            java.lang.String r1 = "oa"
            java.lang.String r2 = "xm"
            com.loc.as.a(r7, r1, r2)
            com.loc.o.p = r0
        L39:
            java.lang.String r7 = com.loc.o.o
            return r7
    }

    private static java.lang.String z(android.content.Context r6) {
            android.content.ContentResolver r0 = r6.getContentResolver()     // Catch: java.lang.Throwable -> L43
            java.lang.String r6 = "QY29udGVudDovL2NvbS52aXZvLnZtcy5JZFByb3ZpZGVyL0lkZW50aWZpZXJJZC9PQUlE"
            java.lang.String r6 = com.loc.x.c(r6)     // Catch: java.lang.Throwable -> L43
            android.net.Uri r1 = android.net.Uri.parse(r6)     // Catch: java.lang.Throwable -> L43
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            android.database.Cursor r6 = r0.query(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L43
            if (r6 == 0) goto L4e
        L18:
            boolean r0 = r6.moveToNext()     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L3f
            int r0 = r6.getColumnCount()     // Catch: java.lang.Throwable -> L43
            r1 = 0
        L23:
            if (r1 >= r0) goto L18
            java.lang.String r2 = "IdmFsdWU"
            java.lang.String r2 = com.loc.x.c(r2)     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = r6.getColumnName(r1)     // Catch: java.lang.Throwable -> L43
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L43
            if (r2 == 0) goto L3c
            java.lang.String r0 = r6.getString(r1)     // Catch: java.lang.Throwable -> L43
            com.loc.o.o = r0     // Catch: java.lang.Throwable -> L43
            goto L18
        L3c:
            int r1 = r1 + 1
            goto L23
        L3f:
            r6.close()     // Catch: java.lang.Throwable -> L43
            goto L4e
        L43:
            r6 = move-exception
            r0 = 1
            com.loc.o.p = r0
            java.lang.String r0 = "oa"
            java.lang.String r1 = "vivo"
            com.loc.as.a(r6, r0, r1)
        L4e:
            java.lang.String r6 = com.loc.o.o
            return r6
    }
}
