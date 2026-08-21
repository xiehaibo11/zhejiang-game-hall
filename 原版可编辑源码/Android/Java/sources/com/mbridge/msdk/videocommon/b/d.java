package com.mbridge.msdk.videocommon.b;

import android.text.TextUtils;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONArray;
import org.json.JSONObject;

public final class d {
    private String a;
    private int b;

    public d(String str, int i) {
        this.a = str;
        this.b = i;
    }

    public final String a() {
        return this.a;
    }

    public final void a(String str) {
        this.a = str;
    }

    public final int b() {
        return this.b;
    }

    public final void a(int i) {
        this.b = i;
    }

    private static d c() {
        return new d("Virtual Item", 1);
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x002a A[Catch: Exception -> 0x002f, TRY_LEAVE, TryCatch #0 {Exception -> 0x002f, blocks: (B:3:0x0001, B:5:0x000f, B:12:0x002a, B:8:0x0017, B:10:0x001d), top: B:17:0x0001 }] */
    /* JADX WARN: Removed duplicated region for block: B:19:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static d b(String str) {
        d dVarC;
        d dVar = null;
        try {
            com.mbridge.msdk.videocommon.d.a aVarB = com.mbridge.msdk.videocommon.d.b.a().b();
            if (TextUtils.isEmpty(str)) {
                dVarC = c();
            } else {
                if (aVarB != null && aVarB.j() != null) {
                    dVarC = aVarB.j().get(str);
                }
                return dVar != null ? c() : dVar;
            }
            dVar = dVarC;
            if (dVar != null) {
            }
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static Map<String, d> a(JSONArray jSONArray) {
        if (jSONArray == null || jSONArray.length() <= 0) {
            return null;
        }
        try {
            HashMap map = new HashMap();
            for (int i = 0; i < jSONArray.length(); i++) {
                JSONObject jSONObjectOptJSONObject = jSONArray.optJSONObject(i);
                map.put(jSONObjectOptJSONObject.optString("id"), new d(jSONObjectOptJSONObject.optString("name"), jSONObjectOptJSONObject.optInt("amount")));
            }
            return map;
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public static d a(JSONObject jSONObject) {
        if (jSONObject == null) {
            return null;
        }
        try {
            String strOptString = jSONObject.optString("name");
            int iOptInt = jSONObject.optInt("amount");
            jSONObject.optString("id");
            return new d(strOptString, iOptInt);
        } catch (Exception e) {
            e.printStackTrace();
            return null;
        }
    }

    public final String toString() {
        return "Reward{name='" + this.a + "', amount=" + this.b + '}';
    }
}
