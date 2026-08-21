package com.tkay.expressad.shake;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import com.tkay.core.common.b.m;

/* JADX INFO: loaded from: classes3.dex */
public class a {
    private static volatile a c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Sensor f7087a;
    private SensorManager b;

    private a() {
        Context contextF = m.a().f();
        if (contextF != null) {
            try {
                if (this.b == null) {
                    this.b = (SensorManager) contextF.getSystemService("sensor");
                }
                if (this.f7087a == null) {
                    this.f7087a = this.b.getDefaultSensor(1);
                }
            } catch (Throwable unused) {
            }
        }
    }

    public static a a() {
        if (c == null) {
            synchronized (a.class) {
                if (c == null) {
                    c = new a();
                }
            }
        }
        return c;
    }

    public final boolean b() {
        return this.f7087a != null;
    }

    public final void a(SensorEventListener sensorEventListener) {
        try {
            this.b.registerListener(sensorEventListener, this.f7087a, 2);
        } catch (Throwable unused) {
        }
    }

    public final void b(SensorEventListener sensorEventListener) {
        SensorManager sensorManager = this.b;
        if (sensorManager != null) {
            try {
                sensorManager.unregisterListener(sensorEventListener);
            } catch (Throwable unused) {
            }
        }
    }
}
