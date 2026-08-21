package com.cmic.gen.sdk.e;

import android.content.Context;
import java.lang.Thread;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public class n {
    private static final ExecutorService a = new ThreadPoolExecutor(0, 30, 60, TimeUnit.SECONDS, new SynchronousQueue());

    public static void a(a aVar) {
        try {
            a.execute(aVar);
        } catch (Exception e) {
            aVar.a.uncaughtException(Thread.currentThread(), e);
        }
    }

    public static abstract class a implements Runnable {
        private final Thread.UncaughtExceptionHandler a;

        protected abstract void a();

        protected a() {
            this.a = new Thread.UncaughtExceptionHandler() {
                @Override
                public void uncaughtException(Thread thread, Throwable th) {
                    th.printStackTrace();
                }
            };
        }

        protected a(final Context context, final com.cmic.gen.sdk.a aVar) {
            this.a = new Thread.UncaughtExceptionHandler() {
                @Override
                public void uncaughtException(Thread thread, Throwable th) {
                    aVar.a().a.add(th);
                    com.cmic.gen.sdk.auth.c.getInstance(context).callBackResult("200025", "发生未知错误", aVar, null);
                }
            };
        }

        @Override
        public void run() {
            Thread.currentThread().setUncaughtExceptionHandler(this.a);
            a();
            Thread.currentThread().setUncaughtExceptionHandler(null);
        }
    }
}
