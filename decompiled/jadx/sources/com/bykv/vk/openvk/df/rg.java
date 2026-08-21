package com.bykv.vk.openvk.df;

import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes.dex */
public class rg {
    private static volatile rg df;
    private volatile ThreadPoolExecutor rg = new ThreadPoolExecutor(3, 3, 5, TimeUnit.SECONDS, new LinkedBlockingQueue(), new ThreadFactoryC0048rg(), new RejectedExecutionHandler() { // from class: com.bykv.vk.openvk.df.rg.1
        @Override // java.util.concurrent.RejectedExecutionHandler
        public void rejectedExecution(Runnable runnable, ThreadPoolExecutor threadPoolExecutor) {
            com.bykv.vk.openvk.api.rg.pt("TTThreadManager", "TTThreadManager rejectedExecution:  ");
        }
    });

    public static rg rg() {
        if (df == null) {
            synchronized (rg.class) {
                df = new rg();
            }
        }
        return df;
    }

    public rg() {
        this.rg.allowCoreThreadTimeOut(true);
    }

    public void rg(Runnable runnable) {
        if (runnable != null) {
            try {
                this.rg.execute(runnable);
            } catch (Throwable th) {
                th.printStackTrace();
            }
        }
    }

    /* JADX INFO: renamed from: com.bykv.vk.openvk.df.rg$rg, reason: collision with other inner class name */
    public static class ThreadFactoryC0048rg implements ThreadFactory {
        private final AtomicInteger df;
        private final String q;
        private final ThreadGroup rg;

        ThreadFactoryC0048rg() {
            this("csj_g_pl_mgr");
        }

        ThreadFactoryC0048rg(String str) {
            this.df = new AtomicInteger(1);
            this.rg = new ThreadGroup("csj_g_pl_mgr");
            this.q = str;
        }

        @Override // java.util.concurrent.ThreadFactory
        public Thread newThread(Runnable runnable) {
            Thread thread = new Thread(this.rg, runnable, this.q + this.df.getAndIncrement(), 0L);
            if (thread.isDaemon()) {
                thread.setDaemon(false);
            }
            if (thread.getPriority() != 5) {
                thread.setPriority(5);
            }
            return thread;
        }
    }
}
