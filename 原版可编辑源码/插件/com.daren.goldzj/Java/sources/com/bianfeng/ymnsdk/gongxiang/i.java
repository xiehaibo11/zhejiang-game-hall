package com.bianfeng.ymnsdk.gongxiang;

import java.io.File;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public final class i {
    public static void a(File file, String str, Map<String, String> map) throws Throwable {
        a(file, str, map, false);
    }

    public static void a(File file, String str, Map<String, String> map, boolean z) throws Throwable {
        HashMap map2 = new HashMap();
        Map<String, String> mapB = c.b(file);
        if (mapB != null) {
            map2.putAll(mapB);
        }
        if (map != null) {
            map.remove("ymn_channel");
            map2.putAll(map);
        }
        if (str != null && str.length() > 0) {
            map2.put("ymn_channel", str);
        }
        JSONObject jSONObject = new JSONObject();
        for (Map.Entry entry : map2.entrySet()) {
            jSONObject.put((String) entry.getKey(), entry.getValue());
        }
        a(file, jSONObject.toString(), z);
    }

    public static void a(File file, String str, boolean z) throws Throwable {
        j.a(file, 1903654775, str, z);
    }
}
