package com.loc;

public final class ey implements android.hardware.SensorEventListener {
    android.hardware.SensorManager a;
    android.hardware.Sensor b;
    android.hardware.Sensor c;
    android.hardware.Sensor d;
    public boolean e;
    public double f;
    public float g;
    android.os.Handler h;
    double i;
    double j;
    double k;
    double l;
    double[] m;
    volatile double n;
    long o;
    long p;
    final int q;
    final int r;
    private android.content.Context s;
    private float t;
    private float u;

    public ey(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.s = r0
            r4.a = r0
            r4.b = r0
            r4.c = r0
            r4.d = r0
            r0 = 0
            r4.e = r0
            r0 = 0
            r4.f = r0
            r2 = 0
            r4.g = r2
            r3 = 1149063168(0x447d5000, float:1013.25)
            r4.t = r3
            r4.u = r2
            android.os.Handler r2 = new android.os.Handler
            r2.<init>()
            r4.h = r2
            r4.i = r0
            r4.j = r0
            r4.k = r0
            r4.l = r0
            r2 = 3
            double[] r2 = new double[r2]
            r4.m = r2
            r4.n = r0
            r0 = 0
            r4.o = r0
            r4.p = r0
            r0 = 100
            r4.q = r0
            r0 = 30
            r4.r = r0
            r4.s = r5     // Catch: java.lang.Throwable -> L70
            android.hardware.SensorManager r0 = r4.a     // Catch: java.lang.Throwable -> L70
            if (r0 != 0) goto L53
            java.lang.String r0 = "sensor"
            java.lang.Object r5 = r5.getSystemService(r0)     // Catch: java.lang.Throwable -> L70
            android.hardware.SensorManager r5 = (android.hardware.SensorManager) r5     // Catch: java.lang.Throwable -> L70
            r4.a = r5     // Catch: java.lang.Throwable -> L70
        L53:
            android.hardware.SensorManager r5 = r4.a     // Catch: java.lang.Throwable -> L5c
            r0 = 6
            android.hardware.Sensor r5 = r5.getDefaultSensor(r0)     // Catch: java.lang.Throwable -> L5c
            r4.b = r5     // Catch: java.lang.Throwable -> L5c
        L5c:
            android.hardware.SensorManager r5 = r4.a     // Catch: java.lang.Throwable -> L66
            r0 = 11
            android.hardware.Sensor r5 = r5.getDefaultSensor(r0)     // Catch: java.lang.Throwable -> L66
            r4.c = r5     // Catch: java.lang.Throwable -> L66
        L66:
            android.hardware.SensorManager r5 = r4.a     // Catch: java.lang.Throwable -> L6f
            r0 = 1
            android.hardware.Sensor r5 = r5.getDefaultSensor(r0)     // Catch: java.lang.Throwable -> L6f
            r4.d = r5     // Catch: java.lang.Throwable -> L6f
        L6f:
            return
        L70:
            r5 = move-exception
            java.lang.String r0 = "AMapSensorManager"
            java.lang.String r1 = "<init>"
            com.loc.fr.a(r5, r0, r1)
            return
    }

    private void a(float[] r13) {
            r12 = this;
            double[] r0 = r12.m
            r1 = 0
            r2 = r0[r1]
            r4 = 4605380979056443392(0x3fe99999a0000000, double:0.800000011920929)
            double r2 = r2 * r4
            r6 = r13[r1]
            r7 = 1045220556(0x3e4ccccc, float:0.19999999)
            float r6 = r6 * r7
            double r8 = (double) r6
            double r2 = r2 + r8
            r0[r1] = r2
            r2 = 1
            r8 = r0[r2]
            double r8 = r8 * r4
            r3 = r13[r2]
            float r3 = r3 * r7
            double r10 = (double) r3
            double r8 = r8 + r10
            r0[r2] = r8
            r3 = 2
            r8 = r0[r3]
            double r8 = r8 * r4
            r4 = r13[r3]
            float r4 = r4 * r7
            double r4 = (double) r4
            double r8 = r8 + r4
            r0[r3] = r8
            r4 = r13[r1]
            double r4 = (double) r4
            r6 = r0[r1]
            double r4 = r4 - r6
            r12.i = r4
            r1 = r13[r2]
            double r4 = (double) r1
            r1 = r0[r2]
            double r4 = r4 - r1
            r12.j = r4
            r13 = r13[r3]
            double r1 = (double) r13
            r3 = r0[r3]
            double r1 = r1 - r3
            r12.k = r1
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r12.o
            long r2 = r0 - r2
            r4 = 100
            int r13 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r13 >= 0) goto L58
            return
        L58:
            double r2 = r12.i
            double r2 = r2 * r2
            double r4 = r12.j
            double r4 = r4 * r4
            double r2 = r2 + r4
            double r4 = r12.k
            double r4 = r4 * r4
            double r2 = r2 + r4
            double r2 = java.lang.Math.sqrt(r2)
            long r4 = r12.p
            r6 = 1
            long r4 = r4 + r6
            r12.p = r4
            r12.o = r0
            double r0 = r12.n
            double r0 = r0 + r2
            r12.n = r0
            long r0 = r12.p
            r2 = 30
            int r13 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r13 < 0) goto L90
            double r0 = r12.n
            long r2 = r12.p
            double r2 = (double) r2
            double r0 = r0 / r2
            r12.l = r0
            r0 = 0
            r12.n = r0
            r0 = 0
            r12.p = r0
        L90:
            return
    }

    private void b(float[] r3) {
            r2 = this;
            if (r3 == 0) goto L12
            float r0 = r2.t
            r1 = 0
            r3 = r3[r1]
            float r3 = android.hardware.SensorManager.getAltitude(r0, r3)
            float r3 = com.loc.fz.a(r3)
            double r0 = (double) r3
            r2.f = r0
        L12:
            return
    }

    private void c(float[] r3) {
            r2 = this;
            if (r3 == 0) goto L2b
            r0 = 9
            float[] r0 = new float[r0]
            android.hardware.SensorManager.getRotationMatrixFromVector(r0, r3)
            r3 = 3
            float[] r3 = new float[r3]
            android.hardware.SensorManager.getOrientation(r0, r3)
            r0 = 0
            r3 = r3[r0]
            double r0 = (double) r3
            double r0 = java.lang.Math.toDegrees(r0)
            float r3 = (float) r0
            r2.u = r3
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L20
            goto L23
        L20:
            r0 = 1135869952(0x43b40000, float:360.0)
            float r3 = r3 + r0
        L23:
            double r0 = (double) r3
            double r0 = java.lang.Math.floor(r0)
            float r3 = (float) r0
            r2.u = r3
        L2b:
            return
    }

    public final void a() {
            r5 = this;
            java.lang.String r0 = "AMapSensorManager"
            android.hardware.SensorManager r1 = r5.a
            if (r1 == 0) goto L48
            boolean r2 = r5.e
            if (r2 != 0) goto L48
            r2 = 1
            r5.e = r2
            r2 = 3
            android.hardware.Sensor r3 = r5.b     // Catch: java.lang.Throwable -> L1a
            if (r3 == 0) goto L20
            android.hardware.Sensor r3 = r5.b     // Catch: java.lang.Throwable -> L1a
            android.os.Handler r4 = r5.h     // Catch: java.lang.Throwable -> L1a
            r1.registerListener(r5, r3, r2, r4)     // Catch: java.lang.Throwable -> L1a
            goto L20
        L1a:
            r1 = move-exception
            java.lang.String r3 = "registerListener mPressure"
            com.loc.fr.a(r1, r0, r3)
        L20:
            android.hardware.Sensor r1 = r5.c     // Catch: java.lang.Throwable -> L2e
            if (r1 == 0) goto L34
            android.hardware.SensorManager r1 = r5.a     // Catch: java.lang.Throwable -> L2e
            android.hardware.Sensor r3 = r5.c     // Catch: java.lang.Throwable -> L2e
            android.os.Handler r4 = r5.h     // Catch: java.lang.Throwable -> L2e
            r1.registerListener(r5, r3, r2, r4)     // Catch: java.lang.Throwable -> L2e
            goto L34
        L2e:
            r1 = move-exception
            java.lang.String r3 = "registerListener mRotationVector"
            com.loc.fr.a(r1, r0, r3)
        L34:
            android.hardware.Sensor r1 = r5.d     // Catch: java.lang.Throwable -> L42
            if (r1 == 0) goto L41
            android.hardware.SensorManager r1 = r5.a     // Catch: java.lang.Throwable -> L42
            android.hardware.Sensor r3 = r5.d     // Catch: java.lang.Throwable -> L42
            android.os.Handler r4 = r5.h     // Catch: java.lang.Throwable -> L42
            r1.registerListener(r5, r3, r2, r4)     // Catch: java.lang.Throwable -> L42
        L41:
            return
        L42:
            r1 = move-exception
            java.lang.String r2 = "registerListener mAcceleroMeterVector"
            com.loc.fr.a(r1, r0, r2)
        L48:
            return
    }

    public final void b() {
            r2 = this;
            android.hardware.SensorManager r0 = r2.a
            if (r0 == 0) goto L2a
            boolean r1 = r2.e
            if (r1 == 0) goto L2a
            r1 = 0
            r2.e = r1
            android.hardware.Sensor r1 = r2.b     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto L14
            android.hardware.Sensor r1 = r2.b     // Catch: java.lang.Throwable -> L14
            r0.unregisterListener(r2, r1)     // Catch: java.lang.Throwable -> L14
        L14:
            android.hardware.Sensor r0 = r2.c     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L1f
            android.hardware.SensorManager r0 = r2.a     // Catch: java.lang.Throwable -> L1f
            android.hardware.Sensor r1 = r2.c     // Catch: java.lang.Throwable -> L1f
            r0.unregisterListener(r2, r1)     // Catch: java.lang.Throwable -> L1f
        L1f:
            android.hardware.Sensor r0 = r2.d     // Catch: java.lang.Throwable -> L2a
            if (r0 == 0) goto L2a
            android.hardware.SensorManager r0 = r2.a     // Catch: java.lang.Throwable -> L2a
            android.hardware.Sensor r1 = r2.d     // Catch: java.lang.Throwable -> L2a
            r0.unregisterListener(r2, r1)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    public final double c() {
            r2 = this;
            double r0 = r2.f
            return r0
    }

    public final float d() {
            r1 = this;
            float r0 = r1.u
            return r0
    }

    public final double e() {
            r2 = this;
            double r0 = r2.l
            return r0
    }

    public final void f() {
            r3 = this;
            r3.b()     // Catch: java.lang.Throwable -> L10
            r0 = 0
            r3.b = r0     // Catch: java.lang.Throwable -> L10
            r3.c = r0     // Catch: java.lang.Throwable -> L10
            r3.a = r0     // Catch: java.lang.Throwable -> L10
            r3.d = r0     // Catch: java.lang.Throwable -> L10
            r0 = 0
            r3.e = r0     // Catch: java.lang.Throwable -> L10
            return
        L10:
            r0 = move-exception
            java.lang.String r1 = "AMapSensorManager"
            java.lang.String r2 = "destroy"
            com.loc.fr.a(r0, r1, r2)
            return
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
            android.hardware.Sensor r0 = r3.sensor     // Catch: java.lang.Throwable -> L4a
            int r0 = r0.getType()     // Catch: java.lang.Throwable -> L4a
            r1 = 1
            if (r0 == r1) goto L3b
            r1 = 6
            if (r0 == r1) goto L24
            r1 = 11
            if (r0 == r1) goto L14
            goto L4a
        L14:
            android.hardware.Sensor r0 = r2.c     // Catch: java.lang.Throwable -> L23
            if (r0 == 0) goto L23
            float[] r3 = r3.values     // Catch: java.lang.Throwable -> L23
            java.lang.Object r3 = r3.clone()     // Catch: java.lang.Throwable -> L23
            float[] r3 = (float[]) r3     // Catch: java.lang.Throwable -> L23
            r2.c(r3)     // Catch: java.lang.Throwable -> L23
        L23:
            return
        L24:
            android.hardware.Sensor r0 = r2.b     // Catch: java.lang.Throwable -> L3a
            if (r0 == 0) goto L3a
            float[] r3 = r3.values     // Catch: java.lang.Throwable -> L3a
            java.lang.Object r3 = r3.clone()     // Catch: java.lang.Throwable -> L3a
            float[] r3 = (float[]) r3     // Catch: java.lang.Throwable -> L3a
            if (r3 == 0) goto L37
            r0 = 0
            r0 = r3[r0]     // Catch: java.lang.Throwable -> L3a
            r2.g = r0     // Catch: java.lang.Throwable -> L3a
        L37:
            r2.b(r3)     // Catch: java.lang.Throwable -> L3a
        L3a:
            return
        L3b:
            android.hardware.Sensor r0 = r2.d     // Catch: java.lang.Throwable -> L4a
            if (r0 == 0) goto L4a
            float[] r3 = r3.values     // Catch: java.lang.Throwable -> L4a
            java.lang.Object r3 = r3.clone()     // Catch: java.lang.Throwable -> L4a
            float[] r3 = (float[]) r3     // Catch: java.lang.Throwable -> L4a
            r2.a(r3)     // Catch: java.lang.Throwable -> L4a
        L4a:
            return
    }
}
