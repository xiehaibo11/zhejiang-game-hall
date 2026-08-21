package com.bykv.vk.openvk.api.plugin;

import android.os.SystemClock;
import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes.dex */
public class pp {
    private long df;
    private Map<String, Long> pt = new HashMap();
    private long q;
    private String rg;

    private pp(String str, long j) {
        this.rg = str;
        this.df = j;
        this.q = j;
    }

    public static pp rg(String str) {
        return new pp(str, SystemClock.elapsedRealtime());
    }

    public long rg() {
        long jElapsedRealtime = SystemClock.elapsedRealtime() - this.df;
        this.pt.put(this.rg, Long.valueOf(jElapsedRealtime));
        return jElapsedRealtime;
    }

    public long df(String str) {
        long jElapsedRealtime = SystemClock.elapsedRealtime() - this.q;
        this.q = SystemClock.elapsedRealtime();
        this.pt.put(str, Long.valueOf(jElapsedRealtime));
        return jElapsedRealtime;
    }

    public void rg(JSONObject jSONObject, long j) {
        if (jSONObject == null) {
            return;
        }
        for (Map.Entry<String, Long> entry : this.pt.entrySet()) {
            String key = entry.getKey();
            Long value = entry.getValue();
            if (!TextUtils.isEmpty(key) && value.longValue() > j) {
                try {
                    jSONObject.put(key, value);
                } catch (JSONException unused) {
                }
            }
        }
    }
}
