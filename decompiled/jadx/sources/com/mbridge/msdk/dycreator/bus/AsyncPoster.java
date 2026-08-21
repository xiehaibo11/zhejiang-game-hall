package com.mbridge.msdk.dycreator.bus;

/* JADX INFO: loaded from: classes2.dex */
class AsyncPoster implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final PendingPostQueue f3282a = new PendingPostQueue();
    private final EventBus b;

    AsyncPoster(EventBus eventBus) {
        this.b = eventBus;
    }

    public void enqueue(Subscription subscription, Object obj) {
        this.f3282a.a(PendingPost.a(subscription, obj));
        EventBus.f3284a.execute(this);
    }

    @Override // java.lang.Runnable
    public void run() {
        PendingPost pendingPostA = this.f3282a.a();
        if (pendingPostA == null) {
            throw new IllegalStateException("No pending post available");
        }
        this.b.a(pendingPostA);
    }
}
