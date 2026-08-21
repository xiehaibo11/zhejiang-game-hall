package com.mbridge.msdk.dycreator.bus;

/* JADX INFO: loaded from: classes2.dex */
final class Subscription {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final Object f3294a;
    final SubscriberMethod b;

    Subscription(Object obj, SubscriberMethod subscriberMethod) {
        this.f3294a = obj;
        this.b = subscriberMethod;
    }

    public final boolean equals(Object obj) {
        if (!(obj instanceof Subscription)) {
            return false;
        }
        Subscription subscription = (Subscription) obj;
        return this.f3294a == subscription.f3294a && this.b.equals(subscription.b);
    }

    public final int hashCode() {
        return this.f3294a.hashCode() + this.b.d.hashCode();
    }
}
