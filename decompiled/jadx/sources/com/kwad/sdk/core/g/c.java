package com.kwad.sdk.core.g;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import com.kwad.sdk.core.response.model.AdMatrixInfo;

/* JADX INFO: loaded from: classes2.dex */
public final class c {
    private volatile boolean auH = true;
    private long auI = 0;
    private double auJ = 9.999999717180685E-10d;
    private double[] auK = {0.0d, 0.0d, 0.0d};
    private double[] auL = {0.0d, 0.0d, 0.0d};
    private com.kwad.sdk.core.g.a auM;
    private a auN;
    private AdMatrixInfo.RotateInfo rotateInfo;

    class a implements SensorEventListener {
        private a() {
        }

        /* synthetic */ a(c cVar, byte b) {
            this();
        }

        @Override // android.hardware.SensorEventListener
        public final void onAccuracyChanged(Sensor sensor, int i) {
        }

        @Override // android.hardware.SensorEventListener
        public final void onSensorChanged(SensorEvent sensorEvent) {
            float f = sensorEvent.values[0];
            float f2 = sensorEvent.values[1];
            float f3 = sensorEvent.values[2];
            if (c.this.auI != 0) {
                double d = (sensorEvent.timestamp - c.this.auI) * c.this.auJ;
                double[] dArr = c.this.auL;
                dArr[0] = dArr[0] + Math.toDegrees(((double) f) * d);
                double[] dArr2 = c.this.auL;
                dArr2[1] = dArr2[1] + Math.toDegrees(((double) f2) * d);
                double[] dArr3 = c.this.auL;
                dArr3[2] = dArr3[2] + Math.toDegrees(((double) f3) * d);
                c.this.CH();
                c.this.CI();
            }
            c.this.auI = sensorEvent.timestamp;
        }
    }

    public c(AdMatrixInfo.RotateInfo rotateInfo) {
        this.rotateInfo = rotateInfo;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void CH() {
        if (this.auH) {
            if (Math.abs(this.auL[0]) > Math.abs(this.auK[0])) {
                this.auK[0] = this.auL[0];
            }
            if (Math.abs(this.auL[1]) > Math.abs(this.auK[1])) {
                this.auK[1] = this.auL[1];
            }
            if (Math.abs(this.auL[2]) > Math.abs(this.auK[2])) {
                this.auK[2] = this.auL[2];
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void CI() {
        AdMatrixInfo.RotateInfo rotateInfo;
        if (!this.auH || (rotateInfo = this.rotateInfo) == null || this.auM == null) {
            return;
        }
        if (a(0, rotateInfo.x.rotateDegree, this.rotateInfo.x.direction) || a(1, this.rotateInfo.y.rotateDegree, this.rotateInfo.y.direction) || a(2, this.rotateInfo.z.rotateDegree, this.rotateInfo.z.direction)) {
            this.auH = false;
            this.auM.ab(CJ());
            this.auL = new double[]{0.0d, 0.0d, 0.0d};
            this.auK = new double[]{0.0d, 0.0d, 0.0d};
        }
    }

    private String CJ() {
        return "{\"x\": " + this.auK[0] + ",\"y\":" + this.auK[1] + ",\"z\":" + this.auK[2] + "}";
    }

    private boolean a(int i, double d, int i2) {
        if (d <= 0.0d || Math.abs(this.auL[i]) < d) {
            return false;
        }
        return (this.auL[i] <= 0.0d || i2 != 1) && (this.auL[i] >= 0.0d || i2 != 2);
    }

    public final synchronized void CG() {
        this.auH = true;
    }

    public final void a(com.kwad.sdk.core.g.a aVar) {
        this.auM = aVar;
    }

    public final void a(AdMatrixInfo.RotateInfo rotateInfo) {
        this.rotateInfo = rotateInfo;
    }

    public final void bg(Context context) {
        if (context == null) {
            return;
        }
        SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
        Sensor defaultSensor = sensorManager.getDefaultSensor(4);
        if (defaultSensor != null) {
            if (this.auN == null) {
                this.auN = new a(this, (byte) 0);
            }
            sensorManager.registerListener(this.auN, defaultSensor, 2);
        } else {
            com.kwad.sdk.core.g.a aVar = this.auM;
            if (aVar != null) {
                aVar.lk();
            }
        }
    }

    public final synchronized void bh(Context context) {
        if (context != null) {
            if (this.auN != null) {
                ((SensorManager) context.getSystemService("sensor")).unregisterListener(this.auN);
                this.auN = null;
            }
        }
    }
}
