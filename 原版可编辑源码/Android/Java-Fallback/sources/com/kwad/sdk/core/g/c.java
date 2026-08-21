package com.kwad.sdk.core.g;

public final class c {
    private volatile boolean auH;
    private long auI;
    private double auJ;
    private double[] auK;
    private double[] auL;
    private com.kwad.sdk.core.g.a auM;
    private com.kwad.sdk.core.g.c.a auN;
    private com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo rotateInfo;

    class a implements android.hardware.SensorEventListener {
        final com.kwad.sdk.core.g.c auO;

        private a(com.kwad.sdk.core.g.c r1) {
                r0 = this;
                r0.auO = r1
                r0.<init>()
                return
        }

        a(com.kwad.sdk.core.g.c r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public final void onSensorChanged(android.hardware.SensorEvent r14) {
                r13 = this;
                float[] r0 = r14.values
                r1 = 0
                r0 = r0[r1]
                float[] r2 = r14.values
                r3 = 1
                r2 = r2[r3]
                float[] r4 = r14.values
                r5 = 2
                r4 = r4[r5]
                com.kwad.sdk.core.g.c r6 = r13.auO
                long r6 = com.kwad.sdk.core.g.c.a(r6)
                r8 = 0
                int r6 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
                if (r6 == 0) goto L69
                long r6 = r14.timestamp
                com.kwad.sdk.core.g.c r8 = r13.auO
                long r8 = com.kwad.sdk.core.g.c.a(r8)
                long r6 = r6 - r8
                double r6 = (double) r6
                com.kwad.sdk.core.g.c r8 = r13.auO
                double r8 = com.kwad.sdk.core.g.c.b(r8)
                double r6 = r6 * r8
                com.kwad.sdk.core.g.c r8 = r13.auO
                double[] r8 = com.kwad.sdk.core.g.c.c(r8)
                r9 = r8[r1]
                double r11 = (double) r0
                double r11 = r11 * r6
                double r11 = java.lang.Math.toDegrees(r11)
                double r9 = r9 + r11
                r8[r1] = r9
                com.kwad.sdk.core.g.c r0 = r13.auO
                double[] r0 = com.kwad.sdk.core.g.c.c(r0)
                r8 = r0[r3]
                double r1 = (double) r2
                double r1 = r1 * r6
                double r1 = java.lang.Math.toDegrees(r1)
                double r8 = r8 + r1
                r0[r3] = r8
                com.kwad.sdk.core.g.c r0 = r13.auO
                double[] r0 = com.kwad.sdk.core.g.c.c(r0)
                r1 = r0[r5]
                double r3 = (double) r4
                double r3 = r3 * r6
                double r3 = java.lang.Math.toDegrees(r3)
                double r1 = r1 + r3
                r0[r5] = r1
                com.kwad.sdk.core.g.c r0 = r13.auO
                com.kwad.sdk.core.g.c.d(r0)
                com.kwad.sdk.core.g.c r0 = r13.auO
                com.kwad.sdk.core.g.c.e(r0)
            L69:
                com.kwad.sdk.core.g.c r0 = r13.auO
                long r1 = r14.timestamp
                com.kwad.sdk.core.g.c.a(r0, r1)
                return
        }
    }

    public c(com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.auH = r0
            r0 = 0
            r2.auI = r0
            r0 = 4472406533493227520(0x3e112e0be0000000, double:9.999999717180685E-10)
            r2.auJ = r0
            r0 = 3
            double[] r1 = new double[r0]
            r1 = {x0024: FILL_ARRAY_DATA , data: [0, 0, 0} // fill-array
            r2.auK = r1
            double[] r0 = new double[r0]
            r0 = {x0034: FILL_ARRAY_DATA , data: [0, 0, 0} // fill-array
            r2.auL = r0
            r2.rotateInfo = r3
            return
    }

    private void CH() {
            r6 = this;
            boolean r0 = r6.auH
            if (r0 != 0) goto L5
            return
        L5:
            double[] r0 = r6.auL
            r1 = 0
            r2 = r0[r1]
            double r2 = java.lang.Math.abs(r2)
            double[] r0 = r6.auK
            r4 = r0[r1]
            double r4 = java.lang.Math.abs(r4)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L22
            double[] r0 = r6.auK
            double[] r2 = r6.auL
            r3 = r2[r1]
            r0[r1] = r3
        L22:
            double[] r0 = r6.auL
            r1 = 1
            r2 = r0[r1]
            double r2 = java.lang.Math.abs(r2)
            double[] r0 = r6.auK
            r4 = r0[r1]
            double r4 = java.lang.Math.abs(r4)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L3f
            double[] r0 = r6.auK
            double[] r2 = r6.auL
            r3 = r2[r1]
            r0[r1] = r3
        L3f:
            double[] r0 = r6.auL
            r1 = 2
            r2 = r0[r1]
            double r2 = java.lang.Math.abs(r2)
            double[] r0 = r6.auK
            r4 = r0[r1]
            double r4 = java.lang.Math.abs(r4)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L5c
            double[] r0 = r6.auK
            double[] r2 = r6.auL
            r3 = r2[r1]
            r0[r1] = r3
        L5c:
            return
    }

    private void CI() {
            r5 = this;
            boolean r0 = r5.auH
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = r5.rotateInfo
            if (r0 != 0) goto La
            return
        La:
            com.kwad.sdk.core.g.a r1 = r5.auM
            if (r1 == 0) goto L62
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r0 = r0.x
            int r0 = r0.rotateDegree
            double r0 = (double) r0
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r2 = r5.rotateInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r2 = r2.x
            int r2 = r2.direction
            r3 = 0
            boolean r0 = r5.a(r3, r0, r2)
            if (r0 != 0) goto L48
            r0 = 1
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r1 = r5.rotateInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r1 = r1.y
            int r1 = r1.rotateDegree
            double r1 = (double) r1
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r4 = r5.rotateInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r4 = r4.y
            int r4 = r4.direction
            boolean r0 = r5.a(r0, r1, r4)
            if (r0 != 0) goto L48
            r0 = 2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r1 = r5.rotateInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r1 = r1.z
            int r1 = r1.rotateDegree
            double r1 = (double) r1
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r4 = r5.rotateInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateDegreeInfo r4 = r4.z
            int r4 = r4.direction
            boolean r0 = r5.a(r0, r1, r4)
            if (r0 == 0) goto L62
        L48:
            r5.auH = r3
            com.kwad.sdk.core.g.a r0 = r5.auM
            java.lang.String r1 = r5.CJ()
            r0.ab(r1)
            r0 = 3
            double[] r1 = new double[r0]
            r1 = {x0064: FILL_ARRAY_DATA , data: [0, 0, 0} // fill-array
            r5.auL = r1
            double[] r0 = new double[r0]
            r0 = {x0074: FILL_ARRAY_DATA , data: [0, 0, 0} // fill-array
            r5.auK = r0
        L62:
            return
    }

    private java.lang.String CJ() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "{\"x\": "
            r0.<init>(r1)
            double[] r1 = r4.auK
            r2 = 0
            r2 = r1[r2]
            r0.append(r2)
            java.lang.String r1 = ",\"y\":"
            r0.append(r1)
            double[] r1 = r4.auK
            r2 = 1
            r2 = r1[r2]
            r0.append(r2)
            java.lang.String r1 = ",\"z\":"
            r0.append(r1)
            double[] r1 = r4.auK
            r2 = 2
            r2 = r1[r2]
            r0.append(r2)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    static long a(com.kwad.sdk.core.g.c r2) {
            long r0 = r2.auI
            return r0
    }

    static long a(com.kwad.sdk.core.g.c r0, long r1) {
            r0.auI = r1
            return r1
    }

    private boolean a(int r7, double r8, int r10) {
            r6 = this;
            r0 = 0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r3 = 0
            if (r2 <= 0) goto L2b
            double[] r2 = r6.auL
            r4 = r2[r7]
            double r4 = java.lang.Math.abs(r4)
            int r8 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r8 < 0) goto L2b
            double[] r8 = r6.auL
            r4 = r8[r7]
            int r8 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r9 = 1
            if (r8 <= 0) goto L1e
            if (r10 == r9) goto L29
        L1e:
            double[] r8 = r6.auL
            r7 = r8[r7]
            int r7 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r7 >= 0) goto L2a
            r7 = 2
            if (r10 != r7) goto L2a
        L29:
            return r3
        L2a:
            return r9
        L2b:
            return r3
    }

    static double b(com.kwad.sdk.core.g.c r2) {
            double r0 = r2.auJ
            return r0
    }

    static double[] c(com.kwad.sdk.core.g.c r0) {
            double[] r0 = r0.auL
            return r0
    }

    static void d(com.kwad.sdk.core.g.c r0) {
            r0.CH()
            return
    }

    static void e(com.kwad.sdk.core.g.c r0) {
            r0.CI()
            return
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

    public final void a(com.kwad.sdk.core.g.a r1) {
            r0 = this;
            r0.auM = r1
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo r1) {
            r0 = this;
            r0.rotateInfo = r1
            return
    }

    public final void bg(android.content.Context r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "sensor"
            java.lang.Object r4 = r4.getSystemService(r0)
            android.hardware.SensorManager r4 = (android.hardware.SensorManager) r4
            r0 = 4
            android.hardware.Sensor r0 = r4.getDefaultSensor(r0)
            if (r0 != 0) goto L1a
            com.kwad.sdk.core.g.a r4 = r3.auM
            if (r4 == 0) goto L19
            r4.lk()
        L19:
            return
        L1a:
            com.kwad.sdk.core.g.c$a r1 = r3.auN
            if (r1 != 0) goto L26
            com.kwad.sdk.core.g.c$a r1 = new com.kwad.sdk.core.g.c$a
            r2 = 0
            r1.<init>(r3, r2)
            r3.auN = r1
        L26:
            com.kwad.sdk.core.g.c$a r1 = r3.auN
            r2 = 2
            r4.registerListener(r1, r0, r2)
            return
    }

    public final synchronized void bh(android.content.Context r2) {
            r1 = this;
            monitor-enter(r1)
            if (r2 == 0) goto L1d
            com.kwad.sdk.core.g.c$a r0 = r1.auN     // Catch: java.lang.Throwable -> L1a
            if (r0 != 0) goto L8
            goto L1d
        L8:
            java.lang.String r0 = "sensor"
            java.lang.Object r2 = r2.getSystemService(r0)     // Catch: java.lang.Throwable -> L1a
            android.hardware.SensorManager r2 = (android.hardware.SensorManager) r2     // Catch: java.lang.Throwable -> L1a
            com.kwad.sdk.core.g.c$a r0 = r1.auN     // Catch: java.lang.Throwable -> L1a
            r2.unregisterListener(r0)     // Catch: java.lang.Throwable -> L1a
            r2 = 0
            r1.auN = r2     // Catch: java.lang.Throwable -> L1a
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
}
