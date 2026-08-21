package com.igexin.push.c;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f2472a;
    public long b;

    public e a(JSONObject jSONObject) {
        if (jSONObject == null) {
            return this;
        }
        try {
            this.f2472a = jSONObject.getString("address");
            this.b = jSONObject.getLong("outdateTime");
        } catch (Exception unused) {
        }
        return this;
    }

    public JSONObject a() {
        try {
            JSONObject jSONObject = new JSONObject();
            jSONObject.put("address", this.f2472a);
            jSONObject.put("outdateTime", this.b);
            return jSONObject;
        } catch (Exception unused) {
            return null;
        }
    }

    public String toString() {
        return "ServerAddress{address='" + this.f2472a + "', outdateTime=" + this.b + '}';
    }
}
