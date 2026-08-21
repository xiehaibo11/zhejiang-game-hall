package com.cmic.gen.sdk.d;

import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

public class c extends b {
    public static ArrayList<Throwable> b = new ArrayList<>();
    private JSONObject c = null;
    private JSONArray d;

    public void a(JSONObject jSONObject) {
        this.c = jSONObject;
    }

    @Override
    public void a(JSONArray jSONArray) {
        this.d = jSONArray;
    }

    @Override
    public JSONObject b() {
        JSONObject jSONObjectB = super.b();
        try {
            jSONObjectB.put("event", this.c);
            jSONObjectB.put("exceptionStackTrace", this.d);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObjectB;
    }
}
