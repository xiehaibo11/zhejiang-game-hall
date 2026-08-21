package com.kwad.sdk.utils;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import android.os.Build;
import android.support.v4.content.ContextCompat;
import android.telephony.CellInfo;
import android.telephony.CellLocation;
import android.telephony.CellSignalStrength;
import android.telephony.TelephonyManager;
import android.telephony.cdma.CdmaCellLocation;
import android.telephony.gsm.GsmCellLocation;
import com.kwad.sdk.service.ServiceProvider;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public final class ax {
    private static Context aJh;
    private static Map<String, j> aJi = new HashMap();
    private static b aJj;

    static class a extends j<com.kwad.sdk.k.a.b> {
        private static com.kwad.sdk.k.a.b aJk;

        public a(boolean z) {
            super(z);
        }

        private static int a(CellInfo cellInfo) {
            if (cellInfo == null) {
                return -1;
            }
            try {
                return ((CellSignalStrength) s.f(cellInfo, "getCellSignalStrength", new Object[0])).getLevel();
            } catch (Throwable unused) {
                return -1;
            }
        }

        /* JADX INFO: Access modifiers changed from: private */
        @Override // com.kwad.sdk.utils.j
        /* JADX INFO: renamed from: cP, reason: merged with bridge method [inline-methods] */
        public com.kwad.sdk.k.a.b bP(Context context) {
            int lac;
            int cid;
            if (at.IW() || ((com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class)).R(64L)) {
                return aJk;
            }
            com.kwad.sdk.k.a.b bVar = aJk;
            if (bVar != null) {
                return bVar;
            }
            CellInfo cellInfo = null;
            if (context == null || at.IW()) {
                return null;
            }
            int iA = -1;
            if (Build.VERSION.SDK_INT >= 23 && ContextCompat.checkSelfPermission(context, com.kuaishou.weapon.p0.g.g) == -1) {
                return null;
            }
            if (be.checkSelfPermission(context, com.kuaishou.weapon.p0.g.g) == 0) {
                TelephonyManager telephonyManager = (TelephonyManager) context.getSystemService("phone");
                CellLocation cellLocation = telephonyManager.getCellLocation();
                if (cellLocation instanceof CdmaCellLocation) {
                    CdmaCellLocation cdmaCellLocation = (CdmaCellLocation) cellLocation;
                    cid = cdmaCellLocation.getBaseStationId();
                    lac = cdmaCellLocation.getNetworkId();
                } else if (cellLocation instanceof GsmCellLocation) {
                    GsmCellLocation gsmCellLocation = (GsmCellLocation) cellLocation;
                    cid = gsmCellLocation.getCid();
                    lac = gsmCellLocation.getLac();
                } else {
                    lac = -1;
                    cid = -1;
                }
                if (Build.VERSION.SDK_INT >= 17) {
                    Iterator<CellInfo> it = telephonyManager.getAllCellInfo().iterator();
                    while (true) {
                        if (!it.hasNext()) {
                            break;
                        }
                        CellInfo next = it.next();
                        if (next != null && next.isRegistered()) {
                            cellInfo = next;
                            break;
                        }
                    }
                    if (cellInfo != null) {
                        iA = a(cellInfo);
                    }
                }
                aJk = new com.kwad.sdk.k.a.b(cid, lac, iA);
            }
            return aJk;
        }
    }

    static class b implements SensorEventListener {
        private d aJl;
        private d aJm;
        private d aJn;
        protected boolean aIe = false;
        private boolean aJo = false;

        public b(Context context) {
            if (0 == 0) {
                try {
                    cQ(context);
                } catch (Exception e) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                }
            }
        }

        private List<com.kwad.sdk.k.a.e> Js() {
            ArrayList arrayList = new ArrayList();
            d dVar = this.aJl;
            if (dVar != null) {
                arrayList.add(com.kwad.sdk.k.a.e.a(dVar.Jt(), this.aJl.getTimestamp()));
            }
            d dVar2 = this.aJm;
            if (dVar2 != null) {
                arrayList.add(com.kwad.sdk.k.a.e.a(dVar2.Jt(), this.aJm.getTimestamp()));
            }
            d dVar3 = this.aJn;
            if (dVar3 != null) {
                arrayList.add(com.kwad.sdk.k.a.e.a(dVar3.Jt(), this.aJn.getTimestamp()));
            }
            return arrayList;
        }

        private static boolean a(SensorManager sensorManager, int i, SensorEventListener sensorEventListener) {
            Sensor defaultSensor = sensorManager.getDefaultSensor(i);
            if (defaultSensor == null) {
                return false;
            }
            return sensorManager.registerListener(sensorEventListener, defaultSensor, 3);
        }

        private void cQ(Context context) {
            SensorManager sensorManager;
            try {
                sensorManager = (SensorManager) context.getSystemService("sensor");
            } catch (Exception unused) {
                sensorManager = null;
            }
            if (sensorManager == null) {
                return;
            }
            com.kwad.sdk.core.e.c.d("SensitiveInfoCollectors", "accelerometerSensorAvailable: " + a(sensorManager, 1, this));
            com.kwad.sdk.core.e.c.d("SensitiveInfoCollectors", "gyroscopeSensorAvailable : " + a(sensorManager, 4, this));
            com.kwad.sdk.core.e.c.d("SensitiveInfoCollectors", "gravitySensorAvailable : " + a(sensorManager, 9, this));
        }

        private synchronized List<com.kwad.sdk.k.a.e> cR(Context context) {
            final ArrayList arrayList;
            arrayList = new ArrayList();
            final SensorManager sensorManager = (SensorManager) context.getSystemService("sensor");
            final CountDownLatch countDownLatch = new CountDownLatch(3);
            if (!a(sensorManager, 1, new c() { // from class: com.kwad.sdk.utils.ax.b.1
                @Override // android.hardware.SensorEventListener
                public final void onSensorChanged(SensorEvent sensorEvent) {
                    com.kwad.sdk.core.e.c.d("SensitiveInfoCollectors", "onSensorChanged, type: " + sensorEvent.sensor.getType());
                    arrayList.add(com.kwad.sdk.k.a.e.a(sensorEvent, System.currentTimeMillis()));
                    countDownLatch.countDown();
                    sensorManager.unregisterListener(this);
                }
            })) {
                countDownLatch.countDown();
            }
            if (!a(sensorManager, 4, new c() { // from class: com.kwad.sdk.utils.ax.b.2
                @Override // android.hardware.SensorEventListener
                public final void onSensorChanged(SensorEvent sensorEvent) {
                    com.kwad.sdk.core.e.c.d("SensitiveInfoCollectors", "onSensorChanged, type: " + sensorEvent.sensor.getType());
                    arrayList.add(com.kwad.sdk.k.a.e.a(sensorEvent, System.currentTimeMillis()));
                    countDownLatch.countDown();
                    sensorManager.unregisterListener(this);
                }
            })) {
                countDownLatch.countDown();
            }
            if (!a(sensorManager, 9, new c() { // from class: com.kwad.sdk.utils.ax.b.3
                @Override // android.hardware.SensorEventListener
                public final void onSensorChanged(SensorEvent sensorEvent) {
                    com.kwad.sdk.core.e.c.d("SensitiveInfoCollectors", "onSensorChanged, type: " + sensorEvent.sensor.getType());
                    arrayList.add(com.kwad.sdk.k.a.e.a(sensorEvent, System.currentTimeMillis()));
                    countDownLatch.countDown();
                    sensorManager.unregisterListener(this);
                }
            })) {
                countDownLatch.countDown();
            }
            try {
                countDownLatch.await(2L, TimeUnit.SECONDS);
            } catch (InterruptedException unused) {
            }
            return arrayList;
        }

        private List<com.kwad.sdk.k.a.e> cT(Context context) {
            if (context == null) {
                return null;
            }
            return this.aJo ? cR(context) : Js();
        }

        public final List<com.kwad.sdk.k.a.e> cS(Context context) {
            if (this.aIe) {
                return null;
            }
            try {
                return cT(context);
            } catch (Throwable th) {
                com.kwad.sdk.core.e.c.printStackTraceOnly(th);
                return null;
            }
        }

        @Override // android.hardware.SensorEventListener
        public final void onAccuracyChanged(Sensor sensor, int i) {
        }

        @Override // android.hardware.SensorEventListener
        public final void onSensorChanged(SensorEvent sensorEvent) {
            if (sensorEvent == null) {
                return;
            }
            int type = sensorEvent.sensor.getType();
            if (type == 1) {
                this.aJl = new d(sensorEvent);
            } else if (type == 4) {
                this.aJm = new d(sensorEvent);
            } else {
                if (type != 9) {
                    return;
                }
                this.aJn = new d(sensorEvent);
            }
        }
    }

    static abstract class c implements SensorEventListener {
        c() {
        }

        @Override // android.hardware.SensorEventListener
        public void onAccuracyChanged(Sensor sensor, int i) {
        }
    }

    static class d {
        private SensorEvent aJs;
        private long timestamp = System.currentTimeMillis();

        public d(SensorEvent sensorEvent) {
            this.aJs = sensorEvent;
        }

        public final SensorEvent Jt() {
            return this.aJs;
        }

        public final long getTimestamp() {
            return this.timestamp;
        }
    }

    static class e extends j<com.kwad.sdk.k.a.f> {
        public e(boolean z) {
            super(z);
        }

        private static com.kwad.sdk.k.a.f cU(Context context) {
            com.kwad.sdk.k.a.f fVar = new com.kwad.sdk.k.a.f();
            fVar.aGx = au.cD(context);
            fVar.aGw = au.cB(context);
            return fVar;
        }

        @Override // com.kwad.sdk.utils.j
        protected final /* synthetic */ com.kwad.sdk.k.a.f bP(Context context) {
            return cU(context);
        }
    }

    public static com.kwad.sdk.k.a.b Hl() {
        if (Jr()) {
            return (com.kwad.sdk.k.a.b) fG("baseStationEnable");
        }
        return null;
    }

    public static com.kwad.sdk.k.a.f Hm() {
        if (Jr()) {
            return (com.kwad.sdk.k.a.f) fG("simCardInfoEnable");
        }
        return null;
    }

    public static List<com.kwad.sdk.k.a.e> Jm() {
        if (!o.HZ()) {
            return null;
        }
        Context applicationContext = ServiceProvider.getContext().getApplicationContext();
        if (aJj == null) {
            aJj = new b(applicationContext);
        }
        return aJj.cS(applicationContext);
    }

    private static boolean Jr() {
        return aJh != null;
    }

    private static <T> j<T> fF(String str) {
        try {
            return aJi.get(str);
        } catch (Exception unused) {
            return null;
        }
    }

    private static <T> T fG(String str) {
        j jVarFF = fF(str);
        if (jVarFF != null) {
            return (T) jVarFF.bO(aJh);
        }
        return null;
    }

    public static void init(Context context) {
        if (context == null) {
            return;
        }
        com.kwad.sdk.service.a.f fVar = (com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class);
        if (fVar == null) {
            com.kwad.sdk.core.e.c.d("SensitiveInfoCollectors", "init sdkConfigProvider is null");
            return;
        }
        if (!Jr()) {
            aJh = context.getApplicationContext();
            aJi.put("baseStationEnable", new a(fVar.xw()));
            aJi.put("simCardInfoEnable", new e(fVar.xu()));
            return;
        }
        if (aJi.containsKey("baseStationEnable")) {
            boolean zXw = fVar.xw();
            j jVarFF = fF("baseStationEnable");
            if (jVarFF != null) {
                jVarFF.aO(zXw);
            }
        }
        if (aJi.containsKey("simCardInfoEnable")) {
            boolean zXu = fVar.xu();
            j jVarFF2 = fF("simCardInfoEnable");
            if (jVarFF2 != null) {
                jVarFF2.aO(zXu);
            }
        }
    }
}
