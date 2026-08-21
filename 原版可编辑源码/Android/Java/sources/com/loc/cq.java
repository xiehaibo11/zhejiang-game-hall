package com.loc;

import android.text.TextUtils;
import java.lang.Thread;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.atomic.AtomicLong;

public final class cq implements ThreadFactory {
    private static final int k;
    private static final int l;
    private static final int m;
    private final AtomicLong a;
    private final ThreadFactory b;
    private final Thread.UncaughtExceptionHandler c;
    private final String d;
    private final Integer e;
    private final Boolean f;
    private final int g;
    private final int h;
    private final BlockingQueue<Runnable> i;
    private final int j;

    public static class a {
        private ThreadFactory a;
        private Thread.UncaughtExceptionHandler b;
        private String c;
        private Integer d;
        private Boolean e;
        private int f = cq.l;
        private int g = cq.m;
        private int h = 30;
        private BlockingQueue<Runnable> i;

        private void b() {
            this.a = null;
            this.b = null;
            this.c = null;
            this.d = null;
            this.e = null;
        }

        public final a a(String str) {
            this.c = str;
            return this;
        }

        public final cq a() {
            cq cqVar = new cq(this, (byte) 0);
            b();
            return cqVar;
        }
    }

    static {
        int iAvailableProcessors = Runtime.getRuntime().availableProcessors();
        k = iAvailableProcessors;
        l = Math.max(2, Math.min(iAvailableProcessors - 1, 4));
        m = (k * 2) + 1;
    }

    private cq(a aVar) {
        this.b = aVar.a == null ? Executors.defaultThreadFactory() : aVar.a;
        int i = aVar.f;
        this.g = i;
        int i2 = m;
        this.h = i2;
        if (i2 < i) {
            throw new NullPointerException("maxPoolSize must > corePoolSize!");
        }
        this.j = aVar.h;
        this.i = aVar.i == null ? new LinkedBlockingQueue<>(256) : aVar.i;
        this.d = TextUtils.isEmpty(aVar.c) ? "amap-threadpool" : aVar.c;
        this.e = aVar.d;
        this.f = aVar.e;
        this.c = aVar.b;
        this.a = new AtomicLong();
    }

    cq(a aVar, byte b) {
        this(aVar);
    }

    private ThreadFactory g() {
        return this.b;
    }

    private String h() {
        return this.d;
    }

    private Boolean i() {
        return this.f;
    }

    private Integer j() {
        return this.e;
    }

    private Thread.UncaughtExceptionHandler k() {
        return this.c;
    }

    public final int a() {
        return this.g;
    }

    public final int b() {
        return this.h;
    }

    public final BlockingQueue<Runnable> c() {
        return this.i;
    }

    public final int d() {
        return this.j;
    }

    @Override
    public final Thread newThread(final Runnable runnable) {
        new Runnable() {
            @Override
            public final void run() {
                try {
                    runnable.run();
                } catch (Throwable unused) {
                }
            }
        };
        Thread threadNewThread = g().newThread(runnable);
        if (h() != null) {
            threadNewThread.setName(String.format(h() + "-%d", Long.valueOf(this.a.incrementAndGet())));
        }
        if (k() != null) {
            threadNewThread.setUncaughtExceptionHandler(k());
        }
        if (j() != null) {
            threadNewThread.setPriority(j().intValue());
        }
        if (i() != null) {
            threadNewThread.setDaemon(i().booleanValue());
        }
        return threadNewThread;
    }
}
