package com.xiaomi.mipush.sdk;

import com.xiaomi.push.ho;
import java.util.HashMap;

public class l {
    private static HashMap<e, a> a = new HashMap<>();

    class a {
        public String a;
        public String b;

        public a(String str, String str2) {
            this.a = str;
            this.b = str2;
        }
    }

    static {
        a(e.a, new a("com.xiaomi.assemble.control.HmsPushManager", "newInstance"));
        a(e.b, new a("com.xiaomi.assemble.control.FCMPushManager", "newInstance"));
        a(e.c, new a("com.xiaomi.assemble.control.COSPushManager", "newInstance"));
        a(e.d, new a("com.xiaomi.assemble.control.FTOSPushManager", "newInstance"));
    }

    public static au a(e eVar) {
        int i = m.a[eVar.ordinal()];
        if (i == 1) {
            return au.c;
        }
        if (i == 2) {
            return au.d;
        }
        if (i == 3) {
            return au.e;
        }
        if (i != 4) {
            return null;
        }
        return au.f;
    }

    public static a a(e eVar) {
        return a.get(eVar);
    }

    public static ho a(e eVar) {
        return ho.ao;
    }

    private static void a(e eVar, a aVar) {
        if (aVar != null) {
            a.put(eVar, aVar);
        }
    }
}
