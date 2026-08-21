package com.tkay.china.common.a.a;

import com.tkay.core.common.l.b.b;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f5923a = 1;
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

    /* JADX INFO: renamed from: com.tkay.china.common.a.a.a$1, reason: invalid class name */
    final class AnonymousClass1 extends b {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ long f5924a = 0;
        final /* synthetic */ Runnable b;

        AnonymousClass1(Runnable runnable) {
            this.b = runnable;
        }

        @Override // com.tkay.core.common.l.b.b
        public final void a() {
            try {
                Thread.sleep(this.f5924a);
            } catch (InterruptedException unused) {
            }
            new StringBuilder("thread-").append(b());
            this.b.run();
        }
    }

    private void b(Runnable runnable) {
        if (runnable != null) {
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(runnable);
            anonymousClass1.a(Long.valueOf(System.currentTimeMillis() / 1000).intValue());
            a((b) anonymousClass1);
        }
    }

    private void b() {
        this.d.shutdown();
    }

    private void a(Runnable runnable) {
        if (runnable != null) {
            AnonymousClass1 anonymousClass1 = new AnonymousClass1(runnable);
            anonymousClass1.a(Long.valueOf(System.currentTimeMillis() / 1000).intValue());
            a((b) anonymousClass1);
        }
    }
}
