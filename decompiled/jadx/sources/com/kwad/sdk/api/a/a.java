package com.kwad.sdk.api.a;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Future;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public final class a {
    private static final ExecutorService ajz = new ThreadPoolExecutor(1, 1, 0, TimeUnit.MILLISECONDS, new LinkedBlockingQueue());
    private static final Handler VH = new Handler(Looper.getMainLooper());

    public static Future<?> submit(Runnable runnable) {
        return ajz.submit(runnable);
    }
}
