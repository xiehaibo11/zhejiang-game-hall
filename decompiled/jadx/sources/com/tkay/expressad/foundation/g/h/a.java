package com.tkay.expressad.foundation.g.h;

import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static ThreadPoolExecutor f6936a;
    private static ThreadPoolExecutor b;
    private static ThreadPoolExecutor c;

    public static ThreadPoolExecutor a() {
        if (f6936a == null) {
            f6936a = new ThreadPoolExecutor(5, 10, 15L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(60), new ThreadFactory() { // from class: com.tkay.expressad.foundation.g.h.a.1
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread threadNewThread = Executors.defaultThreadFactory().newThread(runnable);
                    threadNewThread.setName("CommonThreadPool");
                    return threadNewThread;
                }
            }, new ThreadPoolExecutor.DiscardPolicy());
        }
        return f6936a;
    }

    private static ThreadPoolExecutor c() {
        if (b == null) {
            b = new ThreadPoolExecutor(5, 200, 5L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(60), new ThreadFactory() { // from class: com.tkay.expressad.foundation.g.h.a.2
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

    public static ThreadPoolExecutor b() {
        if (c == null) {
            c = new ThreadPoolExecutor(1, 1, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(1), new ThreadFactory() { // from class: com.tkay.expressad.foundation.g.h.a.3
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
}
