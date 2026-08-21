package com.tkay.expressad.videocommon.c;

import org.json.JSONObject;

public final class a {
    private String a;
    private String b;

    private a(String str, String str2) {
        this.a = str;
        this.b = str2;
    }

    private String a() {
        return this.a;
    }

    private void a(String str) {
        this.a = str;
    }

    private String b() {
        return this.b;
    }

    private void b(String str) {
        this.b = str;
    }

    public static a a(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        try {
            return new a(jSONObject.optString(com.tkay.expressad.videocommon.e.b.u), jSONObject.optString(com.tkay.expressad.videocommon.e.b.v));
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }
}
