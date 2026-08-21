package com.bytedance.pangle.d;

import android.os.Handler;
import android.os.Looper;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public final class e {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static Executor f1508a = Executors.newCachedThreadPool(new ThreadFactory() { // from class: com.bytedance.pangle.d.e.1

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final AtomicInteger f1509a = new AtomicInteger(1);

        @Override // java.util.concurrent.ThreadFactory
        public final Thread newThread(Runnable runnable) {
            return new Thread(runnable, "pangle-Fast-" + this.f1509a.getAndIncrement());
        }
    });
    private static final Object b = new Object();
    private static Handler c = null;

    public static void a(Runnable runnable) {
        f1508a.execute(runnable);
    }

    public static ExecutorService a(int i) {
        return Executors.newFixedThreadPool(i, new ThreadFactory() { // from class: com.bytedance.pangle.d.e.2

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private final AtomicInteger f1510a = new AtomicInteger(1);

            @Override // java.util.concurrent.ThreadFactory
            public final Thread newThread(Runnable runnable) {
                return new Thread(runnable, "pangle-Install-" + this.f1510a.getAndIncrement());
            }
        });
    }

    private static Handler a() {
        Handler handler;
        synchronized (b) {
            if (c == null) {
                c = new Handler(Looper.getMainLooper());
            }
            handler = c;
        }
        return handler;
    }

    public static void b(Runnable runnable) {
        if (a().getLooper() == Looper.myLooper()) {
            runnable.run();
        } else {
            a().post(runnable);
        }
    }
}
