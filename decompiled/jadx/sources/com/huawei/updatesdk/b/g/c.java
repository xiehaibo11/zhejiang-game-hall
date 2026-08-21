package com.huawei.updatesdk.b.g;

import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes2.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final ThreadPoolExecutor f2335a = new ThreadPoolExecutor(2, 2, 10, TimeUnit.SECONDS, new LinkedBlockingQueue(), new a("UpdateSDK-ServerTask"));
    public static final ThreadPoolExecutor b = new ThreadPoolExecutor(0, 2, 5, TimeUnit.SECONDS, new LinkedBlockingQueue(), new a("UpdateSDK-CheckTask"));

    private static class a implements ThreadFactory {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final AtomicInteger f2336a = new AtomicInteger();
        private String b;

        public a(String str) {
            this.b = str;
        }

        @Override // java.util.concurrent.ThreadFactory
        public Thread newThread(Runnable runnable) {
            return new Thread(runnable, this.b + "#" + this.f2336a.incrementAndGet());
        }
    }
}
