package com.reyun.tracking.a;

class d implements android.hardware.SensorEventListener {
    private float a;
    private float b;
    private float c;
    private long d;
    private long e;
    private long f;
    private com.reyun.tracking.a.g g;

    private d() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.d = r0
            r2.e = r0
            r2.f = r0
            return
    }

    d(com.reyun.tracking.a.b r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private void a() {
            r2 = this;
            com.reyun.tracking.sdk.a r0 = com.reyun.tracking.sdk.a.a()
            com.reyun.tracking.a.e r1 = new com.reyun.tracking.a.e
            r1.<init>(r2)
            r0.a(r1)
            return
    }

    static void a(com.reyun.tracking.a.d r0) {
            r0.a()
            return
    }

    static com.reyun.tracking.a.g b(com.reyun.tracking.a.d r0) {
            com.reyun.tracking.a.g r0 = r0.g
            return r0
    }

    static long c(com.reyun.tracking.a.d r2) {
            long r0 = r2.f
            return r0
    }

    @Override
    public void onAccuracyChanged(android.hardware.Sensor r2, int r3) {
            r1 = this;
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "onAccuracyChanged:"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "Sensor"
            android.util.Log.e(r3, r2)
            return
    }

    @Override
    public void onSensorChanged(android.hardware.SensorEvent r9) {
            r8 = this;
            long r0 = r8.d
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto Le
            long r0 = java.lang.System.currentTimeMillis()
            r8.d = r0
        Le:
            long r0 = r8.f
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L1a
            long r0 = java.lang.System.currentTimeMillis()
            r8.f = r0
        L1a:
            long r0 = r8.e
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L26
            long r0 = java.lang.System.currentTimeMillis()
            r8.e = r0
        L26:
            com.reyun.tracking.a.g r0 = r8.g
            if (r0 != 0) goto L32
            com.reyun.tracking.a.g r0 = new com.reyun.tracking.a.g
            r1 = 0
            r0.<init>(r1)
            r8.g = r0
        L32:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r8.e
            long r0 = r0 - r2
            r2 = 3000(0xbb8, double:1.482E-320)
            r4 = 2
            r5 = 1
            r6 = 0
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 >= 0) goto L43
            goto L93
        L43:
            float[] r0 = r9.values
            r0 = r0[r6]
            float r0 = java.lang.Math.abs(r0)
            float[] r1 = r9.values
            r1 = r1[r5]
            float r1 = java.lang.Math.abs(r1)
            float r0 = r0 + r1
            float[] r1 = r9.values
            r1 = r1[r4]
            float r1 = java.lang.Math.abs(r1)
            float r0 = r0 + r1
            r1 = 998445679(0x3b83126f, float:0.004)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 < 0) goto L82
            float[] r0 = r9.values
            r0 = r0[r6]
            float r1 = r8.a
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L88
            float[] r0 = r9.values
            r0 = r0[r5]
            float r1 = r8.b
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L88
            float[] r0 = r9.values
            r0 = r0[r4]
            float r1 = r8.c
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L88
        L82:
            com.reyun.tracking.a.g r0 = r8.g     // Catch: org.json.JSONException -> L8d
            r0.a(r6)     // Catch: org.json.JSONException -> L8d
            goto L8d
        L88:
            com.reyun.tracking.a.g r0 = r8.g     // Catch: org.json.JSONException -> L8d
            r0.a(r5)     // Catch: org.json.JSONException -> L8d
        L8d:
            long r0 = java.lang.System.currentTimeMillis()
            r8.e = r0
        L93:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r8.d
            long r0 = r0 - r2
            r2 = 180000(0x2bf20, double:8.8932E-319)
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 < 0) goto Lac
            com.reyun.tracking.a.g r0 = r8.g
            r0.a()
            long r0 = java.lang.System.currentTimeMillis()
            r8.d = r0
        Lac:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r8.f
            long r0 = r0 - r2
            r2 = 1800000(0x1b7740, double:8.89318E-318)
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 < 0) goto Lc8
            r8.a()
            long r0 = java.lang.System.currentTimeMillis()
            r8.f = r0
            com.reyun.tracking.a.g r0 = r8.g
            r0.b()
        Lc8:
            float[] r0 = r9.values
            r0 = r0[r6]
            r8.a = r0
            float[] r0 = r9.values
            r0 = r0[r5]
            r8.b = r0
            float[] r9 = r9.values
            r9 = r9[r4]
            r8.c = r9
            return
    }
}
