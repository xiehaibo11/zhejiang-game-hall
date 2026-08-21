package com.kwad.components.core.t;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.hardware.SensorManager;
import com.kwad.sdk.service.ServiceProvider;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes2.dex */
public class l {
    private static volatile l Rt;
    private SensorManager Ru;
    private final Map<String, a> Rv = new HashMap();
    private final Map<String, Set<SensorEventListener>> Rw = new ConcurrentHashMap();

    public static class a implements SensorEventListener {
        private final WeakReference<l> Rx;
        private final String key;

        public a(String str, l lVar) {
            this.key = str;
            this.Rx = new WeakReference<>(lVar);
        }

        @Override // android.hardware.SensorEventListener
        public final void onAccuracyChanged(Sensor sensor, int i) {
        }

        @Override // android.hardware.SensorEventListener
        public final void onSensorChanged(SensorEvent sensorEvent) {
            l lVar = this.Rx.get();
            if (lVar != null) {
                lVar.a(this.key, sensorEvent);
            }
        }
    }

    public interface b {
        void onFailed();
    }

    private l() {
    }

    private void a(String str, int i, Sensor sensor) {
        getSensorManager().registerListener(aB(str), sensor, aJ(i));
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, SensorEvent sensorEvent) {
        Set<SensorEventListener> set = this.Rw.get(str);
        if (set != null) {
            Iterator<SensorEventListener> it = set.iterator();
            while (it.hasNext()) {
                it.next().onSensorChanged(sensorEvent);
            }
        }
    }

    private void aA(String str) {
        a aVar = this.Rv.get(str);
        if (aVar != null) {
            this.Rv.remove(str);
            getSensorManager().unregisterListener(aVar);
        }
    }

    private a aB(String str) {
        a aVar = this.Rv.get(str);
        if (aVar != null) {
            return aVar;
        }
        a aVar2 = new a(str, this);
        this.Rv.put(str, aVar2);
        return aVar2;
    }

    private Sensor aI(int i) {
        SensorManager sensorManager;
        int i2;
        if (getSensorManager() == null) {
            return null;
        }
        if (i == 1) {
            sensorManager = getSensorManager();
            i2 = 10;
        } else {
            if (i != 2) {
                return null;
            }
            sensorManager = getSensorManager();
            i2 = 4;
        }
        return sensorManager.getDefaultSensor(i2);
    }

    private static int aJ(int i) {
        if (i == -3) {
            return 2;
        }
        if (i != -2) {
            return i != -1 ? 3 : 0;
        }
        return 1;
    }

    private SensorManager getSensorManager() {
        if (this.Ru == null) {
            this.Ru = (SensorManager) ServiceProvider.getContext().getSystemService("sensor");
        }
        return this.Ru;
    }

    private static String l(int i, int i2) {
        return i + "_" + i2;
    }

    public static l qr() {
        if (Rt == null) {
            synchronized (l.class) {
                if (Rt == null) {
                    Rt = new l();
                }
            }
        }
        return Rt;
    }

    public final void a(int i, int i2, SensorEventListener sensorEventListener, b bVar) {
        Sensor sensorAI = aI(i);
        if (sensorAI == null) {
            bVar.onFailed();
            return;
        }
        String strL = l(i, i2);
        Set<SensorEventListener> set = this.Rw.get(strL);
        if (set != null) {
            set.add(sensorEventListener);
            return;
        }
        HashSet hashSet = new HashSet();
        hashSet.add(sensorEventListener);
        this.Rw.put(strL, hashSet);
        a(strL, i2, sensorAI);
    }

    public final void a(SensorEventListener sensorEventListener) {
        for (Map.Entry<String, Set<SensorEventListener>> entry : this.Rw.entrySet()) {
            Iterator<SensorEventListener> it = entry.getValue().iterator();
            while (true) {
                if (it.hasNext()) {
                    if (it.next().equals(sensorEventListener)) {
                        it.remove();
                        break;
                    }
                } else {
                    break;
                }
            }
            if (entry.getValue().size() == 0) {
                aA(entry.getKey());
            }
        }
    }
}
