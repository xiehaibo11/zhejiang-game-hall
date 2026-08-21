package com.huawei.hms.hatool;

import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes.dex */
public class n0 {
    public static n0 b;
    public static n0 c;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public ThreadPoolExecutor f2112a = new ThreadPoolExecutor(0, 1, 60000, TimeUnit.MILLISECONDS, new LinkedBlockingQueue(5000));

    public static class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public Runnable f2113a;

        public a(Runnable runnable) {
            this.f2113a = runnable;
        }

        @Override // java.lang.Runnable
        public void run() {
            Runnable runnable = this.f2113a;
            if (runnable != null) {
                try {
                    runnable.run();
                } catch (Exception unused) {
                    y.e("hmsSdk", "InnerTask : Exception has happened,From internal operations!");
                }
            }
        }
    }

    static {
        new n0();
        new n0();
        b = new n0();
        c = new n0();
    }

    public static n0 a() {
        return c;
    }

    public static n0 b() {
        return b;
    }

    public void a(m0 m0Var) {
        try {
            this.f2112a.execute(new a(m0Var));
        } catch (RejectedExecutionException unused) {
            y.e("hmsSdk", "addToQueue() Exception has happened!Form rejected execution");
        }
    }
}
