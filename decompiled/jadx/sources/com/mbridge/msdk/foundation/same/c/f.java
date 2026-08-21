package com.mbridge.msdk.foundation.same.c;

import com.mbridge.msdk.foundation.tools.ab;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

/* JADX INFO: compiled from: ImageLoaderController.java */
/* JADX INFO: loaded from: classes2.dex */
public final class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static AtomicBoolean f3417a;
    private static ThreadPoolExecutor b;

    public static boolean a() {
        if (f3417a == null) {
            f3417a = new AtomicBoolean(ab.a().a("u_i_l_l_n", false));
        }
        AtomicBoolean atomicBoolean = f3417a;
        return atomicBoolean != null && atomicBoolean.get();
    }

    public static ThreadPoolExecutor b() {
        if (b == null) {
            int iAvailableProcessors = (Runtime.getRuntime().availableProcessors() * 2) + 1;
            b = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors, 5L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.c.f.1
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread thread = new Thread(runnable);
                    thread.setName("mb-image-loader-thread");
                    return thread;
                }
            }, new ThreadPoolExecutor.DiscardPolicy());
        }
        b.allowCoreThreadTimeOut(true);
        return b;
    }
}
