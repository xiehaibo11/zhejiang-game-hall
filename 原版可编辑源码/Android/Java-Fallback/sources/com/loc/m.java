package com.loc;

public final class m {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> A = null;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> B = null;
    private static java.util.ArrayList<com.loc.br.a> C = null;
    private static volatile boolean D = false;
    private static java.util.Queue<com.loc.br.c> E = null;
    public static int a = -1;
    public static java.lang.String b = "";
    public static android.content.Context c = null;
    public static volatile boolean d = false;
    public static int e = 0;
    public static boolean f = false;
    public static boolean g = false;
    public static boolean h = false;
    public static boolean i = false;
    public static boolean j = false;
    private static java.lang.String k = "6";
    private static java.lang.String l = "4";
    private static java.lang.String m = "9";
    private static java.lang.String n = "8";
    private static volatile boolean o = true;
    private static java.util.Vector<com.loc.m.e> p;
    private static java.util.Map<java.lang.String, java.lang.Integer> q;
    private static java.lang.String r;
    private static long s;
    private static volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m.g> t;
    private static volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> u;
    private static volatile java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m.d> v;
    private static boolean w;
    private static boolean x;
    private static int y;
    private static int z;


    public interface a {
        void a(com.loc.m.b r1);
    }

    public static class b {

        @java.lang.Deprecated
        public org.json.JSONObject a;

        @java.lang.Deprecated
        public org.json.JSONObject b;
        public java.lang.String c;
        public int d;
        public long e;
        public org.json.JSONObject f;
        public com.loc.m.b.a g;
        public com.loc.m.b.b h;
        private boolean i;

        public static class a {
            public boolean a;
            public boolean b;
            public org.json.JSONObject c;

            public a() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public static class b {
            public boolean a;

            public b() {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        public b() {
                r2 = this;
                r2.<init>()
                r0 = -1
                r2.d = r0
                r0 = 0
                r2.e = r0
                return
        }

        static boolean a(com.loc.m.b r0, boolean r1) {
                r0.i = r1
                return r1
        }
    }

    static class c extends com.loc.bp {
        private java.lang.String d;
        private java.util.Map<java.lang.String, java.lang.String> e;
        private java.lang.String f;
        private java.lang.String g;
        private java.lang.String h;

        c(android.content.Context r1, com.loc.w r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.d = r3
                r1 = 0
                r0.e = r1
                r0.f = r4
                r0.g = r5
                r0.h = r6
                com.loc.bt$c r1 = com.loc.bt.c.b
                r0.a(r1)
                com.loc.bt$a r1 = com.loc.bt.a.d
                r0.a(r1)
                return
        }

        private static java.lang.String a(java.lang.String r1, java.lang.String r2) {
                boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L1a
                if (r0 != 0) goto L1a
                android.net.Uri r0 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L1a
                android.net.Uri$Builder r0 = r0.buildUpon()     // Catch: java.lang.Throwable -> L1a
                android.net.Uri$Builder r2 = r0.encodedAuthority(r2)     // Catch: java.lang.Throwable -> L1a
                android.net.Uri r2 = r2.build()     // Catch: java.lang.Throwable -> L1a
                java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L1a
            L1a:
                return r1
        }

        @Override
        public final java.util.Map<java.lang.String, java.lang.String> a() {
                r3 = this;
                java.lang.String r0 = r3.h
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L15
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                java.lang.String r1 = r3.h
                java.lang.String r2 = "host"
                r0.put(r2, r1)
                return r0
            L15:
                r0 = 0
                return r0
        }

        @Override
        public final byte[] a_() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public final java.lang.String b() {
                r2 = this;
                java.lang.String r0 = r2.f
                java.lang.String r1 = "https://restsdk.amap.com/v3/iasdkauth"
                java.lang.String r0 = a(r1, r0)
                return r0
        }

        @Override
        public final byte[] b_() {
                r4 = this;
                android.content.Context r0 = r4.a
                java.lang.String r0 = com.loc.o.p(r0)
                boolean r1 = android.text.TextUtils.isEmpty(r0)
                if (r1 != 0) goto L1d
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>(r0)
                java.lang.StringBuilder r0 = r1.reverse()
                java.lang.String r0 = r0.toString()
                java.lang.String r0 = com.loc.s.a(r0)
            L1d:
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>()
                java.lang.String r2 = r4.d
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto L2d
                java.lang.String r2 = ""
                goto L2f
            L2d:
                java.lang.String r2 = r4.d
            L2f:
                java.lang.String r3 = "authkey"
                r1.put(r3, r2)
                java.lang.String r2 = "plattype"
                java.lang.String r3 = "android"
                r1.put(r2, r3)
                java.lang.String r2 = "ccver"
                java.lang.String r3 = "1"
                r1.put(r2, r3)
                com.loc.w r2 = r4.b
                java.lang.String r2 = r2.a()
                java.lang.String r3 = "product"
                r1.put(r3, r2)
                com.loc.w r2 = r4.b
                java.lang.String r2 = r2.b()
                java.lang.String r3 = "version"
                r1.put(r3, r2)
                java.lang.String r2 = "output"
                java.lang.String r3 = "json"
                r1.put(r2, r3)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                int r3 = android.os.Build.VERSION.SDK_INT
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                java.lang.String r3 = "androidversion"
                r1.put(r3, r2)
                java.lang.String r2 = "deviceId"
                r1.put(r2, r0)
                java.lang.String r0 = android.os.Build.MANUFACTURER
                java.lang.String r2 = "manufacture"
                r1.put(r2, r0)
                java.util.Map<java.lang.String, java.lang.String> r0 = r4.e
                if (r0 == 0) goto L8d
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L8d
                java.util.Map<java.lang.String, java.lang.String> r0 = r4.e
                r1.putAll(r0)
            L8d:
                android.content.Context r0 = r4.a
                java.lang.String r0 = com.loc.x.a(r0)
                java.lang.String r2 = "abitype"
                r1.put(r2, r0)
                com.loc.w r0 = r4.b
                java.lang.String r0 = r0.d()
                java.lang.String r2 = "ext"
                r1.put(r2, r0)
                java.lang.String r0 = com.loc.x.a(r1)
                byte[] r0 = com.loc.x.a(r0)
                return r0
        }

        @Override
        public final java.lang.String c() {
                r2 = this;
                java.lang.String r0 = r2.g
                java.lang.String r1 = "https://dualstack-arestapi.amap.com/v3/iasdkauth"
                java.lang.String r0 = a(r1, r0)
                return r0
        }

        @Override
        protected final java.lang.String f() {
                r1 = this;
                java.lang.String r0 = "3.0"
                return r0
        }

        @Override
        protected final java.lang.String g() {
                r1 = this;
                java.lang.String r0 = r1.h
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto Lb
                java.lang.String r0 = r1.h
                return r0
            Lb:
                java.lang.String r0 = super.g()
                return r0
        }
    }

    private static class d {
        com.loc.w a;
        java.lang.String b;
        com.loc.m.a c;

        private d() {
                r0 = this;
                r0.<init>()
                return
        }

        d(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static class e {
        private java.lang.String a;
        private java.lang.String b;
        private java.util.concurrent.atomic.AtomicInteger c;

        public e(java.lang.String r1, java.lang.String r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                java.util.concurrent.atomic.AtomicInteger r1 = new java.util.concurrent.atomic.AtomicInteger
                r1.<init>(r3)
                r0.c = r1
                return
        }

        static java.lang.String a(com.loc.m.e r0) {
                java.lang.String r0 = r0.b
                return r0
        }

        public static com.loc.m.e b(java.lang.String r5) {
                boolean r0 = android.text.TextUtils.isEmpty(r5)
                r1 = 0
                if (r0 == 0) goto L8
                return r1
            L8:
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L25
                r0.<init>(r5)     // Catch: java.lang.Throwable -> L25
                com.loc.m$e r5 = new com.loc.m$e     // Catch: java.lang.Throwable -> L25
                java.lang.String r2 = "a"
                java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Throwable -> L25
                java.lang.String r3 = "f"
                java.lang.String r3 = r0.optString(r3)     // Catch: java.lang.Throwable -> L25
                java.lang.String r4 = "h"
                int r0 = r0.optInt(r4)     // Catch: java.lang.Throwable -> L25
                r5.<init>(r2, r3, r0)     // Catch: java.lang.Throwable -> L25
                return r5
            L25:
                return r1
        }

        static java.util.concurrent.atomic.AtomicInteger b(com.loc.m.e r0) {
                java.util.concurrent.atomic.AtomicInteger r0 = r0.c
                return r0
        }

        static java.lang.String c(com.loc.m.e r0) {
                java.lang.String r0 = r0.a
                return r0
        }

        public final int a() {
                r1 = this;
                java.util.concurrent.atomic.AtomicInteger r0 = r1.c
                if (r0 != 0) goto L6
                r0 = 0
                return r0
            L6:
                int r0 = r0.get()
                return r0
        }

        public final void a(java.lang.String r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public final java.lang.String b() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L23
                r0.<init>()     // Catch: java.lang.Throwable -> L23
                java.lang.String r1 = "a"
                java.lang.String r2 = r3.a     // Catch: java.lang.Throwable -> L23
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L23
                java.lang.String r1 = "f"
                java.lang.String r2 = r3.b     // Catch: java.lang.Throwable -> L23
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L23
                java.lang.String r1 = "h"
                java.util.concurrent.atomic.AtomicInteger r2 = r3.c     // Catch: java.lang.Throwable -> L23
                int r2 = r2.get()     // Catch: java.lang.Throwable -> L23
                r0.put(r1, r2)     // Catch: java.lang.Throwable -> L23
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L23
                return r0
            L23:
                java.lang.String r0 = ""
                return r0
        }
    }

    public static class f {
        public static boolean a = true;
        public static boolean b = false;
        public static boolean c = true;
        public static int d;
        public static boolean e;
        public static int f;

        static {
                return
        }
    }

    public static class g {
        public long a;
        public java.lang.String b;

        g(java.lang.Long r3, java.lang.String r4) {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.a = r0
                java.lang.String r0 = ""
                r2.b = r0
                long r0 = r3.longValue()
                r2.a = r0
                r2.b = r4
                return
        }
    }

    static {
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            com.loc.m.p = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.loc.m.q = r0
            r0 = 0
            com.loc.m.r = r0
            r0 = 0
            com.loc.m.s = r0
            r0 = 0
            com.loc.m.d = r0
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r2 = 8
            r1.<init>(r2)
            com.loc.m.t = r1
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>(r2)
            com.loc.m.u = r1
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
            r1.<init>(r2)
            com.loc.m.v = r1
            com.loc.m.w = r0
            com.loc.m.x = r0
            r1 = 5000(0x1388, float:7.006E-42)
            com.loc.m.e = r1
            r1 = 1
            com.loc.m.f = r1
            com.loc.m.g = r0
            r2 = 3
            com.loc.m.y = r2
            com.loc.m.h = r1
            com.loc.m.i = r0
            com.loc.m.z = r2
            com.loc.m.j = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.loc.m.A = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.loc.m.B = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.loc.m.C = r0
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            com.loc.m.E = r0
            return
    }

    public static long a(java.util.List<java.lang.String> r2) {
            if (r2 == 0) goto L22
            int r0 = r2.size()     // Catch: java.lang.Exception -> L1e
            if (r0 <= 0) goto L22
            r0 = 0
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L1e
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L1e
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L1e
            if (r0 != 0) goto L22
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L1e
            long r0 = r2.longValue()     // Catch: java.lang.Exception -> L1e
            return r0
        L1e:
            r2 = move-exception
            r2.printStackTrace()
        L22:
            r0 = 0
            return r0
    }

    public static com.loc.m.b a(android.content.Context r0, com.loc.w r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            com.loc.m$b r0 = b(r0, r1, r2, r3, r4, r5)
            return r0
    }

    private static synchronized com.loc.m.e a(android.content.Context r6, java.lang.String r7, java.lang.String r8) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L6b
            r2 = 0
            r3 = 0
            if (r1 != 0) goto L2c
            r1 = 0
        Lc:
            java.util.Vector<com.loc.m$e> r4 = com.loc.m.p     // Catch: java.lang.Throwable -> L6b
            int r4 = r4.size()     // Catch: java.lang.Throwable -> L6b
            if (r1 >= r4) goto L2c
            java.util.Vector<com.loc.m$e> r4 = com.loc.m.p     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Throwable -> L6b
            com.loc.m$e r4 = (com.loc.m.e) r4     // Catch: java.lang.Throwable -> L6b
            if (r4 == 0) goto L29
            java.lang.String r5 = com.loc.m.e.c(r4)     // Catch: java.lang.Throwable -> L6b
            boolean r5 = r7.equals(r5)     // Catch: java.lang.Throwable -> L6b
            if (r5 == 0) goto L29
            goto L2d
        L29:
            int r1 = r1 + 1
            goto Lc
        L2c:
            r4 = r2
        L2d:
            if (r4 == 0) goto L31
            monitor-exit(r0)
            return r4
        L31:
            if (r6 != 0) goto L35
            monitor-exit(r0)
            return r2
        L35:
            java.lang.String r1 = ""
            java.lang.String r6 = com.loc.bd.b(r6, r8, r7, r1)     // Catch: java.lang.Throwable -> L6b
            com.loc.m$e r6 = com.loc.m.e.b(r6)     // Catch: java.lang.Throwable -> L6b
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6b
            java.lang.String r8 = "yyyyMMdd"
            java.lang.String r8 = com.loc.x.a(r1, r8)     // Catch: java.lang.Throwable -> L6b
            if (r6 != 0) goto L50
            com.loc.m$e r6 = new com.loc.m$e     // Catch: java.lang.Throwable -> L6b
            r6.<init>(r7, r8, r3)     // Catch: java.lang.Throwable -> L6b
        L50:
            java.lang.String r7 = com.loc.m.e.a(r6)     // Catch: java.lang.Throwable -> L6b
            boolean r7 = r8.equals(r7)     // Catch: java.lang.Throwable -> L6b
            if (r7 != 0) goto L64
            r6.a(r8)     // Catch: java.lang.Throwable -> L6b
            java.util.concurrent.atomic.AtomicInteger r7 = com.loc.m.e.b(r6)     // Catch: java.lang.Throwable -> L6b
            r7.set(r3)     // Catch: java.lang.Throwable -> L6b
        L64:
            java.util.Vector<com.loc.m$e> r7 = com.loc.m.p     // Catch: java.lang.Throwable -> L6b
            r7.add(r6)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r0)
            return r6
        L6b:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    public static java.lang.String a(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r0 = com.loc.m.v
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r0 = com.loc.m.v
            java.lang.Object r1 = r0.get(r1)
            com.loc.m$d r1 = (com.loc.m.d) r1
            if (r1 == 0) goto L15
            java.lang.String r1 = r1.b
            return r1
        L15:
            r1 = 0
            return r1
    }

    public static void a(android.content.Context r0) {
            if (r0 == 0) goto L8
            android.content.Context r0 = r0.getApplicationContext()
            com.loc.m.c = r0
        L8:
            return
    }

    private static void a(android.content.Context r3, com.loc.w r4, java.lang.String r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "amap_sdk_auth_fail"
            java.lang.String r2 = "1"
            r0.put(r1, r2)
            java.lang.String r1 = "amap_sdk_auth_fail_type"
            r0.put(r1, r5)
            java.lang.String r5 = r4.a()
            java.lang.String r1 = "amap_sdk_name"
            r0.put(r1, r5)
            java.lang.String r4 = r4.c()
            java.lang.String r5 = "amap_sdk_version"
            r0.put(r5, r4)
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>(r0)
            java.lang.String r4 = r4.toString()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L33
            return
        L33:
            com.loc.bz r5 = new com.loc.bz     // Catch: com.loc.k -> L44
            java.lang.String r0 = "core"
            java.lang.String r1 = "2.0"
            java.lang.String r2 = "O001"
            r5.<init>(r3, r0, r1, r2)     // Catch: com.loc.k -> L44
            r5.a(r4)     // Catch: com.loc.k -> L44
            com.loc.ca.a(r5, r3)     // Catch: com.loc.k -> L44
        L44:
            return
    }

    public static synchronized void a(android.content.Context r4, com.loc.w r5, java.lang.String r6, com.loc.m.a r7) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            if (r4 == 0) goto Laa
            if (r5 != 0) goto L9
            goto Laa
        L9:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L9d
            if (r1 != 0) goto L13
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L9d
            com.loc.m.c = r4     // Catch: java.lang.Throwable -> L9d
        L13:
            java.lang.String r4 = r5.a()     // Catch: java.lang.Throwable -> L9d
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L9d
            if (r1 == 0) goto L1f
            monitor-exit(r0)
            return
        L1f:
            a(r5)     // Catch: java.lang.Throwable -> L9d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r1 = com.loc.m.v     // Catch: java.lang.Throwable -> L9d
            r2 = 8
            if (r1 != 0) goto L2f
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L9d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L9d
            com.loc.m.v = r1     // Catch: java.lang.Throwable -> L9d
        L2f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r1 = com.loc.m.u     // Catch: java.lang.Throwable -> L9d
            if (r1 != 0) goto L3a
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L9d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L9d
            com.loc.m.u = r1     // Catch: java.lang.Throwable -> L9d
        L3a:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$g> r1 = com.loc.m.t     // Catch: java.lang.Throwable -> L9d
            if (r1 != 0) goto L45
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L9d
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L9d
            com.loc.m.t = r1     // Catch: java.lang.Throwable -> L9d
        L45:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r1 = com.loc.m.v     // Catch: java.lang.Throwable -> L9d
            boolean r1 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L9d
            if (r1 != 0) goto L9b
            com.loc.m$d r1 = new com.loc.m$d     // Catch: java.lang.Throwable -> L9d
            r2 = 0
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L9d
            r1.a = r5     // Catch: java.lang.Throwable -> L9d
            r1.b = r6     // Catch: java.lang.Throwable -> L9d
            r1.c = r7     // Catch: java.lang.Throwable -> L9d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r5 = com.loc.m.v     // Catch: java.lang.Throwable -> L9d
            r5.put(r4, r1)     // Catch: java.lang.Throwable -> L9d
            android.content.Context r5 = com.loc.m.c     // Catch: java.lang.Throwable -> L9d
            java.lang.String r6 = "open_common"
            r1 = 0
            long r5 = com.loc.bd.a(r5, r6, r4, r1)     // Catch: java.lang.Throwable -> L9d
            android.content.Context r7 = com.loc.m.c     // Catch: java.lang.Throwable -> L9d
            java.lang.String r1 = "open_common"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9d
            r2.<init>()     // Catch: java.lang.Throwable -> L9d
            r2.append(r4)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r3 = "lct-info"
            r2.append(r3)     // Catch: java.lang.Throwable -> L9d
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L9d
            java.lang.String r3 = ""
            java.lang.String r7 = com.loc.bd.b(r7, r1, r2, r3)     // Catch: java.lang.Throwable -> L9d
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$g> r1 = com.loc.m.t     // Catch: java.lang.Throwable -> L9d
            com.loc.m$g r2 = new com.loc.m$g     // Catch: java.lang.Throwable -> L9d
            java.lang.Long r5 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L9d
            r2.<init>(r5, r7)     // Catch: java.lang.Throwable -> L9d
            r1.put(r4, r2)     // Catch: java.lang.Throwable -> L9d
            android.content.Context r4 = com.loc.m.c     // Catch: java.lang.Throwable -> L9d
            d(r4)     // Catch: java.lang.Throwable -> L9d
            android.content.Context r4 = com.loc.m.c     // Catch: java.lang.Throwable -> L9d
            e(r4)     // Catch: java.lang.Throwable -> L9d
        L9b:
            monitor-exit(r0)
            return
        L9d:
            r4 = move-exception
            java.lang.String r5 = "at"
            java.lang.String r6 = "rglc"
            com.loc.as.a(r4, r5, r6)     // Catch: java.lang.Throwable -> La7
            monitor-exit(r0)
            return
        La7:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
        Laa:
            monitor-exit(r0)
            return
    }

    private static void a(android.content.Context r18, com.loc.w r19, java.lang.String r20, com.loc.m.b r21, org.json.JSONObject r22) throws org.json.JSONException {
            r1 = r18
            r2 = r21
            r3 = r22
            java.lang.String r4 = "ust"
            java.lang.String r5 = "umv"
            java.lang.String r6 = "usc"
            java.lang.String r7 = "fsv2"
            java.lang.String r8 = "ucf"
            java.lang.String r9 = "off"
            com.loc.m$b$a r10 = new com.loc.m$b$a
            r10.<init>()
            r11 = 0
            r10.a = r11
            r10.b = r11
            r2.g = r10
            java.lang.String r0 = ";"
            r12 = r20
            java.lang.String[] r0 = r12.split(r0)     // Catch: java.lang.Throwable -> L44
            if (r0 == 0) goto L4c
            int r12 = r0.length     // Catch: java.lang.Throwable -> L44
            if (r12 <= 0) goto L4c
            int r12 = r0.length     // Catch: java.lang.Throwable -> L44
            r13 = 0
        L2d:
            if (r13 >= r12) goto L4c
            r14 = r0[r13]     // Catch: java.lang.Throwable -> L44
            boolean r15 = r3.has(r14)     // Catch: java.lang.Throwable -> L44
            if (r15 == 0) goto L40
            org.json.JSONObject r15 = r2.f     // Catch: java.lang.Throwable -> L44
            java.lang.Object r11 = r3.get(r14)     // Catch: java.lang.Throwable -> L44
            r15.putOpt(r14, r11)     // Catch: java.lang.Throwable -> L44
        L40:
            int r13 = r13 + 1
            r11 = 0
            goto L2d
        L44:
            r0 = move-exception
            java.lang.String r11 = "at"
            java.lang.String r12 = "co"
            com.loc.as.a(r0, r11, r12)
        L4c:
            java.lang.String r0 = "16H"
            boolean r11 = com.loc.x.a(r3, r0)
            java.lang.String r12 = "able"
            java.lang.String r13 = "AuthConfigManager"
            if (r11 == 0) goto L6f
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L69
            java.lang.String r0 = r0.optString(r12)     // Catch: java.lang.Throwable -> L69
            r11 = 0
            boolean r0 = a(r0, r11)     // Catch: java.lang.Throwable -> L69
            com.loc.m.b.a(r2, r0)     // Catch: java.lang.Throwable -> L69
            goto L6f
        L69:
            r0 = move-exception
            java.lang.String r11 = "load 16H"
            com.loc.as.a(r0, r13, r11)
        L6f:
            java.lang.String r0 = "11K"
            boolean r11 = com.loc.x.a(r3, r0)
            if (r11 == 0) goto L99
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L93
            java.lang.String r11 = r0.getString(r12)     // Catch: java.lang.Throwable -> L93
            r14 = 0
            boolean r11 = a(r11, r14)     // Catch: java.lang.Throwable -> L93
            r10.a = r11     // Catch: java.lang.Throwable -> L93
            boolean r11 = r0.has(r9)     // Catch: java.lang.Throwable -> L93
            if (r11 == 0) goto L99
            org.json.JSONObject r0 = r0.getJSONObject(r9)     // Catch: java.lang.Throwable -> L93
            r10.c = r0     // Catch: java.lang.Throwable -> L93
            goto L99
        L93:
            r0 = move-exception
            java.lang.String r9 = "load 11K"
            com.loc.as.a(r0, r13, r9)
        L99:
            java.lang.String r0 = "145"
            boolean r9 = com.loc.x.a(r3, r0)
            if (r9 == 0) goto Lae
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> La8
            r2.a = r0     // Catch: java.lang.Throwable -> La8
            goto Lae
        La8:
            r0 = move-exception
            java.lang.String r9 = "load 145"
            com.loc.as.a(r0, r13, r9)
        Lae:
            java.lang.String r0 = "14D"
            boolean r9 = com.loc.x.a(r3, r0)
            if (r9 == 0) goto Lc3
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> Lbd
            r2.b = r0     // Catch: java.lang.Throwable -> Lbd
            goto Lc3
        Lbd:
            r0 = move-exception
            java.lang.String r9 = "load 14D"
            com.loc.as.a(r0, r13, r9)
        Lc3:
            java.lang.String r0 = "151"
            boolean r9 = com.loc.x.a(r3, r0)
            if (r9 == 0) goto Lea
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> Le4
            com.loc.m$b$b r9 = new com.loc.m$b$b     // Catch: java.lang.Throwable -> Le4
            r9.<init>()     // Catch: java.lang.Throwable -> Le4
            if (r0 == 0) goto Le1
            java.lang.String r0 = r0.optString(r12)     // Catch: java.lang.Throwable -> Le4
            r10 = 0
            boolean r0 = a(r0, r10)     // Catch: java.lang.Throwable -> Le4
            r9.a = r0     // Catch: java.lang.Throwable -> Le4
        Le1:
            r2.h = r9     // Catch: java.lang.Throwable -> Le4
            goto Lea
        Le4:
            r0 = move-exception
            java.lang.String r2 = "load 151"
            com.loc.as.a(r0, r13, r2)
        Lea:
            java.lang.String r0 = "17S"
            boolean r2 = com.loc.x.a(r3, r0)
            java.lang.String r9 = "open_common"
            if (r2 == 0) goto L226
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L21b
            if (r0 == 0) goto L117
            java.lang.String r2 = r0.optString(r12)     // Catch: java.lang.Throwable -> L21b
            r10 = 0
            boolean r2 = a(r2, r10)     // Catch: java.lang.Throwable -> L21b
            boolean r10 = com.loc.m.o     // Catch: java.lang.Throwable -> L21b
            if (r2 == r10) goto L117
            com.loc.m.o = r2     // Catch: java.lang.Throwable -> L21b
            if (r1 == 0) goto L117
            android.content.SharedPreferences$Editor r10 = com.loc.bd.a(r1, r9)     // Catch: java.lang.Throwable -> L21b
            java.lang.String r11 = "a2"
            com.loc.bd.a(r10, r11, r2)     // Catch: java.lang.Throwable -> L21b
            com.loc.bd.a(r10)     // Catch: java.lang.Throwable -> L21b
        L117:
            if (r0 == 0) goto L226
            java.lang.String r2 = "static_enable"
            java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Throwable -> L21b
            r10 = 1
            boolean r2 = a(r2, r10)     // Catch: java.lang.Throwable -> L21b
            java.lang.String r11 = "static_ip_direct_enable"
            java.lang.String r11 = r0.optString(r11)     // Catch: java.lang.Throwable -> L21b
            r12 = 0
            boolean r11 = a(r11, r12)     // Catch: java.lang.Throwable -> L21b
            java.lang.String r12 = "static_timeout"
            r14 = 5
            int r12 = r0.optInt(r12, r14)     // Catch: java.lang.Throwable -> L21b
            int r12 = r12 * 1000
            java.lang.String r14 = "static_retry"
            r15 = 3
            int r14 = r0.optInt(r14, r15)     // Catch: java.lang.Throwable -> L21b
            java.lang.String r15 = "bgp_enable"
            java.lang.String r15 = r0.optString(r15)     // Catch: java.lang.Throwable -> L21b
            boolean r10 = a(r15, r10)     // Catch: java.lang.Throwable -> L21b
            java.lang.String r15 = "bgp_ip_direct_enable"
            java.lang.String r15 = r0.optString(r15)     // Catch: java.lang.Throwable -> L21b
            r16 = r4
            r4 = 0
            boolean r15 = a(r15, r4)     // Catch: java.lang.Throwable -> L219
            java.lang.String r4 = "bgp_retry"
            r17 = r5
            r5 = 3
            int r4 = r0.optInt(r4, r5)     // Catch: java.lang.Throwable -> L217
            java.lang.String r5 = "perf_data_upload_enable"
            java.lang.String r0 = r0.optString(r5)     // Catch: java.lang.Throwable -> L217
            r5 = 0
            boolean r0 = a(r0, r5)     // Catch: java.lang.Throwable -> L217
            boolean r5 = com.loc.m.f     // Catch: java.lang.Throwable -> L217
            if (r2 != r5) goto L18a
            boolean r5 = com.loc.m.g     // Catch: java.lang.Throwable -> L217
            if (r11 != r5) goto L18a
            int r5 = com.loc.m.e     // Catch: java.lang.Throwable -> L217
            if (r12 != r5) goto L18a
            int r5 = com.loc.m.y     // Catch: java.lang.Throwable -> L217
            if (r14 != r5) goto L18a
            boolean r5 = com.loc.m.h     // Catch: java.lang.Throwable -> L217
            if (r10 != r5) goto L18a
            boolean r5 = com.loc.m.i     // Catch: java.lang.Throwable -> L217
            if (r15 != r5) goto L18a
            int r5 = com.loc.m.z     // Catch: java.lang.Throwable -> L217
            if (r4 != r5) goto L18a
            boolean r5 = com.loc.m.j     // Catch: java.lang.Throwable -> L217
            if (r0 == r5) goto L1cb
        L18a:
            com.loc.m.f = r2     // Catch: java.lang.Throwable -> L217
            com.loc.m.g = r11     // Catch: java.lang.Throwable -> L217
            com.loc.m.e = r12     // Catch: java.lang.Throwable -> L217
            com.loc.m.y = r14     // Catch: java.lang.Throwable -> L217
            com.loc.m.h = r10     // Catch: java.lang.Throwable -> L217
            com.loc.m.i = r15     // Catch: java.lang.Throwable -> L217
            com.loc.m.z = r4     // Catch: java.lang.Throwable -> L217
            com.loc.m.j = r0     // Catch: java.lang.Throwable -> L217
            if (r1 == 0) goto L1cb
            android.content.SharedPreferences$Editor r5 = com.loc.bd.a(r1, r9)     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "a13"
            com.loc.bd.a(r5, r1, r2)     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "a6"
            com.loc.bd.a(r5, r1, r10)     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "a7"
            com.loc.bd.a(r5, r1, r11)     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "a8"
            com.loc.bd.a(r5, r1, r12)     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "a9"
            com.loc.bd.a(r5, r1, r14)     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "a10"
            com.loc.bd.a(r5, r1, r15)     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "a11"
            com.loc.bd.a(r5, r1, r4)     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "a12"
            com.loc.bd.a(r5, r1, r0)     // Catch: java.lang.Throwable -> L217
            com.loc.bd.a(r5)     // Catch: java.lang.Throwable -> L217
        L1cb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "static_enable="
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L217
            boolean r1 = com.loc.m.f     // Catch: java.lang.Throwable -> L217
            r0.append(r1)     // Catch: java.lang.Throwable -> L217
            com.loc.br.a()     // Catch: java.lang.Throwable -> L217
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "bgp_enable="
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L217
            boolean r1 = com.loc.m.h     // Catch: java.lang.Throwable -> L217
            r0.append(r1)     // Catch: java.lang.Throwable -> L217
            com.loc.br.a()     // Catch: java.lang.Throwable -> L217
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "static_ip_direct_enable="
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L217
            boolean r1 = com.loc.m.g     // Catch: java.lang.Throwable -> L217
            r0.append(r1)     // Catch: java.lang.Throwable -> L217
            com.loc.br.a()     // Catch: java.lang.Throwable -> L217
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "bgp_ip_direct_enable="
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L217
            boolean r1 = com.loc.m.i     // Catch: java.lang.Throwable -> L217
            r0.append(r1)     // Catch: java.lang.Throwable -> L217
            com.loc.br.a()     // Catch: java.lang.Throwable -> L217
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L217
            java.lang.String r1 = "perf_data_upload_enable="
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L217
            boolean r1 = com.loc.m.j     // Catch: java.lang.Throwable -> L217
            r0.append(r1)     // Catch: java.lang.Throwable -> L217
            com.loc.br.a()     // Catch: java.lang.Throwable -> L217
            goto L22a
        L217:
            r0 = move-exception
            goto L220
        L219:
            r0 = move-exception
            goto L21e
        L21b:
            r0 = move-exception
            r16 = r4
        L21e:
            r17 = r5
        L220:
            java.lang.String r1 = "load 17S"
            com.loc.as.a(r0, r13, r1)
            goto L22a
        L226:
            r16 = r4
            r17 = r5
        L22a:
            java.lang.String r0 = "15K"
            boolean r1 = com.loc.x.a(r3, r0)
            if (r1 == 0) goto L2cb
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L2c2
            if (r0 == 0) goto L2cb
            java.lang.String r1 = r0.optString(r8)     // Catch: java.lang.Throwable -> L2c2
            boolean r2 = com.loc.m.f.a     // Catch: java.lang.Throwable -> L2c2
            boolean r1 = a(r1, r2)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r2 = r0.optString(r7)     // Catch: java.lang.Throwable -> L2c2
            boolean r4 = com.loc.m.f.b     // Catch: java.lang.Throwable -> L2c2
            boolean r2 = a(r2, r4)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r4 = r0.optString(r6)     // Catch: java.lang.Throwable -> L2c2
            boolean r5 = com.loc.m.f.c     // Catch: java.lang.Throwable -> L2c2
            boolean r4 = a(r4, r5)     // Catch: java.lang.Throwable -> L2c2
            int r5 = com.loc.m.f.d     // Catch: java.lang.Throwable -> L2c2
            r10 = r17
            int r5 = r0.optInt(r10, r5)     // Catch: java.lang.Throwable -> L2c2
            r11 = r16
            java.lang.String r12 = r0.optString(r11)     // Catch: java.lang.Throwable -> L2c2
            boolean r14 = com.loc.m.f.e     // Catch: java.lang.Throwable -> L2c2
            boolean r12 = a(r12, r14)     // Catch: java.lang.Throwable -> L2c2
            java.lang.String r14 = "ustv"
            int r15 = com.loc.m.f.f     // Catch: java.lang.Throwable -> L2c2
            int r0 = r0.optInt(r14, r15)     // Catch: java.lang.Throwable -> L2c2
            boolean r14 = com.loc.m.f.a     // Catch: java.lang.Throwable -> L2c2
            if (r1 != r14) goto L28a
            boolean r14 = com.loc.m.f.b     // Catch: java.lang.Throwable -> L2c2
            if (r2 != r14) goto L28a
            boolean r14 = com.loc.m.f.c     // Catch: java.lang.Throwable -> L2c2
            if (r4 != r14) goto L28a
            int r14 = com.loc.m.f.d     // Catch: java.lang.Throwable -> L2c2
            if (r5 != r14) goto L28a
            boolean r14 = com.loc.m.f.e     // Catch: java.lang.Throwable -> L2c2
            if (r12 != r14) goto L28a
            int r14 = com.loc.m.f.d     // Catch: java.lang.Throwable -> L2c2
            if (r0 == r14) goto L2cb
        L28a:
            com.loc.m.f.a = r1     // Catch: java.lang.Throwable -> L2c2
            com.loc.m.f.b = r2     // Catch: java.lang.Throwable -> L2c2
            com.loc.m.f.c = r4     // Catch: java.lang.Throwable -> L2c2
            com.loc.m.f.d = r5     // Catch: java.lang.Throwable -> L2c2
            com.loc.m.f.e = r12     // Catch: java.lang.Throwable -> L2c2
            com.loc.m.f.f = r0     // Catch: java.lang.Throwable -> L2c2
            r1 = r18
            android.content.SharedPreferences$Editor r0 = com.loc.bd.a(r1, r9)     // Catch: java.lang.Throwable -> L2c0
            boolean r2 = com.loc.m.f.a     // Catch: java.lang.Throwable -> L2c0
            com.loc.bd.a(r0, r8, r2)     // Catch: java.lang.Throwable -> L2c0
            boolean r2 = com.loc.m.f.b     // Catch: java.lang.Throwable -> L2c0
            com.loc.bd.a(r0, r7, r2)     // Catch: java.lang.Throwable -> L2c0
            boolean r2 = com.loc.m.f.c     // Catch: java.lang.Throwable -> L2c0
            com.loc.bd.a(r0, r6, r2)     // Catch: java.lang.Throwable -> L2c0
            int r2 = com.loc.m.f.d     // Catch: java.lang.Throwable -> L2c0
            com.loc.bd.a(r0, r10, r2)     // Catch: java.lang.Throwable -> L2c0
            boolean r2 = com.loc.m.f.e     // Catch: java.lang.Throwable -> L2c0
            com.loc.bd.a(r0, r11, r2)     // Catch: java.lang.Throwable -> L2c0
            java.lang.String r2 = "ustv"
            int r4 = com.loc.m.f.f     // Catch: java.lang.Throwable -> L2c0
            com.loc.bd.a(r0, r2, r4)     // Catch: java.lang.Throwable -> L2c0
            com.loc.bd.a(r0)     // Catch: java.lang.Throwable -> L2c0
            goto L2cd
        L2c0:
            goto L2cd
        L2c2:
            r0 = move-exception
            r1 = r18
            java.lang.String r2 = "load 15K"
            com.loc.as.a(r0, r13, r2)
            goto L2cd
        L2cb:
            r1 = r18
        L2cd:
            java.lang.String r0 = "183"
            boolean r2 = com.loc.x.a(r3, r0)
            if (r2 == 0) goto L2e5
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L2df
            r2 = r19
            com.loc.bq.a(r2, r0)     // Catch: java.lang.Throwable -> L2df
            goto L2e5
        L2df:
            r0 = move-exception
            java.lang.String r2 = "load 183"
            com.loc.as.a(r0, r13, r2)
        L2e5:
            java.lang.String r0 = "17I"
            boolean r2 = com.loc.x.a(r3, r0)
            if (r2 == 0) goto L322
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L31c
            java.lang.String r2 = "na"
            java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Throwable -> L31c
            r4 = 0
            boolean r2 = a(r2, r4)     // Catch: java.lang.Throwable -> L31c
            java.lang.String r5 = "aa"
            java.lang.String r0 = r0.optString(r5)     // Catch: java.lang.Throwable -> L31c
            boolean r0 = a(r0, r4)     // Catch: java.lang.Throwable -> L31c
            com.loc.ag.d = r2     // Catch: java.lang.Throwable -> L31c
            com.loc.ag.e = r0     // Catch: java.lang.Throwable -> L31c
            android.content.SharedPreferences$Editor r4 = com.loc.bd.a(r1, r9)     // Catch: java.lang.Throwable -> L31c
            java.lang.String r5 = "a4"
            com.loc.bd.a(r4, r5, r2)     // Catch: java.lang.Throwable -> L31c
            java.lang.String r2 = "a5"
            com.loc.bd.a(r4, r2, r0)     // Catch: java.lang.Throwable -> L31c
            com.loc.bd.a(r4)     // Catch: java.lang.Throwable -> L31c
            goto L322
        L31c:
            r0 = move-exception
            java.lang.String r2 = "load 17I"
            com.loc.as.a(r0, r13, r2)
        L322:
            java.lang.String r0 = "1A4"
            boolean r2 = com.loc.x.a(r3, r0)
            if (r2 == 0) goto L35e
            org.json.JSONObject r0 = r3.getJSONObject(r0)     // Catch: java.lang.Throwable -> L358
            java.lang.String r2 = "ada"
            java.lang.String r2 = r0.optString(r2)     // Catch: java.lang.Throwable -> L358
            boolean r3 = com.loc.z.c     // Catch: java.lang.Throwable -> L358
            boolean r3 = a(r2, r3)     // Catch: java.lang.Throwable -> L358
            java.lang.String r4 = "iv"
            long r5 = com.loc.z.a     // Catch: java.lang.Throwable -> L358
            long r4 = r0.optLong(r4, r5)     // Catch: java.lang.Throwable -> L358
            com.loc.z.d = r3     // Catch: java.lang.Throwable -> L358
            com.loc.z.b = r4     // Catch: java.lang.Throwable -> L358
            android.content.SharedPreferences$Editor r0 = com.loc.bd.a(r1, r9)     // Catch: java.lang.Throwable -> L358
            java.lang.String r1 = "a16"
            com.loc.bd.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L358
            java.lang.String r1 = "a17"
            com.loc.bd.a(r0, r1, r4)     // Catch: java.lang.Throwable -> L358
            com.loc.bd.a(r0)     // Catch: java.lang.Throwable -> L358
            return
        L358:
            r0 = move-exception
            java.lang.String r1 = "load 1A4"
            com.loc.as.a(r0, r13, r1)
        L35e:
            return
    }

    private static void a(android.content.Context r0, com.loc.w r1, java.lang.Throwable r2) {
            java.lang.String r2 = r2.getMessage()
            a(r0, r1, r2)
            return
    }

    public static void a(android.content.Context r0, java.lang.String r1) {
            com.loc.l.a(r0, r1)
            return
    }

    private static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, com.loc.m.e r4) {
            if (r4 == 0) goto L25
            java.lang.String r0 = com.loc.m.e.c(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            goto L25
        Ld:
            java.lang.String r4 = r4.b()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L18
            return
        L18:
            if (r1 != 0) goto L1b
            return
        L1b:
            android.content.SharedPreferences$Editor r1 = com.loc.bd.a(r1, r3)
            r1.putString(r2, r4)
            com.loc.bd.a(r1)
        L25:
            return
    }

    public static void a(com.loc.br.c r5) {
            if (r5 == 0) goto Lb6
            android.content.Context r0 = com.loc.m.c
            if (r0 != 0) goto L8
            goto Lb6
        L8:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r5.c
            java.lang.String r2 = "serverip"
            r0.put(r2, r1)
            java.lang.String r1 = r5.e
            java.lang.String r2 = "hostname"
            r0.put(r2, r1)
            java.lang.String r1 = r5.d
            java.lang.String r2 = "path"
            r0.put(r2, r1)
            java.lang.String r1 = r5.a
            java.lang.String r2 = "csid"
            r0.put(r2, r1)
            com.loc.bt$b r1 = r5.b
            int r1 = r1.a()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "degrade"
            r0.put(r2, r1)
            int r1 = r5.m
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "errorcode"
            r0.put(r2, r1)
            int r1 = r5.n
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "errorsubcode"
            r0.put(r2, r1)
            long r1 = r5.h
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "connecttime"
            r0.put(r2, r1)
            long r1 = r5.i
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "writetime"
            r0.put(r2, r1)
            long r1 = r5.j
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "readtime"
            r0.put(r2, r1)
            java.lang.String r1 = r5.l
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "datasize"
            r0.put(r2, r1)
            long r1 = r5.f
            java.lang.String r5 = java.lang.String.valueOf(r1)
            java.lang.String r1 = "totaltime"
            r0.put(r1, r5)
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>(r0)
            java.lang.String r5 = r5.toString()
            java.lang.String r0 = java.lang.String.valueOf(r5)
            java.lang.String r1 = "--埋点--"
            r1.concat(r0)
            com.loc.br.a()
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto La1
            return
        La1:
            com.loc.bz r0 = new com.loc.bz     // Catch: com.loc.k -> Lb6
            android.content.Context r1 = com.loc.m.c     // Catch: com.loc.k -> Lb6
            java.lang.String r2 = "core"
            java.lang.String r3 = "2.0"
            java.lang.String r4 = "O008"
            r0.<init>(r1, r2, r3, r4)     // Catch: com.loc.k -> Lb6
            r0.a(r5)     // Catch: com.loc.k -> Lb6
            android.content.Context r5 = com.loc.m.c     // Catch: com.loc.k -> Lb6
            com.loc.ca.a(r0, r5)     // Catch: com.loc.k -> Lb6
        Lb6:
            return
    }

    private static void a(com.loc.w r2) {
            if (r2 == 0) goto L2a
            java.lang.String r0 = r2.a()     // Catch: java.lang.Throwable -> L2a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.String r0 = r2.c()     // Catch: java.lang.Throwable -> L2a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto L1b
            java.lang.String r0 = r2.b()     // Catch: java.lang.Throwable -> L2a
        L1b:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto L22
            return
        L22:
            java.lang.String r2 = r2.a()     // Catch: java.lang.Throwable -> L2a
            com.loc.ag.a(r2, r0)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    private static synchronized void a(java.lang.String r4, long r5, java.lang.String r7) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r1 = com.loc.m.v     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L53
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r1 = com.loc.m.v     // Catch: java.lang.Throwable -> L55
            boolean r1 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L55
            if (r1 != 0) goto L10
            goto L53
        L10:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$g> r1 = com.loc.m.t     // Catch: java.lang.Throwable -> L55
            if (r1 != 0) goto L1d
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L55
            r2 = 8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L55
            com.loc.m.t = r1     // Catch: java.lang.Throwable -> L55
        L1d:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$g> r1 = com.loc.m.t     // Catch: java.lang.Throwable -> L55
            com.loc.m$g r2 = new com.loc.m$g     // Catch: java.lang.Throwable -> L55
            java.lang.Long r3 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Throwable -> L55
            r2.<init>(r3, r7)     // Catch: java.lang.Throwable -> L55
            r1.put(r4, r2)     // Catch: java.lang.Throwable -> L55
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L51
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L55
            java.lang.String r2 = "open_common"
            android.content.SharedPreferences$Editor r1 = com.loc.bd.a(r1, r2)     // Catch: java.lang.Throwable -> L55
            com.loc.bd.a(r1, r4, r5)     // Catch: java.lang.Throwable -> L55
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L55
            r5.<init>()     // Catch: java.lang.Throwable -> L55
            r5.append(r4)     // Catch: java.lang.Throwable -> L55
            java.lang.String r4 = "lct-info"
            r5.append(r4)     // Catch: java.lang.Throwable -> L55
            java.lang.String r4 = r5.toString()     // Catch: java.lang.Throwable -> L55
            com.loc.bd.a(r1, r4, r7)     // Catch: java.lang.Throwable -> L55
            com.loc.bd.a(r1)     // Catch: java.lang.Throwable -> L55
        L51:
            monitor-exit(r0)
            return
        L53:
            monitor-exit(r0)
            return
        L55:
            r4 = move-exception
            java.lang.String r5 = "at"
            java.lang.String r6 = "ucut"
            com.loc.as.a(r4, r5, r6)     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r0)
            return
        L5f:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    private static void a(java.lang.String r4, java.lang.String r5) {
            android.content.Context r0 = com.loc.m.c
            com.loc.m$e r0 = a(r0, r4, r5)
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = "yyyyMMdd"
            java.lang.String r1 = com.loc.x.a(r1, r3)
            java.lang.String r2 = com.loc.m.e.a(r0)
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto L25
            r0.a(r1)
            java.util.concurrent.atomic.AtomicInteger r1 = com.loc.m.e.b(r0)
            r2 = 0
            r1.set(r2)
        L25:
            java.util.concurrent.atomic.AtomicInteger r1 = com.loc.m.e.b(r0)
            r1.incrementAndGet()
            android.content.Context r1 = com.loc.m.c
            a(r1, r4, r5, r0)
            return
    }

    public static synchronized void a(java.lang.String r4, boolean r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto Lb
            monitor-exit(r0)
            return
        Lb:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r1 = com.loc.m.u     // Catch: java.lang.Throwable -> L51
            if (r1 != 0) goto L18
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L51
            r2 = 8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L51
            com.loc.m.u = r1     // Catch: java.lang.Throwable -> L51
        L18:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r1 = com.loc.m.u     // Catch: java.lang.Throwable -> L51
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L51
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Throwable -> L51
            r1.put(r4, r2)     // Catch: java.lang.Throwable -> L51
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r1 = com.loc.m.v     // Catch: java.lang.Throwable -> L51
            if (r1 != 0) goto L2b
            monitor-exit(r0)
            return
        L2b:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r1 = com.loc.m.v     // Catch: java.lang.Throwable -> L51
            boolean r1 = r1.containsKey(r4)     // Catch: java.lang.Throwable -> L51
            if (r1 != 0) goto L35
            monitor-exit(r0)
            return
        L35:
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L51
            if (r1 == 0) goto L3d
            monitor-exit(r0)
            return
        L3d:
            if (r5 == 0) goto L43
            r5 = 1
            com.loc.bq.a(r5, r4)     // Catch: java.lang.Throwable -> L51
        L43:
            com.loc.cr r5 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L51
            com.loc.m$1 r1 = new com.loc.m$1     // Catch: java.lang.Throwable -> L51
            r1.<init>(r4, r6, r7, r8)     // Catch: java.lang.Throwable -> L51
            r5.b(r1)     // Catch: java.lang.Throwable -> L51
            monitor-exit(r0)
            return
        L51:
            r4 = move-exception
            java.lang.String r5 = "at"
            java.lang.String r6 = "lca"
            com.loc.as.a(r4, r5, r6)     // Catch: java.lang.Throwable -> L5b
            monitor-exit(r0)
            return
        L5b:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static void a(java.lang.String r4, boolean r5, boolean r6, boolean r7) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L77
            android.content.Context r0 = com.loc.m.c
            if (r0 != 0) goto Lc
            goto L77
        Lc:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "url"
            r0.put(r1, r4)
            java.lang.String r4 = java.lang.String.valueOf(r5)
            java.lang.String r1 = "downLevel"
            r0.put(r1, r4)
            android.content.Context r4 = com.loc.m.c
            int r4 = com.loc.o.j(r4)
            java.lang.String r1 = "0"
            java.lang.String r2 = "1"
            if (r4 != 0) goto L2d
            r4 = r1
            goto L2e
        L2d:
            r4 = r2
        L2e:
            java.lang.String r3 = "ant"
            r0.put(r3, r4)
            java.lang.String r4 = "type"
            if (r7 == 0) goto L3f
            if (r5 == 0) goto L3c
            java.lang.String r5 = com.loc.m.m
            goto L46
        L3c:
            java.lang.String r5 = com.loc.m.n
            goto L46
        L3f:
            if (r5 == 0) goto L44
            java.lang.String r5 = com.loc.m.k
            goto L46
        L44:
            java.lang.String r5 = com.loc.m.l
        L46:
            r0.put(r4, r5)
            if (r6 == 0) goto L4c
            goto L4d
        L4c:
            r1 = r2
        L4d:
            java.lang.String r4 = "status"
            r0.put(r4, r1)
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>(r0)
            java.lang.String r4 = r4.toString()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L62
            return
        L62:
            com.loc.bz r5 = new com.loc.bz     // Catch: com.loc.k -> L77
            android.content.Context r6 = com.loc.m.c     // Catch: com.loc.k -> L77
            java.lang.String r7 = "core"
            java.lang.String r0 = "2.0"
            java.lang.String r1 = "O002"
            r5.<init>(r6, r7, r0, r1)     // Catch: com.loc.k -> L77
            r5.a(r4)     // Catch: com.loc.k -> L77
            android.content.Context r4 = com.loc.m.c     // Catch: com.loc.k -> L77
            com.loc.ca.a(r5, r4)     // Catch: com.loc.k -> L77
        L77:
            return
    }

    public static void a(boolean r4, com.loc.br.a r5) {
            boolean r0 = com.loc.m.D
            if (r0 == 0) goto L9f
            if (r5 != 0) goto L8
            goto L9f
        L8:
            java.util.ArrayList<com.loc.br$a> r0 = com.loc.m.C
            monitor-enter(r0)
            if (r4 == 0) goto L59
            java.util.ArrayList<com.loc.br$a> r4 = com.loc.m.C     // Catch: java.lang.Throwable -> L9c
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L9c
        L13:
            boolean r1 = r4.hasNext()     // Catch: java.lang.Throwable -> L9c
            if (r1 == 0) goto L59
            java.lang.Object r1 = r4.next()     // Catch: java.lang.Throwable -> L9c
            com.loc.br$a r1 = (com.loc.br.a) r1     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = r1.b     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = r5.b     // Catch: java.lang.Throwable -> L9c
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L9c
            if (r2 == 0) goto L13
            java.lang.String r2 = r1.e     // Catch: java.lang.Throwable -> L9c
            java.lang.String r3 = r5.e     // Catch: java.lang.Throwable -> L9c
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L9c
            if (r2 == 0) goto L13
            int r2 = r1.f     // Catch: java.lang.Throwable -> L9c
            int r3 = r5.f     // Catch: java.lang.Throwable -> L9c
            if (r2 != r3) goto L13
            java.util.concurrent.atomic.AtomicInteger r2 = r1.j     // Catch: java.lang.Throwable -> L9c
            java.util.concurrent.atomic.AtomicInteger r3 = r5.j     // Catch: java.lang.Throwable -> L9c
            if (r2 != r3) goto L46
            r4.remove()     // Catch: java.lang.Throwable -> L9c
        L42:
            com.loc.br.a()     // Catch: java.lang.Throwable -> L9c
            goto L13
        L46:
            java.util.concurrent.atomic.AtomicInteger r2 = r1.j     // Catch: java.lang.Throwable -> L9c
            java.util.concurrent.atomic.AtomicInteger r1 = r1.j     // Catch: java.lang.Throwable -> L9c
            int r1 = r1.get()     // Catch: java.lang.Throwable -> L9c
            java.util.concurrent.atomic.AtomicInteger r3 = r5.j     // Catch: java.lang.Throwable -> L9c
            int r3 = r3.get()     // Catch: java.lang.Throwable -> L9c
            int r1 = r1 - r3
            r2.set(r1)     // Catch: java.lang.Throwable -> L9c
            goto L42
        L59:
            r4 = 0
            com.loc.m.D = r4     // Catch: java.lang.Throwable -> L9c
            java.util.ArrayList<com.loc.br$a> r4 = com.loc.m.C     // Catch: java.lang.Throwable -> L9c
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> L9c
        L62:
            com.loc.br.a()     // Catch: java.lang.Throwable -> L9c
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> L9c
            if (r5 == 0) goto L97
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> L9c
            com.loc.br$a r5 = (com.loc.br.a) r5     // Catch: java.lang.Throwable -> L9c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = "----path="
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = r5.e     // Catch: java.lang.Throwable -> L9c
            r1.append(r2)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = "-counts="
            r1.append(r2)     // Catch: java.lang.Throwable -> L9c
            java.util.concurrent.atomic.AtomicInteger r2 = r5.j     // Catch: java.lang.Throwable -> L9c
            r1.append(r2)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r2 = "-code="
            r1.append(r2)     // Catch: java.lang.Throwable -> L9c
            int r5 = r5.f     // Catch: java.lang.Throwable -> L9c
            r1.append(r5)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r5 = "----"
            r1.append(r5)     // Catch: java.lang.Throwable -> L9c
            goto L62
        L97:
            com.loc.br.a()     // Catch: java.lang.Throwable -> L9c
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9c
            return
        L9c:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9c
            throw r4
        L9f:
            return
    }

    public static void a(boolean r2, java.lang.String r3) {
            java.lang.String r0 = "--markHostNameFailed---hostname="
            java.lang.String r1 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L58
            r0.concat(r1)     // Catch: java.lang.Throwable -> L58
            com.loc.br.a()     // Catch: java.lang.Throwable -> L58
            boolean r0 = com.loc.m.f     // Catch: java.lang.Throwable -> L58
            if (r0 != 0) goto L13
            if (r2 != 0) goto L13
            return
        L13:
            boolean r0 = com.loc.m.i     // Catch: java.lang.Throwable -> L58
            if (r0 != 0) goto L1a
            if (r2 == 0) goto L1a
            return
        L1a:
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L58
            if (r0 == 0) goto L21
            return
        L21:
            java.lang.String r0 = "open_common"
            if (r2 != 0) goto L3f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r2 = com.loc.m.A     // Catch: java.lang.Throwable -> L58
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L58
            if (r2 == 0) goto L2e
            return
        L2e:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r2 = com.loc.m.A     // Catch: java.lang.Throwable -> L58
            java.lang.Boolean r1 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L58
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "a14"
            java.lang.String r2 = b(r3, r2)     // Catch: java.lang.Throwable -> L58
            a(r2, r0)     // Catch: java.lang.Throwable -> L58
            return
        L3f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r2 = com.loc.m.B     // Catch: java.lang.Throwable -> L58
            java.lang.Object r2 = r2.get(r3)     // Catch: java.lang.Throwable -> L58
            if (r2 == 0) goto L48
            return
        L48:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r2 = com.loc.m.B     // Catch: java.lang.Throwable -> L58
            java.lang.Boolean r1 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L58
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "a15"
            java.lang.String r2 = b(r3, r2)     // Catch: java.lang.Throwable -> L58
            a(r2, r0)     // Catch: java.lang.Throwable -> L58
        L58:
            return
    }

    public static boolean a() {
            android.content.Context r0 = com.loc.m.c
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L17
            i()
            boolean r0 = c()
            if (r0 != 0) goto L10
            return r2
        L10:
            boolean r0 = b()
            if (r0 == 0) goto L17
            return r1
        L17:
            boolean r0 = com.loc.m.o
            if (r0 != 0) goto L1c
            return r2
        L1c:
            android.content.Context r0 = com.loc.m.c
            java.lang.String r3 = "IPV6_CONFIG_NAME"
            java.lang.String r4 = "open_common"
            com.loc.m$e r0 = a(r0, r3, r4)
            if (r0 != 0) goto L29
            return r2
        L29:
            int r0 = r0.a()
            r3 = 5
            if (r0 >= r3) goto L31
            return r1
        L31:
            return r2
    }

    public static synchronized boolean a(java.lang.String r7, long r8) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto Lc
            monitor-exit(r0)
            return r1
        Lc:
            com.loc.m$g r2 = f(r7)     // Catch: java.lang.Throwable -> L40
            r3 = 0
            if (r2 == 0) goto L17
            long r5 = r2.a     // Catch: java.lang.Throwable -> L40
            goto L18
        L17:
            r5 = r3
        L18:
            int r2 = (r8 > r5 ? 1 : (r8 == r5 ? 0 : -1))
            if (r2 == 0) goto L40
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r8 = com.loc.m.u     // Catch: java.lang.Throwable -> L40
            if (r8 == 0) goto L34
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r8 = com.loc.m.u     // Catch: java.lang.Throwable -> L40
            boolean r8 = r8.containsKey(r7)     // Catch: java.lang.Throwable -> L40
            if (r8 == 0) goto L34
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r8 = com.loc.m.u     // Catch: java.lang.Throwable -> L40
            java.lang.Object r7 = r8.get(r7)     // Catch: java.lang.Throwable -> L40
            java.lang.Long r7 = (java.lang.Long) r7     // Catch: java.lang.Throwable -> L40
            long r3 = r7.longValue()     // Catch: java.lang.Throwable -> L40
        L34:
            long r7 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L40
            long r7 = r7 - r3
            r2 = 30000(0x7530, double:1.4822E-319)
            int r9 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r9 <= 0) goto L40
            r1 = 1
        L40:
            monitor-exit(r0)
            return r1
    }

    public static boolean a(java.lang.String r2, boolean r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L7
            return r3
        L7:
            java.lang.String r2 = java.net.URLDecoder.decode(r2)     // Catch: java.lang.Throwable -> L22
            java.lang.String r0 = "/"
            java.lang.String[] r2 = r2.split(r0)     // Catch: java.lang.Throwable -> L22
            int r0 = r2.length     // Catch: java.lang.Throwable -> L22
            r1 = 1
            int r0 = r0 - r1
            r2 = r2[r0]     // Catch: java.lang.Throwable -> L22
            r0 = 4
            char r2 = r2.charAt(r0)     // Catch: java.lang.Throwable -> L22
            int r2 = r2 % 2
            if (r2 != r1) goto L20
            return r1
        L20:
            r2 = 0
            return r2
        L22:
            return r3
    }

    private static boolean a(java.net.InetAddress r1) {
            boolean r0 = r1.isLoopbackAddress()
            if (r0 != 0) goto L15
            boolean r0 = r1.isLinkLocalAddress()
            if (r0 != 0) goto L15
            boolean r1 = r1.isAnyLocalAddress()
            if (r1 == 0) goto L13
            goto L15
        L13:
            r1 = 0
            return r1
        L15:
            r1 = 1
            return r1
    }

    private static com.loc.m.b b(android.content.Context r22, com.loc.w r23, java.lang.String r24, java.lang.String r25, java.lang.String r26, java.lang.String r27) {
            r8 = r22
            r9 = r23
            java.lang.String r10 = "infocode"
            java.lang.String r11 = "info"
            java.lang.String r12 = "result"
            java.lang.String r13 = "ver"
            java.lang.String r14 = "status"
            java.lang.String r15 = "lct"
            java.lang.String r7 = "lc"
            java.lang.String r6 = "at"
            com.loc.m$b r5 = new com.loc.m$b
            r5.<init>()
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            r5.f = r0
            if (r8 == 0) goto L28
            android.content.Context r0 = r22.getApplicationContext()
            com.loc.m.c = r0
        L28:
            e()
            r16 = 0
            r4 = 0
            a(r23)     // Catch: java.lang.Throwable -> L139 javax.crypto.IllegalBlockSizeException -> L14c com.loc.k -> L15f
            com.loc.bo r0 = new com.loc.bo     // Catch: java.lang.Throwable -> L139 javax.crypto.IllegalBlockSizeException -> L14c com.loc.k -> L15f
            r0.<init>()     // Catch: java.lang.Throwable -> L139 javax.crypto.IllegalBlockSizeException -> L14c com.loc.k -> L15f
            boolean r0 = android.text.TextUtils.isEmpty(r24)     // Catch: java.lang.Throwable -> L139 javax.crypto.IllegalBlockSizeException -> L14c com.loc.k -> L15f
            if (r0 != 0) goto L55
            java.lang.String r1 = c(r24)     // Catch: java.lang.Throwable -> L43 com.loc.k -> L50
            r17 = r1
            goto L57
        L43:
            r17 = r24
        L45:
            r21 = r10
            r19 = r12
            r20 = r13
            r12 = r5
            r13 = r6
            r10 = r7
            goto L120
        L50:
            r0 = move-exception
            r17 = r24
            goto L129
        L55:
            r17 = r24
        L57:
            d(r22)     // Catch: java.lang.Throwable -> L45 com.loc.k -> L128
            e(r22)     // Catch: java.lang.Throwable -> L45 com.loc.k -> L128
            com.loc.m$c r18 = new com.loc.m$c     // Catch: java.lang.Throwable -> L45 com.loc.k -> L128
            r1 = r18
            r2 = r22
            r3 = r23
            r19 = r12
            r12 = 0
            r4 = r17
            r12 = r5
            r5 = r25
            r20 = r13
            r13 = r6
            r6 = r26
            r21 = r10
            r10 = r7
            r7 = r27
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: com.loc.k -> L11e java.lang.Throwable -> L120
            com.loc.bu r1 = com.loc.bo.a(r18)     // Catch: com.loc.k -> L11e java.lang.Throwable -> L120
            if (r0 == 0) goto L81
            return r12
        L81:
            if (r1 == 0) goto Ld8
            byte[] r2 = r1.a     // Catch: java.lang.Throwable -> Lc9 javax.crypto.IllegalBlockSizeException -> Lce com.loc.k -> Ld3
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r0 = r1.b     // Catch: java.lang.Throwable -> Lc1
            if (r0 == 0) goto Lda
            boolean r3 = r0.containsKey(r15)     // Catch: java.lang.Throwable -> Lc1
            if (r3 == 0) goto Lda
            java.lang.Object r3 = r0.get(r15)     // Catch: java.lang.Throwable -> Lc1
            java.util.List r3 = (java.util.List) r3     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r4 = "lct-info"
            java.lang.Object r0 = r0.get(r4)     // Catch: java.lang.Throwable -> Lc1
            java.util.List r0 = (java.util.List) r0     // Catch: java.lang.Throwable -> Lc1
            long r3 = a(r3)     // Catch: java.lang.Throwable -> Lc1
            r12.e = r3     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r0 = b(r0)     // Catch: java.lang.Throwable -> Lc1
            long r3 = r12.e     // Catch: java.lang.Throwable -> Lc1
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 == 0) goto Lda
            if (r9 == 0) goto Lda
            java.lang.String r3 = r23.a()     // Catch: java.lang.Throwable -> Lc1
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> Lc1
            if (r4 != 0) goto Lda
            long r4 = r12.e     // Catch: java.lang.Throwable -> Lc1
            a(r3, r4, r0)     // Catch: java.lang.Throwable -> Lc1
            goto Lda
        Lc1:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            com.loc.av.b(r0, r13, r15)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            goto Lda
        Lc9:
            r0 = move-exception
            r2 = r16
            goto L148
        Lce:
            r0 = move-exception
            r2 = r16
            goto L15b
        Ld3:
            r0 = move-exception
            r2 = r16
            goto L16e
        Ld8:
            r2 = r16
        Lda:
            r0 = 16
            byte[] r3 = new byte[r0]     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            int r4 = r2.length     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            int r4 = r4 - r0
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            r5 = 0
            java.lang.System.arraycopy(r2, r5, r3, r5, r0)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            int r6 = r2.length     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            int r6 = r6 - r0
            java.lang.System.arraycopy(r2, r0, r4, r5, r6)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            javax.crypto.spec.SecretKeySpec r0 = new javax.crypto.spec.SecretKeySpec     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            java.lang.String r5 = "EQUVT"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            r0.<init>(r3, r5)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            java.lang.String r3 = "CQUVTL0NCQy9QS0NTNVBhZGRpbmc"
            java.lang.String r3 = com.loc.x.c(r3)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            javax.crypto.Cipher r3 = javax.crypto.Cipher.getInstance(r3)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            javax.crypto.spec.IvParameterSpec r5 = new javax.crypto.spec.IvParameterSpec     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            byte[] r6 = com.loc.x.c()     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            r6 = 2
            r3.init(r6, r0, r5)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            byte[] r0 = r3.doFinal(r4)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            java.lang.String r16 = com.loc.x.a(r0)     // Catch: java.lang.Throwable -> L117 javax.crypto.IllegalBlockSizeException -> L119 com.loc.k -> L11b
            goto L180
        L117:
            r0 = move-exception
            goto L148
        L119:
            r0 = move-exception
            goto L15b
        L11b:
            r0 = move-exception
            goto L16e
        L11e:
            r0 = move-exception
            goto L132
        L120:
            com.loc.k r0 = new com.loc.k     // Catch: java.lang.Throwable -> L133 javax.crypto.IllegalBlockSizeException -> L135 com.loc.k -> L137
            java.lang.String r1 = "未知的错误"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L133 javax.crypto.IllegalBlockSizeException -> L135 com.loc.k -> L137
            throw r0     // Catch: java.lang.Throwable -> L133 javax.crypto.IllegalBlockSizeException -> L135 com.loc.k -> L137
        L128:
            r0 = move-exception
        L129:
            r21 = r10
            r19 = r12
            r20 = r13
            r12 = r5
            r13 = r6
            r10 = r7
        L132:
            throw r0     // Catch: java.lang.Throwable -> L133 javax.crypto.IllegalBlockSizeException -> L135 com.loc.k -> L137
        L133:
            r0 = move-exception
            goto L145
        L135:
            r0 = move-exception
            goto L158
        L137:
            r0 = move-exception
            goto L16b
        L139:
            r0 = move-exception
            r21 = r10
            r19 = r12
            r20 = r13
            r12 = r5
            r13 = r6
            r10 = r7
            r17 = r24
        L145:
            r1 = r16
            r2 = r1
        L148:
            com.loc.av.b(r0, r13, r10)
            goto L15b
        L14c:
            r0 = move-exception
            r21 = r10
            r19 = r12
            r20 = r13
            r12 = r5
            r13 = r6
            r10 = r7
            r17 = r24
        L158:
            r1 = r16
            r2 = r1
        L15b:
            a(r8, r9, r0)
            goto L180
        L15f:
            r0 = move-exception
            r21 = r10
            r19 = r12
            r20 = r13
            r12 = r5
            r13 = r6
            r10 = r7
            r17 = r24
        L16b:
            r1 = r16
            r2 = r1
        L16e:
            java.lang.String r3 = r0.a()
            r12.c = r3
            java.lang.String r3 = r0.a()
            a(r8, r9, r3)
            java.lang.String r3 = "/v3/iasdkauth"
            com.loc.av.a(r9, r3, r0)
        L180:
            r7 = r17
            if (r2 != 0) goto L185
            return r12
        L185:
            boolean r0 = android.text.TextUtils.isEmpty(r16)
            if (r0 == 0) goto L18f
            java.lang.String r16 = com.loc.x.a(r2)
        L18f:
            r0 = r16
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L19c
            java.lang.String r2 = "result is null"
            a(r8, r9, r2)
        L19c:
            org.json.JSONObject r15 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L243
            r15.<init>(r0)     // Catch: java.lang.Throwable -> L243
            boolean r0 = r15.has(r14)     // Catch: java.lang.Throwable -> L243
            if (r0 == 0) goto L247
            int r0 = r15.getInt(r14)     // Catch: java.lang.Throwable -> L243
            r2 = 1
            if (r0 != r2) goto L1b1
            com.loc.m.a = r2     // Catch: java.lang.Throwable -> L243
            goto L1f5
        L1b1:
            if (r0 != 0) goto L1f5
            java.lang.String r0 = "authcsid"
            java.lang.String r2 = "authgsid"
            if (r1 == 0) goto L1c0
            java.lang.String r0 = r1.c     // Catch: java.lang.Throwable -> L243
            java.lang.String r1 = r1.d     // Catch: java.lang.Throwable -> L243
            r5 = r0
            r4 = r1
            goto L1c2
        L1c0:
            r5 = r0
            r4 = r2
        L1c2:
            com.loc.x.a(r8, r5, r4, r15)     // Catch: java.lang.Throwable -> L243
            r1 = 0
            com.loc.m.a = r1     // Catch: java.lang.Throwable -> L243
            boolean r0 = r15.has(r11)     // Catch: java.lang.Throwable -> L243
            if (r0 == 0) goto L1d4
            java.lang.String r0 = r15.getString(r11)     // Catch: java.lang.Throwable -> L243
            com.loc.m.b = r0     // Catch: java.lang.Throwable -> L243
        L1d4:
            java.lang.String r0 = ""
            r1 = r21
            boolean r2 = r15.has(r1)     // Catch: java.lang.Throwable -> L243
            if (r2 == 0) goto L1e2
            java.lang.String r0 = r15.getString(r1)     // Catch: java.lang.Throwable -> L243
        L1e2:
            r6 = r0
            java.lang.String r2 = "/v3/iasdkauth"
            java.lang.String r3 = com.loc.m.b     // Catch: java.lang.Throwable -> L243
            r1 = r23
            com.loc.av.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L243
            int r0 = com.loc.m.a     // Catch: java.lang.Throwable -> L243
            if (r0 != 0) goto L1f5
            java.lang.String r0 = com.loc.m.b     // Catch: java.lang.Throwable -> L243
            r12.c = r0     // Catch: java.lang.Throwable -> L243
            return r12
        L1f5:
            r1 = r20
            boolean r0 = r15.has(r1)     // Catch: java.lang.Throwable -> L204
            if (r0 == 0) goto L208
            int r0 = r15.getInt(r1)     // Catch: java.lang.Throwable -> L204
            r12.d = r0     // Catch: java.lang.Throwable -> L204
            goto L208
        L204:
            r0 = move-exception
            com.loc.as.a(r0, r13, r10)     // Catch: java.lang.Throwable -> L243
        L208:
            r1 = r19
            boolean r0 = com.loc.x.a(r15, r1)     // Catch: java.lang.Throwable -> L243
            if (r0 == 0) goto L247
            org.json.JSONObject r0 = r15.getJSONObject(r1)     // Catch: java.lang.Throwable -> L243
            a(r8, r9, r7, r12, r0)     // Catch: java.lang.Throwable -> L243
            java.lang.String r1 = "15K"
            org.json.JSONObject r0 = r0.getJSONObject(r1)     // Catch: java.lang.Throwable -> L247
            java.lang.String r1 = "isTargetAble"
            java.lang.String r1 = r0.optString(r1)     // Catch: java.lang.Throwable -> L247
            r2 = 0
            boolean r1 = a(r1, r2)     // Catch: java.lang.Throwable -> L247
            java.lang.String r3 = "able"
            java.lang.String r0 = r0.optString(r3)     // Catch: java.lang.Throwable -> L247
            boolean r0 = a(r0, r2)     // Catch: java.lang.Throwable -> L247
            if (r0 != 0) goto L23b
            com.loc.q.a()     // Catch: java.lang.Throwable -> L247
            com.loc.q.b(r22)     // Catch: java.lang.Throwable -> L247
            goto L247
        L23b:
            com.loc.q r0 = com.loc.q.a()     // Catch: java.lang.Throwable -> L247
            r0.a(r8, r1)     // Catch: java.lang.Throwable -> L247
            goto L247
        L243:
            r0 = move-exception
            com.loc.as.a(r0, r13, r10)
        L247:
            return r12
    }

    public static com.loc.w b(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r0 = com.loc.m.v
            java.lang.Object r1 = r0.get(r1)
            com.loc.m$d r1 = (com.loc.m.d) r1
            if (r1 == 0) goto Ld
            com.loc.w r1 = r1.a
            return r1
        Ld:
            r1 = 0
            return r1
    }

    private static java.lang.String b(java.lang.String r1, java.lang.String r2) {
            byte[] r1 = r1.getBytes()
            java.lang.String r1 = com.loc.s.a(r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            java.lang.String r2 = "_"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }

    private static java.lang.String b(java.util.List<java.lang.String> r1) {
            if (r1 == 0) goto L16
            int r0 = r1.size()     // Catch: java.lang.Exception -> L16
            if (r0 <= 0) goto L16
            r0 = 0
            java.lang.Object r1 = r1.get(r0)     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L16
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L16
            if (r0 != 0) goto L16
            return r1
        L16:
            java.lang.String r1 = ""
            return r1
    }

    public static void b(android.content.Context r3) {
            if (r3 != 0) goto L3
            return
        L3:
            r0 = 1
            java.lang.String r1 = "open_common"
            java.lang.String r2 = "a2"
            boolean r3 = com.loc.bd.a(r3, r1, r2, r0)
            com.loc.m.o = r3
            return
    }

    public static void b(com.loc.br.c r10) {
            java.util.ArrayList<com.loc.br$a> r0 = com.loc.m.C
            monitor-enter(r0)
            r1 = 0
            r2 = 0
        L5:
            java.util.ArrayList<com.loc.br$a> r3 = com.loc.m.C     // Catch: java.lang.Throwable -> L67
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L67
            if (r1 >= r3) goto L56
            java.util.ArrayList<com.loc.br$a> r3 = com.loc.m.C     // Catch: java.lang.Throwable -> L67
            java.lang.Object r3 = r3.get(r1)     // Catch: java.lang.Throwable -> L67
            com.loc.br$a r3 = (com.loc.br.a) r3     // Catch: java.lang.Throwable -> L67
            java.lang.String r4 = r10.c     // Catch: java.lang.Throwable -> L67
            java.lang.String r5 = r3.b     // Catch: java.lang.Throwable -> L67
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L67
            r5 = 1
            if (r4 == 0) goto L53
            java.lang.String r4 = r10.d     // Catch: java.lang.Throwable -> L67
            java.lang.String r6 = r3.e     // Catch: java.lang.Throwable -> L67
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> L67
            if (r4 == 0) goto L53
            int r4 = r10.m     // Catch: java.lang.Throwable -> L67
            int r6 = r3.f     // Catch: java.lang.Throwable -> L67
            if (r4 != r6) goto L53
            int r2 = r3.f     // Catch: java.lang.Throwable -> L67
            if (r2 != r5) goto L4d
            java.util.concurrent.atomic.AtomicInteger r2 = r3.j     // Catch: java.lang.Throwable -> L67
            int r2 = r2.get()     // Catch: java.lang.Throwable -> L67
            long r6 = (long) r2     // Catch: java.lang.Throwable -> L67
            long r8 = r3.i     // Catch: java.lang.Throwable -> L67
            long r6 = r6 * r8
            long r8 = r10.f     // Catch: java.lang.Throwable -> L67
            long r6 = r6 + r8
            java.util.concurrent.atomic.AtomicInteger r2 = r3.j     // Catch: java.lang.Throwable -> L67
            int r2 = r2.get()     // Catch: java.lang.Throwable -> L67
            int r2 = r2 + r5
            long r8 = (long) r2     // Catch: java.lang.Throwable -> L67
            long r6 = r6 / r8
            r3.i = r6     // Catch: java.lang.Throwable -> L67
        L4d:
            java.util.concurrent.atomic.AtomicInteger r2 = r3.j     // Catch: java.lang.Throwable -> L67
            r2.getAndIncrement()     // Catch: java.lang.Throwable -> L67
            r2 = 1
        L53:
            int r1 = r1 + 1
            goto L5
        L56:
            if (r2 != 0) goto L62
            java.util.ArrayList<com.loc.br$a> r1 = com.loc.m.C     // Catch: java.lang.Throwable -> L67
            com.loc.br$a r2 = new com.loc.br$a     // Catch: java.lang.Throwable -> L67
            r2.<init>(r10)     // Catch: java.lang.Throwable -> L67
            r1.add(r2)     // Catch: java.lang.Throwable -> L67
        L62:
            com.loc.br.a()     // Catch: java.lang.Throwable -> L67
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L67
            return
        L67:
            r10 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L67
            throw r10
    }

    public static synchronized void b(java.lang.String r2, boolean r3) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            r1 = 0
            a(r2, r3, r1, r1, r1)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)
            return
        L9:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static boolean b() {
            android.content.Context r0 = com.loc.m.c
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r0 = com.loc.o.o(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L11
            return r1
        L11:
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.loc.m.q
            java.lang.String r0 = r0.toUpperCase()
            java.lang.Object r0 = r2.get(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 != 0) goto L20
            return r1
        L20:
            int r0 = r0.intValue()
            r2 = 2
            if (r0 != r2) goto L29
            r0 = 1
            return r0
        L29:
            return r1
    }

    public static java.lang.String c(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L17
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = ";15K;16H;17I;1A4;17S;183"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
        L17:
            return r1
    }

    private static void c(android.content.Context r4) {
            if (r4 != 0) goto L3
            return
        L3:
            r0 = 1
            java.lang.String r1 = "open_common"
            java.lang.String r2 = "a13"
            boolean r2 = com.loc.bd.a(r4, r1, r2, r0)
            com.loc.m.f = r2
            java.lang.String r2 = "a6"
            boolean r0 = com.loc.bd.a(r4, r1, r2, r0)
            com.loc.m.h = r0
            r0 = 0
            java.lang.String r2 = "a7"
            boolean r2 = com.loc.bd.a(r4, r1, r2, r0)
            com.loc.m.g = r2
            r2 = 5000(0x1388, float:7.006E-42)
            java.lang.String r3 = "a8"
            int r2 = com.loc.bd.a(r4, r1, r3, r2)
            com.loc.m.e = r2
            r2 = 3
            java.lang.String r3 = "a9"
            int r3 = com.loc.bd.a(r4, r1, r3, r2)
            com.loc.m.y = r3
            java.lang.String r3 = "a10"
            boolean r3 = com.loc.bd.a(r4, r1, r3, r0)
            com.loc.m.i = r3
            java.lang.String r3 = "a11"
            int r2 = com.loc.bd.a(r4, r1, r3, r2)
            com.loc.m.z = r2
            java.lang.String r2 = "a12"
            boolean r4 = com.loc.bd.a(r4, r1, r2, r0)
            com.loc.m.j = r4
            return
    }

    public static void c(com.loc.br.c r2) {
            if (r2 != 0) goto L3
            return
        L3:
            boolean r0 = com.loc.m.j
            if (r0 != 0) goto L8
            return
        L8:
            java.util.Queue<com.loc.br$c> r0 = com.loc.m.E
            monitor-enter(r0)
            java.util.Queue<com.loc.br$c> r1 = com.loc.m.E     // Catch: java.lang.Throwable -> L15
            r1.offer(r2)     // Catch: java.lang.Throwable -> L15
            com.loc.br.a()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r2
    }

    public static boolean c() {
            android.content.Context r0 = com.loc.m.c
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.lang.String r0 = com.loc.o.o(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L11
            return r1
        L11:
            java.util.Map<java.lang.String, java.lang.Integer> r2 = com.loc.m.q
            java.lang.String r0 = r0.toUpperCase()
            java.lang.Object r0 = r2.get(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            if (r0 != 0) goto L20
            return r1
        L20:
            int r0 = r0.intValue()
            r2 = 2
            if (r0 < r2) goto L29
            r0 = 1
            return r0
        L29:
            return r1
    }

    public static void d() {
            java.lang.String r0 = "IPV6_CONFIG_NAME"
            java.lang.String r1 = "open_common"
            android.content.Context r2 = com.loc.m.c     // Catch: java.lang.Throwable -> L35
            com.loc.m$e r2 = a(r2, r0, r1)     // Catch: java.lang.Throwable -> L35
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L35
            java.lang.String r5 = "yyyyMMdd"
            java.lang.String r3 = com.loc.x.a(r3, r5)     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = com.loc.m.e.a(r2)     // Catch: java.lang.Throwable -> L35
            boolean r4 = r3.equals(r4)     // Catch: java.lang.Throwable -> L35
            if (r4 != 0) goto L29
            r2.a(r3)     // Catch: java.lang.Throwable -> L35
            java.util.concurrent.atomic.AtomicInteger r3 = com.loc.m.e.b(r2)     // Catch: java.lang.Throwable -> L35
            r4 = 0
            r3.set(r4)     // Catch: java.lang.Throwable -> L35
        L29:
            java.util.concurrent.atomic.AtomicInteger r3 = com.loc.m.e.b(r2)     // Catch: java.lang.Throwable -> L35
            r3.incrementAndGet()     // Catch: java.lang.Throwable -> L35
            android.content.Context r3 = com.loc.m.c     // Catch: java.lang.Throwable -> L35
            a(r3, r0, r1, r2)     // Catch: java.lang.Throwable -> L35
        L35:
            return
    }

    private static void d(android.content.Context r3) {
            java.lang.String r0 = "open_common"
            boolean r1 = com.loc.m.w     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L7
            return
        L7:
            java.lang.String r1 = "a4"
            r2 = 1
            boolean r1 = com.loc.bd.a(r3, r0, r1, r2)     // Catch: java.lang.Throwable -> L1a
            com.loc.ag.d = r1     // Catch: java.lang.Throwable -> L1a
            java.lang.String r1 = "a5"
            boolean r3 = com.loc.bd.a(r3, r0, r1, r2)     // Catch: java.lang.Throwable -> L1a
            com.loc.ag.e = r3     // Catch: java.lang.Throwable -> L1a
            com.loc.m.w = r2     // Catch: java.lang.Throwable -> L1a
        L1a:
            return
    }

    public static synchronized boolean d(java.lang.String r5) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L3f
            if (r2 == 0) goto Lc
            monitor-exit(r0)
            return r1
        Lc:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r2 = com.loc.m.v     // Catch: java.lang.Throwable -> L3f
            if (r2 != 0) goto L12
            monitor-exit(r0)
            return r1
        L12:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r2 = com.loc.m.u     // Catch: java.lang.Throwable -> L3f
            if (r2 != 0) goto L1f
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L3f
            r3 = 8
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L3f
            com.loc.m.u = r2     // Catch: java.lang.Throwable -> L3f
        L1f:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r2 = com.loc.m.v     // Catch: java.lang.Throwable -> L3f
            boolean r2 = r2.containsKey(r5)     // Catch: java.lang.Throwable -> L3f
            if (r2 == 0) goto L47
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r2 = com.loc.m.u     // Catch: java.lang.Throwable -> L3f
            boolean r2 = r2.containsKey(r5)     // Catch: java.lang.Throwable -> L3f
            if (r2 != 0) goto L47
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r2 = com.loc.m.u     // Catch: java.lang.Throwable -> L3f
            long r3 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L3f
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L3f
            r2.put(r5, r3)     // Catch: java.lang.Throwable -> L3f
            r5 = 1
            monitor-exit(r0)
            return r5
        L3f:
            r5 = move-exception
            java.lang.String r2 = "at"
            java.lang.String r3 = "cslct"
            com.loc.as.a(r5, r2, r3)     // Catch: java.lang.Throwable -> L49
        L47:
            monitor-exit(r0)
            return r1
        L49:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public static void e() {
            java.lang.String r0 = "open_common"
            boolean r1 = com.loc.m.d
            if (r1 == 0) goto L7
            return
        L7:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L58
            if (r1 != 0) goto Lc
            return
        Lc:
            r2 = 1
            com.loc.m.d = r2     // Catch: java.lang.Throwable -> L58
            com.loc.q r2 = com.loc.q.a()     // Catch: java.lang.Throwable -> L58
            r2.a(r1)     // Catch: java.lang.Throwable -> L58
            b(r1)     // Catch: java.lang.Throwable -> L58
            c(r1)     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "ucf"
            boolean r3 = com.loc.m.f.a     // Catch: java.lang.Throwable -> L58
            boolean r2 = com.loc.bd.a(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L58
            com.loc.m.f.a = r2     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "fsv2"
            boolean r3 = com.loc.m.f.b     // Catch: java.lang.Throwable -> L58
            boolean r2 = com.loc.bd.a(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L58
            com.loc.m.f.b = r2     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "usc"
            boolean r3 = com.loc.m.f.c     // Catch: java.lang.Throwable -> L58
            boolean r2 = com.loc.bd.a(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L58
            com.loc.m.f.c = r2     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "umv"
            int r3 = com.loc.m.f.d     // Catch: java.lang.Throwable -> L58
            int r2 = com.loc.bd.a(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L58
            com.loc.m.f.d = r2     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "ust"
            boolean r3 = com.loc.m.f.e     // Catch: java.lang.Throwable -> L58
            boolean r2 = com.loc.bd.a(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L58
            com.loc.m.f.e = r2     // Catch: java.lang.Throwable -> L58
            java.lang.String r2 = "ustv"
            int r3 = com.loc.m.f.f     // Catch: java.lang.Throwable -> L58
            int r0 = com.loc.bd.a(r1, r0, r2, r3)     // Catch: java.lang.Throwable -> L58
            com.loc.m.f.f = r0     // Catch: java.lang.Throwable -> L58
        L58:
            return
    }

    private static void e(android.content.Context r5) {
            java.lang.String r0 = "open_common"
            boolean r1 = com.loc.m.x     // Catch: java.lang.Throwable -> L22
            if (r1 == 0) goto L7
            return
        L7:
            java.lang.String r1 = "a16"
            java.lang.String r2 = ""
            java.lang.String r1 = com.loc.bd.b(r5, r0, r1, r2)     // Catch: java.lang.Throwable -> L22
            r2 = 1
            boolean r1 = a(r1, r2)     // Catch: java.lang.Throwable -> L22
            com.loc.z.d = r1     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = "a17"
            long r3 = com.loc.z.a     // Catch: java.lang.Throwable -> L22
            long r0 = com.loc.bd.a(r5, r0, r1, r3)     // Catch: java.lang.Throwable -> L22
            com.loc.z.b = r0     // Catch: java.lang.Throwable -> L22
            com.loc.m.x = r2     // Catch: java.lang.Throwable -> L22
        L22:
            return
    }

    public static synchronized void e(java.lang.String r2) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r1 = com.loc.m.u     // Catch: java.lang.Throwable -> L18
            if (r1 != 0) goto L9
            monitor-exit(r0)
            return
        L9:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r1 = com.loc.m.u     // Catch: java.lang.Throwable -> L18
            boolean r1 = r1.containsKey(r2)     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L16
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Long> r1 = com.loc.m.u     // Catch: java.lang.Throwable -> L18
            r1.remove(r2)     // Catch: java.lang.Throwable -> L18
        L16:
            monitor-exit(r0)
            return
        L18:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static com.loc.br.a f() {
            boolean r0 = com.loc.m.D
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            java.util.ArrayList<com.loc.br$a> r0 = com.loc.m.C
            monitor-enter(r0)
            boolean r2 = com.loc.m.D     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return r1
        Lf:
            java.util.ArrayList<com.loc.br$a> r2 = com.loc.m.C     // Catch: java.lang.Throwable -> L30
            java.util.Collections.sort(r2)     // Catch: java.lang.Throwable -> L30
            java.util.ArrayList<com.loc.br$a> r2 = com.loc.m.C     // Catch: java.lang.Throwable -> L30
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L30
            if (r2 <= 0) goto L2e
            java.util.ArrayList<com.loc.br$a> r1 = com.loc.m.C     // Catch: java.lang.Throwable -> L30
            r2 = 0
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L30
            com.loc.br$a r1 = (com.loc.br.a) r1     // Catch: java.lang.Throwable -> L30
            com.loc.br$a r1 = r1.a()     // Catch: java.lang.Throwable -> L30
            r2 = 1
            com.loc.m.D = r2     // Catch: java.lang.Throwable -> L30
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return r1
        L2e:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            return r1
        L30:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L30
            throw r1
    }

    public static synchronized com.loc.m.g f(java.lang.String r3) {
            java.lang.Class<com.loc.m> r0 = com.loc.m.class
            monitor-enter(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$g> r1 = com.loc.m.t     // Catch: java.lang.Throwable -> L22
            if (r1 != 0) goto L10
            java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L22
            r2 = 8
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L22
            com.loc.m.t = r1     // Catch: java.lang.Throwable -> L22
        L10:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$g> r1 = com.loc.m.t     // Catch: java.lang.Throwable -> L22
            boolean r1 = r1.containsKey(r3)     // Catch: java.lang.Throwable -> L22
            if (r1 == 0) goto L2a
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$g> r1 = com.loc.m.t     // Catch: java.lang.Throwable -> L22
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> L22
            com.loc.m$g r3 = (com.loc.m.g) r3     // Catch: java.lang.Throwable -> L22
            monitor-exit(r0)
            return r3
        L22:
            r3 = move-exception
            java.lang.String r1 = "at"
            java.lang.String r2 = "glcut"
            com.loc.as.a(r3, r1, r2)     // Catch: java.lang.Throwable -> L39
        L2a:
            com.loc.m$g r3 = new com.loc.m$g     // Catch: java.lang.Throwable -> L39
            r1 = 0
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L39
            java.lang.String r2 = ""
            r3.<init>(r1, r2)     // Catch: java.lang.Throwable -> L39
            monitor-exit(r0)
            return r3
        L39:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static com.loc.br.c g() {
            java.util.Queue<com.loc.br$c> r0 = com.loc.m.E
            monitor-enter(r0)
            java.util.Queue<com.loc.br$c> r1 = com.loc.m.E     // Catch: java.lang.Throwable -> L12
            java.lang.Object r1 = r1.poll()     // Catch: java.lang.Throwable -> L12
            com.loc.br$c r1 = (com.loc.br.c) r1     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto Lf
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r1
        Lf:
            r1 = 0
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return r1
        L12:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r1
    }

    public static boolean g(java.lang.String r4) {
            r0 = 1
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3c
            if (r1 == 0) goto L8
            return r0
        L8:
            boolean r1 = com.loc.m.f     // Catch: java.lang.Throwable -> L3c
            r2 = 0
            if (r1 != 0) goto Le
            return r2
        Le:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = com.loc.m.A     // Catch: java.lang.Throwable -> L3c
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L3c
            if (r1 != 0) goto L18
            r1 = 1
            goto L19
        L18:
            r1 = 0
        L19:
            if (r1 != 0) goto L1c
            return r2
        L1c:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L3c
            if (r1 != 0) goto L21
            return r0
        L21:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = "a14"
            java.lang.String r4 = b(r4, r3)     // Catch: java.lang.Throwable -> L3c
            java.lang.String r3 = "open_common"
            com.loc.m$e r4 = a(r1, r4, r3)     // Catch: java.lang.Throwable -> L3c
            if (r4 != 0) goto L32
            return r0
        L32:
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L3c
            int r1 = com.loc.m.y     // Catch: java.lang.Throwable -> L3c
            if (r4 >= r1) goto L3b
            return r0
        L3b:
            return r2
        L3c:
            return r0
    }

    static java.util.concurrent.ConcurrentHashMap h() {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.loc.m$d> r0 = com.loc.m.v
            return r0
    }

    public static boolean h(java.lang.String r4) {
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L8
            return r0
        L8:
            boolean r1 = com.loc.m.i     // Catch: java.lang.Throwable -> L3b
            if (r1 != 0) goto Ld
            return r0
        Ld:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Boolean> r1 = com.loc.m.B     // Catch: java.lang.Throwable -> L3b
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.Throwable -> L3b
            r2 = 1
            if (r1 != 0) goto L18
            r1 = 1
            goto L19
        L18:
            r1 = 0
        L19:
            if (r1 != 0) goto L1c
            return r0
        L1c:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L3b
            if (r1 != 0) goto L21
            return r2
        L21:
            android.content.Context r1 = com.loc.m.c     // Catch: java.lang.Throwable -> L3b
            java.lang.String r3 = "a15"
            java.lang.String r4 = b(r4, r3)     // Catch: java.lang.Throwable -> L3b
            java.lang.String r3 = "open_common"
            com.loc.m$e r4 = a(r1, r4, r3)     // Catch: java.lang.Throwable -> L3b
            if (r4 != 0) goto L32
            return r2
        L32:
            int r4 = r4.a()     // Catch: java.lang.Throwable -> L3b
            int r1 = com.loc.m.z     // Catch: java.lang.Throwable -> L3b
            if (r4 >= r1) goto L3b
            return r2
        L3b:
            return r0
    }

    private static void i() {
            android.content.Context r0 = com.loc.m.c     // Catch: java.lang.Throwable -> Lea
            if (r0 == 0) goto L38
            android.content.Context r0 = com.loc.m.c     // Catch: java.lang.Throwable -> Lea
            java.lang.String r0 = com.loc.o.o(r0)     // Catch: java.lang.Throwable -> Lea
            java.lang.String r1 = com.loc.m.r     // Catch: java.lang.Throwable -> Lea
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lea
            if (r1 != 0) goto L2f
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lea
            if (r1 != 0) goto L2f
            java.lang.String r1 = com.loc.m.r     // Catch: java.lang.Throwable -> Lea
            boolean r1 = r1.equals(r0)     // Catch: java.lang.Throwable -> Lea
            if (r1 == 0) goto L2f
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lea
            long r3 = com.loc.m.s     // Catch: java.lang.Throwable -> Lea
            long r1 = r1 - r3
            r3 = 60000(0xea60, double:2.9644E-319)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 >= 0) goto L2f
            return
        L2f:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Lea
            if (r1 != 0) goto L46
            com.loc.m.r = r0     // Catch: java.lang.Throwable -> Lea
            goto L46
        L38:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lea
            long r2 = com.loc.m.s     // Catch: java.lang.Throwable -> Lea
            long r0 = r0 - r2
            r2 = 10000(0x2710, double:4.9407E-320)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L46
            return
        L46:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lea
            com.loc.m.s = r0     // Catch: java.lang.Throwable -> Lea
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.loc.m.q     // Catch: java.lang.Throwable -> Lea
            r0.clear()     // Catch: java.lang.Throwable -> Lea
            java.util.Enumeration r0 = java.net.NetworkInterface.getNetworkInterfaces()     // Catch: java.lang.Throwable -> Lea
            java.util.ArrayList r0 = java.util.Collections.list(r0)     // Catch: java.lang.Throwable -> Lea
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> Lea
        L5d:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> Lea
            if (r1 == 0) goto Le9
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> Lea
            java.net.NetworkInterface r1 = (java.net.NetworkInterface) r1     // Catch: java.lang.Throwable -> Lea
            java.util.List r2 = r1.getInterfaceAddresses()     // Catch: java.lang.Throwable -> Lea
            boolean r2 = r2.isEmpty()     // Catch: java.lang.Throwable -> Lea
            if (r2 != 0) goto L5d
            java.lang.String r2 = r1.getDisplayName()     // Catch: java.lang.Throwable -> Lea
            r3 = 0
            java.util.List r1 = r1.getInterfaceAddresses()     // Catch: java.lang.Throwable -> Lea
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Lea
        L80:
            boolean r4 = r1.hasNext()     // Catch: java.lang.Throwable -> Lea
            if (r4 == 0) goto Lbe
            java.lang.Object r4 = r1.next()     // Catch: java.lang.Throwable -> Lea
            java.net.InterfaceAddress r4 = (java.net.InterfaceAddress) r4     // Catch: java.lang.Throwable -> Lea
            java.net.InetAddress r4 = r4.getAddress()     // Catch: java.lang.Throwable -> Lea
            boolean r5 = r4 instanceof java.net.Inet6Address     // Catch: java.lang.Throwable -> Lea
            if (r5 == 0) goto L9f
            java.net.Inet6Address r4 = (java.net.Inet6Address) r4     // Catch: java.lang.Throwable -> Lea
            boolean r4 = a(r4)     // Catch: java.lang.Throwable -> Lea
            if (r4 != 0) goto L80
            r3 = r3 | 2
            goto L80
        L9f:
            boolean r5 = r4 instanceof java.net.Inet4Address     // Catch: java.lang.Throwable -> Lea
            if (r5 == 0) goto L80
            java.net.Inet4Address r4 = (java.net.Inet4Address) r4     // Catch: java.lang.Throwable -> Lea
            boolean r5 = a(r4)     // Catch: java.lang.Throwable -> Lea
            if (r5 != 0) goto L80
            java.lang.String r4 = r4.getHostAddress()     // Catch: java.lang.Throwable -> Lea
            java.lang.String r5 = "FMTkyLjE2OC40My4"
            java.lang.String r5 = com.loc.x.c(r5)     // Catch: java.lang.Throwable -> Lea
            boolean r4 = r4.startsWith(r5)     // Catch: java.lang.Throwable -> Lea
            if (r4 != 0) goto L80
            r3 = r3 | 1
            goto L80
        Lbe:
            if (r3 == 0) goto L5d
            if (r2 == 0) goto Ld6
            java.lang.String r1 = "wlan"
            boolean r1 = r2.startsWith(r1)     // Catch: java.lang.Throwable -> Lea
            if (r1 == 0) goto Ld6
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.loc.m.q     // Catch: java.lang.Throwable -> Lea
            java.lang.String r2 = "WIFI"
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> Lea
        Ld2:
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lea
            goto L5d
        Ld6:
            if (r2 == 0) goto L5d
            java.lang.String r1 = "rmnet"
            boolean r1 = r2.startsWith(r1)     // Catch: java.lang.Throwable -> Lea
            if (r1 == 0) goto L5d
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.loc.m.q     // Catch: java.lang.Throwable -> Lea
            java.lang.String r2 = "MOBILE"
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> Lea
            goto Ld2
        Le9:
            return
        Lea:
            r0 = move-exception
            java.lang.String r1 = "at"
            java.lang.String r2 = "ipstack"
            com.loc.as.a(r0, r1, r2)
            return
    }
}
