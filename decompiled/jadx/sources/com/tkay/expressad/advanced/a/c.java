package com.tkay.expressad.advanced.a;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Map<String, Boolean> f6359a = new HashMap();

    public static void a(String str) {
        f6359a.put(str, Boolean.TRUE);
    }

    public static boolean b(String str) {
        if (f6359a.containsKey(str)) {
            return f6359a.get(str).booleanValue();
        }
        return false;
    }

    public static void c(String str) {
        f6359a.remove(str);
    }

    private static void a() {
        f6359a.clear();
    }
}
