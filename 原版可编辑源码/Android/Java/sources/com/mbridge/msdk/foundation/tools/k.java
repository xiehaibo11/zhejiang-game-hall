package com.mbridge.msdk.foundation.tools;

import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.FastKV;
import java.util.concurrent.Executor;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadFactory;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;

public final class k {
    static FastKV.b a = new FastKV.b() {
        @Override
        public final void a(String str, String str2) {
            if (MBridgeConstans.DEBUG) {
                z.b("FastKVConfig", str + " " + str2);
            }
        }

        @Override
        public final void a(String str, Exception exc) {
            if (MBridgeConstans.DEBUG) {
                z.b("FastKVConfig", str, exc);
            }
        }

        @Override
        public final void b(String str, Exception exc) {
            if (MBridgeConstans.DEBUG) {
                z.c("FastKVConfig", str, exc);
            }
        }
    };
    static volatile Executor b;

    private k() {
    }

    static Executor a() {
        if (b == null) {
            synchronized (k.class) {
                if (b == null) {
                    ThreadPoolExecutor threadPoolExecutor = new ThreadPoolExecutor(4, 10, 1L, TimeUnit.SECONDS, new LinkedBlockingQueue(), new ThreadFactory() {
                        @Override
                        public final Thread newThread(Runnable runnable) {
                            return new Thread(runnable, "mb-sp-handler");
                        }
                    }, new ThreadPoolExecutor.DiscardPolicy());
                    threadPoolExecutor.allowCoreThreadTimeOut(true);
                    b = threadPoolExecutor;
                }
            }
        }
        return b;
    }
}
