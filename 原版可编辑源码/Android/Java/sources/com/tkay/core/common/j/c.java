package com.tkay.core.common.j;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;

public class c implements a {
    private static final String a = "TimeOutHandlerImpl";
    private static volatile c b;
    private final Handler c;
    private final Handler d;

    public static a a() {
        if (b == null) {
            synchronized (c.class) {
                if (b == null) {
                    b = new c();
                }
            }
        }
        return b;
    }

    private c() {
        HandlerThread handlerThread = new HandlerThread("tkay_timeout_handler_thread");
        handlerThread.start();
        this.d = new Handler(handlerThread.getLooper());
        this.c = new Handler(Looper.getMainLooper());
    }

    private Handler a(boolean z) {
        return z ? this.c : this.d;
    }

    @Override
    public final void a(b bVar, long j) {
        a(bVar, j, true);
    }

    @Override
    public final void a(b bVar, long j, boolean z) {
        StringBuilder sb = new StringBuilder("sendTimeOutMsg() >>> delayMillis=");
        sb.append(j);
        sb.append(" isMainThread=");
        sb.append(z);
        Handler handlerA = a(z);
        if (handlerA == null) {
            return;
        }
        handlerA.postDelayed(bVar, j);
    }

    @Override
    public final void a(b bVar) {
        Handler handler = this.c;
        if (handler != null) {
            handler.removeCallbacks(bVar);
        }
        Handler handler2 = this.d;
        if (handler2 != null) {
            handler2.removeCallbacks(bVar);
        }
    }
}
