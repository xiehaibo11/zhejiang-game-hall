package com.cmic.gen.sdk.e;

import com.cmic.gen.sdk.auth.GenTokenListener;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: compiled from: OverTimeUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ConcurrentHashMap<String, GenTokenListener> f1667a = new ConcurrentHashMap<>(16);
    private static ConcurrentHashMap<String, com.cmic.gen.sdk.a> b = new ConcurrentHashMap<>();

    public static boolean a(String str) {
        return !f1667a.containsKey(str);
    }

    public static void a(String str, GenTokenListener genTokenListener) {
        f1667a.put(str, genTokenListener);
    }

    public static void b(String str) {
        f1667a.remove(str);
    }

    public static GenTokenListener c(String str) {
        return f1667a.get(str);
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
