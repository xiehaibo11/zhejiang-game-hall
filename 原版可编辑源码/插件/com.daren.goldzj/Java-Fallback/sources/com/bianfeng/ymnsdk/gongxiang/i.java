package com.bianfeng.ymnsdk.gongxiang;

import java.io.File;
import java.io.IOException;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

public final class i {
    public static void a(File r1, String r2, Map<String, String> r3) throws IOException, f {
        a(r1, r2, r3, false);
    }

    public static void a(File r2, String r3, Map<String, String> r4, boolean r5) throws IOException, f {
        HashMap r0 = new HashMap();
        Map<String, String> r1 = c.b(r2);
        if (r1 == null) goto L6;
        r0.putAll(r1);
    L6:
        if (r4 == null) goto L8;
        r4.remove("ymn_channel");
        r0.putAll(r4);
    L8:
        if (r3 != null) goto L10;
    L12:
        JSONObject r32 = new JSONObject();
        Iterator r42 = r0.entrySet().iterator();
    L14:
        if (r42.hasNext() == false) goto L16;
        Map.Entry r02 = (Map.Entry) r42.next();
        r32.put((String) r02.getKey(), r02.getValue());
        goto L14
    L16:
        a(r2, r32.toString(), r5);
        return;
    L10:
        if (r3.length() <= 0) goto L12;
        r0.put("ymn_channel", r3);
        goto L12
    }

    public static void a(File r1, String r2, boolean r3) throws IOException, f {
        j.a(r1, 1903654775, r2, r3);
    }
}
