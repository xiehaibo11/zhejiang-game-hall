package com.bianfeng.a.a;

import com.bianfeng.afext.read.ApkUtil;
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public final class c {
    public static b a(File file) {
        Map<String, String> mapB = b(file);
        if (mapB == null) {
            return null;
        }
        String str = mapB.get("channel");
        mapB.remove("channel");
        return new b(str, mapB);
    }

    public static Map<String, String> b(File file) {
        try {
            String strC = c(file);
            if (strC == null) {
                return null;
            }
            JSONObject jSONObject = new JSONObject(strC);
            Iterator<String> itKeys = jSONObject.keys();
            HashMap map = new HashMap();
            while (itKeys.hasNext()) {
                String string = itKeys.next().toString();
                map.put(string, jSONObject.getString(string));
            }
            return map;
        } catch (JSONException e) {
            e.printStackTrace();
            return null;
        }
    }

    public static String c(File file) {
        return e.a(file, ApkUtil.APK_CHANNEL_BLOCK_ID);
    }
}
