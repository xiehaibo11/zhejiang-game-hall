package com.xiaomi.push;

public class hb {
    private static volatile int a;
    private static long a;
    private static com.xiaomi.push.ao a;
    private static com.xiaomi.push.providers.a a;
    private static final java.lang.Object a = null;
    private static java.lang.String a;
    private static java.util.List<com.xiaomi.push.hb.a> a;

    class a {
        public int a;
        public long a;
        public java.lang.String a;
        public int b;
        public long b;
        public java.lang.String b;

        public a(java.lang.String r5, long r6, int r8, int r9, java.lang.String r10, long r11) {
                r4 = this;
                r4.<init>()
                java.lang.String r0 = ""
                r4.a = r0
                r1 = 0
                r4.a = r1
                r3 = -1
                r4.a = r3
                r4.b = r3
                r4.b = r0
                r4.b = r1
                r4.a = r5
                r4.a = r6
                r4.a = r8
                r4.b = r9
                r4.b = r10
                r4.b = r11
                return
        }

        public boolean a(com.xiaomi.push.hb.a r5) {
                r4 = this;
                java.lang.String r0 = r5.a
                java.lang.String r1 = r4.a
                boolean r0 = android.text.TextUtils.equals(r0, r1)
                if (r0 == 0) goto L32
                java.lang.String r0 = r5.b
                java.lang.String r1 = r4.b
                boolean r0 = android.text.TextUtils.equals(r0, r1)
                if (r0 == 0) goto L32
                int r0 = r5.a
                int r1 = r4.a
                if (r0 != r1) goto L32
                int r0 = r5.b
                int r1 = r4.b
                if (r0 != r1) goto L32
                long r0 = r5.a
                long r2 = r4.a
                long r0 = r0 - r2
                long r0 = java.lang.Math.abs(r0)
                r2 = 5000(0x1388, double:2.4703E-320)
                int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r5 <= 0) goto L30
                goto L32
            L30:
                r5 = 1
                return r5
            L32:
                r5 = 0
                return r5
        }
    }

    static {
            com.xiaomi.push.ao r0 = new com.xiaomi.push.ao
            r1 = 1
            r0.<init>(r1)
            com.xiaomi.push.hb.a = r0
            r0 = -1
            com.xiaomi.push.hb.a = r0
            long r0 = java.lang.System.currentTimeMillis()
            com.xiaomi.push.hb.a = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.xiaomi.push.hb.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            com.xiaomi.push.hb.a = r0
            java.lang.String r0 = ""
            com.xiaomi.push.hb.a = r0
            r0 = 0
            com.xiaomi.push.hb.a = r0
            return
    }

    public static int a(android.content.Context r2) {
            int r0 = com.xiaomi.push.hb.a
            r1 = -1
            if (r0 != r1) goto Lb
            int r2 = b(r2)
            com.xiaomi.push.hb.a = r2
        Lb:
            int r2 = com.xiaomi.push.hb.a
            return r2
    }

    public static int a(java.lang.String r1) {
            java.lang.String r0 = "UTF-8"
            byte[] r0 = r1.getBytes(r0)     // Catch: java.io.UnsupportedEncodingException -> L8
            int r1 = r0.length     // Catch: java.io.UnsupportedEncodingException -> L8
            return r1
        L8:
            byte[] r1 = r1.getBytes()
            int r1 = r1.length
            return r1
    }

    private static long a(int r2, long r3, boolean r5, long r6, boolean r8) {
            if (r5 == 0) goto L19
            if (r8 == 0) goto L19
            long r0 = com.xiaomi.push.hb.a
            com.xiaomi.push.hb.a = r6
            long r6 = r6 - r0
            r0 = 30000(0x7530, double:1.4822E-319)
            int r5 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r5 <= 0) goto L19
            r5 = 1024(0x400, double:5.06E-321)
            int r5 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r5 <= 0) goto L19
            r5 = 2
            long r3 = r3 * r5
            return r3
        L19:
            if (r2 != 0) goto L1e
            r2 = 13
            goto L20
        L1e:
            r2 = 11
        L20:
            long r5 = (long) r2
            long r3 = r3 * r5
            r5 = 10
            long r3 = r3 / r5
            return r3
    }

    private static com.xiaomi.push.providers.a a(android.content.Context r1) {
            com.xiaomi.push.providers.a r0 = com.xiaomi.push.hb.a
            if (r0 == 0) goto L5
            return r0
        L5:
            com.xiaomi.push.providers.a r0 = new com.xiaomi.push.providers.a
            r0.<init>(r1)
            com.xiaomi.push.hb.a = r0
            return r0
    }

    static java.lang.Object a() {
            java.lang.Object r0 = com.xiaomi.push.hb.a
            return r0
    }

    private static synchronized java.lang.String a(android.content.Context r1) {
            java.lang.Class<com.xiaomi.push.hb> r1 = com.xiaomi.push.hb.class
            monitor-enter(r1)
            java.lang.String r0 = com.xiaomi.push.hb.a     // Catch: java.lang.Throwable -> L13
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L13
            if (r0 != 0) goto Lf
            java.lang.String r0 = com.xiaomi.push.hb.a     // Catch: java.lang.Throwable -> L13
            monitor-exit(r1)
            return r0
        Lf:
            java.lang.String r0 = ""
            monitor-exit(r1)
            return r0
        L13:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    static java.util.List a() {
            java.util.List<com.xiaomi.push.hb$a> r0 = com.xiaomi.push.hb.a
            return r0
    }

    public static void a(android.content.Context r0) {
            int r0 = b(r0)
            com.xiaomi.push.hb.a = r0
            return
    }

    private static void a(android.content.Context r13, java.lang.String r14, long r15, boolean r17, long r18) {
            r0 = r13
            if (r0 == 0) goto L5c
            boolean r1 = android.text.TextUtils.isEmpty(r14)
            if (r1 != 0) goto L5c
            java.lang.String r1 = r13.getPackageName()
            java.lang.String r2 = "com.xiaomi.xmsf"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L5c
            java.lang.String r1 = "com.xiaomi.xmsf"
            r3 = r14
            boolean r1 = r1.equals(r14)
            if (r1 == 0) goto L1f
            goto L5c
        L1f:
            int r6 = a(r13)
            r1 = -1
            if (r1 != r6) goto L27
            return
        L27:
            java.lang.Object r1 = com.xiaomi.push.hb.a
            monitor-enter(r1)
            java.util.List<com.xiaomi.push.hb$a> r2 = com.xiaomi.push.hb.a     // Catch: java.lang.Throwable -> L59
            boolean r11 = r2.isEmpty()     // Catch: java.lang.Throwable -> L59
            com.xiaomi.push.hb$a r12 = new com.xiaomi.push.hb$a     // Catch: java.lang.Throwable -> L59
            if (r6 != 0) goto L39
            java.lang.String r2 = a(r13)     // Catch: java.lang.Throwable -> L59
            goto L3b
        L39:
            java.lang.String r2 = ""
        L3b:
            r8 = r2
            r2 = r12
            r3 = r14
            r4 = r18
            r7 = r17
            r9 = r15
            r2.<init>(r3, r4, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L59
            a(r12)     // Catch: java.lang.Throwable -> L59
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L59
            if (r11 == 0) goto L58
            com.xiaomi.push.ao r1 = com.xiaomi.push.hb.a
            com.xiaomi.push.hc r2 = new com.xiaomi.push.hc
            r2.<init>(r13)
            r3 = 5000(0x1388, double:2.4703E-320)
            r1.a(r2, r3)
        L58:
            return
        L59:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L59
            throw r0
        L5c:
            return
    }

    public static void a(android.content.Context r8, java.lang.String r9, long r10, boolean r12, boolean r13, long r14) {
            int r0 = a(r8)
            r1 = r10
            r3 = r12
            r4 = r14
            r6 = r13
            long r3 = a(r0, r1, r3, r4, r6)
            r1 = r8
            r2 = r9
            r5 = r12
            r6 = r14
            a(r1, r2, r3, r5, r6)
            return
    }

    static void a(android.content.Context r0, java.util.List r1) {
            b(r0, r1)
            return
    }

    private static void a(com.xiaomi.push.hb.a r6) {
            java.util.List<com.xiaomi.push.hb$a> r0 = com.xiaomi.push.hb.a
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.hb$a r1 = (com.xiaomi.push.hb.a) r1
            boolean r2 = r1.a(r6)
            if (r2 == 0) goto L6
            long r2 = r1.b
            long r4 = r6.b
            long r2 = r2 + r4
            r1.b = r2
            return
        L20:
            java.util.List<com.xiaomi.push.hb$a> r0 = com.xiaomi.push.hb.a
            r0.add(r6)
            return
    }

    public static synchronized void a(java.lang.String r2) {
            java.lang.Class<com.xiaomi.push.hb> r0 = com.xiaomi.push.hb.class
            monitor-enter(r0)
            boolean r1 = com.xiaomi.push.m.d()     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto L11
            boolean r1 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L13
            if (r1 != 0) goto L11
            com.xiaomi.push.hb.a = r2     // Catch: java.lang.Throwable -> L13
        L11:
            monitor-exit(r0)
            return
        L13:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static int b(android.content.Context r2) {
            r0 = -1
            java.lang.String r1 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r1)     // Catch: java.lang.Exception -> L18
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2     // Catch: java.lang.Exception -> L18
            if (r2 != 0) goto Lc
            return r0
        Lc:
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L18
            if (r2 != 0) goto L13
            return r0
        L13:
            int r2 = r2.getType()
            return r2
        L18:
            return r0
    }

    private static void b(android.content.Context r6, java.util.List<com.xiaomi.push.hb.a> r7) {
            java.lang.Object r0 = com.xiaomi.push.providers.a.a     // Catch: java.lang.Throwable -> L74
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L74
            com.xiaomi.push.providers.a r6 = a(r6)     // Catch: java.lang.Throwable -> L71
            android.database.sqlite.SQLiteDatabase r6 = r6.getWritableDatabase()     // Catch: java.lang.Throwable -> L71
            r6.beginTransaction()     // Catch: java.lang.Throwable -> L71
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> L6c
        L12:
            boolean r1 = r7.hasNext()     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L64
            java.lang.Object r1 = r7.next()     // Catch: java.lang.Throwable -> L6c
            com.xiaomi.push.hb$a r1 = (com.xiaomi.push.hb.a) r1     // Catch: java.lang.Throwable -> L6c
            android.content.ContentValues r2 = new android.content.ContentValues     // Catch: java.lang.Throwable -> L6c
            r2.<init>()     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = "package_name"
            java.lang.String r4 = r1.a     // Catch: java.lang.Throwable -> L6c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = "message_ts"
            long r4 = r1.a     // Catch: java.lang.Throwable -> L6c
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L6c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = "network_type"
            int r4 = r1.a     // Catch: java.lang.Throwable -> L6c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = "bytes"
            long r4 = r1.b     // Catch: java.lang.Throwable -> L6c
            java.lang.Long r4 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> L6c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = "rcv"
            int r4 = r1.b     // Catch: java.lang.Throwable -> L6c
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L6c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r3 = "imsi"
            java.lang.String r1 = r1.b     // Catch: java.lang.Throwable -> L6c
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L6c
            java.lang.String r1 = "traffic"
            r3 = 0
            r6.insert(r1, r3, r2)     // Catch: java.lang.Throwable -> L6c
            goto L12
        L64:
            r6.setTransactionSuccessful()     // Catch: java.lang.Throwable -> L6c
            r6.endTransaction()     // Catch: java.lang.Throwable -> L71
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            goto L78
        L6c:
            r7 = move-exception
            r6.endTransaction()     // Catch: java.lang.Throwable -> L71
            throw r7     // Catch: java.lang.Throwable -> L71
        L71:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L71
            throw r6     // Catch: java.lang.Throwable -> L74
        L74:
            r6 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r6)
        L78:
            return
    }
}
