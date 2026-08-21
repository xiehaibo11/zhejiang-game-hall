package com.meizu.cloud.pushsdk.b.c;

import java.util.concurrent.Executor;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes3.dex */
public class b implements Executor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ThreadPoolExecutor f4498a;

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static b f4499a = new b();
    }

    private b() {
        this.f4498a = new ThreadPoolExecutor(1, 1, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(), new d().a((Integer) 10).a("message-pool-%d").a());
    }

    public static b a() {
        return a.f4499a;
    }

    @Override // java.util.concurrent.Executor
    public void execute(Runnable runnable) {
        this.f4498a.execute(runnable);
    }
}
