package com.mbridge.msdk.dycreator.bus;

import android.os.Handler;
import android.os.Looper;
import android.os.Message;
import android.os.SystemClock;

/* JADX INFO: loaded from: classes2.dex */
final class HandlerPoster extends Handler {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final PendingPostQueue f3289a;
    private final int b;
    private final EventBus c;
    private boolean d;

    HandlerPoster(EventBus eventBus, Looper looper, int i) {
        super(looper);
        this.c = eventBus;
        this.b = i;
        this.f3289a = new PendingPostQueue();
    }

    final void a(Subscription subscription, Object obj) {
        PendingPost pendingPostA = PendingPost.a(subscription, obj);
        synchronized (this) {
            this.f3289a.a(pendingPostA);
            if (!this.d) {
                this.d = true;
                if (!sendMessage(obtainMessage())) {
                    throw new EventBusException("Could not send handler message");
                }
            }
        }
    }

    @Override // android.os.Handler
    public final void handleMessage(Message message) {
        try {
            long jUptimeMillis = SystemClock.uptimeMillis();
            do {
                PendingPost pendingPostA = this.f3289a.a();
                if (pendingPostA == null) {
                    synchronized (this) {
                        pendingPostA = this.f3289a.a();
                        if (pendingPostA == null) {
                            this.d = false;
                            return;
                        }
                    }
                }
                this.c.a(pendingPostA);
            } while (SystemClock.uptimeMillis() - jUptimeMillis < this.b);
            if (!sendMessage(obtainMessage())) {
                throw new EventBusException("Could not send handler message");
            }
            this.d = true;
        } finally {
            this.d = false;
        }
    }
}
