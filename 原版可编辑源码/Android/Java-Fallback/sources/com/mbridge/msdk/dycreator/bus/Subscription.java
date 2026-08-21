package com.mbridge.msdk.dycreator.bus;

final class Subscription {
    final java.lang.Object a;
    final com.mbridge.msdk.dycreator.bus.SubscriberMethod b;

    Subscription(java.lang.Object r1, com.mbridge.msdk.dycreator.bus.SubscriberMethod r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public final boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.mbridge.msdk.dycreator.bus.Subscription
            r1 = 0
            if (r0 == 0) goto L18
            com.mbridge.msdk.dycreator.bus.Subscription r4 = (com.mbridge.msdk.dycreator.bus.Subscription) r4
            java.lang.Object r0 = r3.a
            java.lang.Object r2 = r4.a
            if (r0 != r2) goto L18
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r0 = r3.b
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r4 = r4.b
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L18
            r1 = 1
        L18:
            return r1
    }

    public final int hashCode() {
            r2 = this;
            java.lang.Object r0 = r2.a
            int r0 = r0.hashCode()
            com.mbridge.msdk.dycreator.bus.SubscriberMethod r1 = r2.b
            java.lang.String r1 = r1.d
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            return r0
    }
}
