package com.bianfeng.afext;

import com.bianfeng.ymnsdk.gongxiang.b;
import com.bianfeng.ymnsdk.gongxiang.c;
import com.bianfeng.ymnsdk.gongxiang.i;
import java.io.File;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import org.json.JSONObject;

public class Afexter {
    public Afexter() {
    }

    public static b read(String r1) {
        return c.a(new File(r1));
    }

    public static String readChannel(String r0) {
        b r02 = read(r0);
        if (r02 != null) goto L5;
        return null;
    L5:
        return r02.a();
    }

    public static Map<String, String> readExtraInfo(String r0) {
        b r02 = read(r0);
        if (r02 != null) goto L5;
        return null;
    L5:
        return r02.b();
    }

    public static void write(String r6, String r7, String r8) throws Exception {
        HashMap r0 = new HashMap();
        String[] r82 = r8.split("&");
        int r2 = 0;
    L4:
        if (r2 >= r82.length) goto L6;
        String[] r3 = r82[r2].split("=");
        r0.put(r3[0], r3[1]);
        r2 = r2 + 1;
        goto L4
    L6:
        write(r6, r7, r0);
    }

    public static void write(String r4, String r5, JSONObject r6) throws Exception {
        HashMap r0 = new HashMap();
        Iterator<String> r1 = r6.keySet().iterator();
    L4:
        if (r1.hasNext() == false) goto L6;
        String r2 = r1.next();
        r0.put(r2, r6.optString(r2));
        goto L4
    L6:
        write(r4, r5, r0);
    }

    public static void write(String r1, String r2, Map<String, String> r3) throws Exception {
        i.a(new File(r1), r2, r3);
    }
}
