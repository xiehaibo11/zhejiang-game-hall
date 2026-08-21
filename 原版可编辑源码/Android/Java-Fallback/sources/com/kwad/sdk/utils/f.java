package com.kwad.sdk.utils;

public class f {
    private static android.os.Handler VH;
    private static android.os.Messenger aHL;
    private static volatile java.util.concurrent.ExecutorService aHM;
    private static volatile com.kwad.sdk.collector.AppStatusRules aHN;
    private static java.lang.ref.WeakReference<android.content.Context> aHO;
    private static com.kwad.sdk.collector.h aHP;
    private static android.content.ServiceConnection aql;


    static class 2 implements java.lang.Runnable {
        final android.content.Context jz;


        2(android.content.Context r1) {
                r0 = this;
                r0.jz = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.kwad.sdk.utils.f$2$1 r0 = new com.kwad.sdk.utils.f$2$1
                r0.<init>(r2)
                android.content.Context r1 = r2.jz
                com.kwad.sdk.collector.c.a(r1, r0)
                return
        }
    }



    public static class a implements com.kwad.sdk.core.b {
        private java.util.List<java.lang.Long> aHV;
        private java.lang.String appName;
        private java.lang.String packageName;

        public a() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.aHV = r0
                return
        }

        private a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.aHV = r0
                r1.appName = r2
                r1.packageName = r3
                return
        }

        public static org.json.JSONArray F(java.util.List<com.kwad.sdk.collector.model.b> r2) {
                r0 = 0
                java.util.List r2 = G(r2)     // Catch: java.lang.Exception -> L6
                goto Lb
            L6:
                r2 = move-exception
                com.kwad.sdk.service.c.gatherException(r2)
                r2 = r0
            Lb:
                if (r2 != 0) goto Le
                return r0
            Le:
                org.json.JSONArray r0 = new org.json.JSONArray
                r0.<init>()
                java.util.Iterator r2 = r2.iterator()
            L17:
                boolean r1 = r2.hasNext()
                if (r1 == 0) goto L2b
                java.lang.Object r1 = r2.next()
                com.kwad.sdk.utils.f$a r1 = (com.kwad.sdk.utils.f.a) r1
                org.json.JSONObject r1 = r1.toJson()
                r0.put(r1)
                goto L17
            L2b:
                return r0
        }

        private static java.util.List<com.kwad.sdk.utils.f.a> G(java.util.List<com.kwad.sdk.collector.model.b> r8) {
                r0 = 0
                if (r8 == 0) goto L5c
                int r1 = r8.size()
                if (r1 != 0) goto La
                goto L5c
            La:
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>()
                java.util.Iterator r8 = r8.iterator()     // Catch: java.lang.ClassCastException -> L58
            L13:
                boolean r2 = r8.hasNext()     // Catch: java.lang.ClassCastException -> L58
                if (r2 == 0) goto L4e
                java.lang.Object r2 = r8.next()     // Catch: java.lang.ClassCastException -> L58
                com.kwad.sdk.collector.model.b r2 = (com.kwad.sdk.collector.model.b) r2     // Catch: java.lang.ClassCastException -> L58
                java.lang.String r3 = com.kwad.sdk.collector.model.c.b(r2)     // Catch: java.lang.ClassCastException -> L58
                boolean r4 = r1.containsKey(r3)     // Catch: java.lang.ClassCastException -> L58
                if (r4 == 0) goto L30
                java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.ClassCastException -> L58
                com.kwad.sdk.utils.f$a r3 = (com.kwad.sdk.utils.f.a) r3     // Catch: java.lang.ClassCastException -> L58
                goto L41
            L30:
                com.kwad.sdk.utils.f$a r4 = new com.kwad.sdk.utils.f$a     // Catch: java.lang.ClassCastException -> L58
                java.lang.String r5 = com.kwad.sdk.collector.model.c.a(r2)     // Catch: java.lang.ClassCastException -> L58
                java.lang.String r6 = com.kwad.sdk.collector.model.c.b(r2)     // Catch: java.lang.ClassCastException -> L58
                r4.<init>(r5, r6)     // Catch: java.lang.ClassCastException -> L58
                r1.put(r3, r4)     // Catch: java.lang.ClassCastException -> L58
                r3 = r4
            L41:
                long r4 = com.kwad.sdk.collector.model.c.c(r2)     // Catch: java.lang.ClassCastException -> L58
                r6 = 1000(0x3e8, double:4.94E-321)
                long r4 = r4 / r6
                if (r3 == 0) goto L13
                r3.as(r4)     // Catch: java.lang.ClassCastException -> L58
                goto L13
            L4e:
                java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.ClassCastException -> L58
                java.util.Collection r1 = r1.values()     // Catch: java.lang.ClassCastException -> L58
                r8.<init>(r1)     // Catch: java.lang.ClassCastException -> L58
                return r8
            L58:
                r8 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r8)
            L5c:
                return r0
        }

        private void as(long r2) {
                r1 = this;
                java.util.List<java.lang.Long> r0 = r1.aHV
                java.lang.Long r2 = java.lang.Long.valueOf(r2)
                r0.add(r2)
                return
        }

        @Override
        public final void parseJson(org.json.JSONObject r6) {
                r5 = this;
                if (r6 != 0) goto L3
                return
            L3:
                java.lang.String r0 = "appName"
                java.lang.String r0 = r6.optString(r0)
                r5.appName = r0
                java.lang.String r0 = "packageName"
                java.lang.String r0 = r6.optString(r0)
                r5.packageName = r0
                java.lang.String r0 = "runningTimes"
                org.json.JSONArray r6 = r6.optJSONArray(r0)
                if (r6 == 0) goto L3c
                java.util.List<java.lang.Long> r0 = r5.aHV
                r0.clear()
                int r0 = r6.length()
                r1 = 0
            L25:
                if (r1 >= r0) goto L3c
                java.util.List<java.lang.Long> r2 = r5.aHV     // Catch: org.json.JSONException -> L35
                long r3 = r6.getLong(r1)     // Catch: org.json.JSONException -> L35
                java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: org.json.JSONException -> L35
                r2.add(r3)     // Catch: org.json.JSONException -> L35
                goto L39
            L35:
                r2 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            L39:
                int r1 = r1 + 1
                goto L25
            L3c:
                return
        }

        @Override
        public final org.json.JSONObject toJson() {
                r5 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                java.lang.String r1 = r5.appName
                java.lang.String r2 = "appName"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r5.packageName
                java.lang.String r2 = "packageName"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                org.json.JSONArray r1 = new org.json.JSONArray
                r1.<init>()
                java.util.List<java.lang.Long> r2 = r5.aHV
                java.util.Iterator r2 = r2.iterator()
            L1e:
                boolean r3 = r2.hasNext()
                if (r3 == 0) goto L32
                java.lang.Object r3 = r2.next()
                java.lang.Long r3 = (java.lang.Long) r3
                long r3 = r3.longValue()
                r1.put(r3)
                goto L1e
            L32:
                java.lang.String r2 = "runningTimes"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    public interface b {
        void q(java.util.List<com.kwad.sdk.collector.model.b> r1);
    }

    static class c extends android.os.Handler {



        public c(android.os.Looper r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private static void H(java.util.List<com.kwad.sdk.utils.f.a> r1) {
                if (r1 != 0) goto L3
                return
            L3:
                org.json.JSONArray r1 = com.kwad.sdk.utils.t.I(r1)
                com.kwad.sdk.collector.h r0 = com.kwad.sdk.utils.f.HO()
                r0.c(r1)
                return
        }

        private static void b(java.util.ArrayList<com.kwad.sdk.collector.model.b> r1) {
                if (r1 != 0) goto L3
                return
            L3:
                org.json.JSONArray r1 = com.kwad.sdk.utils.f.a.F(r1)
                if (r1 == 0) goto L10
                com.kwad.sdk.collector.h r0 = com.kwad.sdk.utils.f.HO()
                r0.c(r1)
            L10:
                return
        }

        private void c(android.os.Message r7) {
                r6 = this;
                java.lang.String r0 = "resultJson"
                android.os.Bundle r7 = r7.getData()
                java.lang.String r1 = "AppStatusHelper"
                r2 = 0
                if (r7 == 0) goto L4c
                boolean r3 = r7.containsKey(r0)     // Catch: java.lang.Throwable -> L2b
                if (r3 == 0) goto L21
                java.lang.String r0 = r7.getString(r0)     // Catch: java.lang.Throwable -> L2b
                com.kwad.sdk.utils.f$c$1 r3 = new com.kwad.sdk.utils.f$c$1     // Catch: java.lang.Throwable -> L2b
                r3.<init>(r6)     // Catch: java.lang.Throwable -> L2b
                java.util.List r0 = com.kwad.sdk.utils.t.a(r0, r3)     // Catch: java.lang.Throwable -> L2b
                r3 = r0
                r0 = r2
                goto L2d
            L21:
                java.lang.String r0 = "data"
                java.io.Serializable r0 = r7.getSerializable(r0)     // Catch: java.lang.Throwable -> L2b
                java.util.ArrayList r0 = (java.util.ArrayList) r0     // Catch: java.lang.Throwable -> L2b
                r3 = r2
                goto L2d
            L2b:
                r0 = r2
                r3 = r0
            L2d:
                if (r0 == 0) goto L47
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                java.lang.String r5 = "ClientHandler: handleMessage data size: "
                r4.<init>(r5)
                int r5 = r0.size()
                r4.append(r5)
                java.lang.String r4 = r4.toString()
                com.kwad.sdk.core.e.c.d(r1, r4)
                b(r0)
            L47:
                if (r3 == 0) goto L4c
                H(r3)
            L4c:
                java.lang.ref.WeakReference r0 = com.kwad.sdk.utils.f.HP()
                if (r0 == 0) goto La9
                java.lang.ref.WeakReference r0 = com.kwad.sdk.utils.f.HP()
                java.lang.Object r0 = r0.get()
                if (r0 == 0) goto La9
                if (r7 == 0) goto La9
                java.lang.String r0 = "allStrategyJson"
                boolean r3 = r7.containsKey(r0)
                if (r3 == 0) goto L76
                java.lang.String r7 = r7.getString(r0)
                if (r7 == 0) goto L7f
                com.kwad.sdk.utils.f$c$2 r0 = new com.kwad.sdk.utils.f$c$2
                r0.<init>(r6)
                java.util.List r2 = com.kwad.sdk.utils.t.a(r7, r0)
                goto L7f
            L76:
                java.lang.String r0 = "allStrategy"
                java.io.Serializable r7 = r7.getSerializable(r0)
                r2 = r7
                java.util.ArrayList r2 = (java.util.ArrayList) r2
            L7f:
                if (r2 == 0) goto La9
                java.util.Iterator r7 = r2.iterator()
            L85:
                boolean r0 = r7.hasNext()
                if (r0 == 0) goto La9
                java.lang.Object r0 = r7.next()
                com.kwad.sdk.collector.AppStatusRules$Strategy r0 = (com.kwad.sdk.collector.AppStatusRules.Strategy) r0
                long r2 = r0.getNeedSaveLaunchTime()
                r4 = 0
                int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r4 < 0) goto L85
                java.lang.ref.WeakReference r4 = com.kwad.sdk.utils.f.HP()
                java.lang.Object r4 = r4.get()
                android.content.Context r4 = (android.content.Context) r4
                com.kwad.sdk.collector.i.a(r4, r0, r2)
                goto L85
            La9:
                java.lang.ref.WeakReference r7 = com.kwad.sdk.utils.f.HP()
                if (r7 == 0) goto Lcb
                android.content.ServiceConnection r7 = com.kwad.sdk.utils.f.HQ()
                if (r7 == 0) goto Lcb
                java.lang.String r7 = "unbindASService"
                com.kwad.sdk.core.e.c.d(r1, r7)
                java.lang.ref.WeakReference r7 = com.kwad.sdk.utils.f.HP()
                java.lang.Object r7 = r7.get()
                android.content.Context r7 = (android.content.Context) r7
                android.content.ServiceConnection r0 = com.kwad.sdk.utils.f.HQ()
                com.kwad.sdk.collector.b.a.b(r7, r0)
            Lcb:
                return
        }

        @Override
        public final void handleMessage(android.os.Message r3) {
                r2 = this;
                super.handleMessage(r3)
                int r0 = r3.what
                r1 = 101(0x65, float:1.42E-43)
                if (r0 == r1) goto La
                goto Ld
            La:
                r2.c(r3)     // Catch: java.lang.Throwable -> Le
            Ld:
                return
            Le:
                r3 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
                return
        }
    }

    static class d implements com.kwad.sdk.utils.f.b {
        private com.kwad.sdk.utils.f.b aHX;

        public d(com.kwad.sdk.utils.f.b r1) {
                r0 = this;
                r0.<init>()
                r1 = 0
                r0.aHX = r1
                return
        }

        @Override
        public final void q(java.util.List<com.kwad.sdk.collector.model.b> r3) {
                r2 = this;
                org.json.JSONArray r0 = com.kwad.sdk.utils.f.a.F(r3)
                if (r0 == 0) goto Ld
                com.kwad.sdk.collector.h r1 = com.kwad.sdk.utils.f.HO()
                r1.c(r0)
            Ld:
                com.kwad.sdk.utils.f$b r0 = r2.aHX
                if (r0 == 0) goto L14
                r0.q(r3)
            L14:
                return
        }
    }

    static {
            com.kwad.sdk.utils.f$1 r0 = new com.kwad.sdk.utils.f$1
            r0.<init>()
            com.kwad.sdk.utils.f.aql = r0
            return
    }

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.List<com.kwad.sdk.collector.model.b> E(java.util.List<com.kwad.sdk.collector.model.b> r1) {
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto L7
            return r1
        L7:
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>(r1)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            return r1
    }

    static void Ew() {
            HI()
            return
    }

    public static com.kwad.sdk.collector.AppStatusRules HG() {
            com.kwad.sdk.collector.AppStatusRules r0 = com.kwad.sdk.utils.f.aHN
            return r0
    }

    private static boolean HH() {
            android.os.Messenger r0 = com.kwad.sdk.utils.f.aHL
            if (r0 != 0) goto L14
            com.kwad.sdk.utils.f$c r0 = new com.kwad.sdk.utils.f$c     // Catch: java.lang.Throwable -> L14
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L14
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L14
            android.os.Messenger r1 = new android.os.Messenger     // Catch: java.lang.Throwable -> L14
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.utils.f.aHL = r1     // Catch: java.lang.Throwable -> L14
        L14:
            android.os.Messenger r0 = com.kwad.sdk.utils.f.aHL
            if (r0 == 0) goto L1a
            r0 = 1
            return r0
        L1a:
            r0 = 0
            return r0
    }

    private static void HI() {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.utils.f.aHM
            if (r0 != 0) goto L1d
            java.lang.Class<com.kwad.sdk.utils.f> r0 = com.kwad.sdk.utils.f.class
            monitor-enter(r0)
            java.util.concurrent.ExecutorService r1 = com.kwad.sdk.utils.f.aHM     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L18
            java.util.concurrent.ExecutorService r1 = com.kwad.sdk.core.threads.GlobalThreadPools.CY()     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.utils.f.aHM = r1     // Catch: java.lang.Throwable -> L1a
            java.util.concurrent.ThreadPoolExecutor r1 = (java.util.concurrent.ThreadPoolExecutor) r1     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = "appStatusHelper"
            com.kwad.sdk.core.threads.c.a(r1, r2)     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r1
        L1d:
            return
    }

    private static boolean HJ() {
            r0 = 0
            java.lang.String r1 = "com.kwad.sdk.api.proxy.app.ServiceProxyRemote"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L24
            if (r1 == 0) goto L28
            android.content.Context r2 = com.kwad.sdk.service.ServiceProvider.getContext()     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.pm.PackageManager r3 = r2.getPackageManager()     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.Intent r4 = new android.content.Intent     // Catch: java.lang.ClassNotFoundException -> L24
            r4.<init>(r2, r1)     // Catch: java.lang.ClassNotFoundException -> L24
            r1 = 65536(0x10000, float:9.1835E-41)
            java.util.List r1 = r3.queryIntentServices(r4, r1)     // Catch: java.lang.ClassNotFoundException -> L24
            int r1 = r1.size()     // Catch: java.lang.ClassNotFoundException -> L24
            if (r1 <= 0) goto L23
            r0 = 1
        L23:
            return r0
        L24:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
        L28:
            return r0
    }

    static android.os.Messenger HK() {
            android.os.Messenger r0 = com.kwad.sdk.utils.f.aHL
            return r0
    }

    static com.kwad.sdk.collector.AppStatusRules HL() {
            com.kwad.sdk.collector.AppStatusRules r0 = com.kwad.sdk.utils.f.aHN
            return r0
    }

    static java.util.concurrent.ExecutorService HM() {
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.utils.f.aHM
            return r0
    }

    static android.os.Handler HN() {
            android.os.Handler r0 = com.kwad.sdk.utils.f.VH
            return r0
    }

    static com.kwad.sdk.collector.h HO() {
            com.kwad.sdk.collector.h r0 = com.kwad.sdk.utils.f.aHP
            return r0
    }

    static java.lang.ref.WeakReference HP() {
            java.lang.ref.WeakReference<android.content.Context> r0 = com.kwad.sdk.utils.f.aHO
            return r0
    }

    static android.content.ServiceConnection HQ() {
            android.content.ServiceConnection r0 = com.kwad.sdk.utils.f.aql
            return r0
    }

    private static java.util.List<com.kwad.sdk.collector.model.b> a(com.kwad.sdk.collector.AppStatusRules.Strategy r3) {
            boolean r0 = r3.isNeedLaunch()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "analysisByFile, strategy: "
            r1.<init>(r2)
            java.lang.String r2 = r3.getName()
            r1.append(r2)
            java.lang.String r2 = ", needLaunch: "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AppStatusHelper"
            com.kwad.sdk.core.e.c.d(r2, r1)
            if (r0 != 0) goto L2b
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            return r3
        L2b:
            com.kwad.sdk.collector.a r0 = com.kwad.sdk.collector.b.yE()
            java.util.List r3 = r0.a(r3)
            return r3
    }

    public static void a(android.content.Context r2, long r3, com.kwad.sdk.collector.h r5) {
            boolean r3 = com.kwad.sdk.utils.at.Jh()
            if (r3 != 0) goto L57
            r3 = 8192(0x2000, double:4.0474E-320)
            boolean r3 = com.kwad.sdk.core.config.d.R(r3)
            if (r3 == 0) goto Lf
            goto L57
        Lf:
            if (r2 != 0) goto L12
            return
        L12:
            boolean r3 = com.kwad.sdk.utils.c.bF(r2)
            if (r3 == 0) goto L19
            return
        L19:
            com.kwad.sdk.utils.f.aHP = r5
            boolean r3 = com.kwad.sdk.utils.SystemUtil.isInMainProcess(r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "isMainProcess: "
            r4.<init>(r5)
            r4.append(r3)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "AppStatusHelper"
            com.kwad.sdk.core.e.c.d(r5, r4)
            if (r3 != 0) goto L35
            return
        L35:
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r2)
            com.kwad.sdk.utils.f.aHO = r3
            android.os.Handler r3 = com.kwad.sdk.utils.f.VH
            if (r3 != 0) goto L4b
            android.os.Handler r3 = new android.os.Handler
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            r3.<init>(r4)
            com.kwad.sdk.utils.f.VH = r3
        L4b:
            android.os.Handler r3 = com.kwad.sdk.utils.f.VH
            com.kwad.sdk.utils.f$2 r4 = new com.kwad.sdk.utils.f$2
            r4.<init>(r2)
            r0 = 30000(0x7530, double:1.4822E-319)
            r3.postDelayed(r4, r0)
        L57:
            return
    }

    public static void a(android.content.Context r2, com.kwad.sdk.utils.f.b r3) {
            if (r2 != 0) goto L3
            return
        L3:
            boolean r0 = com.kwad.sdk.utils.at.Jh()
            if (r0 != 0) goto L26
            r0 = 8192(0x2000, double:4.0474E-320)
            boolean r0 = com.kwad.sdk.core.config.d.R(r0)
            if (r0 == 0) goto L12
            goto L26
        L12:
            boolean r0 = com.kwad.sdk.utils.c.bF(r2)
            if (r0 == 0) goto L19
            return
        L19:
            HI()
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.utils.f.aHM
            com.kwad.sdk.utils.f$4 r1 = new com.kwad.sdk.utils.f$4
            r1.<init>(r2, r3)
            r0.submit(r1)
        L26:
            return
    }

    static boolean access$000() {
            boolean r0 = HH()
            return r0
    }

    private static void b(android.content.Context r2, com.kwad.sdk.collector.AppStatusRules r3) {
            java.io.File r0 = new java.io.File
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r1 = "LOCAL_APP_STATUS_RULES_JSON"
            r0.<init>(r2, r1)
            org.json.JSONObject r2 = r3.toJson()
            java.lang.String r2 = r2.toString()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L1a
            return
        L1a:
            java.lang.String r2 = com.kwad.sdk.core.a.c.cR(r2)
            java.lang.String r3 = r0.getAbsolutePath()
            r0 = 0
            com.kwad.sdk.crash.utils.h.k(r3, r2, r0)
            return
    }

    public static void bH(android.content.Context r1) {
            com.kwad.sdk.collector.AppStatusRules r0 = com.kwad.sdk.utils.f.aHN
            if (r0 != 0) goto La
            com.kwad.sdk.collector.AppStatusRules r1 = bI(r1)
            com.kwad.sdk.utils.f.aHN = r1
        La:
            return
    }

    private static com.kwad.sdk.collector.AppStatusRules bI(android.content.Context r2) {
            java.io.File r0 = new java.io.File
            java.io.File r2 = r2.getFilesDir()
            java.lang.String r1 = "LOCAL_APP_STATUS_RULES_JSON"
            r0.<init>(r2, r1)
            boolean r2 = r0.exists()
            r1 = 0
            if (r2 != 0) goto L13
            return r1
        L13:
            java.lang.String r2 = com.kwad.sdk.crash.utils.h.I(r0)     // Catch: java.lang.Throwable -> L36
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L1e
            return r1
        L1e:
            boolean r0 = com.kwad.sdk.core.a.c.cT(r2)     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L28
            java.lang.String r2 = com.kwad.sdk.core.a.c.cS(r2)     // Catch: java.lang.Throwable -> L36
        L28:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L36
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L36
            com.kwad.sdk.collector.AppStatusRules r2 = new com.kwad.sdk.collector.AppStatusRules     // Catch: java.lang.Throwable -> L36
            r2.<init>()     // Catch: java.lang.Throwable -> L36
            r2.parseJson(r0)     // Catch: java.lang.Throwable -> L36
            return r2
        L36:
            return r1
    }

    private static void bJ(android.content.Context r3) {
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = HJ()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "isServiceAvailable: "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "AppStatusHelper"
            com.kwad.sdk.core.e.c.d(r2, r1)
            if (r0 == 0) goto L22
            android.content.ServiceConnection r0 = com.kwad.sdk.utils.f.aql
            com.kwad.sdk.collector.b.a.a(r3, r0)
            return
        L22:
            com.kwad.sdk.utils.f$d r0 = new com.kwad.sdk.utils.f$d
            r1 = 0
            r0.<init>(r1)
            a(r3, r0)
            return
    }

    private static java.util.List<com.kwad.sdk.collector.model.b> bK(android.content.Context r1) {
            boolean r0 = com.kwad.sdk.utils.be.dl(r1)
            if (r0 != 0) goto Lc
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            return r1
        Lc:
            com.kwad.sdk.collector.AppStatusRules r0 = com.kwad.sdk.utils.f.aHN
            if (r0 != 0) goto L16
            com.kwad.sdk.collector.AppStatusRules r0 = bI(r1)
            com.kwad.sdk.utils.f.aHN = r0
        L16:
            java.util.List r1 = bL(r1)
            return r1
    }

    private static java.util.List<com.kwad.sdk.collector.model.b> bL(android.content.Context r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = com.kwad.sdk.utils.at.Jh()
            if (r1 != 0) goto L59
            r1 = 8192(0x2000, double:4.0474E-320)
            boolean r1 = com.kwad.sdk.core.config.d.R(r1)
            if (r1 == 0) goto L14
            goto L59
        L14:
            boolean r5 = com.kwad.sdk.utils.c.bF(r5)
            if (r5 == 0) goto L1b
            return r0
        L1b:
            com.kwad.sdk.collector.AppStatusRules r5 = HG()
            java.util.List r1 = com.kwad.sdk.collector.i.c(r5)
            java.util.Iterator r1 = r1.iterator()
        L27:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L42
            java.lang.Object r2 = r1.next()
            com.kwad.sdk.collector.AppStatusRules$Strategy r2 = (com.kwad.sdk.collector.AppStatusRules.Strategy) r2
            java.util.List r3 = a(r2)
            r0.addAll(r3)
            long r3 = java.lang.System.currentTimeMillis()
            r2.setNeedSaveLaunchTime(r3)
            goto L27
        L42:
            com.kwad.sdk.collector.AppStatusRules$Strategy r5 = com.kwad.sdk.collector.i.d(r5)
            java.util.List r1 = a(r5)
            r0.addAll(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r5.setNeedSaveLaunchTime(r1)
            java.util.List r5 = E(r0)
            return r5
        L59:
            return r0
    }

    static void bM(android.content.Context r0) {
            bJ(r0)
            return
    }

    static java.util.List bN(android.content.Context r0) {
            java.util.List r0 = bK(r0)
            return r0
    }

    public static void c(android.content.Context r2, long r3) {
            android.os.Handler r0 = com.kwad.sdk.utils.f.VH
            if (r0 != 0) goto Lf
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.sdk.utils.f.VH = r0
        Lf:
            android.os.Handler r0 = com.kwad.sdk.utils.f.VH
            com.kwad.sdk.utils.f$3 r1 = new com.kwad.sdk.utils.f$3
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    static void c(android.content.Context r0, com.kwad.sdk.collector.AppStatusRules r1) {
            b(r0, r1)
            return
    }

    static com.kwad.sdk.collector.AppStatusRules e(com.kwad.sdk.collector.AppStatusRules r0) {
            com.kwad.sdk.utils.f.aHN = r0
            return r0
    }
}
