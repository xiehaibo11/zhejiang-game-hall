package com.kwai.adclient.kscommerciallogger.snapshot;

import java.util.LinkedHashMap;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public class d {
    private final String aNN;
    private final LinkedHashMap<String, String> aNO = new LinkedHashMap<>();
    private final long time = System.nanoTime();

    d(String str) {
        this.aNN = str;
    }

    synchronized JSONObject Lj() {
        JSONObject jSONObject;
        jSONObject = new JSONObject();
        try {
            for (Map.Entry<String, String> entry : this.aNO.entrySet()) {
                jSONObject.put(entry.getKey(), entry.getValue());
            }
            jSONObject.put("time", this.time);
            jSONObject.put("span_name", this.aNN);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }
}
