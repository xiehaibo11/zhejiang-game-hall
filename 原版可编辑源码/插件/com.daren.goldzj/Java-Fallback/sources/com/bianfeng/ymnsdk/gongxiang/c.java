package com.bianfeng.ymnsdk.gongxiang;

import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONException;
import org.json.JSONObject;

public final class c {
    public static b a(File r2) {
        Map<String, String> r22 = b(r2);
        if (r22 != null) goto L6;
        return null;
    L6:
        String r1 = r22.get("ymn_channel");
        r22.remove("ymn_channel");
        return new b(r1, r22);
    }

    public static Map<String, String> b(File r5) {
        String r52 = c(r5);     // Catch: JSONException -> L12
        if (r52 != null) goto L6;
        return null;
    L6:
        JSONObject r1 = new JSONObject(r52);     // Catch: JSONException -> L12
        Iterator<String> r53 = r1.keys();     // Catch: JSONException -> L12
        HashMap r2 = new HashMap();     // Catch: JSONException -> L12
    L7:
        if (r53.hasNext() == false) goto L11;
        String r3 = r53.next().toString();     // Catch: JSONException -> L12
        r2.put(r3, r1.getString(r3));     // Catch: JSONException -> L12
        goto L7
    L11:
        return r2;
    L12:
        e = move-exception;
        e.printStackTrace();
        return null;
    }

    public static String c(File r1) {
        return e.b(r1, 1903654775);
    }
}
