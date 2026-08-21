package com.meizu.cloud.pushsdk.b.c;

import java.util.concurrent.Executor;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes3.dex */
public class c implements Executor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ThreadPoolExecutor f4500a;

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static c f4501a = new c();
    }

    private c() {
        this.f4500a = new ThreadPoolExecutor(1, 1, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(), new d().a("single-pool-%d").a());
    }

    public static c a() {
        return a.f4501a;
    }

    @Override // java.util.concurrent.Executor
    public void execute(Runnable runnable) {
        this.f4500a.execute(runnable);
    }
}
