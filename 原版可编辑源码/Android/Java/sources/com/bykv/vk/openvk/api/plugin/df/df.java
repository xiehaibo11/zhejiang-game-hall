package com.bykv.vk.openvk.api.plugin.df;

import android.os.Build;
import android.text.TextUtils;
import com.bytedance.JProtect;
import java.security.SecureRandom;
import org.json.JSONObject;

public class df {
    @JProtect
    public static String rg(String str) {
        if (TextUtils.isEmpty(str)) {
            return str;
        }
        String strRg = rg();
        String strRg2 = rg(strRg, 32);
        String strDf = df();
        String strRg3 = null;
        if (strRg2 != null && strDf != null) {
            strRg3 = rg.rg(str, strDf, strRg2);
        }
        return 3 + strRg + strDf + strRg3;
    }

    @JProtect
    public static JSONObject rg(JSONObject jSONObject) {
        JSONObject jSONObject2 = new JSONObject();
        if (jSONObject == null) {
            return jSONObject2;
        }
        try {
            try {
                String strRg = rg(jSONObject.toString());
                if (!TextUtils.isEmpty(strRg)) {
                    jSONObject2.put("message", strRg);
                    jSONObject2.put("cypher", 3);
                } else {
                    jSONObject2.put("message", jSONObject.toString());
                    jSONObject2.put("cypher", 0);
                }
            } catch (Throwable unused) {
            }
        } catch (Throwable unused2) {
            jSONObject2.put("message", jSONObject.toString());
            jSONObject2.put("cypher", 0);
        }
        return jSONObject2;
    }

    public static String rg() {
        String strRg = rg(16);
        if (strRg == null || strRg.length() != 32) {
            return null;
        }
        return strRg;
    }

    public static String rg(String str, int i) {
        if (str == null || str.length() != i) {
            return null;
        }
        int i2 = i / 2;
        return str.substring(i2, i) + str.substring(0, i2);
    }

    public static String df() {
        String strRg = rg(8);
        if (strRg == null || strRg.length() != 16) {
            return null;
        }
        return strRg;
    }

    public static String rg(int i) {
        try {
            byte[] bArr = new byte[i];
            q().nextBytes(bArr);
            return q.rg(bArr);
        } catch (Exception unused) {
            return null;
        }
    }

    private static SecureRandom q() {
        if (Build.VERSION.SDK_INT >= 26) {
            try {
                return SecureRandom.getInstanceStrong();
            } catch (Throwable unused) {
                return new SecureRandom();
            }
        }
        return new SecureRandom();
    }
}
