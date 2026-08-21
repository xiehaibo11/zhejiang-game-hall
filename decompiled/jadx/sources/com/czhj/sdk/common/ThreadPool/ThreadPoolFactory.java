package com.czhj.sdk.common.ThreadPool;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class ThreadPoolFactory {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f1765a = Runtime.getRuntime().availableProcessors();
    private static final TimeUnit b = TimeUnit.SECONDS;
    private static Handler c = new Handler(Looper.getMainLooper());

    public static class BackgroundThreadPool {
        private static BackgroundThreadPool d;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final int f1766a = 2;
        final BlockingQueue<Runnable> b = new LinkedBlockingQueue();
        final ExecutorService c = new ThreadPoolExecutor(2, ThreadPoolFactory.f1765a * 2, 2, ThreadPoolFactory.b, this.b, new BackgroundThreadFactory());

        BackgroundThreadPool() {
        }

        public static BackgroundThreadPool getInstance() {
            if (d == null) {
                synchronized (BackgroundThreadPool.class) {
                    if (d == null) {
                        d = new BackgroundThreadPool();
                    }
                }
            }
            return d;
        }

        public ExecutorService getExecutorService() {
            return this.c;
        }

        public void submit(Runnable runnable) {
            try {
                this.c.submit(runnable);
            } catch (Throwable unused) {
            }
        }
    }

    public static void MainThreadRun(Runnable runnable) {
        c.post(runnable);
    }
}
