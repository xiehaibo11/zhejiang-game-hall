package com.igexin.push.config;

import java.util.Arrays;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes2.dex */
public class l {
    public static void a(String str, boolean z) {
        JSONObject jSONObject;
        String[] strArrA;
        String[] strArrA2;
        com.igexin.b.a.c.b.a("IDCConfigParse parse idc config data : " + str, new Object[0]);
        try {
            jSONObject = new JSONObject(str);
        } catch (Exception unused) {
            jSONObject = null;
        }
        if (jSONObject == null) {
            return;
        }
        if (jSONObject.has("N")) {
            try {
                SDKUrlConfig.setLocation(jSONObject.getString("N"));
            } catch (JSONException unused2) {
            }
        }
        if (jSONObject.has("X1") && (strArrA2 = a(jSONObject, "X1")) != null && strArrA2.length > 0 && !Arrays.equals(strArrA2, SDKUrlConfig.getXfrAddress())) {
            SDKUrlConfig.setXfrAddressIps(strArrA2);
            if (z) {
                com.igexin.push.c.i.a().e();
            }
        }
        if (!jSONObject.has("X2") || (strArrA = a(jSONObject, "X2")) == null || strArrA.length <= 0) {
            return;
        }
        SDKUrlConfig.XFR_ADDRESS_BAK = strArrA;
    }

    private static String[] a(JSONObject jSONObject, String str) {
        try {
            JSONArray jSONArray = jSONObject.getJSONArray(str);
            int length = jSONArray.length();
            String[] strArr = new String[length];
            for (int i = 0; i < length; i++) {
                if (str.equals("X1") || str.equals("X2")) {
                    strArr[i] = "socket://" + jSONArray.getString(i);
                } else {
                    strArr[i] = "http://" + jSONArray.getString(i);
                }
            }
            return strArr;
        } catch (Exception unused) {
            return null;
        }
    }
}
