package com.cmic.gen.sdk.e;

import com.cmic.gen.sdk.auth.GenTokenListener;
import java.util.concurrent.ConcurrentHashMap;

public class e {
    private static ConcurrentHashMap<String, GenTokenListener> a = new ConcurrentHashMap<>(16);
    private static ConcurrentHashMap<String, com.cmic.gen.sdk.a> b = new ConcurrentHashMap<>();

    public static boolean a(String str) {
        return !a.containsKey(str);
    }

    public static void a(String str, GenTokenListener genTokenListener) {
        a.put(str, genTokenListener);
    }

    public static void b(String str) {
        a.remove(str);
    }

    public static GenTokenListener c(String str) {
        return a.get(str);
    }

    public static com.cmic.gen.sdk.a d(String str) {
        if (str != null) {
            return b.get(str);
        }
        return new com.cmic.gen.sdk.a(0);
    }

    public static void a(String str, com.cmic.gen.sdk.a aVar) {
        if (str == null || aVar == null) {
            return;
        }
        b.put(str, aVar);
    }
}
