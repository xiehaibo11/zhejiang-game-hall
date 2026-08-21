package com.mbridge.msdk.dycreator.bus;

final class PendingPostQueue {
    private PendingPost a;
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
                if (this.a != null) {
                    throw new IllegalStateException("Head present, but no tail");
                }
                this.b = pendingPost;
                this.a = pendingPost;
            }
            notifyAll();
        } catch (Throwable th) {
            throw th;
        }
    }

    final synchronized PendingPost a() {
        PendingPost pendingPost;
        pendingPost = this.a;
        if (this.a != null) {
            PendingPost pendingPost2 = this.a.c;
            this.a = pendingPost2;
            if (pendingPost2 == null) {
                this.b = null;
            }
        }
        return pendingPost;
    }

    final synchronized PendingPost a(int i) throws InterruptedException {
        if (this.a == null) {
            wait(i);
        }
        return a();
    }
}
