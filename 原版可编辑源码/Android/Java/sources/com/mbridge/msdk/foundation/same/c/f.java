package com.mbridge.msdk.foundation.same.c;

import com.mbridge.msdk.foundation.tools.ab;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicBoolean;

public final class f {
    private static AtomicBoolean a;
    private static ThreadPoolExecutor b;

    public static boolean a() {
        if (a == null) {
            a = new AtomicBoolean(ab.a().a("u_i_l_l_n", false));
        }
        AtomicBoolean atomicBoolean = a;
        return atomicBoolean != null && atomicBoolean.get();
    }

    public static ThreadPoolExecutor b() {
        if (b == null) {
            int iAvailableProcessors = (Runtime.getRuntime().availableProcessors() * 2) + 1;
            b = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors, 5L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadFactory() {
                @Override
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
