package com.xiaomi.push;

public class fj {
    private static final int a = 0;
    private static long a;

    class a {
        static java.util.Hashtable<java.lang.Integer, java.lang.Long> a;

        static {
                java.util.Hashtable r0 = new java.util.Hashtable
                r0.<init>()
                com.xiaomi.push.fj.a.a = r0
                return
        }
    }

    static {
            com.xiaomi.push.ez r0 = com.xiaomi.push.ez.c
            int r0 = r0.a()
            com.xiaomi.push.fj.a = r0
            r0 = 0
            com.xiaomi.push.fj.a = r0
            return
    }

    public static void a() {
            long r0 = com.xiaomi.push.fj.a
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L16
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = com.xiaomi.push.fj.a
            long r0 = r0 - r2
            r2 = 7200000(0x6ddd00, double:3.5572727E-317)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L22
        L16:
            long r0 = android.os.SystemClock.elapsedRealtime()
            com.xiaomi.push.fj.a = r0
            r0 = 0
            int r1 = com.xiaomi.push.fj.a
            a(r0, r1)
        L22:
            return
    }

    public static void a(int r2) {
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a()
            com.xiaomi.push.fa r0 = r0.a()
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.k
            int r1 = r1.a()
            r0.a(r1)
            r0.c(r2)
            com.xiaomi.push.fh r2 = com.xiaomi.push.fh.a()
            r2.a(r0)
            return
    }

    public static synchronized void a(int r3, int r4) {
            java.lang.Class<com.xiaomi.push.fj> r0 = com.xiaomi.push.fj.class
            monitor-enter(r0)
            r1 = 16777215(0xffffff, float:2.3509886E-38)
            if (r4 >= r1) goto L1d
            int r3 = r3 << 24
            r3 = r3 | r4
            java.util.Hashtable<java.lang.Integer, java.lang.Long> r4 = com.xiaomi.push.fj.a.a     // Catch: java.lang.Throwable -> L24
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L24
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L24
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L24
            r4.put(r3, r1)     // Catch: java.lang.Throwable -> L24
            goto L22
        L1d:
            java.lang.String r3 = "stats key should less than 16777215"
            com.xiaomi.channel.commonutils.logger.b.d(r3)     // Catch: java.lang.Throwable -> L24
        L22:
            monitor-exit(r0)
            return
        L24:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static void a(int r1, int r2, int r3, java.lang.String r4, int r5) {
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a()
            com.xiaomi.push.fa r0 = r0.a()
            byte r1 = (byte) r1
            r0.a(r1)
            r0.a(r2)
            r0.b(r3)
            r0.b(r4)
            r0.c(r5)
            com.xiaomi.push.fh r1 = com.xiaomi.push.fh.a()
            r1.a(r0)
            return
    }

    public static synchronized void a(int r6, int r7, java.lang.String r8, int r9) {
            java.lang.Class<com.xiaomi.push.fj> r0 = com.xiaomi.push.fj.class
            monitor-enter(r0)
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L57
            int r6 = r6 << 24
            r6 = r6 | r7
            java.util.Hashtable<java.lang.Integer, java.lang.Long> r3 = com.xiaomi.push.fj.a.a     // Catch: java.lang.Throwable -> L57
            java.lang.Integer r4 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L57
            boolean r3 = r3.containsKey(r4)     // Catch: java.lang.Throwable -> L57
            if (r3 == 0) goto L50
            com.xiaomi.push.fh r3 = com.xiaomi.push.fh.a()     // Catch: java.lang.Throwable -> L57
            com.xiaomi.push.fa r3 = r3.a()     // Catch: java.lang.Throwable -> L57
            r3.a(r7)     // Catch: java.lang.Throwable -> L57
            java.util.Hashtable<java.lang.Integer, java.lang.Long> r4 = com.xiaomi.push.fj.a.a     // Catch: java.lang.Throwable -> L57
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L57
            java.lang.Object r6 = r4.get(r6)     // Catch: java.lang.Throwable -> L57
            java.lang.Long r6 = (java.lang.Long) r6     // Catch: java.lang.Throwable -> L57
            long r4 = r6.longValue()     // Catch: java.lang.Throwable -> L57
            long r1 = r1 - r4
            int r6 = (int) r1     // Catch: java.lang.Throwable -> L57
            r3.b(r6)     // Catch: java.lang.Throwable -> L57
            r3.b(r8)     // Catch: java.lang.Throwable -> L57
            r6 = -1
            if (r9 <= r6) goto L3f
            r3.c(r9)     // Catch: java.lang.Throwable -> L57
        L3f:
            com.xiaomi.push.fh r6 = com.xiaomi.push.fh.a()     // Catch: java.lang.Throwable -> L57
            r6.a(r3)     // Catch: java.lang.Throwable -> L57
            java.util.Hashtable<java.lang.Integer, java.lang.Long> r6 = com.xiaomi.push.fj.a.a     // Catch: java.lang.Throwable -> L57
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L57
            r6.remove(r7)     // Catch: java.lang.Throwable -> L57
            goto L55
        L50:
            java.lang.String r6 = "stats key not found"
            com.xiaomi.channel.commonutils.logger.b.d(r6)     // Catch: java.lang.Throwable -> L57
        L55:
            monitor-exit(r0)
            return
        L57:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    public static void a(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.service.bg.b r2) {
            com.xiaomi.push.fc r0 = new com.xiaomi.push.fc
            r0.<init>(r1, r2)
            r0.a()
            return
    }

    public static void a(java.lang.String r2, int r3, java.lang.Exception r4) {
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a()
            com.xiaomi.push.fa r0 = r0.a()
            com.xiaomi.push.fg r1 = com.xiaomi.push.fh.a()
            if (r1 == 0) goto L23
            com.xiaomi.push.fg r1 = com.xiaomi.push.fh.a()
            com.xiaomi.push.service.XMPushService r1 = r1.a
            if (r1 == 0) goto L23
            com.xiaomi.push.fg r1 = com.xiaomi.push.fh.a()
            com.xiaomi.push.service.XMPushService r1 = r1.a
            boolean r1 = com.xiaomi.push.bj.c(r1)
            r0.c(r1)
        L23:
            if (r3 <= 0) goto L3c
            com.xiaomi.push.ez r4 = com.xiaomi.push.ez.l
            int r4 = r4.a()
            r0.a(r4)
            r0.b(r2)
            r0.b(r3)
            com.xiaomi.push.fh r2 = com.xiaomi.push.fh.a()
            r2.a(r0)
            goto L58
        L3c:
            com.xiaomi.push.ff$a r3 = com.xiaomi.push.ff.a(r4)     // Catch: java.lang.NullPointerException -> L58
            com.xiaomi.push.ez r4 = r3.a     // Catch: java.lang.NullPointerException -> L58
            int r4 = r4.a()     // Catch: java.lang.NullPointerException -> L58
            r0.a(r4)     // Catch: java.lang.NullPointerException -> L58
            java.lang.String r3 = r3.a     // Catch: java.lang.NullPointerException -> L58
            r0.c(r3)     // Catch: java.lang.NullPointerException -> L58
            r0.b(r2)     // Catch: java.lang.NullPointerException -> L58
            com.xiaomi.push.fh r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L58
            r2.a(r0)     // Catch: java.lang.NullPointerException -> L58
        L58:
            return
    }

    public static void a(java.lang.String r2, java.lang.Exception r3) {
            com.xiaomi.push.ff$a r3 = com.xiaomi.push.ff.b(r3)     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.fa r0 = r0.a()     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.ez r1 = r3.a     // Catch: java.lang.NullPointerException -> L44
            int r1 = r1.a()     // Catch: java.lang.NullPointerException -> L44
            r0.a(r1)     // Catch: java.lang.NullPointerException -> L44
            java.lang.String r3 = r3.a     // Catch: java.lang.NullPointerException -> L44
            r0.c(r3)     // Catch: java.lang.NullPointerException -> L44
            r0.b(r2)     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.fg r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            if (r2 == 0) goto L3d
            com.xiaomi.push.fg r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.service.XMPushService r2 = r2.a     // Catch: java.lang.NullPointerException -> L44
            if (r2 == 0) goto L3d
            com.xiaomi.push.fg r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.service.XMPushService r2 = r2.a     // Catch: java.lang.NullPointerException -> L44
            boolean r2 = com.xiaomi.push.bj.c(r2)     // Catch: java.lang.NullPointerException -> L44
            if (r2 == 0) goto L39
            r2 = 1
            goto L3a
        L39:
            r2 = 0
        L3a:
            r0.c(r2)     // Catch: java.lang.NullPointerException -> L44
        L3d:
            com.xiaomi.push.fh r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            r2.a(r0)     // Catch: java.lang.NullPointerException -> L44
        L44:
            return
    }

    public static byte[] a() {
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a()
            com.xiaomi.push.fb r0 = r0.a()
            if (r0 == 0) goto Lf
            byte[] r0 = com.xiaomi.push.it.a(r0)
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public static void b() {
            int r0 = com.xiaomi.push.fj.a
            r1 = 0
            r2 = 0
            r3 = -1
            a(r1, r0, r2, r3)
            return
    }

    public static void b(java.lang.String r2, java.lang.Exception r3) {
            com.xiaomi.push.ff$a r3 = com.xiaomi.push.ff.d(r3)     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.fa r0 = r0.a()     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.ez r1 = r3.a     // Catch: java.lang.NullPointerException -> L44
            int r1 = r1.a()     // Catch: java.lang.NullPointerException -> L44
            r0.a(r1)     // Catch: java.lang.NullPointerException -> L44
            java.lang.String r3 = r3.a     // Catch: java.lang.NullPointerException -> L44
            r0.c(r3)     // Catch: java.lang.NullPointerException -> L44
            r0.b(r2)     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.fg r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            if (r2 == 0) goto L3d
            com.xiaomi.push.fg r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.service.XMPushService r2 = r2.a     // Catch: java.lang.NullPointerException -> L44
            if (r2 == 0) goto L3d
            com.xiaomi.push.fg r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            com.xiaomi.push.service.XMPushService r2 = r2.a     // Catch: java.lang.NullPointerException -> L44
            boolean r2 = com.xiaomi.push.bj.c(r2)     // Catch: java.lang.NullPointerException -> L44
            if (r2 == 0) goto L39
            r2 = 1
            goto L3a
        L39:
            r2 = 0
        L3a:
            r0.c(r2)     // Catch: java.lang.NullPointerException -> L44
        L3d:
            com.xiaomi.push.fh r2 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L44
            r2.a(r0)     // Catch: java.lang.NullPointerException -> L44
        L44:
            return
    }
}
