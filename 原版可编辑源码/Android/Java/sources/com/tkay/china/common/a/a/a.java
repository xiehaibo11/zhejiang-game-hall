package com.tkay.china.common.a.a;

import com.tkay.core.common.l.b.b;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

public final class a {
    public static final int a = 1;
    public static final int b = 2;
    private static a c;
    private ExecutorService d;

    protected a() {
        this.d = null;
        this.d = Executors.newSingleThreadExecutor();
    }

    public static a a() {
        if (c == null) {
            c = new a();
        }
        return c;
    }

    private static void a(a aVar) {
        c = aVar;
    }

    public final void a(b bVar) {
        this.d.execute(bVar);
    }

    private void b(b bVar) {
        a(bVar);
    }

    final class 1 extends b {
        final long a = 0;
        final Runnable b;

        1(Runnable runnable) {
            this.b = runnable;
        }

        @Override
        public final void a() {
            try {
                Thread.sleep(this.a);
            } catch (InterruptedException unused) {
            }
            new StringBuilder("thread-").append(b());
            this.b.run();
        }
    }

    private void b(Runnable runnable) {
        if (runnable != null) {
            1 r0 = new 1(runnable);
            r0.a(Long.valueOf(System.currentTimeMillis() / 1000).intValue());
            a((b) r0);
        }
    }

    private void b() {
        this.d.shutdown();
    }

    private void a(Runnable runnable) {
        if (runnable != null) {
            1 r0 = new 1(runnable);
            r0.a(Long.valueOf(System.currentTimeMillis() / 1000).intValue());
            a((b) r0);
        }
    }
}
