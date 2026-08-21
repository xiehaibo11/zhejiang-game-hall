package com.meizu.cloud.pushsdk.b.c;

import java.util.concurrent.Executor;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class c implements Executor {
    private final ThreadPoolExecutor a;

    class a {
        private static c a = new c();
    }

    private c() {
        this.a = new ThreadPoolExecutor(1, 1, 0L, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(), new d().a("single-pool-%d").a());
    }

    public static c a() {
        return a.a;
    }

    @Override
    public void execute(Runnable runnable) {
        this.a.execute(runnable);
    }
}
