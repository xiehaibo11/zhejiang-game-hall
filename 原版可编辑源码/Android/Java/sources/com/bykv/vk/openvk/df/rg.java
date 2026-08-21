package com.bykv.vk.openvk.df;

import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionHandler;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

public class rg {
    private static volatile rg df;
    private volatile ThreadPoolExecutor rg = new ThreadPoolExecutor(3, 3, 5, TimeUnit.SECONDS, new LinkedBlockingQueue(), new rg(), new RejectedExecutionHandler() {
        @Override
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

    public static class rg implements ThreadFactory {
        private final AtomicInteger df;
        private final String q;
        private final ThreadGroup rg;

        rg() {
            this("csj_g_pl_mgr");
        }

        rg(String str) {
            this.df = new AtomicInteger(1);
            this.rg = new ThreadGroup("csj_g_pl_mgr");
            this.q = str;
        }

        @Override
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
