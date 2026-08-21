package com.meizu.cloud.pushsdk.b.c;

import java.util.concurrent.Executor;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes3.dex */
public class a implements Executor {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final ThreadPoolExecutor f4496a;

    /* JADX INFO: renamed from: com.meizu.cloud.pushsdk.b.c.a$a, reason: collision with other inner class name */
    class C0317a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private static a f4497a = new a();
    }

    private a() {
        this.f4496a = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60L, TimeUnit.SECONDS, new SynchronousQueue(), new d().a("io-pool-%d").a());
    }

    public static a a() {
        return C0317a.f4497a;
    }

    @Override // java.util.concurrent.Executor
    public void execute(Runnable runnable) {
        this.f4496a.execute(runnable);
    }
}
