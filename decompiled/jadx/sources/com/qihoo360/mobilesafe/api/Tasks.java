package com.qihoo360.mobilesafe.api;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public final class Tasks {
    private static Object sLock = new Object();
    private static Handler sMainHandler;
    private static Handler sThreadHandler;

    public static final boolean post2UI(Runnable runnable) {
        return sMainHandler.post(runnable);
    }

    public static final boolean postDelayed2UI(Runnable runnable, long j) {
        return sMainHandler.postDelayed(runnable, j);
    }

    public static final void cancelTask(Runnable runnable) {
        initThread();
        sMainHandler.removeCallbacks(runnable);
    }

    public static final boolean post2Thread(Runnable runnable) {
        initThread();
        return sThreadHandler.post(runnable);
    }

    public static final boolean postDelayed2Thread(Runnable runnable, long j) {
        initThread();
        return sThreadHandler.postDelayed(runnable, j);
    }

    public static final void cancelThreadTask(Runnable runnable) {
        initThread();
        sThreadHandler.removeCallbacks(runnable);
    }

    public static final void init() {
        sMainHandler = new Handler(Looper.getMainLooper());
    }

    public static final void init(Handler handler) {
        sMainHandler = handler;
    }

    private static final void initThread() {
        synchronized (sLock) {
            if (sThreadHandler == null) {
                HandlerThread handlerThread = new HandlerThread("daemon-handler-thread");
                handlerThread.start();
                sThreadHandler = new Handler(handlerThread.getLooper());
            }
        }
    }
}
