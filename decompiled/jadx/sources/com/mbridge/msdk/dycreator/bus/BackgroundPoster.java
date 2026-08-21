package com.mbridge.msdk.dycreator.bus;

import android.util.Log;

/* JADX INFO: loaded from: classes2.dex */
final class BackgroundPoster implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final PendingPostQueue f3283a = new PendingPostQueue();
    private volatile boolean b;
    private final EventBus c;

    BackgroundPoster(EventBus eventBus) {
        this.c = eventBus;
    }

    public final void enqueue(Subscription subscription, Object obj) {
        PendingPost pendingPostA = PendingPost.a(subscription, obj);
        synchronized (this) {
            this.f3283a.a(pendingPostA);
            if (!this.b) {
                this.b = true;
                EventBus.f3284a.execute(this);
            }
        }
    }

    @Override // java.lang.Runnable
    public final void run() {
        PendingPost pendingPostA;
        while (true) {
            try {
                pendingPostA = this.f3283a.a(1000);
            } catch (InterruptedException e) {
                Log.w("Event", Thread.currentThread().getName() + " was interruppted", e);
                return;
            } finally {
                this.b = false;
            }
            if (pendingPostA == null) {
                synchronized (this) {
                    pendingPostA = this.f3283a.a();
                    if (pendingPostA == null) {
                        return;
                    }
                    this.b = false;
                }
            }
            this.c.a(pendingPostA);
        }
    }
}
