package com.tramini.plugin.a.g;

import android.text.TextUtils;
import java.util.concurrent.ConcurrentHashMap;

public final class g {
    public static String a(com.tramini.plugin.b.a aVar) {
        com.tramini.plugin.a.c.c cVar;
        ConcurrentHashMap<String, com.tramini.plugin.a.c.c> concurrentHashMapE = aVar.e();
        if (concurrentHashMapE == null) {
            return "";
        }
        for (String str : concurrentHashMapE.keySet()) {
            if (!TextUtils.isEmpty(str) && (cVar = concurrentHashMapE.get(str)) != null && !TextUtils.isEmpty(cVar.a) && cVar.a.startsWith("http")) {
                return str;
            }
        }
        return "";
    }
}
