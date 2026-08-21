package com.huawei.hms.push;

import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: compiled from: ReceiverThreadPoolExecutor.java */
/* JADX INFO: loaded from: classes.dex */
public class u {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Object f2163a = new Object();
    public static ThreadPoolExecutor b = new ThreadPoolExecutor(1, 50, 60, TimeUnit.SECONDS, new LinkedBlockingQueue());

    public static ThreadPoolExecutor a() {
        ThreadPoolExecutor threadPoolExecutor;
        synchronized (f2163a) {
            threadPoolExecutor = b;
        }
        return threadPoolExecutor;
    }
}
