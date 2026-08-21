package com.xiaomi.push.service;

public class d {
    private static java.util.List<com.xiaomi.push.service.d.a> a;

    class a {
        public final int a;
        public final long a;
        public final java.lang.String a;
        public final android.app.Notification.Action[] a;

        a(java.lang.String r1, long r2, int r4, android.app.Notification.Action[] r5) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.a = r2
                r0.a = r4
                r0.a = r5
                return
        }
    }

    static {
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            com.xiaomi.push.service.d.a = r0
            return
    }

    private static void a() {
            java.util.List<com.xiaomi.push.service.d$a> r0 = com.xiaomi.push.service.d.a
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L27
            java.util.List<com.xiaomi.push.service.d$a> r1 = com.xiaomi.push.service.d.a
            java.lang.Object r1 = r1.get(r0)
            com.xiaomi.push.service.d$a r1 = (com.xiaomi.push.service.d.a) r1
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r4 = r1.a
            long r2 = r2 - r4
            r4 = 5000(0x1388, double:2.4703E-320)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L24
            java.util.List<com.xiaomi.push.service.d$a> r2 = com.xiaomi.push.service.d.a
            r2.remove(r1)
        L24:
            int r0 = r0 + (-1)
            goto L8
        L27:
            java.util.List<com.xiaomi.push.service.d$a> r0 = com.xiaomi.push.service.d.a
            int r0 = r0.size()
            r1 = 10
            if (r0 <= r1) goto L37
            java.util.List<com.xiaomi.push.service.d$a> r0 = com.xiaomi.push.service.d.a
            r1 = 0
            r0.remove(r1)
        L37:
            return
    }

    protected static void a(android.content.Context r7, android.service.notification.StatusBarNotification r8, int r9) {
            boolean r7 = com.xiaomi.push.m.a(r7)
            if (r7 == 0) goto L2a
            if (r9 <= 0) goto L2a
            if (r8 == 0) goto L2a
            int r7 = android.os.Build.VERSION.SDK_INT
            r0 = 20
            if (r7 < r0) goto L2a
            com.xiaomi.push.service.d$a r7 = new com.xiaomi.push.service.d$a
            java.lang.String r2 = r8.getKey()
            long r3 = android.os.SystemClock.elapsedRealtime()
            android.app.Notification r8 = r8.getNotification()
            android.app.Notification$Action[] r6 = com.xiaomi.push.service.ay.a(r8)
            r1 = r7
            r5 = r9
            r1.<init>(r2, r3, r5, r6)
            a(r7)
        L2a:
            return
    }

    private static void a(com.xiaomi.push.service.d.a r1) {
            java.util.List<com.xiaomi.push.service.d$a> r0 = com.xiaomi.push.service.d.a
            r0.add(r1)
            a()
            return
    }
}
