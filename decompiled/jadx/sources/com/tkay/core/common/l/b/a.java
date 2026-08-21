package com.tkay.core.common.l.b;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes3.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f6232a = 1;
    public static final int b = 2;
    public static final int c = 4;
    public static final int d = 5;
    public static final int e = 6;
    public static final int f = 7;
    private static volatile a g;
    private ExecutorService h;
    private ExecutorService i;
    private ExecutorService j = null;
    private ExecutorService k = null;
    private ExecutorService l = null;

    private a() {
        this.h = null;
        this.i = null;
        this.h = Executors.newCachedThreadPool();
        this.i = Executors.newSingleThreadExecutor();
    }

    public static a a() {
        if (g == null) {
            synchronized (a.class) {
                if (g == null) {
                    g = new a();
                }
            }
        }
        return g;
    }

    public final synchronized void a(b bVar, int i) {
        if (i == 1) {
            bVar.a("tkay_type_single");
            this.i.execute(bVar);
            return;
        }
        if (i == 2) {
            bVar.a("tkay_type_normal");
            this.h.execute(bVar);
            return;
        }
        if (i == 4) {
            bVar.a("tkay_type_tcp_log");
            if (this.j == null) {
                this.j = Executors.newSingleThreadExecutor();
            }
            this.j.execute(bVar);
            return;
        }
        if (i == 5) {
            bVar.a("tkay_type_image_type");
            if (this.k == null) {
                this.k = Executors.newFixedThreadPool(5);
            }
            this.k.execute(bVar);
            return;
        }
        if (i == 6) {
            bVar.a("tkay_type_preload_task");
            if (this.l == null) {
                this.l = Executors.newSingleThreadExecutor();
            }
            this.l.execute(bVar);
        } else if (i == 7) {
            bVar.a("tkay_type_network");
            this.h.execute(bVar);
        }
    }

    private void a(b bVar) {
        a(bVar, 2);
    }

    public final void a(Runnable runnable) {
        a(runnable, 0L);
    }

    public final void a(final Runnable runnable, final long j) {
        if (runnable != null) {
            b bVar = new b() { // from class: com.tkay.core.common.l.b.a.1
                @Override // com.tkay.core.common.l.b.b
                public final void a() {
                    try {
                        Thread.sleep(j);
                    } catch (InterruptedException unused) {
                    }
                    new StringBuilder("thread-").append(b());
                    runnable.run();
                }
            };
            bVar.a(Long.valueOf(System.currentTimeMillis() / 1000).intValue());
            a(bVar, 2);
        }
    }

    public final void b(final Runnable runnable) {
        if (runnable != null) {
            b bVar = new b() { // from class: com.tkay.core.common.l.b.a.2
                @Override // com.tkay.core.common.l.b.b
                public final void a() {
                    runnable.run();
                }
            };
            bVar.a(Long.valueOf(System.currentTimeMillis() / 1000).intValue());
            a(bVar, 7);
        }
    }

    private void b() {
        this.i.shutdown();
        this.h.shutdown();
    }
}
