package com.xiaomi.push;

import com.tkay.core.api.TYAdConst;
import org.json.JSONObject;

public class cq {
    private int a;
    private long a;
    private String a;
    private long b;
    private long c;

    public cq() {
        this(0, 0L, 0L, null);
    }

    public cq(int i, long j, long j2, Exception exc) {
        this.a = i;
        this.a = j;
        this.c = j2;
        this.b = System.currentTimeMillis();
        if (exc != null) {
            this.a = exc.getClass().getSimpleName();
        }
    }

    public int a() {
        return this.a;
    }

    public cq a(JSONObject jSONObject) {
        this.a = jSONObject.getLong("cost");
        this.c = jSONObject.getLong(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE);
        this.b = jSONObject.getLong("ts");
        this.a = jSONObject.getInt(com.tkay.expressad.d.a.b.R);
        this.a = jSONObject.optString("expt");
        return this;
    }

    public JSONObject a() {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("cost", this.a);
        jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE, this.c);
        jSONObject.put("ts", this.b);
        jSONObject.put(com.tkay.expressad.d.a.b.R, this.a);
        jSONObject.put("expt", this.a);
        return jSONObject;
    }
}
