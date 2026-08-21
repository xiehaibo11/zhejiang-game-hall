package com.bytedance.pangle.download;

import android.os.Handler;
import android.os.Looper;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;

/* JADX INFO: loaded from: classes.dex */
public class b {
    private static volatile b e;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final Map<String, Long> f1514a = new ConcurrentHashMap();
    public final Handler b = new Handler(Looper.getMainLooper());
    public final Map<String, Runnable> c = new ConcurrentHashMap();
    final Map<String, Runnable> d = new ConcurrentHashMap();

    private b() {
    }

    public static b a() {
        if (e == null) {
            synchronized (b.class) {
                if (e == null) {
                    e = new b();
                }
            }
        }
        return e;
    }
}
