package com.tkay.basead.c;

public abstract class h implements android.hardware.SensorEventListener {
    public static final int a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public float d;
    public float e;
    public float f;
    public long g;
    private int h;
    private long i;

    public h() {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.d = r0
            r3.e = r0
            r3.f = r0
            r0 = 0
            r3.g = r0
            r2 = 0
            r3.h = r2
            r3.i = r0
            r0 = 10
            r3.h = r0
            r0 = 5000(0x1388, double:2.4703E-320)
            r3.i = r0
            return
    }

    public final void a(int r1, long r2) {
            r0 = this;
            r0.h = r1
            r0.i = r2
            return
    }

    public abstract boolean a();

    @Override
    public void onAccuracyChanged(android.hardware.Sensor r1, int r2) {
            r0 = this;
            return
    }

    @Override
    public void onSensorChanged(android.hardware.SensorEvent r9) {
            r8 = this;
            float[] r9 = r9.values
            r0 = 0
            r0 = r9[r0]
            float r0 = -r0
            r1 = 1
            r1 = r9[r1]
            float r1 = -r1
            r2 = 2
            r9 = r9[r2]
            float r9 = -r9
            float r2 = r8.d
            r3 = 0
            int r4 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r4 == 0) goto L22
            float r2 = r0 - r2
            float r2 = java.lang.Math.abs(r2)
            int r4 = r8.h
            float r4 = (float) r4
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 > 0) goto L48
        L22:
            float r2 = r8.e
            int r4 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r4 == 0) goto L35
            float r2 = r1 - r2
            float r2 = java.lang.Math.abs(r2)
            int r4 = r8.h
            float r4 = (float) r4
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 > 0) goto L48
        L35:
            float r2 = r8.f
            int r3 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r3 == 0) goto L5e
            float r2 = r9 - r2
            float r2 = java.lang.Math.abs(r2)
            int r3 = r8.h
            float r3 = (float) r3
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 <= 0) goto L5e
        L48:
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r8.g
            long r4 = r2 - r4
            long r6 = r8.i
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L5e
            boolean r4 = r8.a()
            if (r4 == 0) goto L5e
            r8.g = r2
        L5e:
            r8.d = r0
            r8.e = r1
            r8.f = r9
            return
    }
}
