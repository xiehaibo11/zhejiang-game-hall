package com.loc;

public final class g {
    public static volatile com.amap.api.location.AMapLocation a = null;
    private static java.lang.String b = "CoarseLocation";
    private static long q;
    private static boolean r;
    private static boolean s;
    private static boolean t;
    private static boolean u;
    private long c;
    private boolean d;
    private int e;
    private com.loc.ev f;
    private int g;
    private int h;
    private int i;
    private android.os.Handler j;
    private android.content.Context k;
    private long l;
    private int m;
    private android.location.LocationManager n;
    private com.amap.api.location.AMapLocationClientOption o;
    private java.lang.Object p;
    private boolean v;
    private com.amap.api.location.AMapLocationClientOption.GeoLanguage w;
    private android.location.LocationListener x;

    static class a implements android.location.LocationListener {
        private com.loc.g a;

        a(com.loc.g r1) {
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
                com.loc.g r0 = r1.a     // Catch: java.lang.Throwable -> L9
                if (r0 == 0) goto L9
                com.loc.g r0 = r1.a     // Catch: java.lang.Throwable -> L9
                com.loc.g.a(r0, r2)     // Catch: java.lang.Throwable -> L9
            L9:
                return
        }

        @Override
        public final void onProviderDisabled(java.lang.String r1) {
                r0 = this;
                com.loc.g r1 = r0.a     // Catch: java.lang.Throwable -> L9
                if (r1 == 0) goto L9
                com.loc.g r1 = r0.a     // Catch: java.lang.Throwable -> L9
                com.loc.g.a(r1)     // Catch: java.lang.Throwable -> L9
            L9:
                return
        }

        @Override
        public final void onProviderEnabled(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "gps"
                boolean r2 = r0.equalsIgnoreCase(r2)
                if (r2 == 0) goto Le
                r2 = 1
                java.lang.Object[] r2 = new java.lang.Object[r2]
                com.loc.ft.a()
            Le:
                return
        }

        @Override
        public final void onStatusChanged(java.lang.String r1, int r2, android.os.Bundle r3) {
                r0 = this;
                com.loc.g r1 = r0.a     // Catch: java.lang.Throwable -> L9
                if (r1 == 0) goto L9
                com.loc.g r1 = r0.a     // Catch: java.lang.Throwable -> L9
                com.loc.g.a(r1, r2)     // Catch: java.lang.Throwable -> L9
            L9:
                return
        }
    }

    static {
            return
    }

    public g(android.content.Context r6, android.os.Handler r7) {
            r5 = this;
            r5.<init>()
            r0 = 0
            r5.c = r0
            r2 = 0
            r5.d = r2
            r5.e = r2
            r3 = 0
            r5.f = r3
            r4 = 240(0xf0, float:3.36E-43)
            r5.g = r4
            r4 = 80
            r5.h = r4
            r5.i = r2
            r5.l = r0
            r5.m = r2
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r5.p = r0
            r0 = 1
            r5.v = r0
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = com.amap.api.location.AMapLocationClientOption.GeoLanguage.DEFAULT
            r5.w = r0
            r5.x = r3
            r5.k = r6
            r5.j = r7
            java.lang.String r7 = "location"
            java.lang.Object r6 = r6.getSystemService(r7)     // Catch: java.lang.Throwable -> L3c
            android.location.LocationManager r6 = (android.location.LocationManager) r6     // Catch: java.lang.Throwable -> L3c
            r5.n = r6     // Catch: java.lang.Throwable -> L3c
            goto L44
        L3c:
            r6 = move-exception
            java.lang.String r7 = com.loc.g.b
            java.lang.String r0 = "<init>"
            com.loc.fr.a(r6, r7, r0)
        L44:
            com.loc.ev r6 = new com.loc.ev
            r6.<init>()
            r5.f = r6
            return
    }

    private static com.loc.ew a(int r2, java.lang.String r3) {
            com.loc.ew r0 = new com.loc.ew
            java.lang.String r1 = ""
            r0.<init>(r1)
            r0.setErrorCode(r2)
            r0.setLocationDetail(r3)
            return r0
    }

    private void a(int r1) {
            r0 = this;
            if (r1 != 0) goto Lc
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Lc
            com.loc.ft.a()     // Catch: java.lang.Throwable -> Lc
            r1 = 0
            r0.i = r1     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    private void a(int r4, java.lang.String r5, long r6) {
            r3 = this;
            android.os.Handler r0 = r3.j     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L25
            android.os.Message r0 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L26
            com.amap.api.location.AMapLocation r1 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = ""
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L26
            r2 = 20
            r1.setErrorCode(r2)     // Catch: java.lang.Throwable -> L26
            r1.setLocationDetail(r5)     // Catch: java.lang.Throwable -> L26
            r5 = 11
            r1.setLocationType(r5)     // Catch: java.lang.Throwable -> L26
            r0.obj = r1     // Catch: java.lang.Throwable -> L26
            r0.what = r4     // Catch: java.lang.Throwable -> L26
            android.os.Handler r4 = r3.j     // Catch: java.lang.Throwable -> L26
            r4.sendMessageDelayed(r0, r6)     // Catch: java.lang.Throwable -> L26
        L25:
            return
        L26:
            com.loc.ft.b()
            return
    }

    private void a(android.location.Location r10) {
            r9 = this;
            android.os.Handler r0 = r9.j
            if (r0 == 0) goto L9
            r1 = 100
            r0.removeMessages(r1)
        L9:
            if (r10 != 0) goto Lc
            return
        Lc:
            com.amap.api.location.AMapLocation r0 = new com.amap.api.location.AMapLocation     // Catch: java.lang.Throwable -> Lf0
            r0.<init>(r10)     // Catch: java.lang.Throwable -> Lf0
            boolean r1 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Lf0
            if (r1 != 0) goto L18
            return
        L18:
            java.lang.String r1 = "gps"
            java.lang.String r2 = r10.getProvider()     // Catch: java.lang.Throwable -> Lf0
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Throwable -> Lf0
            if (r1 == 0) goto L2a
            java.lang.String r1 = "gps_coarse"
        L26:
            r0.setProvider(r1)     // Catch: java.lang.Throwable -> Lf0
            goto L2d
        L2a:
            java.lang.String r1 = "network_coarse"
            goto L26
        L2d:
            r1 = 11
            r0.setLocationType(r1)     // Catch: java.lang.Throwable -> Lf0
            boolean r1 = r9.d     // Catch: java.lang.Throwable -> Lf0
            r2 = 1
            if (r1 != 0) goto L57
            boolean r1 = com.loc.fz.a(r0)     // Catch: java.lang.Throwable -> Lf0
            if (r1 == 0) goto L57
            android.content.Context r1 = r9.k     // Catch: java.lang.Throwable -> Lf0
            long r3 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Lf0
            long r5 = r9.c     // Catch: java.lang.Throwable -> Lf0
            long r3 = r3 - r5
            double r5 = r0.getLatitude()     // Catch: java.lang.Throwable -> Lf0
            double r7 = r0.getLongitude()     // Catch: java.lang.Throwable -> Lf0
            boolean r5 = com.loc.fr.a(r5, r7)     // Catch: java.lang.Throwable -> Lf0
            com.loc.fx.b(r1, r3, r5)     // Catch: java.lang.Throwable -> Lf0
            r9.d = r2     // Catch: java.lang.Throwable -> Lf0
        L57:
            java.lang.Boolean r1 = java.lang.Boolean.FALSE     // Catch: java.lang.Throwable -> Lf0
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> Lf0
            r4 = 18
            r5 = 0
            if (r3 < r4) goto L79
            java.lang.String r3 = "isFromMockProvider"
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L79
            java.lang.Object r3 = com.loc.fv.a(r10, r3, r4)     // Catch: java.lang.Throwable -> L79
            java.lang.Boolean r3 = (java.lang.Boolean) r3     // Catch: java.lang.Throwable -> L79
            java.lang.Object[] r1 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L78
            java.lang.String r1 = "CoarseLocation | isFromMock="
            java.lang.String r4 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L78
            r1.concat(r4)     // Catch: java.lang.Throwable -> L78
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L78
        L78:
            r1 = r3
        L79:
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Throwable -> Lf0
            if (r1 == 0) goto Lc5
            r0.setMock(r2)     // Catch: java.lang.Throwable -> Lf0
            r1 = 4
            r0.setTrustedLevel(r1)     // Catch: java.lang.Throwable -> Lf0
            com.amap.api.location.AMapLocationClientOption r1 = r9.o     // Catch: java.lang.Throwable -> Lf0
            boolean r1 = r1.isMockEnable()     // Catch: java.lang.Throwable -> Lf0
            if (r1 != 0) goto Lc7
            int r10 = r9.m     // Catch: java.lang.Throwable -> Lf0
            r1 = 3
            if (r10 <= r1) goto Lbf
            r10 = 2152(0x868, float:3.016E-42)
            r1 = 0
            com.loc.fx.a(r1, r10)     // Catch: java.lang.Throwable -> Lf0
            r10 = 15
            r0.setErrorCode(r10)     // Catch: java.lang.Throwable -> Lf0
            java.lang.String r10 = "CoarseLocation has been mocked!#2007"
            r0.setLocationDetail(r10)     // Catch: java.lang.Throwable -> Lf0
            r2 = 0
            r0.setLatitude(r2)     // Catch: java.lang.Throwable -> Lf0
            r0.setLongitude(r2)     // Catch: java.lang.Throwable -> Lf0
            r0.setAltitude(r2)     // Catch: java.lang.Throwable -> Lf0
            r10 = 0
            r0.setSpeed(r10)     // Catch: java.lang.Throwable -> Lf0
            r0.setAccuracy(r10)     // Catch: java.lang.Throwable -> Lf0
            r0.setBearing(r10)     // Catch: java.lang.Throwable -> Lf0
            r0.setExtras(r1)     // Catch: java.lang.Throwable -> Lf0
            r9.c(r0)     // Catch: java.lang.Throwable -> Lf0
            return
        Lbf:
            int r10 = r9.m     // Catch: java.lang.Throwable -> Lf0
            int r10 = r10 + r2
            r9.m = r10     // Catch: java.lang.Throwable -> Lf0
            return
        Lc5:
            r9.m = r5     // Catch: java.lang.Throwable -> Lf0
        Lc7:
            int r10 = b(r10)     // Catch: java.lang.Throwable -> Lf0
            r9.i = r10     // Catch: java.lang.Throwable -> Lf0
            r0.setSatellites(r10)     // Catch: java.lang.Throwable -> Lf0
            r9.e(r0)     // Catch: java.lang.Throwable -> Lf0
            g(r0)     // Catch: java.lang.Throwable -> Lf0
            com.amap.api.location.AMapLocation r10 = r9.f(r0)     // Catch: java.lang.Throwable -> Lf0
            r9.a(r10)     // Catch: java.lang.Throwable -> Lf0
            r9.b(r10)     // Catch: java.lang.Throwable -> Lf0
            java.lang.Object r0 = r9.p     // Catch: java.lang.Throwable -> Lf0
            monitor-enter(r0)     // Catch: java.lang.Throwable -> Lf0
            com.amap.api.location.AMapLocation r1 = com.loc.g.a     // Catch: java.lang.Throwable -> Led
            r9.a(r10, r1)     // Catch: java.lang.Throwable -> Led
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Led
            r9.c(r10)     // Catch: java.lang.Throwable -> Lf0
            return
        Led:
            r10 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Led
            throw r10     // Catch: java.lang.Throwable -> Lf0
        Lf0:
            r10 = move-exception
            java.lang.String r0 = "CoarseLocation"
            java.lang.String r1 = "onLocationChanged"
            com.loc.fr.a(r10, r0, r1)
            return
    }

    private void a(com.amap.api.location.AMapLocation r1) {
            r0 = this;
            boolean r1 = com.loc.fz.a(r1)
            if (r1 != 0) goto L7
            return
        L7:
            int r1 = r0.e
            int r1 = r1 + 1
            r0.e = r1
            return
    }

    private void a(com.amap.api.location.AMapLocation r3, com.amap.api.location.AMapLocation r4) {
            r2 = this;
            if (r4 == 0) goto L18
            com.amap.api.location.AMapLocationClientOption r0 = r2.o
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

    static void a(com.loc.g r0) {
            r0.g()
            return
    }

    static void a(com.loc.g r0, int r1) {
            r0.a(r1)
            return
    }

    static void a(com.loc.g r0, android.location.Location r1) {
            r0.a(r1)
            return
    }

    private static boolean a(android.location.LocationManager r2) {
            r0 = 1
            boolean r1 = com.loc.g.r     // Catch: java.lang.Throwable -> L25
            if (r1 == 0) goto L8
            boolean r2 = com.loc.g.s     // Catch: java.lang.Throwable -> L25
            return r2
        L8:
            java.util.List r2 = r2.getAllProviders()     // Catch: java.lang.Throwable -> L25
            if (r2 == 0) goto L1d
            int r1 = r2.size()     // Catch: java.lang.Throwable -> L25
            if (r1 <= 0) goto L1d
            java.lang.String r1 = "gps"
            boolean r2 = r2.contains(r1)     // Catch: java.lang.Throwable -> L25
            com.loc.g.s = r2     // Catch: java.lang.Throwable -> L25
            goto L20
        L1d:
            r2 = 0
            com.loc.g.s = r2     // Catch: java.lang.Throwable -> L25
        L20:
            com.loc.g.r = r0     // Catch: java.lang.Throwable -> L25
            boolean r2 = com.loc.g.s     // Catch: java.lang.Throwable -> L25
            return r2
        L25:
            r2 = move-exception
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2.getMessage()
            com.loc.ft.a()
            boolean r2 = com.loc.g.s
            return r2
    }

    private static int b(android.location.Location r1) {
            android.os.Bundle r1 = r1.getExtras()
            if (r1 == 0) goto Ld
            java.lang.String r0 = "satellites"
            int r1 = r1.getInt(r0)
            goto Le
        Ld:
            r1 = 0
        Le:
            com.loc.ft.b()
            return r1
    }

    private void b(com.amap.api.location.AMapLocation r8) {
            r7 = this;
            boolean r0 = com.loc.fz.a(r8)
            if (r0 != 0) goto L7
            return
        L7:
            android.os.Handler r0 = r7.j
            if (r0 == 0) goto L7f
            long r0 = com.loc.fz.b()
            com.amap.api.location.AMapLocationClientOption r2 = r7.o
            long r2 = r2.getInterval()
            r4 = 8000(0x1f40, double:3.9525E-320)
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 <= 0) goto L29
            long r2 = r7.l
            long r0 = r0 - r2
            com.amap.api.location.AMapLocationClientOption r2 = r7.o
            long r2 = r2.getInterval()
            long r2 = r2 - r4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L7f
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
            r0 = 102(0x66, float:1.43E-43)
            r1.what = r0
            java.lang.Object r0 = r7.p
            monitor-enter(r0)
            com.amap.api.location.AMapLocation r2 = com.loc.g.a     // Catch: java.lang.Throwable -> L7c
            if (r2 != 0) goto L6a
            android.os.Handler r8 = r7.j     // Catch: java.lang.Throwable -> L7c
        L66:
            r8.sendMessage(r1)     // Catch: java.lang.Throwable -> L7c
            goto L7a
        L6a:
            com.amap.api.location.AMapLocation r2 = com.loc.g.a     // Catch: java.lang.Throwable -> L7c
            float r8 = com.loc.fz.a(r8, r2)     // Catch: java.lang.Throwable -> L7c
            int r2 = r7.h     // Catch: java.lang.Throwable -> L7c
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L7c
            int r8 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r8 <= 0) goto L7a
            android.os.Handler r8 = r7.j     // Catch: java.lang.Throwable -> L7c
            goto L66
        L7a:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7c
            return
        L7c:
            r8 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L7c
            throw r8
        L7f:
            return
    }

    private static boolean b(android.location.LocationManager r2) {
            r0 = 1
            boolean r1 = com.loc.g.t     // Catch: java.lang.Throwable -> L13
            if (r1 == 0) goto L8
            boolean r2 = com.loc.g.u     // Catch: java.lang.Throwable -> L13
            return r2
        L8:
            java.lang.String r1 = "network"
            boolean r2 = r2.isProviderEnabled(r1)     // Catch: java.lang.Throwable -> L13
            com.loc.g.u = r2     // Catch: java.lang.Throwable -> L13
            com.loc.g.t = r0     // Catch: java.lang.Throwable -> L13
            return r2
        L13:
            r2 = move-exception
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2.getMessage()
            com.loc.ft.a()
            boolean r2 = com.loc.g.u
            return r2
    }

    private void c(com.amap.api.location.AMapLocation r7) {
            r6 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r6.o
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r0 = r0.getLocationMode()
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Device_Sensors
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L1d
            com.amap.api.location.AMapLocationClientOption r0 = r6.o
            float r0 = r0.getDeviceModeDistanceFilter()
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L1d
            r6.d(r7)
            return
        L1d:
            long r0 = com.loc.fz.b()
            long r2 = r6.l
            long r0 = r0 - r2
            com.amap.api.location.AMapLocationClientOption r2 = r6.o
            long r2 = r2.getInterval()
            r4 = 200(0xc8, double:9.9E-322)
            long r2 = r2 - r4
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L3a
            long r0 = com.loc.fz.b()
            r6.l = r0
            r6.d(r7)
        L3a:
            return
    }

    private boolean c() {
            r6 = this;
            r0 = 1
            int r1 = com.loc.fz.c()     // Catch: java.lang.Throwable -> L4d
            r2 = 28
            r3 = 0
            if (r1 < r2) goto L2f
            android.location.LocationManager r1 = r6.n     // Catch: java.lang.Throwable -> L4d
            if (r1 != 0) goto L1e
            android.content.Context r1 = r6.k     // Catch: java.lang.Throwable -> L4d
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = "location"
            java.lang.Object r1 = r1.getSystemService(r4)     // Catch: java.lang.Throwable -> L4d
            android.location.LocationManager r1 = (android.location.LocationManager) r1     // Catch: java.lang.Throwable -> L4d
            r6.n = r1     // Catch: java.lang.Throwable -> L4d
        L1e:
            android.location.LocationManager r1 = r6.n     // Catch: java.lang.Throwable -> L4d
            java.lang.String r4 = "isLocationEnabled"
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r1 = com.loc.fv.a(r1, r4, r5)     // Catch: java.lang.Throwable -> L4d
            java.lang.Boolean r1 = (java.lang.Boolean) r1     // Catch: java.lang.Throwable -> L4d
            boolean r1 = r1.booleanValue()     // Catch: java.lang.Throwable -> L4d
            goto L30
        L2f:
            r1 = 1
        L30:
            int r4 = com.loc.fz.c()     // Catch: java.lang.Throwable -> L4e
            r5 = 24
            if (r4 < r5) goto L53
            int r4 = com.loc.fz.c()     // Catch: java.lang.Throwable -> L4e
            if (r4 >= r2) goto L53
            android.content.Context r2 = r6.k     // Catch: java.lang.Throwable -> L4e
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L4e
            java.lang.String r4 = "location_mode"
            int r0 = android.provider.Settings.Secure.getInt(r2, r4, r3)     // Catch: java.lang.Throwable -> L4e
            if (r0 != 0) goto L53
            goto L54
        L4d:
            r1 = 1
        L4e:
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.loc.ft.a()
        L53:
            r3 = r1
        L54:
            return r3
    }

    private void d() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "定位服务没有开启，请在设置中打开定位服务开关#1206"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 12
            com.loc.ew r0 = a(r1, r0)
            r2.c(r0)
            return
    }

    private void d(com.amap.api.location.AMapLocation r2) {
            r1 = this;
            android.os.Handler r0 = r1.j
            if (r0 == 0) goto L19
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.loc.ft.a()
            android.os.Message r0 = android.os.Message.obtain()
            r0.obj = r2
            r2 = 101(0x65, float:1.42E-43)
            r0.what = r2
            android.os.Handler r2 = r1.j
            r2.sendMessage(r0)
        L19:
            return
    }

    private void e() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "模糊权限下不支持连续定位#2006"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 20
            com.loc.ew r0 = a(r1, r0)
            r2.c(r0)
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
            com.amap.api.location.AMapLocationClientOption r2 = r8.o     // Catch: java.lang.Throwable -> L50
            boolean r2 = r2.isOffset()     // Catch: java.lang.Throwable -> L50
            if (r2 == 0) goto L49
            android.content.Context r2 = r8.k     // Catch: java.lang.Throwable -> L50
            com.amap.api.location.DPoint r3 = new com.amap.api.location.DPoint     // Catch: java.lang.Throwable -> L50
            double r4 = r9.getLatitude()     // Catch: java.lang.Throwable -> L50
            double r6 = r9.getLongitude()     // Catch: java.lang.Throwable -> L50
            r3.<init>(r4, r6)     // Catch: java.lang.Throwable -> L50
            com.amap.api.location.DPoint r2 = com.loc.fu.a(r2, r3)     // Catch: java.lang.Throwable -> L50
            double r3 = r2.getLatitude()     // Catch: java.lang.Throwable -> L50
            r9.setLatitude(r3)     // Catch: java.lang.Throwable -> L50
            double r2 = r2.getLongitude()     // Catch: java.lang.Throwable -> L50
            r9.setLongitude(r2)     // Catch: java.lang.Throwable -> L50
            com.amap.api.location.AMapLocationClientOption r2 = r8.o     // Catch: java.lang.Throwable -> L50
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
            r2 = move-exception
            r9.setOffset(r1)
            r9.setCoordType(r0)
            r9 = 1
            java.lang.Object[] r9 = new java.lang.Object[r9]
            r2.getMessage()
            com.loc.ft.a()
            return
    }

    private com.amap.api.location.AMapLocation f(com.amap.api.location.AMapLocation r4) {
            r3 = this;
            boolean r0 = com.loc.fz.a(r4)
            if (r0 != 0) goto L7
            return r4
        L7:
            int r0 = r3.e
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

    private void f() {
            r12 = this;
            android.location.LocationManager r0 = r12.n
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r2 = 0
            r3 = 1
            r12.v = r3     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            android.os.Looper r4 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            if (r4 != 0) goto L17
            android.content.Context r4 = r12.k     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            android.os.Looper r4 = r4.getMainLooper()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
        L17:
            long r5 = com.loc.fz.b()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r12.c = r5     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            android.location.LocationManager r5 = r12.n     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            boolean r5 = b(r5)     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            if (r5 == 0) goto L46
            android.location.LocationListener r5 = r12.x     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            if (r5 != 0) goto L30
            com.loc.g$a r5 = new com.loc.g$a     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r5.<init>(r12)     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r12.x = r5     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
        L30:
            android.location.LocationManager r5 = r12.n     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            java.lang.String r6 = "network"
            com.amap.api.location.AMapLocationClientOption r7 = r12.o     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            long r7 = r7.getInterval()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            com.amap.api.location.AMapLocationClientOption r9 = r12.o     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            float r9 = r9.getDeviceModeDistanceFilter()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            android.location.LocationListener r10 = r12.x     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r11 = r4
            r5.requestLocationUpdates(r6, r7, r9, r10, r11)     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
        L46:
            android.location.LocationManager r5 = r12.n     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            boolean r5 = a(r5)     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            if (r5 == 0) goto Lcb
            long r5 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L9c
            long r7 = com.loc.g.q     // Catch: java.lang.Throwable -> L9c
            long r5 = r5 - r7
            r7 = 259200000(0xf731400, double:1.280618154E-315)
            int r9 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r9 < 0) goto La5
            android.content.Context r5 = r12.k     // Catch: java.lang.Throwable -> L9c
            java.lang.String r6 = "WYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19MT0NBVElPTl9FWFRSQV9DT01NQU5EUw=="
            boolean r5 = com.loc.fz.c(r5, r6)     // Catch: java.lang.Throwable -> L9c
            if (r5 == 0) goto L8d
            android.location.LocationManager r5 = r12.n     // Catch: java.lang.Throwable -> L9c
            java.lang.String r6 = "gps"
            java.lang.String r7 = "force_xtra_injection"
            r5.sendExtraCommand(r6, r7, r2)     // Catch: java.lang.Throwable -> L9c
            long r5 = com.loc.fz.a()     // Catch: java.lang.Throwable -> L9c
            com.loc.g.q = r5     // Catch: java.lang.Throwable -> L9c
            android.content.Context r5 = r12.k     // Catch: java.lang.Throwable -> L9c
            java.lang.String r6 = "pref"
            android.content.SharedPreferences$Editor r5 = com.loc.fy.a(r5, r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r6 = "lagt"
            long r7 = com.loc.g.q     // Catch: java.lang.Throwable -> L9c
            com.loc.fy.a(r5, r6, r7)     // Catch: java.lang.Throwable -> L9c
            com.loc.fy.a(r5)     // Catch: java.lang.Throwable -> L9c
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L9c
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L9c
            goto La5
        L8d:
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Throwable -> L9c
            java.lang.String r6 = "n_alec"
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r6 = "OPENSDK_CL"
            java.lang.String r7 = "rlu_n_alec"
            com.loc.fr.a(r5, r6, r7)     // Catch: java.lang.Throwable -> L9c
            goto La5
        L9c:
            r5 = move-exception
            java.lang.Object[] r6 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r5.getMessage()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            com.loc.ft.a()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
        La5:
            android.location.LocationListener r5 = r12.x     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            if (r5 != 0) goto Lb0
            com.loc.g$a r5 = new com.loc.g$a     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r5.<init>(r12)     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r12.x = r5     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
        Lb0:
            android.location.LocationManager r5 = r12.n     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            java.lang.String r6 = "gps"
            com.amap.api.location.AMapLocationClientOption r7 = r12.o     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            long r7 = r7.getInterval()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            com.amap.api.location.AMapLocationClientOption r9 = r12.o     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            float r9 = r9.getDeviceModeDistanceFilter()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            android.location.LocationListener r10 = r12.x     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r11 = r4
            r5.requestLocationUpdates(r6, r7, r9, r10, r11)     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            com.loc.ft.a()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
        Lcb:
            boolean r4 = com.loc.g.s     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r5 = 100
            if (r4 != 0) goto Ld5
            boolean r4 = com.loc.g.u     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            if (r4 == 0) goto Le0
        Ld5:
            java.lang.String r4 = "系统返回定位结果超时#2002"
            com.amap.api.location.AMapLocationClientOption r6 = r12.o     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            long r6 = r6.getHttpTimeOut()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            r12.a(r5, r4, r6)     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
        Le0:
            boolean r4 = com.loc.g.s     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            if (r4 != 0) goto Lf2
            boolean r4 = com.loc.g.u     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            if (r4 != 0) goto Lf2
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            com.loc.ft.a()     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
            java.lang.String r4 = "系统定位当前不可用#2003"
            r12.a(r5, r4, r0)     // Catch: java.lang.Throwable -> Lf3 java.lang.SecurityException -> L104
        Lf2:
            return
        Lf3:
            r0 = move-exception
            java.lang.Object[] r1 = new java.lang.Object[r3]
            r0.getMessage()
            com.loc.ft.a()
            java.lang.String r1 = "CoarseLocation"
            java.lang.String r2 = "requestLocationUpdates part2"
            com.loc.fr.a(r0, r1, r2)
            return
        L104:
            r4 = move-exception
            java.lang.Object[] r3 = new java.lang.Object[r3]
            com.loc.ft.a()
            r3 = 0
            r12.v = r3
            r3 = 2121(0x849, float:2.972E-42)
            com.loc.fx.a(r2, r3)
            r2 = 101(0x65, float:1.42E-43)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r4.getMessage()
            r3.append(r4)
            java.lang.String r4 = "#2004"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r12.a(r2, r3, r0)
            return
    }

    private void g() {
            r1 = this;
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L9
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L9
            r0 = 0
            r1.i = r0     // Catch: java.lang.Throwable -> L9
        L9:
            return
    }

    private static void g(com.amap.api.location.AMapLocation r7) {
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

    public final void a() {
            r3 = this;
            r0 = 1
            java.lang.Object[] r1 = new java.lang.Object[r0]
            com.loc.ft.a()
            android.location.LocationManager r1 = r3.n
            if (r1 != 0) goto Lb
            return
        Lb:
            android.location.LocationListener r2 = r3.x     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L2d
            android.location.LocationListener r2 = r3.x     // Catch: java.lang.Throwable -> L24
            r1.removeUpdates(r2)     // Catch: java.lang.Throwable -> L24
            android.location.LocationListener r1 = r3.x     // Catch: java.lang.Throwable -> L24
            com.loc.g$a r1 = (com.loc.g.a) r1     // Catch: java.lang.Throwable -> L24
            r1.a()     // Catch: java.lang.Throwable -> L24
            r1 = 0
            r3.x = r1     // Catch: java.lang.Throwable -> L24
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L24
            com.loc.ft.a()     // Catch: java.lang.Throwable -> L24
            goto L2d
        L24:
            r1 = move-exception
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1.getMessage()
            com.loc.ft.a()
        L2d:
            android.os.Handler r0 = r3.j     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L38
            android.os.Handler r0 = r3.j     // Catch: java.lang.Throwable -> L38
            r1 = 100
            r0.removeMessages(r1)     // Catch: java.lang.Throwable -> L38
        L38:
            r0 = 0
            r3.i = r0
            r1 = 0
            r3.c = r1
            r3.l = r1
            r3.e = r0
            r3.m = r0
            com.loc.ev r0 = r3.f
            r0.a()
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
            java.lang.Object r0 = r2.p     // Catch: java.lang.Throwable -> L37
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L37
            com.loc.g.a = r3     // Catch: java.lang.Throwable -> L34
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            return
        L34:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L34
            throw r3     // Catch: java.lang.Throwable -> L37
        L37:
            r3 = move-exception
            java.lang.String r0 = "CoarseLocation"
            java.lang.String r1 = "setLastGeoLocation"
            com.loc.fr.a(r3, r0, r1)
        L3f:
            return
    }

    public final void a(com.amap.api.location.AMapLocationClientOption r5) {
            r4 = this;
            r4.o = r5
            if (r5 != 0) goto Lb
            com.amap.api.location.AMapLocationClientOption r5 = new com.amap.api.location.AMapLocationClientOption
            r5.<init>()
            r4.o = r5
        Lb:
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]
            com.amap.api.location.AMapLocationClientOption r5 = r4.o
            r5.toString()
            com.loc.ft.a()
            com.amap.api.location.AMapLocationClientOption r5 = r4.o
            boolean r5 = r5.isOnceLocation()
            if (r5 != 0) goto L22
            r4.e()
            return
        L22:
            boolean r5 = r4.c()
            if (r5 != 0) goto L2c
            r4.d()
            return
        L2c:
            android.content.Context r5 = r4.k     // Catch: java.lang.Throwable -> L3a
            java.lang.String r0 = "pref"
            java.lang.String r1 = "lagt"
            long r2 = com.loc.g.q     // Catch: java.lang.Throwable -> L3a
            long r0 = com.loc.fy.a(r5, r0, r1, r2)     // Catch: java.lang.Throwable -> L3a
            com.loc.g.q = r0     // Catch: java.lang.Throwable -> L3a
        L3a:
            r4.f()
            return
    }

    public final int b() {
            r4 = this;
            android.location.LocationManager r0 = r4.n
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
            android.location.LocationManager r0 = r4.n
            java.lang.String r1 = "gps"
            boolean r0 = r0.isProviderEnabled(r1)
            if (r0 != 0) goto L33
            return r3
        L20:
            android.content.Context r0 = r4.k
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
            boolean r0 = r4.v
            if (r0 != 0) goto L39
            r0 = 4
            return r0
        L39:
            return r2
    }

    public final void b(com.amap.api.location.AMapLocationClientOption r2) {
            r1 = this;
            if (r2 != 0) goto L7
            com.amap.api.location.AMapLocationClientOption r2 = new com.amap.api.location.AMapLocationClientOption
            r2.<init>()
        L7:
            r1.o = r2
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2.toString()
            com.loc.ft.a()
            android.os.Handler r2 = r1.j
            r0 = 100
            r2.removeMessages(r0)
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = r1.w
            com.amap.api.location.AMapLocationClientOption r0 = r1.o
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r0 = r0.getGeoLanguage()
            if (r2 == r0) goto L2e
            java.lang.Object r2 = r1.p
            monitor-enter(r2)
            r0 = 0
            com.loc.g.a = r0     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2b
            goto L2e
        L2b:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2b
            throw r0
        L2e:
            com.amap.api.location.AMapLocationClientOption r2 = r1.o
            com.amap.api.location.AMapLocationClientOption$GeoLanguage r2 = r2.getGeoLanguage()
            r1.w = r2
            return
    }
}
