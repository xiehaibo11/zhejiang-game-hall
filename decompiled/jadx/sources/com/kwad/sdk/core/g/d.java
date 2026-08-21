package com.kwad.sdk.core.g;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import com.kwad.sdk.components.DevelopMangerComponents;
import java.util.Random;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    private static double auQ = 9.81d;
    private static double auR = 0.01d;
    private volatile boolean auH = true;
    private float auP;
    private b auS;
    private a auT;

    class a implements SensorEventListener {
        private Random apU;
        private boolean auV;
        private final float[] auU = {0.0f, 0.0f, 9.8f};
        private final float[] auW = {0.0f, 0.0f, 0.0f};

        public a() {
            this.auV = false;
            if (((DevelopMangerComponents) com.kwad.sdk.components.c.f(DevelopMangerComponents.class)) != null) {
                this.auV = false;
            }
        }

        private void CM() {
            if (this.apU == null) {
                this.apU = new Random();
            }
            if (this.apU.nextInt(100) == 1) {
                a(this.auU);
            }
        }

        private void a(float[] fArr) {
            b(fArr);
            float f = fArr[0];
            float f2 = fArr[1];
            float f3 = fArr[2];
            double dAbs = Math.abs(Math.sqrt((f * f) + (f2 * f2) + (f3 * f3)));
            if (Math.abs(dAbs - d.auQ) <= d.auR) {
                dAbs = Math.abs(dAbs - d.auQ);
            }
            if (!d.this.auH || dAbs < d.this.auP || d.this.auS == null) {
                return;
            }
            d.a(d.this, false);
            d.this.auS.a(dAbs);
        }

        private void b(float[] fArr) {
            float f = fArr[0] * 0.6f;
            float[] fArr2 = this.auW;
            fArr[0] = f + (fArr2[0] * 0.39999998f);
            fArr[1] = (fArr[1] * 0.6f) + (fArr2[1] * 0.39999998f);
            fArr[2] = (fArr[2] * 0.6f) + (fArr2[2] * 0.39999998f);
            System.arraycopy(fArr, 0, fArr2, 0, 3);
        }

        @Override // android.hardware.SensorEventListener
        public final void onAccuracyChanged(Sensor sensor, int i) {
        }

        @Override // android.hardware.SensorEventListener
        public final void onSensorChanged(SensorEvent sensorEvent) {
            a(sensorEvent.values);
            if (this.auV) {
                CM();
            }
        }
    }

    public d(float f) {
        if (f <= 0.0f) {
            this.auP = 5.0f;
        } else {
            this.auP = f;
        }
    }

    static /* synthetic */ boolean a(d dVar, boolean z) {
        dVar.auH = false;
        return false;
    }

    public final synchronized void CG() {
        this.auH = true;
    }

    public final void a(b bVar) {
        this.auS = bVar;
    }

    public final void bg(Context context) {
        String str;
        if (context == null) {
            str = "startDetect context is null";
        } else {
            SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
            Sensor defaultSensor = sensorManager.getDefaultSensor(10);
            if (defaultSensor != null) {
                if (this.auT == null) {
                    this.auT = new a();
                }
                try {
                    sensorManager.registerListener(this.auT, defaultSensor, 2);
                    return;
                } catch (Throwable unused) {
                    return;
                }
            }
            b bVar = this.auS;
            if (bVar != null) {
                bVar.aT();
            }
            str = "startDetect default linear acceleration is null";
        }
        com.kwad.sdk.core.e.c.d("ShakeDetector", str);
    }

    public final synchronized void bh(Context context) {
        if (context != null) {
            if (this.auT != null) {
                ((SensorManager) context.getSystemService("sensor")).unregisterListener(this.auT);
                this.auT = null;
            }
        }
    }

    public final void e(float f) {
        this.auP = f;
    }
}
