package com.kwad.components.core.webview.jshandler;

import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorEventListener;
import android.text.TextUtils;
import com.kwad.components.core.t.l;
import java.util.ArrayList;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public final class j implements SensorEventListener, com.kwad.sdk.core.webview.c.a {
    private Map<Integer, com.kwad.sdk.core.webview.c.c> TC = new ConcurrentHashMap();

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int TF;
        public ArrayList<Float> TG;
        public int accuracy;
        public long timestamp;
        public int type;

        @Override
        public final void parseJson(JSONObject jSONObject) {
            if (jSONObject == null || jSONObject == null) {
                return;
            }
            this.type = jSONObject.optInt("type");
            this.TF = jSONObject.optInt("interval");
            this.timestamp = jSONObject.optLong("timestamp");
            this.accuracy = jSONObject.optInt("accuracy");
            JSONArray jSONArrayOptJSONArray = jSONObject.optJSONArray("values");
            ArrayList<Float> arrayList = new ArrayList<>();
            if (jSONArrayOptJSONArray == null) {
                this.TG = arrayList;
                return;
            }
            for (int i = 0; i < jSONArrayOptJSONArray.length(); i++) {
                try {
                    Object obj = jSONArrayOptJSONArray.get(i);
                    if (obj != null) {
                        arrayList.add((Float) obj);
                    }
                } catch (Throwable unused) {
                }
            }
            this.TG = arrayList;
        }

        @Override
        public final JSONObject toJson() {
            JSONObject jSONObject = new JSONObject();
            int i = this.type;
            if (i != 0) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "type", i);
            }
            int i2 = this.TF;
            if (i2 != 0) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "interval", i2);
            }
            long j = this.timestamp;
            if (j != 0) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "timestamp", j);
            }
            int i3 = this.accuracy;
            if (i3 != 0) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "accuracy", i3);
            }
            if (!this.TG.isEmpty()) {
                com.kwad.sdk.utils.t.putValue(jSONObject, "values", this.TG);
            }
            return jSONObject;
        }
    }

    private void a(int i, int i2, final com.kwad.sdk.core.webview.c.c cVar) {
        com.kwad.components.core.t.l.qr().a(i, i2, this, new l.b() {
            @Override
            public final void onFailed() {
                cVar.onError(-1, "sensor is not support");
            }
        });
    }

    private void a(SensorEvent sensorEvent) {
        int type = sensorEvent.sensor.getType();
        if (type == 4) {
            type = 2;
        } else if (type == 10) {
            type = 1;
        }
        com.kwad.sdk.core.webview.c.c cVar = this.TC.get(Integer.valueOf(type));
        if (cVar != null) {
            ArrayList<Float> arrayList = new ArrayList<>();
            for (int i = 0; i < sensorEvent.values.length; i++) {
                arrayList.add(Float.valueOf(sensorEvent.values[i]));
            }
            a aVar = new a();
            aVar.TG = arrayList;
            aVar.timestamp = sensorEvent.timestamp;
            aVar.accuracy = sensorEvent.accuracy;
            cVar.a(aVar);
        }
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (TextUtils.isEmpty(str)) {
            cVar.onError(-1, "data is empty");
            return;
        }
        a aVar = new a();
        try {
            aVar.parseJson(new JSONObject(str));
        } catch (JSONException e) {
            e.printStackTrace();
        }
        this.TC.put(Integer.valueOf(aVar.type), cVar);
        a(aVar.type, aVar.TF, cVar);
    }

    @Override
    public final String getKey() {
        return "registerSensorListener";
    }

    @Override
    public final void onAccuracyChanged(Sensor sensor, int i) {
    }

    @Override
    public final void onDestroy() {
        com.kwad.components.core.t.l.qr().a(this);
    }

    @Override
    public final void onSensorChanged(SensorEvent sensorEvent) {
        a(sensorEvent);
    }
}
