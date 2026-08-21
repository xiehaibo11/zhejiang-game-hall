package com.mbridge.msdk.foundation.tools;

import org.json.JSONArray;
import org.json.JSONException;

/* JADX INFO: compiled from: PermMappingUtil.java */
/* JADX INFO: loaded from: classes2.dex */
public final class r {
    public static JSONArray a(JSONArray jSONArray) {
        JSONArray jSONArray2 = new JSONArray();
        for (int i = 0; i < jSONArray.length(); i++) {
            try {
                jSONArray2.put(p.a(jSONArray.getString(i)));
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return jSONArray2;
    }
}
