package com.ss.android.downloadlib.utils;

import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class bm {
    public static void rg(String str, String str2, JSONObject jSONObject) {
        com.ss.android.download.api.config.b bVarUn = com.ss.android.downloadlib.addownload.bm.un();
        if (bVarUn != null) {
            bVarUn.rg(2, str, str2, jSONObject);
        }
    }

    public static void df(String str, String str2, JSONObject jSONObject) {
        com.ss.android.download.api.config.b bVarUn = com.ss.android.downloadlib.addownload.bm.un();
        if (bVarUn != null) {
            bVarUn.rg(3, str, str2, jSONObject);
        }
    }

    public static void q(String str, String str2, JSONObject jSONObject) {
        com.ss.android.download.api.config.b bVarUn = com.ss.android.downloadlib.addownload.bm.un();
        if (bVarUn != null) {
            bVarUn.rg(6, str, str2, jSONObject);
        }
    }

    public static void rg(String str, String str2) {
        q(str, str2, null);
    }

    public static void rg(String str) {
        q(null, str, null);
    }
}
