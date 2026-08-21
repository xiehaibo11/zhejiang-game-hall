package com.kwad.sdk.utils;

public final class ax {
    private static android.content.Context aJh;
    private static java.util.Map<java.lang.String, com.kwad.sdk.utils.j> aJi;
    private static com.kwad.sdk.utils.ax.b aJj;

    static class a extends com.kwad.sdk.utils.j<com.kwad.sdk.k.a.b> {
        private static com.kwad.sdk.k.a.b aJk;

        public a(boolean r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private static int a(android.telephony.CellInfo r3) {
                r0 = -1
                if (r3 != 0) goto L4
                return r0
            L4:
                java.lang.String r1 = "getCellSignalStrength"
                r2 = 0
                java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L14
                java.lang.Object r3 = com.kwad.sdk.utils.s.f(r3, r1, r2)     // Catch: java.lang.Throwable -> L14
                android.telephony.CellSignalStrength r3 = (android.telephony.CellSignalStrength) r3     // Catch: java.lang.Throwable -> L14
                int r3 = r3.getLevel()     // Catch: java.lang.Throwable -> L14
                return r3
            L14:
                return r0
        }

        private com.kwad.sdk.k.a.b cP(android.content.Context r7) {
                r6 = this;
                boolean r0 = com.kwad.sdk.utils.at.IW()
                if (r0 != 0) goto L9d
                java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
                java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
                com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
                r1 = 64
                boolean r0 = r0.R(r1)
                if (r0 == 0) goto L18
                goto L9d
            L18:
                com.kwad.sdk.k.a.b r0 = com.kwad.sdk.utils.ax.a.aJk
                if (r0 == 0) goto L1d
                return r0
            L1d:
                r0 = 0
                if (r7 != 0) goto L21
                return r0
            L21:
                boolean r1 = com.kwad.sdk.utils.at.IW()
                if (r1 == 0) goto L28
                return r0
            L28:
                int r1 = android.os.Build.VERSION.SDK_INT
                r2 = 23
                java.lang.String r3 = "android.permission.ACCESS_FINE_LOCATION"
                r4 = -1
                if (r1 < r2) goto L38
                int r1 = android.support.v4.content.ContextCompat.checkSelfPermission(r7, r3)
                if (r1 != r4) goto L38
                return r0
            L38:
                int r1 = com.kwad.sdk.utils.be.checkSelfPermission(r7, r3)
                if (r1 != 0) goto L9a
                java.lang.String r1 = "phone"
                java.lang.Object r7 = r7.getSystemService(r1)
                android.telephony.TelephonyManager r7 = (android.telephony.TelephonyManager) r7
                android.telephony.CellLocation r1 = r7.getCellLocation()
                boolean r2 = r1 instanceof android.telephony.cdma.CdmaCellLocation
                if (r2 == 0) goto L59
                android.telephony.cdma.CdmaCellLocation r1 = (android.telephony.cdma.CdmaCellLocation) r1
                int r2 = r1.getBaseStationId()
                int r1 = r1.getNetworkId()
                goto L6a
            L59:
                boolean r2 = r1 instanceof android.telephony.gsm.GsmCellLocation
                if (r2 == 0) goto L68
                android.telephony.gsm.GsmCellLocation r1 = (android.telephony.gsm.GsmCellLocation) r1
                int r2 = r1.getCid()
                int r1 = r1.getLac()
                goto L6a
            L68:
                r1 = r4
                r2 = r1
            L6a:
                int r3 = android.os.Build.VERSION.SDK_INT
                r5 = 17
                if (r3 < r5) goto L93
                java.util.List r7 = r7.getAllCellInfo()
                java.util.Iterator r7 = r7.iterator()
            L78:
                boolean r3 = r7.hasNext()
                if (r3 == 0) goto L8d
                java.lang.Object r3 = r7.next()
                android.telephony.CellInfo r3 = (android.telephony.CellInfo) r3
                if (r3 == 0) goto L78
                boolean r5 = r3.isRegistered()
                if (r5 == 0) goto L78
                r0 = r3
            L8d:
                if (r0 == 0) goto L93
                int r4 = a(r0)
            L93:
                com.kwad.sdk.k.a.b r7 = new com.kwad.sdk.k.a.b
                r7.<init>(r2, r1, r4)
                com.kwad.sdk.utils.ax.a.aJk = r7
            L9a:
                com.kwad.sdk.k.a.b r7 = com.kwad.sdk.utils.ax.a.aJk
                return r7
            L9d:
                com.kwad.sdk.k.a.b r7 = com.kwad.sdk.utils.ax.a.aJk
                return r7
        }

        @Override
        public final com.kwad.sdk.k.a.b bP(android.content.Context r1) {
                r0 = this;
                com.kwad.sdk.k.a.b r1 = r0.cP(r1)
                return r1
        }
    }

    static class b implements android.hardware.SensorEventListener {
        protected boolean aIe;
        private com.kwad.sdk.utils.ax.d aJl;
        private com.kwad.sdk.utils.ax.d aJm;
        private com.kwad.sdk.utils.ax.d aJn;
        private boolean aJo;




        public b(android.content.Context r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.aIe = r0
                r1.aJo = r0
                if (r0 != 0) goto L12
                r1.cQ(r2)     // Catch: java.lang.Exception -> Le
                return
            Le:
                r2 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            L12:
                return
        }

        private java.util.List<com.kwad.sdk.k.a.e> Js() {
                r4 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                com.kwad.sdk.utils.ax$d r1 = r4.aJl
                if (r1 == 0) goto L1a
                android.hardware.SensorEvent r1 = r1.Jt()
                com.kwad.sdk.utils.ax$d r2 = r4.aJl
                long r2 = r2.getTimestamp()
                com.kwad.sdk.k.a.e r1 = com.kwad.sdk.k.a.e.a(r1, r2)
                r0.add(r1)
            L1a:
                com.kwad.sdk.utils.ax$d r1 = r4.aJm
                if (r1 == 0) goto L2f
                android.hardware.SensorEvent r1 = r1.Jt()
                com.kwad.sdk.utils.ax$d r2 = r4.aJm
                long r2 = r2.getTimestamp()
                com.kwad.sdk.k.a.e r1 = com.kwad.sdk.k.a.e.a(r1, r2)
                r0.add(r1)
            L2f:
                com.kwad.sdk.utils.ax$d r1 = r4.aJn
                if (r1 == 0) goto L44
                android.hardware.SensorEvent r1 = r1.Jt()
                com.kwad.sdk.utils.ax$d r2 = r4.aJn
                long r2 = r2.getTimestamp()
                com.kwad.sdk.k.a.e r1 = com.kwad.sdk.k.a.e.a(r1, r2)
                r0.add(r1)
            L44:
                return r0
        }

        private static boolean a(android.hardware.SensorManager r1, int r2, android.hardware.SensorEventListener r3) {
                android.hardware.Sensor r2 = r1.getDefaultSensor(r2)
                if (r2 != 0) goto L8
                r1 = 0
                return r1
            L8:
                r0 = 3
                boolean r1 = r1.registerListener(r3, r2, r0)
                return r1
        }

        private void cQ(android.content.Context r5) {
                r4 = this;
                java.lang.String r0 = "sensor"
                java.lang.Object r5 = r5.getSystemService(r0)     // Catch: java.lang.Exception -> L9
                android.hardware.SensorManager r5 = (android.hardware.SensorManager) r5     // Catch: java.lang.Exception -> L9
                goto La
            L9:
                r5 = 0
            La:
                if (r5 != 0) goto Ld
                return
            Ld:
                r0 = 1
                boolean r0 = a(r5, r0, r4)
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "accelerometerSensorAvailable: "
                r1.<init>(r2)
                r1.append(r0)
                java.lang.String r0 = r1.toString()
                java.lang.String r1 = "SensitiveInfoCollectors"
                com.kwad.sdk.core.e.c.d(r1, r0)
                r0 = 4
                boolean r0 = a(r5, r0, r4)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                java.lang.String r3 = "gyroscopeSensorAvailable : "
                r2.<init>(r3)
                r2.append(r0)
                java.lang.String r0 = r2.toString()
                com.kwad.sdk.core.e.c.d(r1, r0)
                r0 = 9
                boolean r5 = a(r5, r0, r4)
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r2 = "gravitySensorAvailable : "
                r0.<init>(r2)
                r0.append(r5)
                java.lang.String r5 = r0.toString()
                com.kwad.sdk.core.e.c.d(r1, r5)
                return
        }

        private synchronized java.util.List<com.kwad.sdk.k.a.e> cR(android.content.Context r5) {
                r4 = this;
                monitor-enter(r4)
                java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L4b
                r0.<init>()     // Catch: java.lang.Throwable -> L4b
                java.lang.String r1 = "sensor"
                java.lang.Object r5 = r5.getSystemService(r1)     // Catch: java.lang.Throwable -> L4b
                android.hardware.SensorManager r5 = (android.hardware.SensorManager) r5     // Catch: java.lang.Throwable -> L4b
                java.util.concurrent.CountDownLatch r1 = new java.util.concurrent.CountDownLatch     // Catch: java.lang.Throwable -> L4b
                r2 = 3
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L4b
                r2 = 1
                com.kwad.sdk.utils.ax$b$1 r3 = new com.kwad.sdk.utils.ax$b$1     // Catch: java.lang.Throwable -> L4b
                r3.<init>(r4, r0, r1, r5)     // Catch: java.lang.Throwable -> L4b
                boolean r2 = a(r5, r2, r3)     // Catch: java.lang.Throwable -> L4b
                if (r2 != 0) goto L23
                r1.countDown()     // Catch: java.lang.Throwable -> L4b
            L23:
                r2 = 4
                com.kwad.sdk.utils.ax$b$2 r3 = new com.kwad.sdk.utils.ax$b$2     // Catch: java.lang.Throwable -> L4b
                r3.<init>(r4, r0, r1, r5)     // Catch: java.lang.Throwable -> L4b
                boolean r2 = a(r5, r2, r3)     // Catch: java.lang.Throwable -> L4b
                if (r2 != 0) goto L32
                r1.countDown()     // Catch: java.lang.Throwable -> L4b
            L32:
                r2 = 9
                com.kwad.sdk.utils.ax$b$3 r3 = new com.kwad.sdk.utils.ax$b$3     // Catch: java.lang.Throwable -> L4b
                r3.<init>(r4, r0, r1, r5)     // Catch: java.lang.Throwable -> L4b
                boolean r5 = a(r5, r2, r3)     // Catch: java.lang.Throwable -> L4b
                if (r5 != 0) goto L42
                r1.countDown()     // Catch: java.lang.Throwable -> L4b
            L42:
                r2 = 2
                java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.InterruptedException -> L49 java.lang.Throwable -> L4b
                r1.await(r2, r5)     // Catch: java.lang.InterruptedException -> L49 java.lang.Throwable -> L4b
            L49:
                monitor-exit(r4)
                return r0
            L4b:
                r5 = move-exception
                monitor-exit(r4)
                throw r5
        }

        private java.util.List<com.kwad.sdk.k.a.e> cT(android.content.Context r2) {
                r1 = this;
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                boolean r0 = r1.aJo
                if (r0 == 0) goto Ld
                java.util.List r2 = r1.cR(r2)
                return r2
            Ld:
                java.util.List r2 = r1.Js()
                return r2
        }

        public final java.util.List<com.kwad.sdk.k.a.e> cS(android.content.Context r3) {
                r2 = this;
                boolean r0 = r2.aIe
                r1 = 0
                if (r0 == 0) goto L6
                return r1
            L6:
                java.util.List r3 = r2.cT(r3)     // Catch: java.lang.Throwable -> Lb
                return r3
            Lb:
                r3 = move-exception
                com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
                return r1
        }

        @Override
        public final void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSensorChanged(android.hardware.SensorEvent r3) {
                r2 = this;
                if (r3 != 0) goto L3
                return
            L3:
                android.hardware.Sensor r0 = r3.sensor
                int r0 = r0.getType()
                r1 = 1
                if (r0 == r1) goto L24
                r1 = 4
                if (r0 == r1) goto L1c
                r1 = 9
                if (r0 == r1) goto L14
                goto L1b
            L14:
                com.kwad.sdk.utils.ax$d r0 = new com.kwad.sdk.utils.ax$d
                r0.<init>(r3)
                r2.aJn = r0
            L1b:
                return
            L1c:
                com.kwad.sdk.utils.ax$d r0 = new com.kwad.sdk.utils.ax$d
                r0.<init>(r3)
                r2.aJm = r0
                return
            L24:
                com.kwad.sdk.utils.ax$d r0 = new com.kwad.sdk.utils.ax$d
                r0.<init>(r3)
                r2.aJl = r0
                return
        }
    }

    static abstract class c implements android.hardware.SensorEventListener {
        c() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
                r0 = this;
                return
        }
    }

    static class d {
        private android.hardware.SensorEvent aJs;
        private long timestamp;

        public d(android.hardware.SensorEvent r3) {
                r2 = this;
                r2.<init>()
                r2.aJs = r3
                long r0 = java.lang.System.currentTimeMillis()
                r2.timestamp = r0
                return
        }

        public final android.hardware.SensorEvent Jt() {
                r1 = this;
                android.hardware.SensorEvent r0 = r1.aJs
                return r0
        }

        public final long getTimestamp() {
                r2 = this;
                long r0 = r2.timestamp
                return r0
        }
    }

    static class e extends com.kwad.sdk.utils.j<com.kwad.sdk.k.a.f> {
        public e(boolean r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private static com.kwad.sdk.k.a.f cU(android.content.Context r2) {
                com.kwad.sdk.k.a.f r0 = new com.kwad.sdk.k.a.f
                r0.<init>()
                int r1 = com.kwad.sdk.utils.au.cD(r2)
                r0.aGx = r1
                int r2 = com.kwad.sdk.utils.au.cB(r2)
                r0.aGw = r2
                return r0
        }

        @Override
        protected final com.kwad.sdk.k.a.f bP(android.content.Context r1) {
                r0 = this;
                com.kwad.sdk.k.a.f r1 = cU(r1)
                return r1
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.sdk.utils.ax.aJi = r0
            return
    }

    public static com.kwad.sdk.k.a.b Hl() {
            boolean r0 = Jr()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r0 = "baseStationEnable"
            java.lang.Object r0 = fG(r0)
            com.kwad.sdk.k.a.b r0 = (com.kwad.sdk.k.a.b) r0
            return r0
    }

    public static com.kwad.sdk.k.a.f Hm() {
            boolean r0 = Jr()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.lang.String r0 = "simCardInfoEnable"
            java.lang.Object r0 = fG(r0)
            com.kwad.sdk.k.a.f r0 = (com.kwad.sdk.k.a.f) r0
            return r0
    }

    public static java.util.List<com.kwad.sdk.k.a.e> Jm() {
            boolean r0 = com.kwad.sdk.utils.o.HZ()
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            android.content.Context r0 = com.kwad.sdk.service.ServiceProvider.getContext()
            android.content.Context r0 = r0.getApplicationContext()
            com.kwad.sdk.utils.ax$b r1 = com.kwad.sdk.utils.ax.aJj
            if (r1 != 0) goto L1b
            com.kwad.sdk.utils.ax$b r1 = new com.kwad.sdk.utils.ax$b
            r1.<init>(r0)
            com.kwad.sdk.utils.ax.aJj = r1
        L1b:
            com.kwad.sdk.utils.ax$b r1 = com.kwad.sdk.utils.ax.aJj
            java.util.List r0 = r1.cS(r0)
            return r0
    }

    private static boolean Jr() {
            android.content.Context r0 = com.kwad.sdk.utils.ax.aJh
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    private static <T> com.kwad.sdk.utils.j<T> fF(java.lang.String r1) {
            java.util.Map<java.lang.String, com.kwad.sdk.utils.j> r0 = com.kwad.sdk.utils.ax.aJi     // Catch: java.lang.Exception -> L9
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L9
            com.kwad.sdk.utils.j r1 = (com.kwad.sdk.utils.j) r1     // Catch: java.lang.Exception -> L9
            goto La
        L9:
            r1 = 0
        La:
            return r1
    }

    private static <T> T fG(java.lang.String r1) {
            com.kwad.sdk.utils.j r1 = fF(r1)
            if (r1 == 0) goto Ld
            android.content.Context r0 = com.kwad.sdk.utils.ax.aJh
            java.lang.Object r1 = r1.bO(r0)
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public static void init(android.content.Context r5) {
            if (r5 != 0) goto L3
            return
        L3:
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0
            if (r0 != 0) goto L15
            java.lang.String r5 = "SensitiveInfoCollectors"
            java.lang.String r0 = "init sdkConfigProvider is null"
            com.kwad.sdk.core.e.c.d(r5, r0)
            return
        L15:
            boolean r1 = Jr()
            java.lang.String r2 = "simCardInfoEnable"
            java.lang.String r3 = "baseStationEnable"
            if (r1 == 0) goto L4a
            java.util.Map<java.lang.String, com.kwad.sdk.utils.j> r5 = com.kwad.sdk.utils.ax.aJi
            boolean r5 = r5.containsKey(r3)
            if (r5 == 0) goto L34
            boolean r5 = r0.xw()
            com.kwad.sdk.utils.j r1 = fF(r3)
            if (r1 == 0) goto L34
            r1.aO(r5)
        L34:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.j> r5 = com.kwad.sdk.utils.ax.aJi
            boolean r5 = r5.containsKey(r2)
            if (r5 == 0) goto L6c
            boolean r5 = r0.xu()
            com.kwad.sdk.utils.j r0 = fF(r2)
            if (r0 == 0) goto L49
            r0.aO(r5)
        L49:
            return
        L4a:
            android.content.Context r5 = r5.getApplicationContext()
            com.kwad.sdk.utils.ax.aJh = r5
            java.util.Map<java.lang.String, com.kwad.sdk.utils.j> r5 = com.kwad.sdk.utils.ax.aJi
            com.kwad.sdk.utils.ax$a r1 = new com.kwad.sdk.utils.ax$a
            boolean r4 = r0.xw()
            r1.<init>(r4)
            r5.put(r3, r1)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.j> r5 = com.kwad.sdk.utils.ax.aJi
            com.kwad.sdk.utils.ax$e r1 = new com.kwad.sdk.utils.ax$e
            boolean r0 = r0.xu()
            r1.<init>(r0)
            r5.put(r2, r1)
        L6c:
            return
    }
}
