package com.sigmob.sdk.base.common;

import android.os.Handler;
import android.os.HandlerThread;

/* JADX INFO: loaded from: classes3.dex */
public class ad {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile ad f4802a;
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
            if (f4802a == null) {
                f4802a = new ad();
            }
        }
        return f4802a;
    }

    public final boolean a(Runnable runnable) {
        return this.c.post(runnable);
    }
}
