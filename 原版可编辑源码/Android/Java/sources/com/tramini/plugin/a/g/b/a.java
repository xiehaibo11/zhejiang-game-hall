package com.tramini.plugin.a.g.b;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public final class a {
    private static a a;
    private ExecutorService b;

    protected a() {
        this.b = null;
        this.b = new ThreadPoolExecutor(0, 50, 60L, TimeUnit.SECONDS, new SynchronousQueue());
    }

    public static a a() {
        if (a == null) {
            a = new a();
        }
        return a;
    }

    public final void a(b bVar) {
        this.b.execute(bVar);
    }

    public final void a(Runnable runnable) {
        a(runnable, 0L);
    }

    public final void a(final Runnable runnable, final long j) {
        if (runnable != null) {
            b bVar = new b() {
                @Override
                public final void a() {
                    try {
                        Thread.sleep(j);
                    } catch (InterruptedException unused) {
                    }
                    runnable.run();
                }
            };
            bVar.a(Long.valueOf(System.currentTimeMillis() / 1000).intValue());
            a(bVar);
        }
    }
}
