package com.mbridge.msdk.advanced.common;

import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: MBNativeAdvancedWebViewCache.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Map<String, Boolean> f3091a = new HashMap();

    public static void a(String str, boolean z) {
        f3091a.put(str, Boolean.valueOf(z));
    }

    public static boolean a(String str) {
        if (f3091a.containsKey(str)) {
            return f3091a.get(str).booleanValue();
        }
        return false;
    }

    public static void b(String str) {
        f3091a.remove(str);
    }
}
