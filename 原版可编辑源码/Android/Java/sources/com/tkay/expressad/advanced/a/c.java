package com.tkay.expressad.advanced.a;

import java.util.HashMap;
import java.util.Map;

public final class c {
    private static Map<String, Boolean> a = new HashMap();

    public static void a(String str) {
        a.put(str, Boolean.TRUE);
    }

    public static boolean b(String str) {
        if (a.containsKey(str)) {
            return a.get(str).booleanValue();
        }
        return false;
    }

    public static void c(String str) {
        a.remove(str);
    }

    private static void a() {
        a.clear();
    }
}
