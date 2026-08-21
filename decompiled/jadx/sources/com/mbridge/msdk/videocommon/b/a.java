package com.mbridge.msdk.videocommon.b;

import org.json.JSONObject;

/* JADX INFO: compiled from: AdParams.java */
/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private String f4383a;
    private String b;

    private a(String str, String str2) {
        this.f4383a = str;
        this.b = str2;
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
