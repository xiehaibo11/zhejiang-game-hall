package com.meizu.cloud.pushsdk.d.b.a;

import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static ExecutorService f4573a = null;
    private static int b = 2;

    public static ExecutorService a() {
        synchronized (b.class) {
            if (f4573a == null) {
                f4573a = Executors.newScheduledThreadPool(b);
            }
        }
        return f4573a;
    }

    public static Future a(Callable callable) {
        return a().submit(callable);
    }

    public static void a(int i) {
        b = i;
    }

    public static void a(Runnable runnable) {
        a().execute(runnable);
    }
}
