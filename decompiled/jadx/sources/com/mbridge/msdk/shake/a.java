package com.mbridge.msdk.shake;

import android.content.Context;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.text.TextUtils;
import com.mbridge.msdk.foundation.same.report.e;

/* JADX INFO: compiled from: NativeShakeManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private SensorManager f3966a;

    /* JADX INFO: renamed from: com.mbridge.msdk.shake.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: NativeShakeManager.java */
    private static class C0296a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static a f3967a = new a();
    }

    private a() {
    }

    public static a a() {
        return C0296a.f3967a;
    }

    public final void b(SensorEventListener sensorEventListener) {
        SensorManager sensorManager = this.f3966a;
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
                if (this.f3966a == null) {
                    this.f3966a = (SensorManager) contextJ.getSystemService("sensor");
                }
                this.f3966a.registerListener(sensorEventListener, this.f3966a.getDefaultSensor(1), 2);
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
