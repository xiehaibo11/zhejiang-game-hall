package com.mbridge.msdk.videocommon.b;

import java.util.ArrayList;
import java.util.List;
import org.json.JSONArray;
import org.json.JSONObject;

/* JADX INFO: compiled from: AdUnitInfo.java */
/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f4384a;
    private int b;
    private a c;

    public b(int i, int i2, a aVar) {
        this.f4384a = i;
        this.b = i2;
        this.c = aVar;
    }

    public final int a() {
        return this.f4384a;
    }

    public final int b() {
        return this.b;
    }

    public static List<b> a(JSONArray jSONArray) {
        if (jSONArray != null && jSONArray.length() > 0) {
            ArrayList arrayList = new ArrayList();
            for (int i = 0; i < jSONArray.length(); i++) {
                try {
                    JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                    int iOptInt = jSONObjectOptJSONObject.optInt("id");
                    int iOptInt2 = jSONObjectOptJSONObject.optInt("timeout");
                    JSONObject jSONObjectOptJSONObject2 = jSONObjectOptJSONObject.optJSONObject("params");
                    arrayList.add(new b(iOptInt, iOptInt2, jSONObjectOptJSONObject2 != null ? a.a(jSONObjectOptJSONObject2) : null));
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
            return arrayList;
        }
        return null;
    }
}
