package com.vivo.push.b;

public final class q extends com.vivo.push.b.v {
    protected com.vivo.push.model.InsideNotificationItem a;
    private java.lang.String b;

    public q() {
            r1 = this;
            r0 = 4
            r1.<init>(r0)
            return
    }

    @Override
    protected final void c(com.vivo.push.a r3) {
            r2 = this;
            super.c(r3)
            com.vivo.push.model.InsideNotificationItem r0 = r2.a
            java.lang.String r0 = com.vivo.push.util.q.b(r0)
            r2.b = r0
            java.lang.String r1 = "notification_v1"
            r3.a(r1, r0)
            return
    }

    public final com.vivo.push.model.InsideNotificationItem d() {
            r1 = this;
            com.vivo.push.model.InsideNotificationItem r0 = r1.a
            return r0
    }

    @Override
    protected final void d(com.vivo.push.a r3) {
            r2 = this;
            super.d(r3)
            java.lang.String r0 = "notification_v1"
            java.lang.String r3 = r3.a(r0)
            r2.b = r3
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L22
            java.lang.String r3 = r2.b
            com.vivo.push.model.InsideNotificationItem r3 = com.vivo.push.util.q.a(r3)
            r2.a = r3
            if (r3 == 0) goto L22
            long r0 = r2.f()
            r3.setMsgId(r0)
        L22:
            return
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L13
            com.vivo.push.model.InsideNotificationItem r0 = r1.a
            if (r0 != 0) goto Le
            r0 = 0
            return r0
        Le:
            java.lang.String r0 = com.vivo.push.util.q.b(r0)
            return r0
        L13:
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnNotifyArrivedCommand"
            return r0
    }
}
