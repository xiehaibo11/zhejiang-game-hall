package com.mbridge.msdk.dycreator.bus;

import android.util.Log;

final class BackgroundPoster implements Runnable {
    private final PendingPostQueue a = new PendingPostQueue();
    private volatile boolean b;
    private final EventBus c;

    BackgroundPoster(EventBus eventBus) {
        this.c = eventBus;
    }

    public final void enqueue(Subscription subscription, Object obj) {
        PendingPost pendingPostA = PendingPost.a(subscription, obj);
        synchronized (this) {
            this.a.a(pendingPostA);
            if (!this.b) {
                this.b = true;
                EventBus.a.execute(this);
            }
        }
    }

    @Override
    public final void run() {
        PendingPost pendingPostA;
        while (true) {
            try {
                pendingPostA = this.a.a(1000);
            } catch (InterruptedException e) {
                Log.w("Event", Thread.currentThread().getName() + " was interruppted", e);
                return;
            } finally {
                this.b = false;
            }
            if (pendingPostA == null) {
                synchronized (this) {
                    pendingPostA = this.a.a();
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
