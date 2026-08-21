package com.xiaomi.push.service;

public class ap {
    private static long a;
    private static java.util.concurrent.ThreadPoolExecutor a;
    private static final java.util.regex.Pattern a = null;

    static {
            java.lang.String r0 = "([0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3}\\.[0-9]{1,3})"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.xiaomi.push.service.ap.a = r0
            r0 = 0
            com.xiaomi.push.service.ap.a = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r7 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r8 = new java.util.concurrent.LinkedBlockingQueue
            r8.<init>()
            r3 = 1
            r4 = 1
            r5 = 20
            r2 = r0
            r2.<init>(r3, r4, r5, r7, r8)
            com.xiaomi.push.service.ap.a = r0
            return
    }

    private static java.lang.String a(java.lang.String r4) {
            java.io.File r0 = new java.io.File
            r0.<init>(r4)
            r4 = 0
            java.io.BufferedReader r1 = new java.io.BufferedReader     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L35
            java.io.FileReader r2 = new java.io.FileReader     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L35
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L35
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L35
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L36
            r0.<init>()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L36
        L15:
            java.lang.String r2 = r1.readLine()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L36
            if (r2 == 0) goto L24
            java.lang.String r3 = "\n"
            r0.append(r3)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L36
            r0.append(r2)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L36
            goto L15
        L24:
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L36
            com.xiaomi.push.ab.a(r1)
            return r4
        L2c:
            r4 = move-exception
            goto L31
        L2e:
            r0 = move-exception
            r1 = r4
            r4 = r0
        L31:
            com.xiaomi.push.ab.a(r1)
            throw r4
        L35:
            r1 = r4
        L36:
            com.xiaomi.push.ab.a(r1)
            return r4
    }

    public static void a() {
            long r0 = java.lang.System.currentTimeMillis()
            java.util.concurrent.ThreadPoolExecutor r2 = com.xiaomi.push.service.ap.a
            int r2 = r2.getActiveCount()
            if (r2 <= 0) goto L18
            long r2 = com.xiaomi.push.service.ap.a
            long r2 = r0 - r2
            r4 = 1800000(0x1b7740, double:8.89318E-318)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L18
            return
        L18:
            com.xiaomi.push.fh r2 = com.xiaomi.push.fh.a()
            boolean r2 = r2.a()
            if (r2 == 0) goto L3c
            com.xiaomi.push.service.bv r2 = com.xiaomi.push.service.bv.a()
            com.xiaomi.push.dw$a r2 = r2.a()
            if (r2 == 0) goto L3c
            int r3 = r2.e()
            if (r3 <= 0) goto L3c
            com.xiaomi.push.service.ap.a = r0
            java.util.List r0 = r2.a()
            r1 = 1
            a(r0, r1)
        L3c:
            return
    }

    public static void a(java.util.List<java.lang.String> r2, boolean r3) {
            java.util.concurrent.ThreadPoolExecutor r0 = com.xiaomi.push.service.ap.a
            com.xiaomi.push.service.aq r1 = new com.xiaomi.push.service.aq
            r1.<init>(r2, r3)
            r0.execute(r1)
            return
    }

    static boolean a(java.lang.String r0) {
            boolean r0 = b(r0)
            return r0
    }

    public static void b() {
            java.lang.String r0 = "/proc/self/net/tcp"
            java.lang.String r0 = a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L27
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "dump tcp for uid = "
            r1.append(r2)
            int r2 = android.os.Process.myUid()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L27:
            java.lang.String r0 = "/proc/self/net/tcp6"
            java.lang.String r0 = a(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L4e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "dump tcp6 for uid = "
            r1.append(r2)
            int r2 = android.os.Process.myUid()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L4e:
            return
    }

    private static boolean b(java.lang.String r6) {
            long r0 = java.lang.System.currentTimeMillis()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L51
            r2.<init>()     // Catch: java.lang.Throwable -> L51
            java.lang.String r3 = "ConnectivityTest: begin to connect to "
            r2.append(r3)     // Catch: java.lang.Throwable -> L51
            r2.append(r6)     // Catch: java.lang.Throwable -> L51
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L51
            com.xiaomi.channel.commonutils.logger.b.a(r2)     // Catch: java.lang.Throwable -> L51
            java.net.Socket r2 = new java.net.Socket     // Catch: java.lang.Throwable -> L51
            r2.<init>()     // Catch: java.lang.Throwable -> L51
            r3 = 5222(0x1466, float:7.318E-42)
            java.net.InetSocketAddress r3 = com.xiaomi.push.ct.a(r6, r3)     // Catch: java.lang.Throwable -> L51
            r4 = 5000(0x1388, float:7.006E-42)
            r2.connect(r3, r4)     // Catch: java.lang.Throwable -> L51
            r3 = 1
            r2.setTcpNoDelay(r3)     // Catch: java.lang.Throwable -> L51
            long r4 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L51
            long r4 = r4 - r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L51
            r0.<init>()     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = "ConnectivityTest: connect to "
            r0.append(r1)     // Catch: java.lang.Throwable -> L51
            r0.append(r6)     // Catch: java.lang.Throwable -> L51
            java.lang.String r1 = " in "
            r0.append(r1)     // Catch: java.lang.Throwable -> L51
            r0.append(r4)     // Catch: java.lang.Throwable -> L51
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L51
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L51
            r2.close()     // Catch: java.lang.Throwable -> L51
            return r3
        L51:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ConnectivityTest: could not connect to:"
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = " exception: "
            r1.append(r6)
            java.lang.Class r6 = r0.getClass()
            java.lang.String r6 = r6.getSimpleName()
            r1.append(r6)
            java.lang.String r6 = " description: "
            r1.append(r6)
            java.lang.String r6 = r0.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.xiaomi.channel.commonutils.logger.b.d(r6)
            r6 = 0
            return r6
    }
}
