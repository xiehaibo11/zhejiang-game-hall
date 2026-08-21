package com.heytap.mcssdk.utils;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final ExecutorService f1928a = Executors.newSingleThreadExecutor();
    private static Handler b = new Handler(Looper.getMainLooper());

    public static void a(Runnable runnable) {
        f1928a.execute(runnable);
    }

    public static void b(Runnable runnable) {
        b.post(runnable);
    }
}
