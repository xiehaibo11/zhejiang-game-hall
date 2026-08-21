package com.reyun.tracking.a;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.util.Log;
import org.json.JSONException;

class d implements SensorEventListener {
    private float a;
    private float b;
    private float c;
    private long d;
    private long e;
    private long f;
    private g g;

    private d() {
        this.d = 0L;
        this.e = 0L;
        this.f = 0L;
    }

    d(b bVar) {
        this();
    }

    private void a() {
        com.reyun.tracking.sdk.a.a().a(new e(this));
    }

    @Override
    public void onAccuracyChanged(Sensor sensor, int i) {
        Log.e("Sensor", "onAccuracyChanged:" + i);
    }

    @Override
    public void onSensorChanged(SensorEvent sensorEvent) {
        if (this.d == 0) {
            this.d = System.currentTimeMillis();
        }
        if (this.f == 0) {
            this.f = System.currentTimeMillis();
        }
        if (this.e == 0) {
            this.e = System.currentTimeMillis();
        }
        if (this.g == null) {
            this.g = new g(null);
        }
        if (System.currentTimeMillis() - this.e >= 3000) {
            try {
                if (Math.abs(sensorEvent.values[0]) + Math.abs(sensorEvent.values[1]) + Math.abs(sensorEvent.values[2]) < 0.004f || (sensorEvent.values[0] == this.a && sensorEvent.values[1] == this.b && sensorEvent.values[2] == this.c)) {
                    this.g.a(0);
                } else {
                    this.g.a(1);
                }
            } catch (JSONException unused) {
            }
            this.e = System.currentTimeMillis();
        }
        if (System.currentTimeMillis() - this.d >= 180000) {
            this.g.a();
            this.d = System.currentTimeMillis();
        }
        if (System.currentTimeMillis() - this.f >= 1800000) {
            a();
            this.f = System.currentTimeMillis();
            this.g.b();
        }
        this.a = sensorEvent.values[0];
        this.b = sensorEvent.values[1];
        this.c = sensorEvent.values[2];
    }
}
