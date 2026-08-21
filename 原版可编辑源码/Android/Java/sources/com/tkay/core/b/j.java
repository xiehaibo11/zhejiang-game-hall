package com.tkay.core.b;

import com.tkay.core.common.l;
import org.json.JSONObject;

public final class j implements Comparable<j> {
    int a;
    String b;
    double c;
    String d;

    @Override
    public final int compareTo(j jVar) {
        return this.a < jVar.a ? -1 : 1;
    }

    private double a() {
        return this.c;
    }

    private void a(double d) {
        this.c = d;
    }

    private String b() {
        return this.b;
    }

    public static j a(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            j jVar = new j();
            jVar.a = jSONObject.optInt("prority");
            jVar.b = jSONObject.optString("ad_source_id");
            if (jSONObject.has(l.am)) {
                jVar.c = jSONObject.optDouble(l.am);
            } else if (jSONObject.has("price")) {
                jVar.c = jSONObject.optDouble("price");
            } else {
                jVar.c = 0.0d;
            }
            jVar.d = jSONObject.optString("tp_bid_id");
            return jVar;
        } catch (Throwable unused) {
            return null;
        }
    }

    private int a(j jVar) {
        return this.a < jVar.a ? -1 : 1;
    }
}
