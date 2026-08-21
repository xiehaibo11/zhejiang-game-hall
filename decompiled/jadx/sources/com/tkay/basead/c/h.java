package com.tkay.basead.c;

import android.hardware.Sensor;
import android.hardware.SensorEventListener;

/* JADX INFO: loaded from: classes3.dex */
public abstract class h implements SensorEventListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f5617a = 0;
    public static final int b = 1;
    public static final int c = 2;
    public float d = 0.0f;
    public float e = 0.0f;
    public float f = 0.0f;
    public long g = 0;
    private int h;
    private long i;

    public abstract boolean a();

    @Override // android.hardware.SensorEventListener
    public void onAccuracyChanged(Sensor sensor, int i) {
    }

    public final void a(int i, long j) {
        this.h = i;
        this.i = j;
    }

    public h() {
        this.h = 0;
        this.i = 0L;
        this.h = 10;
        this.i = 5000L;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0048  */
    @Override // android.hardware.SensorEventListener
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void onSensorChanged(android.hardware.SensorEvent r9) {
        /*
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.basead.c.h.onSensorChanged(android.hardware.SensorEvent):void");
    }
}
