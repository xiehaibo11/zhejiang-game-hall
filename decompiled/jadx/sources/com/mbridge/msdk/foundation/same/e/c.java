package com.mbridge.msdk.foundation.same.e;

import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.ab;
import com.mbridge.msdk.foundation.tools.z;
import java.util.concurrent.LinkedBlockingDeque;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: compiled from: CommonTaskLoaderThreadPool.java */
/* JADX INFO: loaded from: classes2.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile ThreadPoolExecutor f3422a;

    private static int a(int i, String str) {
        try {
            int iA = ab.a().a(str, i);
            return iA <= 0 ? i : iA;
        } catch (Exception e) {
            if (!MBridgeConstans.DEBUG) {
                return i;
            }
            z.d("CommonTaskLoaderThreadPool", e.getMessage());
            return i;
        }
    }

    public static ThreadPoolExecutor a() {
        if (f3422a == null) {
            int iA = a(10, "c_t_l_t_p_c");
            int iA2 = a(50, "c_t_l_t_p_m");
            int iA3 = a(5, "c_t_l_t_p_t");
            int i = iA2 < iA ? iA : iA2;
            try {
                if (MBridgeConstans.DEBUG) {
                    z.a("CommonTaskLoaderThreadPool", "create ThreadPoolExecutor for core " + iA + " max " + i + " timeout " + iA3);
                }
                f3422a = new ThreadPoolExecutor(iA, i, iA3, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.e.c.1
                    @Override // java.util.concurrent.ThreadFactory
                    public final Thread newThread(Runnable runnable) {
                        Thread thread = new Thread(runnable);
                        thread.setName("mb-task-loader-thread");
                        return thread;
                    }
                }, new ThreadPoolExecutor.DiscardPolicy());
            } catch (Exception e) {
                if (MBridgeConstans.DEBUG) {
                    z.c("CommonTaskLoaderThreadPool", "create ThreadPoolExecutor failed ", e);
                }
            }
        }
        if (f3422a == null) {
            int iAvailableProcessors = (Runtime.getRuntime().availableProcessors() * 2) + 1;
            f3422a = new ThreadPoolExecutor(iAvailableProcessors, iAvailableProcessors, 5L, TimeUnit.SECONDS, new LinkedBlockingDeque(), new ThreadFactory() { // from class: com.mbridge.msdk.foundation.same.e.c.1
                @Override // java.util.concurrent.ThreadFactory
                public final Thread newThread(Runnable runnable) {
                    Thread thread = new Thread(runnable);
                    thread.setName("mb-task-loader-thread");
                    return thread;
                }
            }, new ThreadPoolExecutor.DiscardPolicy());
        }
        f3422a.allowCoreThreadTimeOut(true);
        return f3422a;
    }
}
