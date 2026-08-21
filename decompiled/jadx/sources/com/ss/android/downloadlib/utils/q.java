package com.ss.android.downloadlib.utils;

import android.text.TextUtils;
import com.tkay.core.common.f.n;
import org.json.JSONException;
import org.json.JSONObject;

/* JADX INFO: loaded from: classes3.dex */
public class q {
    public static String rg(String str, String str2, boolean z, String str3) {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("extra", str);
            if (!TextUtils.isEmpty(str2)) {
                jSONObject.put("notification_jump_url", str2);
            }
            jSONObject.put("show_toast", z);
            jSONObject.put(n.h, str3);
        } catch (JSONException e) {
            e.printStackTrace();
        }
        return jSONObject.toString();
    }
}
