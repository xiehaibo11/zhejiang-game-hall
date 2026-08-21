package com.mbridge.msdk.rover;

import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: compiled from: RoverReportData.java */
/* JADX INFO: loaded from: classes2.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f3963a;
    private int b;
    private int c;
    private int d;
    private String e;
    private String f;

    public final void a(String str) {
        this.f3963a = str;
    }

    public final void a(int i) {
        this.b = i;
    }

    public final void b(int i) {
        this.c = i;
    }

    public final void c(int i) {
        this.d = i;
    }

    public final void b(String str) {
        this.e = str;
    }

    public final void c(String str) {
        this.f = str;
    }

    public final JSONObject a() {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("url", this.f3963a);
            jSONObject.put("type", this.b);
            jSONObject.put("time", this.c);
            jSONObject.put("code", this.d);
            jSONObject.put(com.tkay.expressad.foundation.d.f.j, this.e);
            jSONObject.put(com.tkay.expressad.foundation.d.f.i, this.f);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject;
    }

    public final String toString() {
        return "url=" + this.f3963a + ", type=" + this.b + ", time=" + this.c + ", code=" + this.d + ", header=" + this.e + ", exception=" + this.f;
    }
}
