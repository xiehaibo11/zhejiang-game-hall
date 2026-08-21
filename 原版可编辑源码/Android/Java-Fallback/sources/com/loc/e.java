package com.loc;

public final class e {
    static boolean g;
    java.lang.String a;
    com.loc.e.b b;
    com.amap.api.location.AMapLocation c;
    com.loc.e.a d;
    android.content.Context e;
    com.loc.er f;
    java.util.HashMap<android.os.Messenger, java.lang.Long> h;
    com.loc.fx i;
    long j;
    long k;
    java.lang.String l;
    com.amap.api.location.AMapLocationClientOption m;
    com.amap.api.location.AMapLocationClientOption n;
    private boolean o;
    private boolean p;
    private long q;
    private long r;
    private com.loc.ew s;
    private long t;
    private int u;
    private com.loc.j v;
    private java.util.List<android.os.Messenger> w;
    private long x;
    private boolean y;
    private java.lang.String z;

    public class a extends android.os.Handler {
        final com.loc.e a;

        public a(com.loc.e r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r9) {
                r8 = this;
                r0 = 1
                r1 = 0
                android.os.Bundle r2 = r9.getData()     // Catch: java.lang.Throwable -> L4d
                android.os.Messenger r3 = r9.replyTo     // Catch: java.lang.Throwable -> L48
                if (r2 == 0) goto L58
                boolean r4 = r2.isEmpty()     // Catch: java.lang.Throwable -> L46
                if (r4 != 0) goto L58
                java.lang.String r4 = "c"
                java.lang.String r4 = r2.getString(r4)     // Catch: java.lang.Throwable -> L46
                com.loc.e r5 = r8.a     // Catch: java.lang.Throwable -> L46
                boolean r4 = r5.a(r4)     // Catch: java.lang.Throwable -> L46
                if (r4 != 0) goto L58
                int r4 = r9.what     // Catch: java.lang.Throwable -> L46
                if (r4 != r0) goto L45
                r4 = 2102(0x836, float:2.946E-42)
                com.loc.fx.a(r1, r4)     // Catch: java.lang.Throwable -> L46
                java.lang.String r1 = "invalid handlder scode!!!#1002"
                com.loc.ew r1 = com.loc.e.b(r1)     // Catch: java.lang.Throwable -> L46
                com.loc.eq r4 = new com.loc.eq     // Catch: java.lang.Throwable -> L46
                r4.<init>()     // Catch: java.lang.Throwable -> L46
                java.lang.String r5 = "#1002"
                r4.f(r5)     // Catch: java.lang.Throwable -> L46
                java.lang.String r5 = "conitue"
                r4.e(r5)     // Catch: java.lang.Throwable -> L46
                com.loc.e r5 = r8.a     // Catch: java.lang.Throwable -> L46
                java.lang.String r6 = r1.k()     // Catch: java.lang.Throwable -> L46
                com.loc.e.a(r5, r3, r1, r6, r4)     // Catch: java.lang.Throwable -> L46
            L45:
                return
            L46:
                r1 = move-exception
                goto L51
            L48:
                r3 = move-exception
                r7 = r3
                r3 = r1
                r1 = r7
                goto L51
            L4d:
                r2 = move-exception
                r3 = r1
                r1 = r2
                r2 = r3
            L51:
                java.lang.String r4 = "ApsServiceCore"
                java.lang.String r5 = "ActionHandler handlerMessage"
                com.loc.fr.a(r1, r4, r5)     // Catch: java.lang.Throwable -> L11c
            L58:
                int r1 = r9.what     // Catch: java.lang.Throwable -> L11c
                if (r1 == 0) goto L10e
                if (r1 == r0) goto L103
                switch(r1) {
                    case 9: goto Lf8;
                    case 10: goto Led;
                    case 11: goto Le7;
                    case 12: goto Le1;
                    case 13: goto Lae;
                    case 14: goto L71;
                    case 15: goto L63;
                    default: goto L61;
                }     // Catch: java.lang.Throwable -> L11c
            L61:
                goto L118
            L63:
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.a(r0, r2)     // Catch: java.lang.Throwable -> L11c
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.lang.String r1 = "COARSE_LOC"
            L6c:
                r0.a(r3, r2, r1)     // Catch: java.lang.Throwable -> L11c
                goto L118
            L71:
                android.os.Messenger r0 = r9.replyTo     // Catch: java.lang.Throwable -> L11c
                if (r0 == 0) goto L92
                com.loc.e r1 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r1 = com.loc.e.b(r1)     // Catch: java.lang.Throwable -> L11c
                if (r1 == 0) goto L92
                com.loc.e r1 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r1 = com.loc.e.b(r1)     // Catch: java.lang.Throwable -> L11c
                boolean r1 = r1.contains(r0)     // Catch: java.lang.Throwable -> L11c
                if (r1 == 0) goto L92
                com.loc.e r1 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r1 = com.loc.e.b(r1)     // Catch: java.lang.Throwable -> L11c
                r1.remove(r0)     // Catch: java.lang.Throwable -> L11c
            L92:
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r0 = com.loc.e.b(r0)     // Catch: java.lang.Throwable -> L11c
                if (r0 == 0) goto L118
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r0 = com.loc.e.b(r0)     // Catch: java.lang.Throwable -> L11c
                int r0 = r0.size()     // Catch: java.lang.Throwable -> L11c
                if (r0 != 0) goto L118
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.er r0 = r0.f     // Catch: java.lang.Throwable -> L11c
                r0.h()     // Catch: java.lang.Throwable -> L11c
                goto L118
            Lae:
                android.os.Messenger r1 = r9.replyTo     // Catch: java.lang.Throwable -> L11c
                if (r1 == 0) goto L118
                com.loc.e r2 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r2 = com.loc.e.b(r2)     // Catch: java.lang.Throwable -> L11c
                if (r2 == 0) goto L118
                com.loc.e r2 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r2 = com.loc.e.b(r2)     // Catch: java.lang.Throwable -> L11c
                boolean r2 = r2.contains(r1)     // Catch: java.lang.Throwable -> L11c
                if (r2 != 0) goto L118
                com.loc.e r2 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r2 = com.loc.e.b(r2)     // Catch: java.lang.Throwable -> L11c
                r2.add(r1)     // Catch: java.lang.Throwable -> L11c
                com.loc.e r1 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.util.List r1 = com.loc.e.b(r1)     // Catch: java.lang.Throwable -> L11c
                int r1 = r1.size()     // Catch: java.lang.Throwable -> L11c
                if (r1 != r0) goto L118
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.c(r0)     // Catch: java.lang.Throwable -> L11c
                goto L118
            Le1:
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.a(r0, r3)     // Catch: java.lang.Throwable -> L11c
                goto L118
            Le7:
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                r0.c()     // Catch: java.lang.Throwable -> L11c
                goto L118
            Led:
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.a(r0, r2)     // Catch: java.lang.Throwable -> L11c
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                java.lang.String r1 = "FINE_LOC"
                goto L6c
            Lf8:
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.a(r0, r2)     // Catch: java.lang.Throwable -> L11c
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.a(r0)     // Catch: java.lang.Throwable -> L11c
                goto L118
            L103:
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.a(r0, r2)     // Catch: java.lang.Throwable -> L11c
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.b(r0, r3, r2)     // Catch: java.lang.Throwable -> L11c
                goto L118
            L10e:
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.a(r0, r2)     // Catch: java.lang.Throwable -> L11c
                com.loc.e r0 = r8.a     // Catch: java.lang.Throwable -> L11c
                com.loc.e.a(r0, r3, r2)     // Catch: java.lang.Throwable -> L11c
            L118:
                super.handleMessage(r9)     // Catch: java.lang.Throwable -> L11c
                return
            L11c:
                r9 = move-exception
                java.lang.String r0 = "actionHandler"
                java.lang.String r1 = "handleMessage"
                com.loc.fr.a(r9, r0, r1)
                return
        }
    }

    class b extends android.os.HandlerThread {
        final com.loc.e a;

        public b(com.loc.e r1, java.lang.String r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        protected final void onLooperPrepared() {
                r4 = this;
                java.lang.String r0 = "APSManager$ActionThread"
                com.loc.e r1 = r4.a     // Catch: java.lang.Throwable -> L11
                com.loc.j r2 = new com.loc.j     // Catch: java.lang.Throwable -> L11
                com.loc.e r3 = r4.a     // Catch: java.lang.Throwable -> L11
                android.content.Context r3 = r3.e     // Catch: java.lang.Throwable -> L11
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L11
                com.loc.e.a(r1, r2)     // Catch: java.lang.Throwable -> L11
                goto L17
            L11:
                r1 = move-exception
                java.lang.String r2 = "init 2"
                com.loc.fr.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L3a
            L17:
                com.loc.e r1 = r4.a     // Catch: java.lang.Throwable -> L26
                android.content.Context r1 = r1.e     // Catch: java.lang.Throwable -> L26
                com.loc.fq.b(r1)     // Catch: java.lang.Throwable -> L26
                com.loc.e r1 = r4.a     // Catch: java.lang.Throwable -> L26
                android.content.Context r1 = r1.e     // Catch: java.lang.Throwable -> L26
                com.loc.fq.a(r1)     // Catch: java.lang.Throwable -> L26
                goto L2c
            L26:
                r1 = move-exception
                java.lang.String r2 = "init 3"
                com.loc.fr.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L3a
            L2c:
                com.loc.e r1 = r4.a     // Catch: java.lang.Throwable -> L3a
                com.loc.er r2 = new com.loc.er     // Catch: java.lang.Throwable -> L3a
                r3 = 0
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L3a
                r1.f = r2     // Catch: java.lang.Throwable -> L3a
                super.onLooperPrepared()     // Catch: java.lang.Throwable -> L3a
                return
            L3a:
                r1 = move-exception
                java.lang.String r2 = "onLooperPrepared"
                com.loc.fr.a(r1, r0, r2)
                return
        }

        @Override
        public final void run() {
                r3 = this;
                super.run()     // Catch: java.lang.Throwable -> L4
                return
            L4:
                r0 = move-exception
                java.lang.String r1 = "APSManager$ActionThread"
                java.lang.String r2 = "run"
                com.loc.fr.a(r0, r1, r2)
                return
        }
    }

    static {
            return
    }

    public e(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.o = r0
            r4.p = r0
            r1 = 0
            r4.a = r1
            r4.b = r1
            r2 = 0
            r4.q = r2
            r4.r = r2
            r4.s = r1
            r4.c = r1
            r4.t = r2
            r4.u = r0
            r4.d = r1
            r4.e = r1
            r4.v = r1
            r4.f = r1
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r4.h = r0
            r4.i = r1
            r4.j = r2
            r4.k = r2
            r4.x = r2
            r4.l = r1
            r0 = 1
            r4.y = r0
            java.lang.String r0 = ""
            r4.z = r0
            r4.m = r1
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption
            r0.<init>()
            r4.n = r0
            r4.e = r5
            return
    }

    private static com.loc.ew a(int r2, java.lang.String r3) {
            com.loc.ew r0 = new com.loc.ew     // Catch: java.lang.Throwable -> Le
            java.lang.String r1 = ""
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le
            r0.setErrorCode(r2)     // Catch: java.lang.Throwable -> Le
            r0.setLocationDetail(r3)     // Catch: java.lang.Throwable -> Le
            return r0
        Le:
            r2 = move-exception
            java.lang.String r3 = "ApsServiceCore"
            java.lang.String r0 = "newInstanceAMapLoc"
            com.loc.fr.a(r2, r3, r0)
            r2 = 0
            return r2
    }

    static com.loc.j a(com.loc.e r0, com.loc.j r1) {
            r0.v = r1
            return r1
    }

    private void a(android.os.Bundle r3) {
            r2 = this;
            boolean r0 = r2.o     // Catch: java.lang.Throwable -> L50
            if (r0 == 0) goto Le
            com.loc.er r3 = r2.f     // Catch: java.lang.Throwable -> L50
            if (r3 == 0) goto Ld
            com.loc.er r3 = r2.f     // Catch: java.lang.Throwable -> L50
            r3.a()     // Catch: java.lang.Throwable -> L50
        Ld:
            return
        Le:
            android.content.Context r0 = r2.e     // Catch: java.lang.Throwable -> L50
            com.loc.fr.a(r0)     // Catch: java.lang.Throwable -> L50
            if (r3 == 0) goto L21
            java.lang.String r0 = "optBundle"
            android.os.Bundle r3 = r3.getBundle(r0)     // Catch: java.lang.Throwable -> L50
            com.amap.api.location.AMapLocationClientOption r3 = com.loc.fr.a(r3)     // Catch: java.lang.Throwable -> L50
            r2.n = r3     // Catch: java.lang.Throwable -> L50
        L21:
            com.loc.er r3 = r2.f     // Catch: java.lang.Throwable -> L50
            android.content.Context r0 = r2.e     // Catch: java.lang.Throwable -> L50
            r3.a(r0)     // Catch: java.lang.Throwable -> L50
            com.loc.er r3 = r2.f     // Catch: java.lang.Throwable -> L50
            r3.b()     // Catch: java.lang.Throwable -> L50
            com.amap.api.location.AMapLocationClientOption r3 = r2.n     // Catch: java.lang.Throwable -> L50
            r2.a(r3)     // Catch: java.lang.Throwable -> L50
            com.loc.er r3 = r2.f     // Catch: java.lang.Throwable -> L50
            r3.c()     // Catch: java.lang.Throwable -> L50
            r3 = 1
            r2.o = r3     // Catch: java.lang.Throwable -> L50
            r2.y = r3     // Catch: java.lang.Throwable -> L50
            java.lang.String r3 = ""
            r2.z = r3     // Catch: java.lang.Throwable -> L50
            java.util.List<android.os.Messenger> r3 = r2.w     // Catch: java.lang.Throwable -> L50
            if (r3 == 0) goto L4f
            java.util.List<android.os.Messenger> r3 = r2.w     // Catch: java.lang.Throwable -> L50
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L50
            if (r3 <= 0) goto L4f
            r2.e()     // Catch: java.lang.Throwable -> L50
        L4f:
            return
        L50:
            r3 = move-exception
            r0 = 0
            r2.y = r0
            r3.printStackTrace()
            java.lang.String r0 = r3.getMessage()
            r2.z = r0
            java.lang.String r0 = "ApsServiceCore"
            java.lang.String r1 = "init"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    private void a(android.os.Messenger r2) {
            r1 = this;
            java.util.HashMap<android.os.Messenger, java.lang.Long> r0 = r1.h
            r0.remove(r2)
            return
    }

    private static void a(android.os.Messenger r1, int r2, android.os.Bundle r3) {
            if (r1 == 0) goto L17
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> Lf
            r0.setData(r3)     // Catch: java.lang.Throwable -> Lf
            r0.what = r2     // Catch: java.lang.Throwable -> Lf
            r1.send(r0)     // Catch: java.lang.Throwable -> Lf
            goto L17
        Lf:
            r1 = move-exception
            java.lang.String r2 = "ApsServiceCore"
            java.lang.String r3 = "sendMessage"
            com.loc.fr.a(r1, r2, r3)
        L17:
            return
    }

    private void a(android.os.Messenger r2, android.os.Bundle r3) {
            r1 = this;
            if (r3 == 0) goto L1d
            boolean r3 = r3.isEmpty()     // Catch: java.lang.Throwable -> L15
            if (r3 == 0) goto L9
            goto L1d
        L9:
            boolean r3 = r1.p     // Catch: java.lang.Throwable -> L15
            if (r3 == 0) goto Le
            return
        Le:
            r3 = 1
            r1.p = r3     // Catch: java.lang.Throwable -> L15
            r1.b(r2)     // Catch: java.lang.Throwable -> L15
            return
        L15:
            r2 = move-exception
            java.lang.String r3 = "ApsServiceCore"
            java.lang.String r0 = "doInitAuth"
            com.loc.fr.a(r2, r3, r0)
        L1d:
            return
    }

    private void a(android.os.Messenger r3, com.amap.api.location.AMapLocation r4, java.lang.String r5, com.loc.eq r6) {
            r2 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.Class<com.amap.api.location.AMapLocation> r1 = com.amap.api.location.AMapLocation.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            r0.setClassLoader(r1)
            java.lang.String r1 = "loc"
            r0.putParcelable(r1, r4)
            java.lang.String r4 = "nb"
            r0.putString(r4, r5)
            java.lang.String r4 = "statics"
            r0.putParcelable(r4, r6)
            java.util.HashMap<android.os.Messenger, java.lang.Long> r4 = r2.h
            long r5 = com.loc.fz.b()
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r4.put(r3, r5)
            r4 = 1
            a(r3, r4, r0)
            return
    }

    private void a(android.os.Messenger r4, java.lang.String r5) {
            r3 = this;
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            java.lang.Class<com.amap.api.location.AMapLocation> r1 = com.amap.api.location.AMapLocation.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            r0.setClassLoader(r1)
            int r1 = com.loc.fq.i()
            int r1 = r1 * 3
            java.lang.String r2 = "I_MAX_GEO_DIS"
            r0.putInt(r2, r1)
            int r1 = com.loc.fq.i()
            java.lang.String r2 = "I_MIN_GEO_DIS"
            r0.putInt(r2, r1)
            com.amap.api.location.AMapLocation r1 = r3.c
            java.lang.String r2 = "loc"
            r0.putParcelable(r2, r1)
            java.lang.String r1 = "COARSE_LOC"
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L37
            r5 = 103(0x67, float:1.44E-43)
        L33:
            a(r4, r5, r0)
            return
        L37:
            r5 = 6
            goto L33
    }

    private void a(com.amap.api.location.AMapLocationClientOption r3) {
            r2 = this;
            com.loc.er r0 = r2.f     // Catch: java.lang.Throwable -> L67
            if (r0 == 0) goto L9
            com.loc.er r0 = r2.f     // Catch: java.lang.Throwable -> L67
            r0.a(r3)     // Catch: java.lang.Throwable -> L67
        L9:
            if (r3 == 0) goto L66
            boolean r0 = r3.isKillProcess()     // Catch: java.lang.Throwable -> L67
            com.loc.e.g = r0     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption r0 = r2.m     // Catch: java.lang.Throwable -> L67
            if (r0 == 0) goto L64
            boolean r0 = r3.isOffset()     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption r1 = r2.m     // Catch: java.lang.Throwable -> L67
            boolean r1 = r1.isOffset()     // Catch: java.lang.Throwable -> L67
            if (r0 != r1) goto L45
            boolean r0 = r3.isNeedAddress()     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption r1 = r2.m     // Catch: java.lang.Throwable -> L67
            boolean r1 = r1.isNeedAddress()     // Catch: java.lang.Throwable -> L67
            if (r0 != r1) goto L45
            boolean r0 = r3.isLocationCacheEnable()     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption r1 = r2.m     // Catch: java.lang.Throwable -> L67
            boolean r1 = r1.isLocationCacheEnable()     // Catch: java.lang.Throwable -> L67
            if (r0 != r1) goto L45
            com.amap.api.location.AMapLocationClientOption r0 = r2.m     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r0.getGeoLanguage()     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r1 = r3.getGeoLanguage()     // Catch: java.lang.Throwable -> L67
            if (r0 == r1) goto L49
        L45:
            r0 = 0
            r2.r = r0     // Catch: java.lang.Throwable -> L67
        L49:
            boolean r0 = r3.isOffset()     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption r1 = r2.m     // Catch: java.lang.Throwable -> L67
            boolean r1 = r1.isOffset()     // Catch: java.lang.Throwable -> L67
            if (r0 != r1) goto L61
            com.amap.api.location.AMapLocationClientOption r0 = r2.m     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r0.getGeoLanguage()     // Catch: java.lang.Throwable -> L67
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r1 = r3.getGeoLanguage()     // Catch: java.lang.Throwable -> L67
            if (r0 == r1) goto L64
        L61:
            r0 = 0
            r2.c = r0     // Catch: java.lang.Throwable -> L67
        L64:
            r2.m = r3     // Catch: java.lang.Throwable -> L67
        L66:
            return
        L67:
            r3 = move-exception
            java.lang.String r0 = "ApsServiceCore"
            java.lang.String r1 = "setExtra"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    static void a(com.loc.e r0) {
            r0.f()
            return
    }

    static void a(com.loc.e r0, android.os.Bundle r1) {
            r0.a(r1)
            return
    }

    static void a(com.loc.e r0, android.os.Messenger r1) {
            r0.a(r1)
            return
    }

    static void a(com.loc.e r0, android.os.Messenger r1, android.os.Bundle r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.loc.e r0, android.os.Messenger r1, com.amap.api.location.AMapLocation r2, java.lang.String r3, com.loc.eq r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    private static com.amap.api.location.AMapLocationClientOption b(android.os.Bundle r3) {
            java.lang.String r0 = "APSManager"
            r1 = 0
            java.lang.String r2 = "optBundle"
            android.os.Bundle r2 = r3.getBundle(r2)     // Catch: java.lang.Throwable -> L24
            com.amap.api.location.AMapLocationClientOption r1 = com.loc.fr.a(r2)     // Catch: java.lang.Throwable -> L24
            java.lang.String r2 = "d"
            java.lang.String r3 = r3.getString(r2)     // Catch: java.lang.Throwable -> L1d
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L1d
            if (r2 != 0) goto L2a
            com.loc.o.a(r3)     // Catch: java.lang.Throwable -> L1d
            goto L2a
        L1d:
            r3 = move-exception
            java.lang.String r2 = "doLocation setUmidToken"
            com.loc.fr.a(r3, r0, r2)     // Catch: java.lang.Throwable -> L24
            goto L2a
        L24:
            r3 = move-exception
            java.lang.String r2 = "parseBundle"
            com.loc.fr.a(r3, r0, r2)
        L2a:
            return r1
    }

    static com.loc.ew b(java.lang.String r1) {
            r0 = 10
            com.loc.ew r1 = a(r0, r1)
            return r1
    }

    static java.util.List b(com.loc.e r0) {
            java.util.List<android.os.Messenger> r0 = r0.w
            return r0
    }

    private void b(android.os.Messenger r4) {
            r3 = this;
            com.loc.er r0 = r3.f     // Catch: java.lang.Throwable -> L1c
            r0.f()     // Catch: java.lang.Throwable -> L1c
            boolean r0 = com.loc.fq.l()     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L1b
            android.os.Bundle r0 = new android.os.Bundle     // Catch: java.lang.Throwable -> L1c
            r0.<init>()     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = "installMockApp"
            r2 = 1
            r0.putBoolean(r1, r2)     // Catch: java.lang.Throwable -> L1c
            r1 = 9
            a(r4, r1, r0)     // Catch: java.lang.Throwable -> L1c
        L1b:
            return
        L1c:
            r4 = move-exception
            java.lang.String r0 = "ApsServiceCore"
            java.lang.String r1 = "initAuth"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    private void b(android.os.Messenger r12, android.os.Bundle r13) {
            r11 = this;
            java.lang.String r0 = "#0901"
            java.lang.String r1 = "#0801"
            java.lang.String r2 = "ApsServiceCore"
            if (r13 == 0) goto L17e
            boolean r3 = r13.isEmpty()     // Catch: java.lang.Throwable -> L178
            if (r3 == 0) goto L10
            goto L17e
        L10:
            com.loc.eq r3 = new com.loc.eq     // Catch: java.lang.Throwable -> L178
            r3.<init>()     // Catch: java.lang.Throwable -> L178
            java.lang.String r4 = "conitue"
            r3.e(r4)     // Catch: java.lang.Throwable -> L178
            com.amap.api.location.AMapLocationClientOption r13 = b(r13)     // Catch: java.lang.Throwable -> L178
            r11.a(r13)     // Catch: java.lang.Throwable -> L178
            java.util.HashMap<android.os.Messenger, java.lang.Long> r4 = r11.h     // Catch: java.lang.Throwable -> L178
            boolean r4 = r4.containsKey(r12)     // Catch: java.lang.Throwable -> L178
            if (r4 == 0) goto L47
            boolean r4 = r13.isOnceLocation()     // Catch: java.lang.Throwable -> L178
            if (r4 != 0) goto L47
            java.util.HashMap<android.os.Messenger, java.lang.Long> r4 = r11.h     // Catch: java.lang.Throwable -> L178
            java.lang.Object r4 = r4.get(r12)     // Catch: java.lang.Throwable -> L178
            java.lang.Long r4 = (java.lang.Long) r4     // Catch: java.lang.Throwable -> L178
            long r4 = r4.longValue()     // Catch: java.lang.Throwable -> L178
            long r6 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L178
            long r6 = r6 - r4
            r4 = 800(0x320, double:3.953E-321)
            int r8 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r8 >= 0) goto L47
            return
        L47:
            boolean r4 = r11.y     // Catch: java.lang.Throwable -> L178
            r5 = 0
            if (r4 != 0) goto L7b
            r13 = 9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L178
            java.lang.String r4 = "init error : "
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L178
            java.lang.String r4 = r11.z     // Catch: java.lang.Throwable -> L178
            r1.append(r4)     // Catch: java.lang.Throwable -> L178
            r1.append(r0)     // Catch: java.lang.Throwable -> L178
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L178
            com.loc.ew r13 = a(r13, r1)     // Catch: java.lang.Throwable -> L178
            r11.s = r13     // Catch: java.lang.Throwable -> L178
            r3.f(r0)     // Catch: java.lang.Throwable -> L178
            com.loc.ew r13 = r11.s     // Catch: java.lang.Throwable -> L178
            com.loc.ew r0 = r11.s     // Catch: java.lang.Throwable -> L178
            java.lang.String r0 = r0.k()     // Catch: java.lang.Throwable -> L178
            r11.a(r12, r13, r0, r3)     // Catch: java.lang.Throwable -> L178
            r12 = 2091(0x82b, float:2.93E-42)
            com.loc.fx.a(r5, r12)     // Catch: java.lang.Throwable -> L178
            return
        L7b:
            long r6 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L178
            com.loc.ew r0 = r11.s     // Catch: java.lang.Throwable -> L178
            boolean r0 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> L178
            r4 = 3
            if (r0 == 0) goto La4
            long r8 = r11.r     // Catch: java.lang.Throwable -> L178
            long r6 = r6 - r8
            r8 = 600(0x258, double:2.964E-321)
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 >= 0) goto La4
            com.loc.ew r13 = r11.s     // Catch: java.lang.Throwable -> L178
            com.loc.ew r0 = r11.s     // Catch: java.lang.Throwable -> L178
            java.lang.String r0 = r0.k()     // Catch: java.lang.Throwable -> L178
            r11.a(r12, r13, r0, r3)     // Catch: java.lang.Throwable -> L178
            com.loc.er r12 = r11.f     // Catch: java.lang.Throwable -> L178
            com.loc.ew r13 = r11.s     // Catch: java.lang.Throwable -> L178
            r12.a(r13, r4)     // Catch: java.lang.Throwable -> L178
            return
        La4:
            long r6 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L178
            r3.c(r6)     // Catch: java.lang.Throwable -> L178
            r0 = 8
            com.loc.er r6 = r11.f     // Catch: java.lang.Throwable -> Lfd
            com.loc.ew r6 = r6.a(r3)     // Catch: java.lang.Throwable -> Lfd
            r11.s = r6     // Catch: java.lang.Throwable -> Lfd
            int r6 = r6.getLocationType()     // Catch: java.lang.Throwable -> Lfd
            r7 = 6
            r8 = 2
            if (r6 == r7) goto Le8
            com.loc.ew r6 = r11.s     // Catch: java.lang.Throwable -> Lfd
            int r6 = r6.getLocationType()     // Catch: java.lang.Throwable -> Lfd
            r7 = 5
            if (r6 != r7) goto Lc7
            goto Le8
        Lc7:
            com.loc.ew r6 = r11.s     // Catch: java.lang.Throwable -> Lfd
            int r6 = r6.getLocationType()     // Catch: java.lang.Throwable -> Lfd
            if (r6 != r8) goto Ld7
            com.loc.er r6 = r11.f     // Catch: java.lang.Throwable -> Lfd
            com.loc.ew r7 = r11.s     // Catch: java.lang.Throwable -> Lfd
            r6.a(r7, r4)     // Catch: java.lang.Throwable -> Lfd
            goto Lef
        Ld7:
            com.loc.ew r4 = r11.s     // Catch: java.lang.Throwable -> Lfd
            int r4 = r4.getLocationType()     // Catch: java.lang.Throwable -> Lfd
            r6 = 4
            if (r4 != r6) goto Lef
            com.loc.er r4 = r11.f     // Catch: java.lang.Throwable -> Lfd
            com.loc.ew r7 = r11.s     // Catch: java.lang.Throwable -> Lfd
            r4.a(r7, r6)     // Catch: java.lang.Throwable -> Lfd
            goto Lef
        Le8:
            com.loc.er r4 = r11.f     // Catch: java.lang.Throwable -> Lfd
            com.loc.ew r6 = r11.s     // Catch: java.lang.Throwable -> Lfd
            r4.a(r6, r8)     // Catch: java.lang.Throwable -> Lfd
        Lef:
            com.loc.er r4 = r11.f     // Catch: java.lang.Throwable -> Lfd
            com.loc.ew r6 = r11.s     // Catch: java.lang.Throwable -> Lfd
            r7 = 0
            java.lang.String[] r7 = new java.lang.String[r7]     // Catch: java.lang.Throwable -> Lfd
            com.loc.ew r4 = r4.a(r6)     // Catch: java.lang.Throwable -> Lfd
            r11.s = r4     // Catch: java.lang.Throwable -> Lfd
            goto L126
        Lfd:
            r4 = move-exception
            r6 = 2081(0x821, float:2.916E-42)
            com.loc.fx.a(r5, r6)     // Catch: java.lang.Throwable -> L178
            r3.f(r1)     // Catch: java.lang.Throwable -> L178
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L178
            java.lang.String r7 = "loc error : "
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L178
            java.lang.String r7 = r4.getMessage()     // Catch: java.lang.Throwable -> L178
            r6.append(r7)     // Catch: java.lang.Throwable -> L178
            r6.append(r1)     // Catch: java.lang.Throwable -> L178
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L178
            com.loc.ew r6 = a(r0, r6)     // Catch: java.lang.Throwable -> L178
            r11.s = r6     // Catch: java.lang.Throwable -> L178
            java.lang.String r6 = "run part2"
            com.loc.fr.a(r4, r2, r6)     // Catch: java.lang.Throwable -> L178
        L126:
            com.loc.ew r4 = r11.s     // Catch: java.lang.Throwable -> L178
            boolean r4 = com.loc.fz.a(r4)     // Catch: java.lang.Throwable -> L178
            if (r4 == 0) goto L134
            long r6 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L178
            r11.r = r6     // Catch: java.lang.Throwable -> L178
        L134:
            com.loc.ew r4 = r11.s     // Catch: java.lang.Throwable -> L178
            if (r4 != 0) goto L143
            java.lang.String r4 = "loc is null#0801"
            com.loc.ew r0 = a(r0, r4)     // Catch: java.lang.Throwable -> L178
            r11.s = r0     // Catch: java.lang.Throwable -> L178
            r3.f(r1)     // Catch: java.lang.Throwable -> L178
        L143:
            com.loc.ew r0 = r11.s     // Catch: java.lang.Throwable -> L178
            if (r0 == 0) goto L157
            com.loc.ew r0 = r11.s     // Catch: java.lang.Throwable -> L178
            java.lang.String r5 = r0.k()     // Catch: java.lang.Throwable -> L178
            com.loc.ew r0 = r11.s     // Catch: java.lang.Throwable -> L178
            com.amap.api.location.AMapLocation r0 = r0.clone()     // Catch: java.lang.Throwable -> L178
            r10 = r5
            r5 = r0
            r0 = r10
            goto L158
        L157:
            r0 = r5
        L158:
            boolean r1 = r13.isLocationCacheEnable()     // Catch: java.lang.Throwable -> L16e
            if (r1 == 0) goto L174
            com.loc.j r1 = r11.v     // Catch: java.lang.Throwable -> L16e
            if (r1 == 0) goto L174
            com.loc.j r1 = r11.v     // Catch: java.lang.Throwable -> L16e
            long r6 = r13.getLastLocationLifeCycle()     // Catch: java.lang.Throwable -> L16e
            com.amap.api.location.AMapLocation r13 = r1.a(r5, r0, r6)     // Catch: java.lang.Throwable -> L16e
            r5 = r13
            goto L174
        L16e:
            r13 = move-exception
            java.lang.String r1 = "fixLastLocation"
            com.loc.fr.a(r13, r2, r1)     // Catch: java.lang.Throwable -> L178
        L174:
            r11.a(r12, r5, r0, r3)     // Catch: java.lang.Throwable -> L178
            return
        L178:
            r12 = move-exception
            java.lang.String r13 = "doLocation"
            com.loc.fr.a(r12, r2, r13)
        L17e:
            return
    }

    static void b(com.loc.e r0, android.os.Messenger r1, android.os.Bundle r2) {
            r0.b(r1, r2)
            return
    }

    static void c(com.loc.e r0) {
            r0.e()
            return
    }

    public static void d() {
            r0 = 0
            com.loc.e.g = r0
            return
    }

    private void e() {
            r3 = this;
            android.content.Context r0 = r3.e
            boolean r0 = com.loc.fz.m(r0)
            if (r0 == 0) goto Lf
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.loc.ft.a()
            return
        Lf:
            com.loc.er r0 = r3.f     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L23
            com.loc.er r0 = r3.f     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L23
            com.loc.er r0 = r3.f     // Catch: java.lang.Throwable -> L24
            com.loc.e$a r1 = r3.d     // Catch: java.lang.Throwable -> L24
            r0.a(r1)     // Catch: java.lang.Throwable -> L24
            com.loc.er r0 = r3.f     // Catch: java.lang.Throwable -> L24
            r0.g()     // Catch: java.lang.Throwable -> L24
        L23:
            return
        L24:
            r0 = move-exception
            java.lang.String r1 = "ApsServiceCore"
            java.lang.String r2 = "startColl"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    private void f() {
            r3 = this;
            android.content.Context r0 = r3.e     // Catch: java.lang.Throwable -> L6
            com.loc.fq.c(r0)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r0 = move-exception
            java.lang.String r1 = "ApsServiceCore"
            java.lang.String r2 = "doCallOtherSer"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void a() {
            r3 = this;
            com.loc.fx r0 = new com.loc.fx     // Catch: java.lang.Throwable -> L2e
            r0.<init>()     // Catch: java.lang.Throwable -> L2e
            r3.i = r0     // Catch: java.lang.Throwable -> L2e
            com.loc.e$b r0 = new com.loc.e$b     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = "amapLocCoreThread"
            r0.<init>(r3, r1)     // Catch: java.lang.Throwable -> L2e
            r3.b = r0     // Catch: java.lang.Throwable -> L2e
            r1 = 5
            r0.setPriority(r1)     // Catch: java.lang.Throwable -> L2e
            com.loc.e$b r0 = r3.b     // Catch: java.lang.Throwable -> L2e
            r0.start()     // Catch: java.lang.Throwable -> L2e
            com.loc.e$a r0 = new com.loc.e$a     // Catch: java.lang.Throwable -> L2e
            com.loc.e$b r1 = r3.b     // Catch: java.lang.Throwable -> L2e
            android.os.Looper r1 = r1.getLooper()     // Catch: java.lang.Throwable -> L2e
            r0.<init>(r3, r1)     // Catch: java.lang.Throwable -> L2e
            r3.d = r0     // Catch: java.lang.Throwable -> L2e
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2e
            r0.<init>()     // Catch: java.lang.Throwable -> L2e
            r3.w = r0     // Catch: java.lang.Throwable -> L2e
            return
        L2e:
            r0 = move-exception
            java.lang.String r1 = "ApsServiceCore"
            java.lang.String r2 = "onCreate"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public final void a(android.content.Intent r4) {
            r3 = this;
            java.lang.String r0 = "as"
            java.lang.String r4 = r4.getStringExtra(r0)
            java.lang.String r0 = "true"
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L19
            com.loc.e$a r4 = r3.d
            if (r4 == 0) goto L19
            r0 = 9
            r1 = 100
            r4.sendEmptyMessageDelayed(r0, r1)
        L19:
            return
    }

    final void a(android.os.Messenger r11, android.os.Bundle r12, java.lang.String r13) {
            r10 = this;
            if (r12 == 0) goto Ldf
            boolean r0 = r12.isEmpty()     // Catch: java.lang.Throwable -> Ld7
            if (r0 == 0) goto La
            goto Ldf
        La:
            java.lang.String r0 = "lat"
            double r0 = r12.getDouble(r0)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r2 = "lon"
            double r2 = r12.getDouble(r2)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r4 = "radius"
            float r4 = r12.getFloat(r4)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r5 = "time"
            long r5 = r12.getLong(r5)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r7 = "FINE_LOC"
            boolean r7 = r7.equals(r13)     // Catch: java.lang.Throwable -> Ld7
            r8 = 1
            if (r7 == 0) goto L46
            com.amap.api.location.AMapLocation r7 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r9 = "gps"
            r7.<init>(r9)     // Catch: java.lang.Throwable -> Ld7
            r7.setLatitude(r0)     // Catch: java.lang.Throwable -> Ld7
            r7.setLocationType(r8)     // Catch: java.lang.Throwable -> Ld7
            r7.setLongitude(r2)     // Catch: java.lang.Throwable -> Ld7
            r7.setAccuracy(r4)     // Catch: java.lang.Throwable -> Ld7
            r7.setTime(r5)     // Catch: java.lang.Throwable -> Ld7
            com.loc.er r4 = r10.f     // Catch: java.lang.Throwable -> Ld7
            r4.a(r7)     // Catch: java.lang.Throwable -> Ld7
        L46:
            boolean r4 = com.loc.fq.h()     // Catch: java.lang.Throwable -> Ld7
            if (r4 != 0) goto L4d
            return
        L4d:
            com.amap.api.location.AMapLocationClientOption r4 = b(r12)     // Catch: java.lang.Throwable -> Ld7
            if (r4 == 0) goto Ld6
            boolean r5 = r4.isNeedAddress()     // Catch: java.lang.Throwable -> Ld7
            if (r5 != 0) goto L5b
            goto Ld6
        L5b:
            r10.a(r4)     // Catch: java.lang.Throwable -> Ld7
            com.amap.api.location.AMapLocation r4 = r10.c     // Catch: java.lang.Throwable -> Ld7
            r5 = -1082130432(0xffffffffbf800000, float:-1.0)
            if (r4 == 0) goto L91
            r4 = 4
            double[] r4 = new double[r4]     // Catch: java.lang.Throwable -> Ld7
            r6 = 0
            r4[r6] = r0     // Catch: java.lang.Throwable -> Ld7
            r4[r8] = r2     // Catch: java.lang.Throwable -> Ld7
            r6 = 2
            com.amap.api.location.AMapLocation r7 = r10.c     // Catch: java.lang.Throwable -> Ld7
            double r7 = r7.getLatitude()     // Catch: java.lang.Throwable -> Ld7
            r4[r6] = r7     // Catch: java.lang.Throwable -> Ld7
            com.amap.api.location.AMapLocation r6 = r10.c     // Catch: java.lang.Throwable -> Ld7
            double r6 = r6.getLongitude()     // Catch: java.lang.Throwable -> Ld7
            r8 = 3
            r4[r8] = r6     // Catch: java.lang.Throwable -> Ld7
            float r4 = com.loc.fz.a(r4)     // Catch: java.lang.Throwable -> Ld7
            int r6 = com.loc.fq.i()     // Catch: java.lang.Throwable -> Ld7
            int r6 = r6 * 3
            float r6 = (float) r6     // Catch: java.lang.Throwable -> Ld7
            int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r6 >= 0) goto L93
            r10.a(r11, r13)     // Catch: java.lang.Throwable -> Ld7
            goto L93
        L91:
            r4 = -1082130432(0xffffffffbf800000, float:-1.0)
        L93:
            int r5 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r5 == 0) goto Lb2
            int r5 = com.loc.fq.i()     // Catch: java.lang.Throwable -> Ld7
            float r5 = (float) r5     // Catch: java.lang.Throwable -> Ld7
            int r4 = (r4 > r5 ? 1 : (r4 == r5 ? 0 : -1))
            if (r4 <= 0) goto Ld6
            long r4 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Ld7
            long r6 = r10.x     // Catch: java.lang.Throwable -> Ld7
            long r4 = r4 - r6
            int r6 = com.loc.fq.j()     // Catch: java.lang.Throwable -> Ld7
            int r6 = r6 * 1000
            long r6 = (long) r6     // Catch: java.lang.Throwable -> Ld7
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 <= 0) goto Ld6
        Lb2:
            r10.a(r12)     // Catch: java.lang.Throwable -> Ld7
            com.loc.er r12 = r10.f     // Catch: java.lang.Throwable -> Ld7
            com.loc.ew r12 = r12.a(r0, r2)     // Catch: java.lang.Throwable -> Ld7
            r10.c = r12     // Catch: java.lang.Throwable -> Ld7
            long r0 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Ld7
            r10.x = r0     // Catch: java.lang.Throwable -> Ld7
            com.amap.api.location.AMapLocation r12 = r10.c     // Catch: java.lang.Throwable -> Ld7
            if (r12 == 0) goto Ld6
            com.amap.api.location.AMapLocation r12 = r10.c     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r12 = r12.getAdCode()     // Catch: java.lang.Throwable -> Ld7
            boolean r12 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> Ld7
            if (r12 != 0) goto Ld6
            r10.a(r11, r13)     // Catch: java.lang.Throwable -> Ld7
        Ld6:
            return
        Ld7:
            r11 = move-exception
            java.lang.String r12 = "ApsServiceCore"
            java.lang.String r13 = "doLocationGeo"
            com.loc.fr.a(r11, r12, r13)
        Ldf:
            return
    }

    public final boolean a(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.l
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L10
            android.content.Context r0 = r1.e
            java.lang.String r0 = com.loc.fr.b(r0)
            r1.l = r0
        L10:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L21
            java.lang.String r0 = r1.l
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L1f
            goto L21
        L1f:
            r2 = 1
            return r2
        L21:
            r2 = 0
            return r2
    }

    public final android.os.Handler b() {
            r1 = this;
            com.loc.e$a r0 = r1.d
            return r0
    }

    public final void b(android.content.Intent r3) {
            r2 = this;
            java.lang.String r0 = "a"
            java.lang.String r0 = r3.getStringExtra(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L11
            android.content.Context r1 = r2.e
            com.loc.m.a(r1, r0)
        L11:
            java.lang.String r0 = "b"
            java.lang.String r0 = r3.getStringExtra(r0)
            r2.a = r0
            com.loc.l.a(r0)
            java.lang.String r0 = "d"
            java.lang.String r3 = r3.getStringExtra(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L2b
            com.loc.o.a(r3)
        L2b:
            return
    }

    public final void c() {
            r12 = this;
            java.lang.String r0 = "apm"
            java.util.HashMap<android.os.Messenger, java.lang.Long> r1 = r12.h     // Catch: java.lang.Throwable -> Lab
            r2 = 0
            if (r1 == 0) goto Le
            java.util.HashMap<android.os.Messenger, java.lang.Long> r1 = r12.h     // Catch: java.lang.Throwable -> Lab
            r1.clear()     // Catch: java.lang.Throwable -> Lab
            r12.h = r2     // Catch: java.lang.Throwable -> Lab
        Le:
            java.util.List<android.os.Messenger> r1 = r12.w     // Catch: java.lang.Throwable -> L18
            if (r1 == 0) goto L1e
            java.util.List<android.os.Messenger> r1 = r12.w     // Catch: java.lang.Throwable -> L18
            r1.clear()     // Catch: java.lang.Throwable -> L18
            goto L1e
        L18:
            r1 = move-exception
            java.lang.String r3 = "des1"
            com.loc.fr.a(r1, r0, r3)     // Catch: java.lang.Throwable -> Lab
        L1e:
            com.loc.j r1 = r12.v     // Catch: java.lang.Throwable -> Lab
            if (r1 == 0) goto L29
            com.loc.j r1 = r12.v     // Catch: java.lang.Throwable -> Lab
            r1.c()     // Catch: java.lang.Throwable -> Lab
            r12.v = r2     // Catch: java.lang.Throwable -> Lab
        L29:
            r1 = 0
            r12.o = r1     // Catch: java.lang.Throwable -> Lab
            r12.p = r1     // Catch: java.lang.Throwable -> Lab
            com.loc.er r3 = r12.f     // Catch: java.lang.Throwable -> Lab
            r3.e()     // Catch: java.lang.Throwable -> Lab
            com.loc.e$a r3 = r12.d     // Catch: java.lang.Throwable -> Lab
            if (r3 == 0) goto L3c
            com.loc.e$a r3 = r12.d     // Catch: java.lang.Throwable -> Lab
            r3.removeCallbacksAndMessages(r2)     // Catch: java.lang.Throwable -> Lab
        L3c:
            r12.d = r2     // Catch: java.lang.Throwable -> Lab
            com.loc.e$b r3 = r12.b     // Catch: java.lang.Throwable -> Lab
            if (r3 == 0) goto L5d
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lab
            r4 = 18
            if (r3 < r4) goto L5a
            com.loc.e$b r3 = r12.b     // Catch: java.lang.Throwable -> L54
            java.lang.Class<android.os.HandlerThread> r4 = android.os.HandlerThread.class
            java.lang.String r5 = "quitSafely"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L54
            com.loc.fv.a(r3, r4, r5, r1)     // Catch: java.lang.Throwable -> L54
            goto L5d
        L54:
            com.loc.e$b r1 = r12.b     // Catch: java.lang.Throwable -> Lab
        L56:
            r1.quit()     // Catch: java.lang.Throwable -> Lab
            goto L5d
        L5a:
            com.loc.e$b r1 = r12.b     // Catch: java.lang.Throwable -> Lab
            goto L56
        L5d:
            r12.b = r2     // Catch: java.lang.Throwable -> Lab
            com.loc.fx r1 = r12.i     // Catch: java.lang.Throwable -> Lab
            if (r1 == 0) goto L97
            long r1 = r12.j     // Catch: java.lang.Throwable -> Lab
            r3 = 0
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L97
            long r1 = r12.k     // Catch: java.lang.Throwable -> Lab
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L97
            long r1 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Lab
            long r3 = r12.j     // Catch: java.lang.Throwable -> Lab
            long r10 = r1 - r3
            com.loc.fx r1 = r12.i     // Catch: java.lang.Throwable -> Lab
            android.content.Context r2 = r12.e     // Catch: java.lang.Throwable -> Lab
            int r6 = r1.c(r2)     // Catch: java.lang.Throwable -> Lab
            com.loc.fx r1 = r12.i     // Catch: java.lang.Throwable -> Lab
            android.content.Context r2 = r12.e     // Catch: java.lang.Throwable -> Lab
            int r7 = r1.d(r2)     // Catch: java.lang.Throwable -> Lab
            android.content.Context r5 = r12.e     // Catch: java.lang.Throwable -> Lab
            long r8 = r12.k     // Catch: java.lang.Throwable -> Lab
            com.loc.fx.a(r5, r6, r7, r8, r10)     // Catch: java.lang.Throwable -> Lab
            com.loc.fx r1 = r12.i     // Catch: java.lang.Throwable -> Lab
            android.content.Context r2 = r12.e     // Catch: java.lang.Throwable -> Lab
            r1.e(r2)     // Catch: java.lang.Throwable -> Lab
        L97:
            android.content.Context r1 = r12.e     // Catch: java.lang.Throwable -> Lab
            com.loc.fx.a(r1)     // Catch: java.lang.Throwable -> Lab
            com.loc.av.b()     // Catch: java.lang.Throwable -> Lab
            boolean r1 = com.loc.e.g     // Catch: java.lang.Throwable -> Lab
            if (r1 == 0) goto Laa
            int r1 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> Lab
            android.os.Process.killProcess(r1)     // Catch: java.lang.Throwable -> Lab
        Laa:
            return
        Lab:
            r1 = move-exception
            java.lang.String r2 = "tdest"
            com.loc.fr.a(r1, r0, r2)
            return
    }
}
