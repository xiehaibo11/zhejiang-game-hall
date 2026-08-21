package com.mbridge.msdk.dycreator.bus;

import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
final class PendingPost {
    private static final List<PendingPost> d = new ArrayList();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    Object f3290a;
    Subscription b;
    PendingPost c;

    private PendingPost(Object obj, Subscription subscription) {
        this.f3290a = obj;
        this.b = subscription;
    }

    static PendingPost a(Subscription subscription, Object obj) {
        synchronized (d) {
            int size = d.size();
            if (size > 0) {
                PendingPost pendingPostRemove = d.remove(size - 1);
                pendingPostRemove.f3290a = obj;
                pendingPostRemove.b = subscription;
                pendingPostRemove.c = null;
                return pendingPostRemove;
            }
            return new PendingPost(obj, subscription);
        }
    }

    static void a(PendingPost pendingPost) {
        pendingPost.f3290a = null;
        pendingPost.b = null;
        pendingPost.c = null;
        synchronized (d) {
            if (d.size() < 10000) {
                d.add(pendingPost);
            }
        }
    }
}
