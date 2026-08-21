package com.mbridge.msdk.dycreator.bus;

/* JADX INFO: loaded from: classes2.dex */
final class PendingPostQueue {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private PendingPost f3291a;
    private PendingPost b;

    PendingPostQueue() {
    }

    final synchronized void a(PendingPost pendingPost) {
        try {
            if (pendingPost == null) {
                throw new NullPointerException("null cannot be enqueued");
            }
            if (this.b != null) {
                this.b.c = pendingPost;
                this.b = pendingPost;
            } else {
                if (this.f3291a != null) {
                    throw new IllegalStateException("Head present, but no tail");
                }
                this.b = pendingPost;
                this.f3291a = pendingPost;
            }
            notifyAll();
        } catch (Throwable th) {
            throw th;
        }
    }

    final synchronized PendingPost a() {
        PendingPost pendingPost;
        pendingPost = this.f3291a;
        if (this.f3291a != null) {
            PendingPost pendingPost2 = this.f3291a.c;
            this.f3291a = pendingPost2;
            if (pendingPost2 == null) {
                this.b = null;
            }
        }
        return pendingPost;
    }

    final synchronized PendingPost a(int i) throws InterruptedException {
        if (this.f3291a == null) {
            wait(i);
        }
        return a();
    }
}
