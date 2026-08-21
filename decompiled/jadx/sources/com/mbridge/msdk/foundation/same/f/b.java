package com.mbridge.msdk.foundation.same.f;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: compiled from: ThreadPoolUtils.java */
/* JADX INFO: loaded from: classes2.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static ThreadPoolExecutor f3425a;
    private static ThreadPoolExecutor b;
    private static ThreadPoolExecutor c;
    private static ThreadPoolExecutor d;
    private static Handler e;
    private static ThreadPoolExecutor f;
    private static ThreadPoolExecutor g;

    public static ThreadPoolExecutor a() {
        if (f3425a == null) {
            f3425a = new ThreadPoolExecutor(5, 10, 15L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(60), new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.f.b.1
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread threadNewThread = Executors.defaultThreadFactory().newThread(runnable);
                    threadNewThread.setName("CommonThreadPool");
                    return threadNewThread;
                }
            }, new ThreadPoolExecutor.DiscardPolicy());
        }
        return f3425a;
    }

    public static ThreadPoolExecutor b() {
        if (b == null) {
            b = new ThreadPoolExecutor(5, 10, 5L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(60), new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.f.b.2
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread threadNewThread = Executors.defaultThreadFactory().newThread(runnable);
                    threadNewThread.setName("ReportThreadPool");
                    return threadNewThread;
                }
            }, new ThreadPoolExecutor.DiscardPolicy());
        }
        return b;
    }

    public static ThreadPoolExecutor c() {
        if (c == null) {
            c = new ThreadPoolExecutor(1, 1, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(1), new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.f.b.3
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread threadNewThread = Executors.defaultThreadFactory().newThread(runnable);
                    threadNewThread.setName("NwtThreadPool");
                    return threadNewThread;
                }
            }, new ThreadPoolExecutor.DiscardPolicy());
        }
        return c;
    }

    public static ThreadPoolExecutor d() {
        if (d == null) {
            d = new ThreadPoolExecutor(1, 3, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(3), new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.f.b.4
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread threadNewThread = Executors.defaultThreadFactory().newThread(runnable);
                    threadNewThread.setName("BitmapThreadPool");
                    return threadNewThread;
                }
            }, new ThreadPoolExecutor.DiscardPolicy());
        }
        return d;
    }

    public static ThreadPoolExecutor e() {
        if (f == null) {
            ThreadFactory threadFactory = new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.f.b.5
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread threadNewThread = Executors.defaultThreadFactory().newThread(runnable);
                    threadNewThread.setName("mb-image-download-tread");
                    return threadNewThread;
                }
            };
            int iAvailableProcessors = (Runtime.getRuntime().availableProcessors() * 2) + 1;
            f = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(30), threadFactory, new ThreadPoolExecutor.DiscardPolicy());
        }
        return f;
    }

    public static ThreadPoolExecutor f() {
        if (g == null) {
            ThreadFactory threadFactory = new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.f.b.6
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread threadNewThread = Executors.defaultThreadFactory().newThread(runnable);
                    threadNewThread.setName("mb-image-download-tread");
                    return threadNewThread;
                }
            };
            int iAvailableProcessors = (Runtime.getRuntime().availableProcessors() * 2) + 1;
            g = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(30), threadFactory, new ThreadPoolExecutor.DiscardPolicy());
        }
        return g;
    }

    public static Handler g() {
        if (e == null) {
            e = new a();
        }
        return e;
    }

    /* JADX INFO: compiled from: ThreadPoolUtils.java */
    private static class a extends Handler {
        public a() {
            super(Looper.getMainLooper());
        }

        @Override // android.os.Handler
        public final void handleMessage(Message message) {
            super.handleMessage(message);
        }
    }
}
