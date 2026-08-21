package com.loc;

public final class h {
    static com.amap.api.location.AMapLocation j;
    static long k;
    static java.lang.Object l;
    static long q;
    static boolean t;
    static boolean u;
    public static volatile com.amap.api.location.AMapLocation y;
    private long A;
    private int B;
    private int C;
    private android.location.GpsStatus D;
    private android.location.GpsStatus.Listener E;
    private android.location.GnssStatus.Callback F;
    private java.lang.String G;
    private boolean H;
    private int I;
    private boolean J;
    android.os.Handler a;
    android.location.LocationManager b;
    com.amap.api.location.AMapLocationClientOption c;
    long d;
    boolean e;
    com.loc.ev f;
    int g;
    int h;
    com.amap.api.location.AMapLocation i;
    long m;
    float n;
    java.lang.Object o;
    java.lang.Object p;
    com.amap.api.location.AMapLocationClientOption.GeoLanguage r;
    boolean s;
    long v;
    int w;
    android.location.LocationListener x;
    private android.content.Context z;



    static class a implements android.location.LocationListener {
        private com.loc.h a;

        a(com.loc.h r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        final void a() {
                r1 = this;
                r0 = 0
                r1.a = r0
                return
        }

        @Override
        public final void onLocationChanged(android.location.Location r2) {
                r1 = this;
                r0 = 2
                java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L16
                java.lang.Thread r0 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L16
                r0.getId()     // Catch: java.lang.Throwable -> L16
                com.loc.ft.a()     // Catch: java.lang.Throwable -> L16
                com.loc.h r0 = r1.a     // Catch: java.lang.Throwable -> L16
                if (r0 == 0) goto L16
                com.loc.h r0 = r1.a     // Catch: java.lang.Throwable -> L16
                com.loc.h.a(r0, r2)     // Catch: java.lang.Throwable -> L16
            L16:
                return
        }

        @Override
        public final void onProviderDisabled(java.lang.String r2) {
                r1 = this;
                com.loc.h r0 = r1.a     // Catch: java.lang.Throwable -> L9
                if (r0 == 0) goto L9
                com.loc.h r0 = r1.a     // Catch: java.lang.Throwable -> L9
                com.loc.h.a(r0, r2)     // Catch: java.lang.Throwable -> L9
            L9:
                return
        }

        @Override
        public final void onProviderEnabled(java.lang.String r1) {
                r0 = this;
                return
        }

        @Override
        public final void onStatusChanged(java.lang.String r1, int r2, android.os.Bundle r3) {
                r0 = this;
                com.loc.h r1 = r0.a     // Catch: java.lang.Throwable -> L9
                if (r1 == 0) goto L9
                com.loc.h r1 = r0.a     // Catch: java.lang.Throwable -> L9
                com.loc.h.a(r1, r2)     // Catch: java.lang.Throwable -> L9
            L9:
                return
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.loc.h.l = r0
            r0 = 0
            com.loc.h.q = r0
            r0 = 0
            com.loc.h.t = r0
            com.loc.h.u = r0
            r0 = 0
            com.loc.h.y = r0
            return
    }

    public h(android.content.Context r6, android.os.Handler r7) {
            r5 = this;
            r5.<init>()
            r0 = 0
            r5.A = r0
            r5.d = r0
            r2 = 0
            r5.e = r2
            r5.B = r2
            r3 = 0
            r5.f = r3
            r4 = 240(0xf0, float:3.36E-43)
            r5.g = r4
            r4 = 80
            r5.h = r4
            r5.i = r3
            r5.m = r0
            r4 = 0
            r5.n = r4
            java.lang.Object r4 = new java.lang.Object
            r4.<init>()
            r5.o = r4
            java.lang.Object r4 = new java.lang.Object
            r4.<init>()
            r5.p = r4
            r5.C = r2
            r5.D = r3
            r5.E = r3
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r4 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
            r5.r = r4
            r4 = 1
            r5.s = r4
            r5.v = r0
            r5.w = r2
            r5.x = r3
            r5.G = r3
            r5.H = r2
            r5.I = r2
            r5.J = r2
            r5.z = r6
            r5.a = r7
            java.lang.String r7 = "location"
            java.lang.Object r6 = r6.getSystemService(r7)     // Catch: java.lang.Throwable -> L58
            android.location.LocationManager r6 = (android.location.LocationManager) r6     // Catch: java.lang.Throwable -> L58
            r5.b = r6     // Catch: java.lang.Throwable -> L58
            goto L60
        L58:
            r6 = move-exception
            java.lang.String r7 = "GpsLocation"
            java.lang.String r0 = "<init>"
            com.loc.fr.a(r6, r7, r0)
        L60:
            com.loc.ev r6 = new com.loc.ev
            r6.<init>()
            r5.f = r6
            return
    }

    static android.location.GpsStatus a(com.loc.h r0, android.location.GpsStatus r1) {
            r0.D = r1
            return r1
    }

    private void a(int r3) {
            r2 = this;
            if (r3 != 0) goto La
            r0 = 0
            r2.d = r0     // Catch: java.lang.Throwable -> La
            r3 = 0
            r2.C = r3     // Catch: java.lang.Throwable -> La
        La:
            return
    }

    private void a(int r4, int r5, java.lang.String r6, long r7) {
            r3 = this;
            android.os.Handler r0 = r3.a     // Catch: java.lang.Throwable -> L31
            if (r0 == 0) goto L31
            com.amap.api.location.AMapLocationClientOption r0 = r3.c     // Catch: java.lang.Throwable -> L31
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = r0.getLocationMode()     // Catch: java.lang.Throwable -> L31
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors     // Catch: java.lang.Throwable -> L31
            if (r0 != r1) goto L31
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L31
            com.amap.api.location.AMapLocation r1 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = ""
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = "gps"
            r1.setProvider(r2)     // Catch: java.lang.Throwable -> L31
            r1.setErrorCode(r5)     // Catch: java.lang.Throwable -> L31
            r1.setLocationDetail(r6)     // Catch: java.lang.Throwable -> L31
            r5 = 1
            r1.setLocationType(r5)     // Catch: java.lang.Throwable -> L31
            r0.obj = r1     // Catch: java.lang.Throwable -> L31
            r0.what = r4     // Catch: java.lang.Throwable -> L31
            android.os.Handler r4 = r3.a     // Catch: java.lang.Throwable -> L31
            r4.sendMessageDelayed(r0, r7)     // Catch: java.lang.Throwable -> L31
        L31:
            return
    }

    private void a(android.location.GnssStatus r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L28
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L20
            r2 = 24
            if (r1 < r2) goto L28
            int r1 = r5.getSatelliteCount()     // Catch: java.lang.Throwable -> L20
            r2 = 0
        Le:
            if (r0 >= r1) goto L1e
            boolean r3 = r5.usedInFix(r0)     // Catch: java.lang.Throwable -> L1b
            if (r3 == 0) goto L18
            int r2 = r2 + 1
        L18:
            int r0 = r0 + 1
            goto Le
        L1b:
            r5 = move-exception
            r0 = r2
            goto L21
        L1e:
            r0 = r2
            goto L28
        L20:
            r5 = move-exception
        L21:
            java.lang.String r1 = "GpsLocation_Gnss"
            java.lang.String r2 = "GPS_EVENT_SATELLITE_STATUS"
            com.loc.fr.a(r5, r1, r2)
        L28:
            r4.C = r0
            return
    }

    private void a(android.location.Location r10) {
            r9 = this;
            android.os.Handler r0 = r9.a
            if (r0 == 0) goto L9
            r1 = 8
            r0.removeMessages(r1)
        L9:
            if (r10 != 0) goto Lc
            return
        Lc:
            com.amap.api.location.AMapLocation r0 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> Lf9
            r0.<init>(r10)     // Catch: java.lang.Throwable -> Lf9
            boolean r1 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Lf9
            if (r1 != 0) goto L18
            return
        L18:
            java.lang.String r1 = "gps"
            r0.setProvider(r1)     // Catch: java.lang.Throwable -> Lf9
            r1 = 1
            r0.setLocationType(r1)     // Catch: java.lang.Throwable -> Lf9
            boolean r2 = r9.e     // Catch: java.lang.Throwable -> Lf9
            if (r2 != 0) goto L45
            boolean r2 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Lf9
            if (r2 == 0) goto L45
            android.content.Context r2 = r9.z     // Catch: java.lang.Throwable -> Lf9
            long r3 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Lf9
            long r5 = r9.A     // Catch: java.lang.Throwable -> Lf9
            long r3 = r3 - r5
            double r5 = r0.getLatitude()     // Catch: java.lang.Throwable -> Lf9
            double r7 = r0.getLongitude()     // Catch: java.lang.Throwable -> Lf9
            boolean r5 = com.loc.fr.a(r5, r7)     // Catch: java.lang.Throwable -> Lf9
            com.loc.fx.a(r2, r3, r5)     // Catch: java.lang.Throwable -> Lf9
            r9.e = r1     // Catch: java.lang.Throwable -> Lf9
        L45:
            int r2 = r9.C     // Catch: java.lang.Throwable -> Lf9
            boolean r2 = com.loc.fz.a(r0, r2)     // Catch: java.lang.Throwable -> Lf9
            r3 = 0
            r4 = 0
            if (r2 == 0) goto L94
            r0.setMock(r1)     // Catch: java.lang.Throwable -> Lf9
            r2 = 4
            r0.setTrustedLevel(r2)     // Catch: java.lang.Throwable -> Lf9
            com.amap.api.location.AMapLocationClientOption r2 = r9.c     // Catch: java.lang.Throwable -> Lf9
            boolean r2 = r2.isMockEnable()     // Catch: java.lang.Throwable -> Lf9
            if (r2 != 0) goto L96
            int r10 = r9.w     // Catch: java.lang.Throwable -> Lf9
            r2 = 3
            if (r10 <= r2) goto L8e
            r10 = 2152(0x868, float:3.016E-42)
            com.loc.fx.a(r3, r10)     // Catch: java.lang.Throwable -> Lf9
            r10 = 15
            r0.setErrorCode(r10)     // Catch: java.lang.Throwable -> Lf9
            java.lang.String r10 = "GpsLocation has been mocked!#1501"
            r0.setLocationDetail(r10)     // Catch: java.lang.Throwable -> Lf9
            r1 = 0
            r0.setLatitude(r1)     // Catch: java.lang.Throwable -> Lf9
            r0.setLongitude(r1)     // Catch: java.lang.Throwable -> Lf9
            r0.setAltitude(r1)     // Catch: java.lang.Throwable -> Lf9
            r10 = 0
            r0.setSpeed(r10)     // Catch: java.lang.Throwable -> Lf9
            r0.setAccuracy(r10)     // Catch: java.lang.Throwable -> Lf9
            r0.setBearing(r10)     // Catch: java.lang.Throwable -> Lf9
            r0.setExtras(r3)     // Catch: java.lang.Throwable -> Lf9
            r9.c(r0)     // Catch: java.lang.Throwable -> Lf9
            return
        L8e:
            int r10 = r9.w     // Catch: java.lang.Throwable -> Lf9
            int r10 = r10 + r1
            r9.w = r10     // Catch: java.lang.Throwable -> Lf9
            return
        L94:
            r9.w = r4     // Catch: java.lang.Throwable -> Lf9
        L96:
            int r1 = r9.C     // Catch: java.lang.Throwable -> Lf9
            r0.setSatellites(r1)     // Catch: java.lang.Throwable -> Lf9
            r9.e(r0)     // Catch: java.lang.Throwable -> Lf9
            r9.f(r0)     // Catch: java.lang.Throwable -> Lf9
            h(r0)     // Catch: java.lang.Throwable -> Lf9
            com.amap.api.location.AMapLocation r0 = r9.g(r0)     // Catch: java.lang.Throwable -> Lf9
            r9.a(r0)     // Catch: java.lang.Throwable -> Lf9
            r9.b(r0)     // Catch: java.lang.Throwable -> Lf9
            java.lang.Object r1 = r9.o     // Catch: java.lang.Throwable -> Lf9
            monitor-enter(r1)     // Catch: java.lang.Throwable -> Lf9
            com.amap.api.location.AMapLocation r2 = com.loc.h.y     // Catch: java.lang.Throwable -> Lf6
            r9.a(r0, r2)     // Catch: java.lang.Throwable -> Lf6
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lf6
            boolean r1 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Lea
            if (r1 == 0) goto Lf2
            com.amap.api.location.AMapLocation r1 = r9.i     // Catch: java.lang.Throwable -> Lea
            if (r1 == 0) goto Ld6
            long r1 = r10.getTime()     // Catch: java.lang.Throwable -> Lea
            com.amap.api.location.AMapLocation r10 = r9.i     // Catch: java.lang.Throwable -> Lea
            long r5 = r10.getTime()     // Catch: java.lang.Throwable -> Lea
            long r1 = r1 - r5
            r9.m = r1     // Catch: java.lang.Throwable -> Lea
            com.amap.api.location.AMapLocation r10 = r9.i     // Catch: java.lang.Throwable -> Lea
            float r10 = com.loc.fz.a(r10, r0)     // Catch: java.lang.Throwable -> Lea
            r9.n = r10     // Catch: java.lang.Throwable -> Lea
        Ld6:
            java.lang.Object r10 = r9.p     // Catch: java.lang.Throwable -> Lea
            monitor-enter(r10)     // Catch: java.lang.Throwable -> Lea
            com.amap.api.location.AMapLocation r1 = r0.clone()     // Catch: java.lang.Throwable -> Le7
            r9.i = r1     // Catch: java.lang.Throwable -> Le7
            monitor-exit(r10)     // Catch: java.lang.Throwable -> Le7
            r9.G = r3     // Catch: java.lang.Throwable -> Lea
            r9.H = r4     // Catch: java.lang.Throwable -> Lea
            r9.I = r4     // Catch: java.lang.Throwable -> Lea
            goto Lf2
        Le7:
            r1 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> Le7
            throw r1     // Catch: java.lang.Throwable -> Lea
        Lea:
            r10 = move-exception
            java.lang.String r1 = "GpsLocation"
            java.lang.String r2 = "onLocationChangedLast"
            com.loc.fr.a(r10, r1, r2)     // Catch: java.lang.Throwable -> Lf9
        Lf2:
            r9.c(r0)     // Catch: java.lang.Throwable -> Lf9
            return
        Lf6:
            r10 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lf6
            throw r10     // Catch: java.lang.Throwable -> Lf9
        Lf9:
            r10 = move-exception
            java.lang.String r0 = "GpsLocation"
            java.lang.String r1 = "onLocationChanged"
            com.loc.fr.a(r10, r0, r1)
            return
    }

    private void a(com.amap.api.location.AMapLocation r4) {
            r3 = this;
            boolean r0 = com.loc.fz.a(r4)
            if (r0 != 0) goto L7
            return
        L7:
            long r0 = com.loc.fz.b()
            r3.d = r0
            java.lang.Object r0 = com.loc.h.l
            monitor-enter(r0)
            long r1 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L24
            com.loc.h.k = r1     // Catch: java.lang.Throwable -> L24
            com.amap.api.location.AMapLocation r4 = r4.clone()     // Catch: java.lang.Throwable -> L24
            com.loc.h.j = r4     // Catch: java.lang.Throwable -> L24
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            int r4 = r3.B
            int r4 = r4 + 1
            r3.B = r4
            return
        L24:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
            throw r4
    }

    private void a(com.amap.api.location.AMapLocation r3, com.amap.api.location.AMapLocation r4) {
            r2 = this;
            if (r4 == 0) goto L18
            com.amap.api.location.AMapLocationClientOption r0 = r2.c
            boolean r0 = r0.isNeedAddress()
            if (r0 == 0) goto L18
            float r0 = com.loc.fz.a(r3, r4)
            int r1 = r2.g
            float r1 = (float) r1
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto L18
            com.loc.fr.a(r3, r4)
        L18:
            return
    }

    static void a(com.loc.h r0) {
            r0.k()
            return
    }

    static void a(com.loc.h r0, int r1) {
            r0.a(r1)
            return
    }

    static void a(com.loc.h r0, android.location.GnssStatus r1) {
            r0.a(r1)
            return
    }

    static void a(com.loc.h r0, android.location.Location r1) {
            r0.a(r1)
            return
    }

    static void a(com.loc.h r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    private void a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "gps"
            boolean r3 = r0.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> Lf
            if (r3 == 0) goto Lf
            r0 = 0
            r2.d = r0     // Catch: java.lang.Throwable -> Lf
            r3 = 0
            r2.C = r3     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }

    private static boolean a(android.location.LocationManager r2) {
            r0 = 1
            boolean r1 = com.loc.h.t     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L8
            boolean r2 = com.loc.h.u     // Catch: java.lang.Throwable -> L25
            return r2
        L8:
            java.util.List r2 = r2.getAllProviders()     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L1d
            int r1 = r2.size()     // Catch: java.lang.Throwable -> L25
            if (r1 <= 0) goto L1d
            java.lang.String r1 = "gps"
            boolean r2 = r2.contains(r1)     // Catch: java.lang.Throwable -> L25
            com.loc.h.u = r2     // Catch: java.lang.Throwable -> L25
            goto L20
        L1d:
            r2 = 0
            com.loc.h.u = r2     // Catch: java.lang.Throwable -> L25
        L20:
            com.loc.h.t = r0     // Catch: java.lang.Throwable -> L25
            boolean r2 = com.loc.h.u     // Catch: java.lang.Throwable -> L25
            return r2
        L25:
            r2 = move-exception
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2.getMessage()
            com.loc.ft.a()
            boolean r2 = com.loc.h.u
            return r2
    }

    static android.location.GpsStatus b(com.loc.h r0) {
            android.location.GpsStatus r0 = r0.D
            return r0
    }

    private void b(com.amap.api.location.AMapLocation r8) {
            r7 = this;
            boolean r0 = com.loc.fz.a(r8)
            if (r0 != 0) goto L7
            return
        L7:
            android.os.Handler r0 = r7.a
            if (r0 == 0) goto L7e
            long r0 = com.loc.fz.b()
            com.amap.api.location.AMapLocationClientOption r2 = r7.c
            long r2 = r2.getInterval()
            r4 = 8000(0x1f40, double:3.9525E-320)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L29
            long r2 = r7.v
            long r0 = r0 - r2
            com.amap.api.location.AMapLocationClientOption r2 = r7.c
            long r2 = r2.getInterval()
            long r2 = r2 - r4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L7e
        L29:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
            double r1 = r8.getLatitude()
            java.lang.String r3 = "lat"
            r0.putDouble(r3, r1)
            double r1 = r8.getLongitude()
            java.lang.String r3 = "lon"
            r0.putDouble(r3, r1)
            float r1 = r8.getAccuracy()
            java.lang.String r2 = "radius"
            r0.putFloat(r2, r1)
            long r1 = r8.getTime()
            java.lang.String r3 = "time"
            r0.putLong(r3, r1)
            android.os.Message r1 = android.os.Message.obtain()
            r1.setData(r0)
            r0 = 5
            r1.what = r0
            java.lang.Object r0 = r7.o
            monitor-enter(r0)
            com.amap.api.location.AMapLocation r2 = com.loc.h.y     // Catch: java.lang.Throwable -> L7b
            if (r2 != 0) goto L69
            android.os.Handler r8 = r7.a     // Catch: java.lang.Throwable -> L7b
        L65:
            r8.sendMessage(r1)     // Catch: java.lang.Throwable -> L7b
            goto L79
        L69:
            com.amap.api.location.AMapLocation r2 = com.loc.h.y     // Catch: java.lang.Throwable -> L7b
            float r8 = com.loc.fz.a(r8, r2)     // Catch: java.lang.Throwable -> L7b
            int r2 = r7.h     // Catch: java.lang.Throwable -> L7b
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L7b
            int r8 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r8 <= 0) goto L79
            android.os.Handler r8 = r7.a     // Catch: java.lang.Throwable -> L7b
            goto L65
        L79:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7b
            return
        L7b:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7b
            throw r8
        L7e:
            return
    }

    private boolean b(java.lang.String r5) {
            r4 = this;
            r0 = 0
            java.util.ArrayList r1 = com.loc.fz.b(r5)     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = r4.G     // Catch: java.lang.Throwable -> L20
            java.util.ArrayList r2 = com.loc.fz.b(r2)     // Catch: java.lang.Throwable -> L20
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L20
            r3 = 8
            if (r1 < r3) goto L20
            int r1 = r2.size()     // Catch: java.lang.Throwable -> L20
            if (r1 < r3) goto L20
            java.lang.String r1 = r4.G     // Catch: java.lang.Throwable -> L20
            boolean r5 = com.loc.fz.a(r1, r5)     // Catch: java.lang.Throwable -> L20
            r0 = r5
        L20:
            return r0
    }

    private void c(com.amap.api.location.AMapLocation r7) {
            r6 = this;
            int r0 = r7.getErrorCode()
            r1 = 15
            if (r0 != r1) goto L17
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
            com.amap.api.location.AMapLocationClientOption r1 = r6.c
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = r1.getLocationMode()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L17
            return
        L17:
            com.amap.api.location.AMapLocationClientOption r0 = r6.c
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = r0.getLocationMode()
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L34
            com.amap.api.location.AMapLocationClientOption r0 = r6.c
            float r0 = r0.getDeviceModeDistanceFilter()
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L34
            r6.d(r7)
            return
        L34:
            long r0 = com.loc.fz.b()
            long r2 = r6.v
            long r0 = r0 - r2
            com.amap.api.location.AMapLocationClientOption r2 = r6.c
            long r2 = r2.getInterval()
            r4 = 200(0xc8, double:9.9E-322)
            long r2 = r2 - r4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L51
            long r0 = com.loc.fz.b()
            r6.v = r0
            r6.d(r7)
        L51:
            return
    }

    static void c(com.loc.h r0) {
            r0.m()
            return
    }

    private void d(com.amap.api.location.AMapLocation r2) {
            r1 = this;
            android.os.Handler r0 = r1.a
            if (r0 == 0) goto L12
            android.os.Message r0 = android.os.Message.obtain()
            r0.obj = r2
            r2 = 2
            r0.what = r2
            android.os.Handler r2 = r1.a
            r2.sendMessage(r0)
        L12:
            return
    }

    private void e(com.amap.api.location.AMapLocation r9) {
            r8 = this;
            java.lang.String r0 = "WGS84"
            r1 = 0
            double r2 = r9.getLatitude()     // Catch: java.lang.Throwable -> L50
            double r4 = r9.getLongitude()     // Catch: java.lang.Throwable -> L50
            boolean r2 = com.loc.fr.a(r2, r4)     // Catch: java.lang.Throwable -> L50
            if (r2 == 0) goto L49
            com.amap.api.location.AMapLocationClientOption r2 = r8.c     // Catch: java.lang.Throwable -> L50
            boolean r2 = r2.isOffset()     // Catch: java.lang.Throwable -> L50
            if (r2 == 0) goto L49
            android.content.Context r2 = r8.z     // Catch: java.lang.Throwable -> L50
            com.amap.api.location.DPoint r3 = new com.amap.api.location.DPoint     // Catch: java.lang.Throwable -> L50
            double r4 = r9.getLatitude()     // Catch: java.lang.Throwable -> L50
            double r6 = r9.getLongitude()     // Catch: java.lang.Throwable -> L50
            r3.<init>(r4, r6)     // Catch: java.lang.Throwable -> L50
            com.amap.api.location.DPoint r2 = com.loc.fu.a(r2, r3)     // Catch: java.lang.Throwable -> L50
            double r3 = r2.getLatitude()     // Catch: java.lang.Throwable -> L50
            r9.setLatitude(r3)     // Catch: java.lang.Throwable -> L50
            double r2 = r2.getLongitude()     // Catch: java.lang.Throwable -> L50
            r9.setLongitude(r2)     // Catch: java.lang.Throwable -> L50
            com.amap.api.location.AMapLocationClientOption r2 = r8.c     // Catch: java.lang.Throwable -> L50
            boolean r2 = r2.isOffset()     // Catch: java.lang.Throwable -> L50
            r9.setOffset(r2)     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = "GCJ02"
            r9.setCoordType(r2)     // Catch: java.lang.Throwable -> L50
            return
        L49:
            r9.setOffset(r1)     // Catch: java.lang.Throwable -> L50
            r9.setCoordType(r0)     // Catch: java.lang.Throwable -> L50
            return
        L50:
            r9.setOffset(r1)
            r9.setCoordType(r0)
            return
    }

    private void f(com.amap.api.location.AMapLocation r3) {
            r2 = this;
            int r0 = r2.C     // Catch: java.lang.Throwable -> L17
            r1 = 4
            if (r0 < r1) goto La
            r0 = 1
            r3.setGpsAccuracyStatus(r0)     // Catch: java.lang.Throwable -> L17
            return
        La:
            int r0 = r2.C     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto L13
            r0 = -1
            r3.setGpsAccuracyStatus(r0)     // Catch: java.lang.Throwable -> L17
            return
        L13:
            r0 = 0
            r3.setGpsAccuracyStatus(r0)     // Catch: java.lang.Throwable -> L17
        L17:
            return
    }

    private com.amap.api.location.AMapLocation g(com.amap.api.location.AMapLocation r4) {
            r3 = this;
            boolean r0 = com.loc.fz.a(r4)
            if (r0 != 0) goto L7
            return r4
        L7:
            int r0 = r3.B
            r1 = 3
            if (r0 >= r1) goto Ld
            return r4
        Ld:
            float r0 = r4.getAccuracy()
            r1 = 2139095039(0x7f7fffff, float:3.4028235E38)
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L21
            float r0 = r4.getAccuracy()
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L24
        L21:
            r4.setAccuracy(r2)
        L24:
            float r0 = r4.getSpeed()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L34
            float r0 = r4.getSpeed()
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L37
        L34:
            r4.setSpeed(r2)
        L37:
            com.loc.ev r0 = r3.f
            com.amap.api.location.AMapLocation r4 = r0.a(r4)
            return r4
    }

    static void g() {
            j()
            return
    }

    static void h() {
            l()
            return
    }

    private static void h(com.amap.api.location.AMapLocation r7) {
            boolean r0 = com.loc.fz.a(r7)
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = com.loc.fq.s()
            if (r0 == 0) goto L27
            long r0 = r7.getTime()
            long r2 = java.lang.System.currentTimeMillis()
            int r4 = com.loc.fq.t()
            long r4 = com.loc.fs.a(r0, r2, r4)
            int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r6 == 0) goto L27
            r7.setTime(r4)
            com.loc.fx.a(r0, r2)
        L27:
            return
    }

    private void i() {
            r10 = this;
            android.location.LocationManager r0 = r10.b
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r1 = 1
            r10.n()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r10.s = r1     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            android.os.Looper r2 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            if (r2 != 0) goto L18
            android.content.Context r2 = r10.z     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            android.os.Looper r2 = r2.getMainLooper()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
        L18:
            r9 = r2
            long r2 = com.loc.fz.b()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r10.A = r2     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            android.location.LocationManager r2 = r10.b     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            boolean r2 = a(r2)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            if (r2 == 0) goto Lf7
            long r2 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L75
            long r4 = com.loc.h.q     // Catch: java.lang.Throwable -> L75
            long r2 = r2 - r4
            r4 = 259200000(0xf731400, double:1.280618154E-315)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 < 0) goto L7e
            android.content.Context r2 = r10.z     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = "WYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19MT0NBVElPTl9FWFRSQV9DT01NQU5EUw=="
            boolean r2 = com.loc.fz.c(r2, r3)     // Catch: java.lang.Throwable -> L75
            if (r2 == 0) goto L66
            android.location.LocationManager r2 = r10.b     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = "gps"
            java.lang.String r4 = "force_xtra_injection"
            r2.sendExtraCommand(r3, r4, r0)     // Catch: java.lang.Throwable -> L75
            long r2 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L75
            com.loc.h.q = r2     // Catch: java.lang.Throwable -> L75
            android.content.Context r2 = r10.z     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = "pref"
            android.content.SharedPreferences$Editor r2 = com.loc.fy.a(r2, r3)     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = "lagt"
            long r4 = com.loc.h.q     // Catch: java.lang.Throwable -> L75
            com.loc.fy.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L75
            com.loc.fy.a(r2)     // Catch: java.lang.Throwable -> L75
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L75
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L75
            goto L7e
        L66:
            java.lang.Exception r2 = new java.lang.Exception     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = "n_alec"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L75
            java.lang.String r3 = "OPENSDK_GL"
            java.lang.String r4 = "rlu_n_alec"
            com.loc.fr.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L75
            goto L7e
        L75:
            r2 = move-exception
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r2.getMessage()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
        L7e:
            android.location.LocationListener r2 = r10.x     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            if (r2 != 0) goto L89
            com.loc.h$a r2 = new com.loc.h$a     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r2.<init>(r10)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r10.x = r2     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
        L89:
            com.amap.api.location.AMapLocationClientOption r2 = r10.c     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = r2.getLocationMode()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r3 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            if (r2 == 0) goto Lb8
            com.amap.api.location.AMapLocationClientOption r2 = r10.c     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            float r2 = r2.getDeviceModeDistanceFilter()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r3 = 0
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 <= 0) goto Lb8
            android.location.LocationManager r3 = r10.b     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            java.lang.String r4 = "gps"
            com.amap.api.location.AMapLocationClientOption r2 = r10.c     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            long r5 = r2.getInterval()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            com.amap.api.location.AMapLocationClientOption r2 = r10.c     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            float r7 = r2.getDeviceModeDistanceFilter()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            android.location.LocationListener r8 = r10.x     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
        Lb4:
            r3.requestLocationUpdates(r4, r5, r7, r8, r9)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            goto Lc2
        Lb8:
            android.location.LocationManager r3 = r10.b     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            java.lang.String r4 = "gps"
            r5 = 900(0x384, double:4.447E-321)
            r7 = 0
            android.location.LocationListener r8 = r10.x     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            goto Lb4
        Lc2:
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r3 = 24
            if (r2 < r3) goto Ld5
            com.loc.h$1 r2 = new com.loc.h$1     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r2.<init>(r10)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r10.F = r2     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            android.location.LocationManager r3 = r10.b     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r3.registerGnssStatusCallback(r2)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            goto Le6
        Ld5:
            com.loc.h$2 r2 = new com.loc.h$2     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r2.<init>(r10)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r10.E = r2     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            android.location.LocationManager r3 = r10.b     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r3.addGpsStatusListener(r2)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
        Le6:
            r4 = 8
            r5 = 14
            java.lang.String r6 = "no enough satellites#1401"
            com.amap.api.location.AMapLocationClientOption r2 = r10.c     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            long r7 = r2.getHttpTimeOut()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r3 = r10
            r3.a(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            return
        Lf7:
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            r4 = 8
            r5 = 14
            java.lang.String r6 = "no gps provider#1402"
            r7 = 0
            r3 = r10
            r3.a(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L109 java.lang.SecurityException -> L11a
            return
        L109:
            r0 = move-exception
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r0.getMessage()
            com.loc.ft.a()
            java.lang.String r1 = "GpsLocation"
            java.lang.String r2 = "requestLocationUpdates part2"
            com.loc.fr.a(r0, r1, r2)
            return
        L11a:
            r2 = move-exception
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.loc.ft.a()
            r1 = 0
            r10.s = r1
            r1 = 2121(0x849, float:2.972E-42)
            com.loc.fx.a(r0, r1)
            r4 = 2
            r5 = 12
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.getMessage()
            r0.append(r1)
            java.lang.String r1 = "#1201"
            r0.append(r1)
            java.lang.String r6 = r0.toString()
            r7 = 0
            r3 = r10
            r3.a(r4, r5, r6, r7)
            return
    }

    private static void j() {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.loc.ft.a()
            return
    }

    private void k() {
            r1 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.loc.ft.a()
            r0 = 0
            r1.C = r0
            return
    }

    private static void l() {
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.loc.ft.a()
            return
    }

    private void m() {
            r4 = this;
            r0 = 0
            android.location.GpsStatus r1 = r4.D     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L36
            android.location.GpsStatus r1 = r4.D     // Catch: java.lang.Throwable -> L2e
            java.lang.Iterable r1 = r1.getSatellites()     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L36
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2e
            android.location.GpsStatus r2 = r4.D     // Catch: java.lang.Throwable -> L2e
            int r2 = r2.getMaxSatellites()     // Catch: java.lang.Throwable -> L2e
        L17:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L2e
            if (r3 == 0) goto L36
            if (r0 >= r2) goto L36
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L2e
            android.location.GpsSatellite r3 = (android.location.GpsSatellite) r3     // Catch: java.lang.Throwable -> L2e
            boolean r3 = r3.usedInFix()     // Catch: java.lang.Throwable -> L2e
            if (r3 == 0) goto L17
            int r0 = r0 + 1
            goto L17
        L2e:
            r1 = move-exception
            java.lang.String r2 = "GpsLocation"
            java.lang.String r3 = "GPS_EVENT_SATELLITE_STATUS"
            com.loc.fr.a(r1, r2, r3)
        L36:
            r4.C = r0
            return
    }

    private void n() {
            r5 = this;
            long r0 = com.loc.fz.b()
            long r2 = com.loc.h.k
            long r0 = r0 - r2
            r2 = 5000(0x1388, double:2.4703E-320)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L31
            com.amap.api.location.AMapLocation r0 = com.loc.h.j
            boolean r0 = com.loc.fz.a(r0)
            if (r0 == 0) goto L31
            com.amap.api.location.AMapLocationClientOption r0 = r5.c
            boolean r0 = r0.isMockEnable()
            if (r0 != 0) goto L26
            com.amap.api.location.AMapLocation r0 = com.loc.h.j
            boolean r0 = r0.isMock()
            if (r0 == 0) goto L26
            return
        L26:
            long r0 = com.loc.fz.b()
            r5.d = r0
            com.amap.api.location.AMapLocation r0 = com.loc.h.j
            r5.c(r0)
        L31:
            return
    }

    private static boolean o() {
            java.lang.String r0 = "KY29tLmFtYXAuYXBpLm5hdmkuQU1hcE5hdmk="
            java.lang.String r0 = com.loc.x.c(r0)     // Catch: java.lang.Throwable -> L18
            java.lang.String r1 = "UaXNOYXZpU3RhcnRlZA=="
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> L18
            r2 = 0
            java.lang.Object r0 = com.loc.fv.a(r0, r1, r2, r2)     // Catch: java.lang.Throwable -> L18
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Throwable -> L18
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Throwable -> L18
            goto L19
        L18:
            r0 = 0
        L19:
            return r0
    }

    private com.amap.api.location.AMapLocation p() {
            r15 = this;
            r0 = 0
            com.amap.api.location.AMapLocation r1 = r15.i     // Catch: java.lang.Throwable -> Lf0
            boolean r1 = com.loc.fz.a(r1)     // Catch: java.lang.Throwable -> Lf0
            if (r1 != 0) goto La
            return r0
        La:
            boolean r1 = com.loc.fq.k()     // Catch: java.lang.Throwable -> Lf0
            if (r1 != 0) goto L11
            return r0
        L11:
            boolean r1 = o()     // Catch: java.lang.Throwable -> Lf0
            if (r1 == 0) goto Lf0
            java.lang.String r1 = "KY29tLmFtYXAuYXBpLm5hdmkuQU1hcE5hdmk="
            java.lang.String r1 = com.loc.x.c(r1)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r2 = "UZ2V0TmF2aUxvY2F0aW9u"
            java.lang.String r2 = com.loc.x.c(r2)     // Catch: java.lang.Throwable -> Lf0
            java.lang.Object r1 = com.loc.fv.a(r1, r2, r0, r0)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> Lf0
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lf0
            r2.<init>(r1)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r1 = "time"
            long r3 = r2.optLong(r1)     // Catch: java.lang.Throwable -> Lf0
            boolean r1 = r15.J     // Catch: java.lang.Throwable -> Lf0
            if (r1 != 0) goto L42
            r1 = 1
            r15.J = r1     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r1 = "useNaviLoc"
            java.lang.String r5 = "use NaviLoc"
            com.loc.fx.a(r1, r5)     // Catch: java.lang.Throwable -> Lf0
        L42:
            long r5 = com.loc.fz.a()     // Catch: java.lang.Throwable -> Lf0
            long r5 = r5 - r3
            r7 = 5500(0x157c, double:2.7174E-320)
            int r1 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r1 > 0) goto Lf0
            java.lang.String r1 = "lat"
            r5 = 0
            double r7 = r2.optDouble(r1, r5)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r1 = "lng"
            double r9 = r2.optDouble(r1, r5)     // Catch: java.lang.Throwable -> Lf0
            r1 = 0
            java.lang.String r11 = "accuracy"
            java.lang.String r12 = "0"
            java.lang.String r11 = r2.optString(r11, r12)     // Catch: java.lang.NumberFormatException -> L69 java.lang.Throwable -> Lf0
            float r11 = java.lang.Float.parseFloat(r11)     // Catch: java.lang.NumberFormatException -> L69 java.lang.Throwable -> Lf0
            goto L6a
        L69:
            r11 = 0
        L6a:
            java.lang.String r12 = "altitude"
            double r5 = r2.optDouble(r12, r5)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r12 = "bearing"
            java.lang.String r13 = "0"
            java.lang.String r12 = r2.optString(r12, r13)     // Catch: java.lang.NumberFormatException -> L7d java.lang.Throwable -> Lf0
            float r12 = java.lang.Float.parseFloat(r12)     // Catch: java.lang.NumberFormatException -> L7d java.lang.Throwable -> Lf0
            goto L7e
        L7d:
            r12 = 0
        L7e:
            java.lang.String r13 = "speed"
            java.lang.String r14 = "0"
            java.lang.String r2 = r2.optString(r13, r14)     // Catch: java.lang.NumberFormatException -> L91 java.lang.Throwable -> Lf0
            float r1 = java.lang.Float.parseFloat(r2)     // Catch: java.lang.NumberFormatException -> L91 java.lang.Throwable -> Lf0
            r2 = 1092616192(0x41200000, float:10.0)
            float r1 = r1 * r2
            r2 = 1108344832(0x42100000, float:36.0)
            float r1 = r1 / r2
        L91:
            com.amap.api.location.AMapLocation r2 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r13 = "lbs"
            r2.<init>(r13)     // Catch: java.lang.Throwable -> Lf0
            r13 = 9
            r2.setLocationType(r13)     // Catch: java.lang.Throwable -> Lf0
            r2.setLatitude(r7)     // Catch: java.lang.Throwable -> Lf0
            r2.setLongitude(r9)     // Catch: java.lang.Throwable -> Lf0
            r2.setAccuracy(r11)     // Catch: java.lang.Throwable -> Lf0
            r2.setAltitude(r5)     // Catch: java.lang.Throwable -> Lf0
            r2.setBearing(r12)     // Catch: java.lang.Throwable -> Lf0
            r2.setSpeed(r1)     // Catch: java.lang.Throwable -> Lf0
            r2.setTime(r3)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r5 = "GCJ02"
            r2.setCoordType(r5)     // Catch: java.lang.Throwable -> Lf0
            com.amap.api.location.AMapLocation r5 = r15.i     // Catch: java.lang.Throwable -> Lf0
            float r5 = com.loc.fz.a(r2, r5)     // Catch: java.lang.Throwable -> Lf0
            r6 = 1133903872(0x43960000, float:300.0)
            int r5 = (r5 > r6 ? 1 : (r5 == r6 ? 0 : -1))
            if (r5 > 0) goto Lf0
            java.lang.Object r5 = r15.p     // Catch: java.lang.Throwable -> Lf0
            monitor-enter(r5)     // Catch: java.lang.Throwable -> Lf0
            com.amap.api.location.AMapLocation r6 = r15.i     // Catch: java.lang.Throwable -> Led
            r6.setLongitude(r9)     // Catch: java.lang.Throwable -> Led
            com.amap.api.location.AMapLocation r6 = r15.i     // Catch: java.lang.Throwable -> Led
            r6.setLatitude(r7)     // Catch: java.lang.Throwable -> Led
            com.amap.api.location.AMapLocation r6 = r15.i     // Catch: java.lang.Throwable -> Led
            r6.setAccuracy(r11)     // Catch: java.lang.Throwable -> Led
            com.amap.api.location.AMapLocation r6 = r15.i     // Catch: java.lang.Throwable -> Led
            r6.setBearing(r12)     // Catch: java.lang.Throwable -> Led
            com.amap.api.location.AMapLocation r6 = r15.i     // Catch: java.lang.Throwable -> Led
            r6.setSpeed(r1)     // Catch: java.lang.Throwable -> Led
            com.amap.api.location.AMapLocation r1 = r15.i     // Catch: java.lang.Throwable -> Led
            r1.setTime(r3)     // Catch: java.lang.Throwable -> Led
            com.amap.api.location.AMapLocation r1 = r15.i     // Catch: java.lang.Throwable -> Led
            java.lang.String r3 = "GCJ02"
            r1.setCoordType(r3)     // Catch: java.lang.Throwable -> Led
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Led
            return r2
        Led:
            r1 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> Led
            throw r1     // Catch: java.lang.Throwable -> Lf0
        Lf0:
            return r0
    }

    public final com.amap.api.location.AMapLocation a(com.amap.api.location.AMapLocation r17, java.lang.String r18) {
            r16 = this;
            r1 = r16
            r0 = r18
            com.amap.api.location.AMapLocation r2 = r1.i
            if (r2 != 0) goto L9
            return r17
        L9:
            com.amap.api.location.AMapLocationClientOption r2 = r1.c
            boolean r2 = r2.isMockEnable()
            if (r2 != 0) goto L1a
            com.amap.api.location.AMapLocation r2 = r1.i
            boolean r2 = r2.isMock()
            if (r2 == 0) goto L1a
            return r17
        L1a:
            com.amap.api.location.AMapLocation r2 = r1.i
            boolean r2 = com.loc.fz.a(r2)
            if (r2 != 0) goto L23
            return r17
        L23:
            com.amap.api.location.AMapLocation r2 = r16.p()
            r3 = 2
            if (r2 == 0) goto L34
            boolean r4 = com.loc.fz.a(r2)
            if (r4 == 0) goto L34
            r2.setTrustedLevel(r3)
            return r2
        L34:
            com.amap.api.location.AMapLocation r2 = r1.i
            float r2 = r2.getSpeed()
            r4 = 0
            r6 = 0
            int r7 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r7 != 0) goto L56
            long r7 = r1.m
            int r9 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r9 <= 0) goto L56
            r9 = 8
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 >= 0) goto L56
            float r9 = r1.n
            int r10 = (r9 > r6 ? 1 : (r9 == r6 ? 0 : -1))
            if (r10 <= 0) goto L56
            float r2 = (float) r7
            float r2 = r9 / r2
        L56:
            r7 = 0
            r8 = 30000(0x7530, double:1.4822E-319)
            if (r17 == 0) goto L98
            boolean r10 = com.loc.fz.a(r17)
            if (r10 == 0) goto L98
            float r10 = r17.getAccuracy()
            r11 = 1128792064(0x43480000, float:200.0)
            r12 = 1084227584(0x40a00000, float:5.0)
            int r10 = (r10 > r11 ? 1 : (r10 == r11 ? 0 : -1))
            if (r10 >= 0) goto L85
            int r10 = r1.I
            r11 = 1
            int r10 = r10 + r11
            r1.I = r10
            java.lang.String r13 = r1.G
            if (r13 != 0) goto L7b
            if (r10 < r3) goto L7b
            r1.H = r11
        L7b:
            int r2 = (r2 > r12 ? 1 : (r2 == r12 ? 0 : -1))
            if (r2 <= 0) goto L82
            r10 = 10000(0x2710, double:4.9407E-320)
            goto L99
        L82:
            r10 = 15000(0x3a98, double:7.411E-320)
            goto L99
        L85:
            java.lang.String r10 = r1.G
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            if (r10 != 0) goto L91
            r1.H = r7
            r1.I = r7
        L91:
            int r2 = (r2 > r12 ? 1 : (r2 == r12 ? 0 : -1))
            if (r2 <= 0) goto L98
            r10 = 20000(0x4e20, double:9.8813E-320)
            goto L99
        L98:
            r10 = r8
        L99:
            long r12 = com.loc.fz.b()
            long r14 = r1.d
            long r12 = r12 - r14
            int r2 = (r12 > r8 ? 1 : (r12 == r8 ? 0 : -1))
            if (r2 <= 0) goto La5
            return r17
        La5:
            int r2 = (r12 > r10 ? 1 : (r12 == r10 ? 0 : -1))
            if (r2 < 0) goto Ld1
            boolean r2 = r1.H
            if (r2 == 0) goto Lbe
            boolean r0 = r1.b(r0)
            if (r0 == 0) goto Lbe
            com.amap.api.location.AMapLocation r0 = r1.i
            com.amap.api.location.AMapLocation r0 = r0.clone()
            r2 = 3
            r0.setTrustedLevel(r2)
            return r0
        Lbe:
            r0 = 0
            r1.G = r0
            r1.I = r7
            java.lang.Object r2 = r1.p
            monitor-enter(r2)
            r1.i = r0     // Catch: java.lang.Throwable -> Lce
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lce
            r1.m = r4
            r1.n = r6
            return r17
        Lce:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> Lce
            throw r0
        Ld1:
            java.lang.String r2 = r1.G
            if (r2 != 0) goto Ldb
            int r2 = r1.I
            if (r2 < r3) goto Ldb
            r1.G = r0
        Ldb:
            com.amap.api.location.AMapLocation r0 = r1.i
            com.amap.api.location.AMapLocation r0 = r0.clone()
            r0.setTrustedLevel(r3)
            return r0
    }

    public final void a() {
            r5 = this;
            android.location.LocationManager r0 = r5.b
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            android.location.LocationListener r2 = r5.x     // Catch: java.lang.Throwable -> L18
            if (r2 == 0) goto L18
            android.location.LocationListener r2 = r5.x     // Catch: java.lang.Throwable -> L18
            r0.removeUpdates(r2)     // Catch: java.lang.Throwable -> L18
            android.location.LocationListener r0 = r5.x     // Catch: java.lang.Throwable -> L18
            com.loc.h$a r0 = (com.loc.h.a) r0     // Catch: java.lang.Throwable -> L18
            r0.a()     // Catch: java.lang.Throwable -> L18
            r5.x = r1     // Catch: java.lang.Throwable -> L18
        L18:
            android.location.GpsStatus$Listener r0 = r5.E     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L23
            android.location.LocationManager r0 = r5.b     // Catch: java.lang.Throwable -> L23
            android.location.GpsStatus$Listener r2 = r5.E     // Catch: java.lang.Throwable -> L23
            r0.removeGpsStatusListener(r2)     // Catch: java.lang.Throwable -> L23
        L23:
            android.location.GnssStatus$Callback r0 = r5.F     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L2e
            android.location.LocationManager r0 = r5.b     // Catch: java.lang.Throwable -> L2e
            android.location.GnssStatus$Callback r2 = r5.F     // Catch: java.lang.Throwable -> L2e
            r0.unregisterGnssStatusCallback(r2)     // Catch: java.lang.Throwable -> L2e
        L2e:
            android.os.Handler r0 = r5.a     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L39
            android.os.Handler r0 = r5.a     // Catch: java.lang.Throwable -> L39
            r2 = 8
            r0.removeMessages(r2)     // Catch: java.lang.Throwable -> L39
        L39:
            r0 = 0
            r5.C = r0
            r2 = 0
            r5.A = r2
            r5.v = r2
            r5.d = r2
            r5.B = r0
            r5.w = r0
            com.loc.ev r4 = r5.f
            r4.a()
            r5.i = r1
            r5.m = r2
            r2 = 0
            r5.n = r2
            r5.G = r1
            r5.J = r0
            return
    }

    public final void a(android.os.Bundle r3) {
            r2 = this;
            if (r3 == 0) goto L3f
            java.lang.Class<com.amap.api.location.AMapLocation> r0 = com.amap.api.location.AMapLocation.class
            java.lang.ClassLoader r0 = r0.getClassLoader()     // Catch: java.lang.Throwable -> L37
            r3.setClassLoader(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = "I_MAX_GEO_DIS"
            int r0 = r3.getInt(r0)     // Catch: java.lang.Throwable -> L37
            r2.g = r0     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = "I_MIN_GEO_DIS"
            int r0 = r3.getInt(r0)     // Catch: java.lang.Throwable -> L37
            r2.h = r0     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = "loc"
            android.os.Parcelable r3 = r3.getParcelable(r0)     // Catch: java.lang.Throwable -> L37
            com.amap.api.location.AMapLocation r3 = (com.amap.api.location.AMapLocation) r3     // Catch: java.lang.Throwable -> L37
            java.lang.String r0 = r3.getAdCode()     // Catch: java.lang.Throwable -> L37
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L37
            if (r0 != 0) goto L3f
            java.lang.Object r0 = r2.o     // Catch: java.lang.Throwable -> L37
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L37
            com.loc.h.y = r3     // Catch: java.lang.Throwable -> L34
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            return
        L34:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            throw r3     // Catch: java.lang.Throwable -> L37
        L37:
            r3 = move-exception
            java.lang.String r0 = "GpsLocation"
            java.lang.String r1 = "setLastGeoLocation"
            com.loc.fr.a(r3, r0, r1)
        L3f:
            return
    }

    public final void a(com.amap.api.location.AMapLocationClientOption r5) {
            r4 = this;
            r4.c = r5
            if (r5 != 0) goto Lb
            com.amap.api.location.AMapLocationClientOption r5 = new com.amap.api.location.AMapLocationClientOption
            r5.<init>()
            r4.c = r5
        Lb:
            android.content.Context r5 = r4.z     // Catch: java.lang.Throwable -> L19
            java.lang.String r0 = "pref"
            java.lang.String r1 = "lagt"
            long r2 = com.loc.h.q     // Catch: java.lang.Throwable -> L19
            long r0 = com.loc.fy.a(r5, r0, r1, r2)     // Catch: java.lang.Throwable -> L19
            com.loc.h.q = r0     // Catch: java.lang.Throwable -> L19
        L19:
            r4.i()
            return
    }

    public final void b(com.amap.api.location.AMapLocationClientOption r2) {
            r1 = this;
            if (r2 != 0) goto L7
            com.amap.api.location.AMapLocationClientOption r2 = new com.amap.api.location.AMapLocationClientOption
            r2.<init>()
        L7:
            r1.c = r2
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r2 = r2.getLocationMode()
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
            if (r2 == r0) goto L1a
            android.os.Handler r2 = r1.a
            if (r2 == 0) goto L1a
            r0 = 8
            r2.removeMessages(r0)
        L1a:
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = r1.r
            com.amap.api.location.AMapLocationClientOption r0 = r1.c
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r0.getGeoLanguage()
            if (r2 == r0) goto L2f
            java.lang.Object r2 = r1.o
            monitor-enter(r2)
            r0 = 0
            com.loc.h.y = r0     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2c
            goto L2f
        L2c:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2c
            throw r0
        L2f:
            com.amap.api.location.AMapLocationClientOption r2 = r1.c
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = r2.getGeoLanguage()
            r1.r = r2
            return
    }

    public final boolean b() {
            r5 = this;
            long r0 = com.loc.fz.b()
            long r2 = r5.d
            long r0 = r0 - r2
            r2 = 2800(0xaf0, double:1.3834E-320)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto Lf
            r0 = 0
            return r0
        Lf:
            r0 = 1
            return r0
    }

    public final void c() {
            r1 = this;
            r0 = 0
            r1.w = r0
            return
    }

    public final int d() {
            r4 = this;
            android.location.LocationManager r0 = r4.b
            r1 = 1
            if (r0 != 0) goto L6
            return r1
        L6:
            boolean r0 = a(r0)
            if (r0 != 0) goto Ld
            return r1
        Ld:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            r2 = 0
            r3 = 2
            if (r0 >= r1) goto L20
            android.location.LocationManager r0 = r4.b
            java.lang.String r1 = "gps"
            boolean r0 = r0.isProviderEnabled(r1)
            if (r0 != 0) goto L33
            return r3
        L20:
            android.content.Context r0 = r4.z
            android.content.ContentResolver r0 = r0.getContentResolver()
            java.lang.String r1 = "location_mode"
            int r0 = android.provider.Settings.Secure.getInt(r0, r1, r2)
            if (r0 != 0) goto L2f
            return r3
        L2f:
            if (r0 != r3) goto L33
            r0 = 3
            return r0
        L33:
            boolean r0 = r4.s
            if (r0 != 0) goto L39
            r0 = 4
            return r0
        L39:
            return r2
    }

    public final int e() {
            r1 = this;
            int r0 = r1.C
            return r0
    }

    public final boolean f() {
            r6 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r6.c
            r1 = 0
            if (r0 == 0) goto L1c
            boolean r0 = r0.isOnceLocation()
            if (r0 == 0) goto Lc
            goto L1c
        Lc:
            long r2 = com.loc.fz.b()
            long r4 = r6.d
            long r2 = r2 - r4
            r4 = 300000(0x493e0, double:1.482197E-318)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L1c
            r0 = 1
            return r0
        L1c:
            return r1
    }
}
