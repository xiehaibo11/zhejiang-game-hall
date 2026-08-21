package com.sigmob.sdk.base.common;

import android.os.Handler;
import android.os.HandlerThread;

public class ad {
    private static volatile ad a;
    private HandlerThread b;
    private Handler c;

    private ad() {
        HandlerThread handlerThread = new HandlerThread("SigmobHandler");
        this.b = handlerThread;
        handlerThread.start();
        this.c = new Handler(this.b.getLooper());
    }

    public static ad a() {
        synchronized (ad.class) {
            if (a == null) {
                a = new ad();
            }
        }
        return a;
    }

    public final boolean a(Runnable runnable) {
        return this.c.post(runnable);
    }
}
