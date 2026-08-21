package com.bianfeng.afext;

import com.bianfeng.ymnsdk.gongxiang.b;
import com.bianfeng.ymnsdk.gongxiang.c;
import com.bianfeng.ymnsdk.gongxiang.i;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import org.json.JSONObject;

public class Afexter {
    public static b read(String str) {
        return c.a(new File(str));
    }

    public static String readChannel(String str) {
        b bVar = read(str);
        if (bVar != null) {
            return bVar.a();
        }
        return null;
    }

    public static Map<String, String> readExtraInfo(String str) {
        b bVar = read(str);
        if (bVar != null) {
            return bVar.b();
        }
        return null;
    }

    public static void write(String str, String str2, String str3) throws Exception {
        HashMap map = new HashMap();
        for (String str4 : str3.split("&")) {
            String[] strArrSplit = str4.split("=");
            map.put(strArrSplit[0], strArrSplit[1]);
        }
        write(str, str2, map);
    }

    public static void write(String str, String str2, JSONObject jSONObject) throws Exception {
        HashMap map = new HashMap();
        for (String str3 : jSONObject.keySet()) {
            map.put(str3, jSONObject.optString(str3));
        }
        write(str, str2, map);
    }

    public static void write(String str, String str2, Map<String, String> map) throws Exception {
        i.a(new File(str), str2, map);
    }
}
