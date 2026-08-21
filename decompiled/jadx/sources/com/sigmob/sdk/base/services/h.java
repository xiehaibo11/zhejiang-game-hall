package com.sigmob.sdk.base.services;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import com.czhj.sdk.logger.SigmobLog;
import com.sigmob.sdk.base.mta.PointEntitySensor;
import com.sigmob.sdk.base.mta.PointType;
import java.text.DecimalFormat;
import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes3.dex */
public class h implements SensorEventListener {
    private static Handler b = null;
    private static int c = 500;
    private List<g> e;
    private SensorManager f;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    DecimalFormat f4932a = new DecimalFormat("#######.######");
    private g d = new g();
    private int g = 300;
    private int h = 50;

    private static class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static final h f4934a = new h();

        private a() {
        }
    }

    public static h a() {
        return a.f4934a;
    }

    /* JADX WARN: Removed duplicated region for block: B:22:0x011e  */
    /* JADX WARN: Removed duplicated region for block: B:28:0x0173  */
    /* JADX WARN: Removed duplicated region for block: B:34:0x01d1  */
    /* JADX WARN: Removed duplicated region for block: B:40:0x0238  */
    /* JADX WARN: Removed duplicated region for block: B:46:0x0272  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.lang.String a(java.util.List<com.sigmob.sdk.base.services.g> r28) {
        /*
            Method dump skipped, instruction units count: 932
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.sigmob.sdk.base.services.h.a(java.util.List):java.lang.String");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(List<g> list, List<g> list2, String str, String str2) {
        PointEntitySensor pointEntitySensor = new PointEntitySensor();
        pointEntitySensor.setAc_type(PointType.ANTI_SPAM);
        pointEntitySensor.setCategory(str);
        pointEntitySensor.setMotion_before(a(list));
        pointEntitySensor.setMotion_after(a(list2));
        pointEntitySensor.setMotion_interval(String.valueOf(this.g));
        pointEntitySensor.setLoad_id(str2);
        pointEntitySensor.commit();
    }

    String a(String str) {
        return str;
    }

    public void a(int i) {
        this.g = i;
    }

    public void a(Context context) {
        try {
            if (this.f != null) {
                if (com.sigmob.sdk.base.i.a().v()) {
                    return;
                }
                this.f.unregisterListener(this);
                b.removeCallbacksAndMessages(null);
                this.e.clear();
                this.f = null;
                return;
            }
            if (com.sigmob.sdk.base.i.a().v()) {
                SigmobLog.i("start anti spam motion");
                this.e = new ArrayList();
                this.h = com.sigmob.sdk.base.i.a().x();
                this.g = com.sigmob.sdk.base.i.a().w();
                c = com.sigmob.sdk.base.i.a().y();
                SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
                this.f = sensorManager;
                sensorManager.registerListener(this, sensorManager.getDefaultSensor(5), 3);
                SigmobLog.d("光线传感器 ");
                this.f.registerListener(this, this.f.getDefaultSensor(1), 3);
                SigmobLog.d("加速传感器 ");
                this.f.registerListener(this, this.f.getDefaultSensor(2), 3);
                SigmobLog.d("磁场传感器 ");
                this.f.registerListener(this, this.f.getDefaultSensor(4), 3);
                SigmobLog.d("陀螺仪 ");
                this.f.registerListener(this, this.f.getDefaultSensor(9), 3);
                SigmobLog.d("重力传感器 ");
                this.f.registerListener(this, this.f.getDefaultSensor(10), 3);
                SigmobLog.d("线性加速器 ");
                b = new Handler(Looper.getMainLooper()) { // from class: com.sigmob.sdk.base.services.h.1
                    @Override // android.os.Handler
                    public void handleMessage(Message message) {
                        if (message.what == f.SENSOR_EVENT_BEGIN.a()) {
                            i iVar = (i) message.obj;
                            int size = h.this.e.size() - 1;
                            iVar.f4935a = (g) h.this.e.get(size >= 0 ? size : 0);
                            Message message2 = new Message();
                            message2.what = f.SENSOR_EVENT_END.a();
                            message2.obj = iVar;
                            h.b.sendMessageDelayed(message2, h.this.g * (h.this.h + 1));
                            return;
                        }
                        if (message.what != f.SENSOR_EVENT_END.a()) {
                            if (message.what == f.SENSOR_EVENT_PUSH.a()) {
                                try {
                                    h.this.d.g = System.currentTimeMillis();
                                    g gVarClone = h.this.d.clone();
                                    if (h.this.e.size() > h.c) {
                                        h.this.e.remove(0);
                                    }
                                    if (gVarClone != null) {
                                        h.this.e.add(gVarClone);
                                    }
                                } catch (CloneNotSupportedException e) {
                                    SigmobLog.e(e.getMessage());
                                }
                                Message message3 = new Message();
                                message3.what = f.SENSOR_EVENT_PUSH.a();
                                h.b.sendMessageDelayed(message3, h.this.g);
                                return;
                            }
                            return;
                        }
                        i iVar2 = (i) message.obj;
                        int iIndexOf = h.this.e.indexOf(iVar2.f4935a);
                        int i = iIndexOf - h.this.h;
                        if (iIndexOf >= 0 && iIndexOf >= h.this.h) {
                            i = i;
                        }
                        int size2 = h.this.h + iIndexOf;
                        if (size2 > h.this.e.size() - 1) {
                            size2 = h.this.e.size() - 1;
                        }
                        if (h.this.e.size() > 0) {
                            CopyOnWriteArrayList copyOnWriteArrayList = i < iIndexOf ? new CopyOnWriteArrayList(h.this.e.subList(i, iIndexOf)) : null;
                            CopyOnWriteArrayList copyOnWriteArrayList2 = iIndexOf < size2 ? new CopyOnWriteArrayList(h.this.e.subList(iIndexOf, size2)) : null;
                            if (copyOnWriteArrayList == null && copyOnWriteArrayList2 == null) {
                                return;
                            }
                            h.this.a(copyOnWriteArrayList, copyOnWriteArrayList2, iVar2.b, iVar2.c);
                        }
                    }
                };
                Message message = new Message();
                message.what = f.SENSOR_EVENT_PUSH.a();
                if (b != null) {
                    b.sendMessage(message);
                }
            }
        } catch (Throwable unused) {
        }
    }

    public void a(String str, String str2) {
        if (com.sigmob.sdk.base.i.a().v() && com.sigmob.sdk.base.i.a().a(str)) {
            a(com.sigmob.sdk.b.b());
            Message message = new Message();
            i iVar = new i();
            iVar.b = str;
            iVar.c = str2;
            message.what = f.SENSOR_EVENT_BEGIN.a();
            message.obj = iVar;
            Handler handler = b;
            if (handler != null) {
                handler.sendMessage(message);
            }
        }
    }

    @Override // android.hardware.SensorEventListener
    public void onAccuracyChanged(Sensor sensor, int i) {
        SigmobLog.d(String.format("name :%s, accuracy %d", sensor.getName(), Integer.valueOf(i)));
    }

    @Override // android.hardware.SensorEventListener
    public void onSensorChanged(SensorEvent sensorEvent) {
        int type = sensorEvent.sensor.getType();
        if (type == 1) {
            this.d.d = (float[]) sensorEvent.values.clone();
            return;
        }
        if (type == 2) {
            this.d.c = (float[]) sensorEvent.values.clone();
            return;
        }
        if (type == 4) {
            this.d.b = (float[]) sensorEvent.values.clone();
            return;
        }
        if (type == 5) {
            this.d.e = (float[]) sensorEvent.values.clone();
        } else if (type == 9) {
            this.d.f4931a = (float[]) sensorEvent.values.clone();
        } else {
            if (type != 10) {
                return;
            }
            this.d.f = (float[]) sensorEvent.values.clone();
        }
    }
}
