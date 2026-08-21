package com.mbridge.msdk.advanced.common;

import java.util.HashMap;
import java.util.Map;

public final class b {
    private static Map<String, Boolean> a = new HashMap();

    public static void a(String str, boolean z) {
        a.put(str, Boolean.valueOf(z));
    }

    public static boolean a(String str) {
        if (a.containsKey(str)) {
            return a.get(str).booleanValue();
        }
        return false;
    }

    public static void b(String str) {
        a.remove(str);
    }
}
