package com.tkay.core.common.j;

import android.os.Handler;
import android.os.HandlerThread;
import android.os.Looper;

/* JADX INFO: loaded from: classes3.dex */
public class c implements a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6209a = "TimeOutHandlerImpl";
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

    @Override // com.tkay.core.common.j.a
    public final void a(b bVar, long j) {
        a(bVar, j, true);
    }

    @Override // com.tkay.core.common.j.a
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

    @Override // com.tkay.core.common.j.a
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
