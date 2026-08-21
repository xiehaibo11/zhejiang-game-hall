package com.kwad.sdk.utils.a;

import com.kwad.sdk.utils.a.c;
import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public final class d {
    static c.d aLr;
    static volatile Executor aLs;
    static ExecutorService aLt = Executors.newSingleThreadExecutor();

    private d() {
    }

    public static void a(c.d dVar) {
        aLr = dVar;
    }

    static Executor getExecutor() {
        if (aLs == null) {
            synchronized (d.class) {
                if (aLs == null) {
                    ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(4, 4, 10L, TimeUnit.SECONDS, new LinkedBlockingQueue());
                    threadPoolExecutor.allowCoreThreadTimeOut(true);
                    aLs = threadPoolExecutor;
                }
            }
        }
        return aLs;
    }

    public static void setExecutor(Executor executor) {
        if (executor != null) {
            aLs = executor;
        }
    }
}
