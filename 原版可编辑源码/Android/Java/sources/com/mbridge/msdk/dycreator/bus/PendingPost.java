package com.mbridge.msdk.dycreator.bus;

import java.util.ArrayList;
import java.util.List;

final class PendingPost {
    private static final List<PendingPost> d = new ArrayList();
    Object a;
    Subscription b;
    PendingPost c;

    private PendingPost(Object obj, Subscription subscription) {
        this.a = obj;
        this.b = subscription;
    }

    static PendingPost a(Subscription subscription, Object obj) {
        synchronized (d) {
            int size = d.size();
            if (size > 0) {
                PendingPost pendingPostRemove = d.remove(size - 1);
                pendingPostRemove.a = obj;
                pendingPostRemove.b = subscription;
                pendingPostRemove.c = null;
                return pendingPostRemove;
            }
            return new PendingPost(obj, subscription);
        }
    }

    static void a(PendingPost pendingPost) {
        pendingPost.a = null;
        pendingPost.b = null;
        pendingPost.c = null;
        synchronized (d) {
            if (d.size() < 10000) {
                d.add(pendingPost);
            }
        }
    }
}
