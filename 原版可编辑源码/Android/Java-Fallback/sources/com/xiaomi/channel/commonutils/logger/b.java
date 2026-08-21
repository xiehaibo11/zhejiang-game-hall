package com.xiaomi.channel.commonutils.logger;

public abstract class b {
    private static int a = 2;
    private static android.content.Context a;
    private static com.xiaomi.channel.commonutils.logger.LoggerInterface a;
    private static final java.lang.Integer a = null;
    private static java.lang.String a;
    private static final java.util.HashMap<java.lang.Integer, java.lang.Long> a = null;
    private static java.util.concurrent.atomic.AtomicInteger a;
    private static boolean a;
    private static final java.util.HashMap<java.lang.Integer, java.lang.String> b = null;
    private static boolean b;

    class a implements com.xiaomi.channel.commonutils.logger.LoggerInterface {
        private java.lang.String a;

        a() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = com.xiaomi.channel.commonutils.logger.b.a()
                r1.a = r0
                return
        }

        @Override
        public void log(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = r1.a
                android.util.Log.v(r0, r2)
                return
        }

        @Override
        public void log(java.lang.String r2, java.lang.Throwable r3) {
                r1 = this;
                java.lang.String r0 = r1.a
                android.util.Log.v(r0, r2, r3)
                return
        }

        @Override
        public void setTag(java.lang.String r1) {
                r0 = this;
                r0.a = r1
                return
        }
    }

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "XMPush-"
            r0.append(r1)
            int r1 = android.os.Process.myPid()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a = r0
            com.xiaomi.channel.commonutils.logger.b$a r0 = new com.xiaomi.channel.commonutils.logger.b$a
            r0.<init>()
            com.xiaomi.channel.commonutils.logger.b.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.channel.commonutils.logger.b.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.channel.commonutils.logger.b.b = r0
            r0 = -1
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            com.xiaomi.channel.commonutils.logger.b.a = r0
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r1 = 1
            r0.<init>(r1)
            com.xiaomi.channel.commonutils.logger.b.a = r0
            return
    }

    public static int a() {
            int r0 = com.xiaomi.channel.commonutils.logger.b.a
            return r0
    }

    public static java.lang.Integer a(java.lang.String r4) {
            int r0 = com.xiaomi.channel.commonutils.logger.b.a
            r1 = 1
            if (r0 > r1) goto L38
            java.util.concurrent.atomic.AtomicInteger r0 = com.xiaomi.channel.commonutils.logger.b.a
            int r0 = r0.incrementAndGet()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.util.HashMap<java.lang.Integer, java.lang.Long> r1 = com.xiaomi.channel.commonutils.logger.b.a
            long r2 = java.lang.System.currentTimeMillis()
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r1.put(r0, r2)
            java.util.HashMap<java.lang.Integer, java.lang.String> r1 = com.xiaomi.channel.commonutils.logger.b.b
            r1.put(r0, r4)
            com.xiaomi.channel.commonutils.logger.LoggerInterface r1 = com.xiaomi.channel.commonutils.logger.b.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r4)
            java.lang.String r4 = " starts"
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            r1.log(r4)
            return r0
        L38:
            java.lang.Integer r4 = com.xiaomi.channel.commonutils.logger.b.a
            return r4
    }

    static java.lang.String a() {
            java.lang.String r0 = com.xiaomi.channel.commonutils.logger.b.a
            return r0
    }

    private static java.lang.String a(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = b()
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String a(java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "["
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "] "
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void a(int r3) {
            if (r3 < 0) goto L5
            r0 = 5
            if (r3 <= r0) goto L1a
        L5:
            r0 = 2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "set log level as "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            a(r0, r1)
        L1a:
            com.xiaomi.channel.commonutils.logger.b.a = r3
            return
    }

    public static void a(int r1, java.lang.String r2) {
            int r0 = com.xiaomi.channel.commonutils.logger.b.a
            if (r1 < r0) goto L9
            com.xiaomi.channel.commonutils.logger.LoggerInterface r1 = com.xiaomi.channel.commonutils.logger.b.a
            r1.log(r2)
        L9:
            return
    }

    public static void a(int r1, java.lang.String r2, java.lang.Throwable r3) {
            int r0 = com.xiaomi.channel.commonutils.logger.b.a
            if (r1 < r0) goto L9
            com.xiaomi.channel.commonutils.logger.LoggerInterface r1 = com.xiaomi.channel.commonutils.logger.b.a
            r1.log(r2, r3)
        L9:
            return
    }

    public static void a(int r1, java.lang.Throwable r2) {
            int r0 = com.xiaomi.channel.commonutils.logger.b.a
            if (r1 < r0) goto Lb
            com.xiaomi.channel.commonutils.logger.LoggerInterface r1 = com.xiaomi.channel.commonutils.logger.b.a
            java.lang.String r0 = ""
            r1.log(r0, r2)
        Lb:
            return
    }

    public static void a(android.content.Context r1) {
            com.xiaomi.channel.commonutils.logger.b.a = r1
            boolean r1 = com.xiaomi.push.m.a(r1)
            r0 = 1
            if (r1 == 0) goto Lb
            com.xiaomi.channel.commonutils.logger.b.a = r0
        Lb:
            boolean r1 = com.xiaomi.push.m.a()
            if (r1 == 0) goto L13
            com.xiaomi.channel.commonutils.logger.b.b = r0
        L13:
            return
    }

    public static void a(com.xiaomi.channel.commonutils.logger.LoggerInterface r0) {
            com.xiaomi.channel.commonutils.logger.b.a = r0
            return
    }

    public static void a(java.lang.Integer r4) {
            int r0 = com.xiaomi.channel.commonutils.logger.b.a
            r1 = 1
            if (r0 > r1) goto L45
            java.util.HashMap<java.lang.Integer, java.lang.Long> r0 = com.xiaomi.channel.commonutils.logger.b.a
            boolean r0 = r0.containsKey(r4)
            if (r0 != 0) goto Le
            return
        Le:
            java.util.HashMap<java.lang.Integer, java.lang.Long> r0 = com.xiaomi.channel.commonutils.logger.b.a
            java.lang.Object r0 = r0.remove(r4)
            java.lang.Long r0 = (java.lang.Long) r0
            long r0 = r0.longValue()
            java.util.HashMap<java.lang.Integer, java.lang.String> r2 = com.xiaomi.channel.commonutils.logger.b.b
            java.lang.Object r4 = r2.remove(r4)
            java.lang.String r4 = (java.lang.String) r4
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r0
            com.xiaomi.channel.commonutils.logger.LoggerInterface r0 = com.xiaomi.channel.commonutils.logger.b.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r4)
            java.lang.String r4 = " ends in "
            r1.append(r4)
            r1.append(r2)
            java.lang.String r4 = " ms"
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.log(r4)
        L45:
            return
    }

    public static void a(java.lang.String r1) {
            java.lang.String r1 = a(r1)
            r0 = 2
            a(r0, r1)
            return
    }

    public static void a(java.lang.String r0, java.lang.String r1) {
            java.lang.String r0 = b(r0, r1)
            r1 = 2
            a(r1, r0)
            return
    }

    public static void a(java.lang.String r1, java.lang.Throwable r2) {
            java.lang.String r1 = a(r1)
            r0 = 4
            a(r0, r1, r2)
            return
    }

    public static void a(java.lang.Throwable r1) {
            r0 = 4
            a(r0, r1)
            return
    }

    private static java.lang.String b() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[Tid:"
            r0.append(r1)
            java.lang.Thread r1 = java.lang.Thread.currentThread()
            long r1 = r1.getId()
            r0.append(r1)
            java.lang.String r1 = "] "
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    private static java.lang.String b(java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = b()
            r0.append(r1)
            java.lang.String r2 = a(r2, r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static void b(java.lang.String r1) {
            java.lang.String r1 = a(r1)
            r0 = 0
            a(r0, r1)
            return
    }

    public static void c(java.lang.String r1) {
            java.lang.String r1 = a(r1)
            r0 = 1
            a(r0, r1)
            return
    }

    public static void d(java.lang.String r1) {
            java.lang.String r1 = a(r1)
            r0 = 4
            a(r0, r1)
            return
    }

    public static void e(java.lang.String r2) {
            boolean r0 = com.xiaomi.channel.commonutils.logger.b.a
            if (r0 == 0) goto L8
        L4:
            a(r2)
            goto L16
        L8:
            java.lang.String r0 = com.xiaomi.channel.commonutils.logger.b.a
            java.lang.String r1 = a(r2)
            android.util.Log.w(r0, r1)
            boolean r0 = com.xiaomi.channel.commonutils.logger.b.b
            if (r0 != 0) goto L16
            goto L4
        L16:
            return
    }
}
