package com.mbridge.msdk.shake;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;

public abstract class b implements SensorEventListener {
    private int a;
    private int b;
    public float d = 0.0f;
    public float e = 0.0f;
    public float f = 0.0f;
    public long g = 0;

    public abstract void a();

    @Override
    public void onAccuracyChanged(Sensor sensor, int i) {
    }

    public b(int i, int i2) {
        this.a = 0;
        this.b = 0;
        this.a = i;
        this.b = i2;
    }

    /* JADX WARN: Removed duplicated region for block: B:14:0x0048  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void onSensorChanged(SensorEvent sensorEvent) {
        float[] fArr = sensorEvent.values;
        float f = -fArr[0];
        float f2 = -fArr[1];
        float f3 = -fArr[2];
        float f4 = this.d;
        if (f4 == 0.0f || Math.abs(f - f4) <= this.a) {
            float f5 = this.e;
            if (f5 == 0.0f || Math.abs(f2 - f5) <= this.a) {
                float f6 = this.f;
                if (f6 != 0.0f && Math.abs(f3 - f6) > this.a) {
                    long jCurrentTimeMillis = System.currentTimeMillis();
                    if (jCurrentTimeMillis - this.g > this.b) {
                        this.g = jCurrentTimeMillis;
                        a();
                    }
                }
            }
        }
        this.d = f;
        this.e = f2;
        this.f = f3;
    }
}
