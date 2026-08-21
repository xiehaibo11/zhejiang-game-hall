package com.kwad.framework.filedownloader.f;

import com.kwad.sdk.service.ServiceProvider;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;

public class b {
    private static volatile ThreadPoolExecutor aeF;

    static class a implements ThreadFactory {
        private static final AtomicInteger aeG = new AtomicInteger(1);
        private final String namePrefix;
        private final AtomicInteger threadNumber = new AtomicInteger(1);
        private final ThreadGroup group = Thread.currentThread().getThreadGroup();

        a(String str) {
            this.namePrefix = f.bs(str);
        }

        @Override
        public final Thread newThread(Runnable runnable) {
            Thread thread = new Thread(this.group, runnable, "ksad-" + this.namePrefix + this.threadNumber.getAndIncrement(), 0L);
            if (thread.isDaemon()) {
                thread.setDaemon(false);
            }
            if (thread.getPriority() != 5) {
                thread.setPriority(5);
            }
            return thread;
        }
    }

    @Deprecated
    public static ThreadPoolExecutor a(int i, LinkedBlockingQueue<Runnable> linkedBlockingQueue, String str) {
        if (vK()) {
            return vL();
        }
        com.kwad.sdk.core.threads.a.b bVar = new com.kwad.sdk.core.threads.a.b(i, i, 15L, TimeUnit.SECONDS, linkedBlockingQueue, new a(str));
        com.kwad.sdk.core.threads.c.a(bVar, "ksad-" + str);
        bVar.allowCoreThreadTimeOut(true);
        return bVar;
    }

    @Deprecated
    public static ThreadPoolExecutor bl(String str) {
        if (vK()) {
            return vL();
        }
        com.kwad.sdk.core.threads.a.b bVar = new com.kwad.sdk.core.threads.a.b(0, Integer.MAX_VALUE, 15L, TimeUnit.SECONDS, new SynchronousQueue(), new a(str));
        com.kwad.sdk.core.threads.c.a(bVar, "ksad-" + str);
        return bVar;
    }

    @Deprecated
    public static ThreadPoolExecutor j(int i, String str) {
        return vK() ? vL() : a(i, new LinkedBlockingQueue(), str);
    }

    private static boolean vK() {
        com.kwad.sdk.service.a.f fVar = (com.kwad.sdk.service.a.f) ServiceProvider.get(com.kwad.sdk.service.a.f.class);
        if (fVar != null) {
            return fVar.vK();
        }
        return false;
    }

    private static ThreadPoolExecutor vL() {
        if (aeF == null) {
            synchronized (b.class) {
                if (aeF == null) {
                    com.kwad.sdk.core.threads.a.b bVar = new com.kwad.sdk.core.threads.a.b(5, 5, 60L, TimeUnit.SECONDS, new LinkedBlockingQueue(), new a(""));
                    aeF = bVar;
                    com.kwad.sdk.core.threads.c.a(bVar, "ksad-filedownload-default");
                }
            }
        }
        return aeF;
    }
}
