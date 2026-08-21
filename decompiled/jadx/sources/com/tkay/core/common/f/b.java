package com.tkay.core.common.f;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public int f6150a;
    public long b;

    public final void a(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            this.f6150a = jSONObject.optInt("number");
            this.b = jSONObject.optLong("loadTime");
        } catch (Exception unused) {
        }
    }

    public final String toString() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("number", this.f6150a);
            jSONObject.put("loadTime", this.b);
        } catch (Exception unused) {
        }
        return jSONObject.toString();
    }
}
