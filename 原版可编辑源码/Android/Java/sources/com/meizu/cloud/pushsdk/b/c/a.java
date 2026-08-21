package com.meizu.cloud.pushsdk.b.c;

import java.util.concurrent.Executor;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class a implements Executor {
    private final ThreadPoolExecutor a;

    class a {
        private static a a = new a();
    }

    private a() {
        this.a = new ThreadPoolExecutor(0, Integer.MAX_VALUE, 60L, TimeUnit.SECONDS, new SynchronousQueue(), new d().a("io-pool-%d").a());
    }

    public static a a() {
        return a.a;
    }

    @Override
    public void execute(Runnable runnable) {
        this.a.execute(runnable);
    }
}
