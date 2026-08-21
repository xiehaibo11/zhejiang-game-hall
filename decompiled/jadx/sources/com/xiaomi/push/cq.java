package com.xiaomi.push;

import com.tkay.core.api.TYAdConst;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes4.dex */
public class cq {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8088a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private long f192a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f193a;
    private long b;
    private long c;

    public cq() {
        this(0, 0L, 0L, null);
    }

    public cq(int i, long j, long j2, Exception exc) {
        this.f8088a = i;
        this.f192a = j;
        this.c = j2;
        this.b = System.currentTimeMillis();
        if (exc != null) {
            this.f193a = exc.getClass().getSimpleName();
        }
    }

    public int a() {
        return this.f8088a;
    }

    public cq a(JSONObject jSONObject) {
        this.f192a = jSONObject.getLong("cost");
        this.c = jSONObject.getLong(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE);
        this.b = jSONObject.getLong("ts");
        this.f8088a = jSONObject.getInt(com.tkay.expressad.d.a.b.R);
        this.f193a = jSONObject.optString("expt");
        return this;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public JSONObject m196a() {
        JSONObject jSONObject = new JSONObject();
        jSONObject.put("cost", this.f192a);
        jSONObject.put(TYAdConst.NETWORK_REQUEST_PARAMS_KEY.BANNER_SIZE, this.c);
        jSONObject.put("ts", this.b);
        jSONObject.put(com.tkay.expressad.d.a.b.R, this.f8088a);
        jSONObject.put("expt", this.f193a);
        return jSONObject;
    }
}
