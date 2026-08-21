package com.kwad.sdk.core.g;

public final class d {
    private static double auQ = 9.81d;
    private static double auR = 0.01d;
    private volatile boolean auH;
    private float auP;
    private com.kwad.sdk.core.g.b auS;
    private com.kwad.sdk.core.g.d.a auT;

    class a implements android.hardware.SensorEventListener {
        private java.util.Random apU;
        private final float[] auU;
        private boolean auV;
        private final float[] auW;
        final com.kwad.sdk.core.g.d auX;

        public a(com.kwad.sdk.core.g.d r2) {
                r1 = this;
                r1.auX = r2
                r1.<init>()
                r2 = 3
                float[] r0 = new float[r2]
                r0 = {x0024: FILL_ARRAY_DATA , data: [0, 0, 1092406477} // fill-array
                r1.auU = r0
                r0 = 0
                r1.auV = r0
                float[] r2 = new float[r2]
                r2 = {x002e: FILL_ARRAY_DATA , data: [0, 0, 0} // fill-array
                r1.auW = r2
                java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r2 = com.kwad.sdk.components.DevelopMangerComponents.class
                com.kwad.sdk.components.a r2 = com.kwad.sdk.components.c.f(r2)
                com.kwad.sdk.components.DevelopMangerComponents r2 = (com.kwad.sdk.components.DevelopMangerComponents) r2
                if (r2 == 0) goto L23
                r1.auV = r0
            L23:
                return
        }

        private void CM() {
                r2 = this;
                java.util.Random r0 = r2.apU
                if (r0 != 0) goto Lb
                java.util.Random r0 = new java.util.Random
                r0.<init>()
                r2.apU = r0
            Lb:
                java.util.Random r0 = r2.apU
                r1 = 100
                int r0 = r0.nextInt(r1)
                r1 = 1
                if (r0 != r1) goto L1b
                float[] r0 = r2.auU
                r2.a(r0)
            L1b:
                return
        }

        private void a(float[] r8) {
                r7 = this;
                r7.b(r8)
                r0 = 0
                r1 = r8[r0]
                r2 = 1
                r2 = r8[r2]
                r3 = 2
                r8 = r8[r3]
                float r1 = r1 * r1
                float r2 = r2 * r2
                float r1 = r1 + r2
                float r8 = r8 * r8
                float r1 = r1 + r8
                double r1 = (double) r1
                double r1 = java.lang.Math.sqrt(r1)
                double r1 = java.lang.Math.abs(r1)
                double r3 = com.kwad.sdk.core.g.d.CK()
                double r3 = r1 - r3
                double r3 = java.lang.Math.abs(r3)
                double r5 = com.kwad.sdk.core.g.d.CL()
                int r8 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
                if (r8 > 0) goto L35
                double r3 = com.kwad.sdk.core.g.d.CK()
                double r1 = r1 - r3
                double r1 = java.lang.Math.abs(r1)
            L35:
                com.kwad.sdk.core.g.d r8 = r7.auX
                boolean r8 = com.kwad.sdk.core.g.d.a(r8)
                if (r8 == 0) goto L5e
                com.kwad.sdk.core.g.d r8 = r7.auX
                float r8 = com.kwad.sdk.core.g.d.b(r8)
                double r3 = (double) r8
                int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r8 < 0) goto L5e
                com.kwad.sdk.core.g.d r8 = r7.auX
                com.kwad.sdk.core.g.b r8 = com.kwad.sdk.core.g.d.c(r8)
                if (r8 == 0) goto L5e
                com.kwad.sdk.core.g.d r8 = r7.auX
                com.kwad.sdk.core.g.d.a(r8, r0)
                com.kwad.sdk.core.g.d r8 = r7.auX
                com.kwad.sdk.core.g.b r8 = com.kwad.sdk.core.g.d.c(r8)
                r8.a(r1)
            L5e:
                return
        }

        private void b(float[] r8) {
                r7 = this;
                r0 = 0
                r1 = r8[r0]
                r2 = 1058642330(0x3f19999a, float:0.6)
                float r1 = r1 * r2
                float[] r3 = r7.auW
                r4 = r3[r0]
                r5 = 1053609164(0x3ecccccc, float:0.39999998)
                float r4 = r4 * r5
                float r1 = r1 + r4
                r8[r0] = r1
                r1 = 1
                r4 = r8[r1]
                float r4 = r4 * r2
                r6 = r3[r1]
                float r6 = r6 * r5
                float r4 = r4 + r6
                r8[r1] = r4
                r1 = 2
                r4 = r8[r1]
                float r4 = r4 * r2
                r2 = r3[r1]
                float r2 = r2 * r5
                float r4 = r4 + r2
                r8[r1] = r4
                r1 = 3
                java.lang.System.arraycopy(r8, r0, r3, r0, r1)
                return
        }

        @Override
        public final void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSensorChanged(android.hardware.SensorEvent r1) {
                r0 = this;
                float[] r1 = r1.values
                r0.a(r1)
                boolean r1 = r0.auV
                if (r1 == 0) goto Lc
                r0.CM()
            Lc:
                return
        }
    }

    static {
            return
    }

    public d(float r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.auH = r0
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto L10
            r2 = 1084227584(0x40a00000, float:5.0)
            r1.auP = r2
            return
        L10:
            r1.auP = r2
            return
    }

    static double CK() {
            double r0 = com.kwad.sdk.core.g.d.auQ
            return r0
    }

    static double CL() {
            double r0 = com.kwad.sdk.core.g.d.auR
            return r0
    }

    static boolean a(com.kwad.sdk.core.g.d r0) {
            boolean r0 = r0.auH
            return r0
    }

    static boolean a(com.kwad.sdk.core.g.d r0, boolean r1) {
            r1 = 0
            r0.auH = r1
            return r1
    }

    static float b(com.kwad.sdk.core.g.d r0) {
            float r0 = r0.auP
            return r0
    }

    static com.kwad.sdk.core.g.b c(com.kwad.sdk.core.g.d r0) {
            com.kwad.sdk.core.g.b r0 = r0.auS
            return r0
    }

    public final synchronized void CG() {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.auH = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final void a(com.kwad.sdk.core.g.b r1) {
            r0 = this;
            r0.auS = r1
            return
    }

    public final void bg(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "ShakeDetector"
            if (r4 != 0) goto La
            java.lang.String r4 = "startDetect context is null"
        L6:
            com.kwad.sdk.core.e.c.d(r0, r4)
            return
        La:
            java.lang.String r1 = "sensor"
            java.lang.Object r4 = r4.getSystemService(r1)
            android.hardware.SensorManager r4 = (android.hardware.SensorManager) r4
            r1 = 10
            android.hardware.Sensor r1 = r4.getDefaultSensor(r1)
            if (r1 != 0) goto L24
            com.kwad.sdk.core.g.b r4 = r3.auS
            if (r4 == 0) goto L21
            r4.aT()
        L21:
            java.lang.String r4 = "startDetect default linear acceleration is null"
            goto L6
        L24:
            com.kwad.sdk.core.g.d$a r0 = r3.auT
            if (r0 != 0) goto L2f
            com.kwad.sdk.core.g.d$a r0 = new com.kwad.sdk.core.g.d$a
            r0.<init>(r3)
            r3.auT = r0
        L2f:
            com.kwad.sdk.core.g.d$a r0 = r3.auT     // Catch: java.lang.Throwable -> L35
            r2 = 2
            r4.registerListener(r0, r1, r2)     // Catch: java.lang.Throwable -> L35
        L35:
            return
    }

    public final synchronized void bh(android.content.Context r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto L1d
            com.kwad.sdk.core.g.d$a r0 = r1.auT     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto L8
            goto L1d
        L8:
            java.lang.String r0 = "sensor"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L1a
            android.hardware.SensorManager r2 = (android.hardware.SensorManager) r2     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.core.g.d$a r0 = r1.auT     // Catch: java.lang.Throwable -> L1a
            r2.unregisterListener(r0)     // Catch: java.lang.Throwable -> L1a
            r2 = 0
            r1.auT = r2     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r1)
            return
        L1a:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L1d:
            monitor-exit(r1)
            return
    }

    public final void e(float r1) {
            r0 = this;
            r0.auP = r1
            return
    }
}
