package com.huawei.hmf.tasks.a;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final int f1954a;
    static final int b;
    private static final a c = new a();
    private static final int e;
    private final Executor d = new ExecutorC0076a(0);

    /* JADX INFO: renamed from: com.huawei.hmf.tasks.a.a$a, reason: collision with other inner class name */
    static class ExecutorC0076a implements Executor {
        private ExecutorC0076a() {
        }

        /* synthetic */ ExecutorC0076a(byte b) {
            this();
        }

        @Override // java.util.concurrent.Executor
        public final void execute(Runnable runnable) {
            new Handler(Looper.getMainLooper()).post(runnable);
        }
    }

    static {
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors();
        e = iAvailableProcessors;
        f1954a = iAvailableProcessors + 1;
        b = (iAvailableProcessors * 2) + 1;
    }

    public static ExecutorService a() {
        ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(f1954a, b, 1L, TimeUnit.SECONDS, new LinkedBlockingQueue());
        threadPoolExecutor.allowCoreThreadTimeOut(true);
        return threadPoolExecutor;
    }

    public static Executor b() {
        return c.d;
    }
}
