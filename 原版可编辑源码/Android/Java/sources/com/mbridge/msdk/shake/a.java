package com.mbridge.msdk.shake;

import android.content.Context;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.report.e;

public final class a {
    private SensorManager a;

    private static class a {
        static a a = new a();
    }

    private a() {
    }

    public static a a() {
        return a.a;
    }

    public final void b(SensorEventListener sensorEventListener) {
        SensorManager sensorManager = this.a;
        if (sensorManager != null) {
            try {
                sensorManager.unregisterListener(sensorEventListener);
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    public final void a(SensorEventListener sensorEventListener) {
        Context contextJ = com.mbridge.msdk.foundation.controller.a.f().j();
        if (contextJ != null) {
            try {
                if (this.a == null) {
                    this.a = (SensorManager) contextJ.getSystemService("sensor");
                }
                this.a.registerListener(sensorEventListener, this.a.getDefaultSensor(1), 2);
            } catch (Exception e) {
                e.printStackTrace();
                String message = e.getMessage();
                if (contextJ != null) {
                    try {
                        if (TextUtils.isEmpty(message)) {
                            return;
                        }
                        StringBuffer stringBuffer = new StringBuffer();
                        stringBuffer.append("key=2000106&");
                        if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.t)) {
                            stringBuffer.append("b=" + com.mbridge.msdk.foundation.same.a.t + "&");
                        }
                        if (!TextUtils.isEmpty(com.mbridge.msdk.foundation.same.a.u)) {
                            stringBuffer.append("c=" + com.mbridge.msdk.foundation.same.a.u + "&");
                        }
                        stringBuffer.append("reason=" + message);
                        if (com.mbridge.msdk.foundation.same.report.b.a().c()) {
                            com.mbridge.msdk.foundation.same.report.b.a().a(stringBuffer.toString());
                        } else {
                            e.b(contextJ, stringBuffer.toString());
                        }
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            }
        }
    }
}
