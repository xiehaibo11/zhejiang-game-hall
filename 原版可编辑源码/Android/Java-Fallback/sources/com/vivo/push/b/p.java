package com.vivo.push.b;

public final class p extends com.vivo.push.o {
    private java.lang.String a;
    private java.lang.String b;
    private byte[] c;
    private long d;
    private com.vivo.push.model.InsideNotificationItem e;

    public p() {
            r1 = this;
            r0 = 5
            r1.<init>(r0)
            return
    }

    public p(java.lang.String r2, long r3, com.vivo.push.model.InsideNotificationItem r5) {
            r1 = this;
            r0 = 5
            r1.<init>(r0)
            r1.a = r2
            r1.d = r3
            r1.e = r5
            return
    }

    @Override
    protected final void c(com.vivo.push.a r4) {
            r3 = this;
            java.lang.String r0 = r3.a
            java.lang.String r1 = "package_name"
            r4.a(r1, r0)
            long r0 = r3.d
            java.lang.String r2 = "notify_id"
            r4.a(r2, r0)
            com.vivo.push.model.InsideNotificationItem r0 = r3.e
            java.lang.String r0 = com.vivo.push.util.q.b(r0)
            java.lang.String r1 = "notification_v1"
            r4.a(r1, r0)
            java.lang.String r0 = r3.b
            java.lang.String r1 = "open_pkg_name"
            r4.a(r1, r0)
            byte[] r0 = r3.c
            java.lang.String r1 = "open_pkg_name_encode"
            r4.a(r1, r0)
            return
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    protected final void d(com.vivo.push.a r4) {
            r3 = this;
            java.lang.String r0 = "package_name"
            java.lang.String r0 = r4.a(r0)
            r3.a = r0
            java.lang.String r0 = "notify_id"
            r1 = -1
            long r0 = r4.b(r0, r1)
            r3.d = r0
            java.lang.String r0 = "open_pkg_name"
            java.lang.String r0 = r4.a(r0)
            r3.b = r0
            java.lang.String r0 = "open_pkg_name_encode"
            byte[] r0 = r4.b(r0)
            r3.c = r0
            java.lang.String r0 = "notification_v1"
            java.lang.String r4 = r4.a(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L34
            com.vivo.push.model.InsideNotificationItem r4 = com.vivo.push.util.q.a(r4)
            r3.e = r4
        L34:
            com.vivo.push.model.InsideNotificationItem r4 = r3.e
            if (r4 == 0) goto L3d
            long r0 = r3.d
            r4.setMsgId(r0)
        L3d:
            return
    }

    public final long e() {
            r2 = this;
            long r0 = r2.d
            return r0
    }

    public final com.vivo.push.model.InsideNotificationItem f() {
            r1 = this;
            com.vivo.push.model.InsideNotificationItem r0 = r1.e
            return r0
    }

    @Override
    public final java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "OnNotificationClickCommand"
            return r0
    }
}
