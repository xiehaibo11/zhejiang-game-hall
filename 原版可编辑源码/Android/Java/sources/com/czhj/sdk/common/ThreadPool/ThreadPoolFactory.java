package com.czhj.sdk.common.ThreadPool;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class ThreadPoolFactory {
    private static final int a = Runtime.getRuntime().availableProcessors();
    private static final TimeUnit b = TimeUnit.SECONDS;
    private static Handler c = new Handler(Looper.getMainLooper());

    public static class BackgroundThreadPool {
        private static BackgroundThreadPool d;
        final int a = 2;
        final BlockingQueue<Runnable> b = new LinkedBlockingQueue();
        final ExecutorService c = new ThreadPoolExecutor(2, ThreadPoolFactory.a * 2, 2, ThreadPoolFactory.b, this.b, new BackgroundThreadFactory());

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
