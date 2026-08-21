package com.ss.android.download.api.q;

import android.text.TextUtils;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import java.util.Iterator;
import org.json.JSONException;
import org.json.JSONObject;

public class df {
    public static long rg(JSONObject jSONObject, String str) {
        if (jSONObject == null) {
            return 0L;
        }
        try {
            return Long.valueOf(jSONObject.optString(str)).longValue();
        } catch (NumberFormatException unused) {
            return 0L;
        }
    }

    public static boolean rg(DownloadSetting downloadSetting, String str) {
        if (downloadSetting == null || downloadSetting.optInt("apk_update_handler_enable", 1) != 1) {
            return false;
        }
        return "application/ttpatch".equals(str);
    }

    public static JSONObject rg(JSONObject jSONObject, JSONObject jSONObject2) {
        if (jSONObject != null && jSONObject2 != null) {
            try {
                Iterator<String> itKeys = jSONObject.keys();
                while (itKeys.hasNext()) {
                    String next = itKeys.next();
                    jSONObject2.put(next, jSONObject.get(next));
                }
            } catch (JSONException e) {
                e.printStackTrace();
            }
        }
        return jSONObject2;
    }

    public static JSONObject rg(JSONObject jSONObject) {
        return rg(jSONObject, new JSONObject());
    }

    public static JSONObject rg(JSONObject... jSONObjectArr) {
        JSONObject jSONObject = new JSONObject();
        if (jSONObjectArr != null && jSONObjectArr.length != 0) {
            for (JSONObject jSONObject2 : jSONObjectArr) {
                if (jSONObject2 != null) {
                    rg(jSONObject2, jSONObject);
                }
            }
        }
        return jSONObject;
    }

    public static String rg(String... strArr) {
        for (String str : strArr) {
            if (!TextUtils.isEmpty(str)) {
                return str;
            }
        }
        return "";
    }
}
