package com.xiaomi.push;

public class fg implements com.xiaomi.push.fz {
    private int a;
    private long a;
    com.xiaomi.push.fw a;
    com.xiaomi.push.service.XMPushService a;
    private java.lang.Exception a;
    private java.lang.String a;
    private long b;
    private long c;
    private long d;
    private long e;
    private long f;

    fg(com.xiaomi.push.service.XMPushService r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.b = r0
            r2.c = r0
            r2.d = r0
            r2.e = r0
            r2.f = r0
            r2.a = r3
            java.lang.String r3 = ""
            r2.a = r3
            r2.b()
            int r3 = android.os.Process.myUid()
            long r0 = android.net.TrafficStats.getUidRxBytes(r3)     // Catch: java.lang.Exception -> L2b
            r2.f = r0     // Catch: java.lang.Exception -> L2b
            long r0 = android.net.TrafficStats.getUidTxBytes(r3)     // Catch: java.lang.Exception -> L2b
            r2.e = r0     // Catch: java.lang.Exception -> L2b
            goto L46
        L2b:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to obtain traffic data during initialization: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            r0 = -1
            r2.f = r0
            r2.e = r0
        L46:
            return
    }

    private void b() {
            r3 = this;
            r0 = 0
            r3.b = r0
            r3.d = r0
            r3.a = r0
            r3.c = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            com.xiaomi.push.service.XMPushService r2 = r3.a
            boolean r2 = com.xiaomi.push.bj.b(r2)
            if (r2 == 0) goto L18
            r3.a = r0
        L18:
            com.xiaomi.push.service.XMPushService r2 = r3.a
            boolean r2 = r2.c()
            if (r2 == 0) goto L22
            r3.c = r0
        L22:
            return
    }

    private synchronized void c() {
            r5 = this;
            monitor-enter(r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L70
            r0.<init>()     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = "stat connpt = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = r5.a     // Catch: java.lang.Throwable -> L70
            r0.append(r1)     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = " netDuration = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L70
            long r1 = r5.b     // Catch: java.lang.Throwable -> L70
            r0.append(r1)     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = " ChannelDuration = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L70
            long r1 = r5.d     // Catch: java.lang.Throwable -> L70
            r0.append(r1)     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = " channelConnectedTime = "
            r0.append(r1)     // Catch: java.lang.Throwable -> L70
            long r1 = r5.c     // Catch: java.lang.Throwable -> L70
            r0.append(r1)     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L70
            com.xiaomi.channel.commonutils.logger.b.c(r0)     // Catch: java.lang.Throwable -> L70
            com.xiaomi.push.fa r0 = new com.xiaomi.push.fa     // Catch: java.lang.Throwable -> L70
            r0.<init>()     // Catch: java.lang.Throwable -> L70
            r1 = 0
            r0.a = r1     // Catch: java.lang.Throwable -> L70
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.h     // Catch: java.lang.Throwable -> L70
            int r1 = r1.a()     // Catch: java.lang.Throwable -> L70
            r0.a(r1)     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = r5.a     // Catch: java.lang.Throwable -> L70
            r0.a(r1)     // Catch: java.lang.Throwable -> L70
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L70
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L70
            r0.d(r1)     // Catch: java.lang.Throwable -> L70
            long r1 = r5.b     // Catch: java.lang.Throwable -> L70
            long r1 = r1 / r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L70
            r0.b(r1)     // Catch: java.lang.Throwable -> L70
            long r1 = r5.d     // Catch: java.lang.Throwable -> L70
            long r1 = r1 / r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L70
            r0.c(r1)     // Catch: java.lang.Throwable -> L70
            com.xiaomi.push.fh r1 = com.xiaomi.push.fh.a()     // Catch: java.lang.Throwable -> L70
            r1.a(r0)     // Catch: java.lang.Throwable -> L70
            r5.b()     // Catch: java.lang.Throwable -> L70
            monitor-exit(r5)
            return
        L70:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    java.lang.Exception a() {
            r1 = this;
            java.lang.Exception r0 = r1.a
            return r0
    }

    public synchronized void a() {
            r10 = this;
            monitor-enter(r10)
            com.xiaomi.push.service.XMPushService r0 = r10.a     // Catch: java.lang.Throwable -> L6f
            if (r0 != 0) goto L7
            monitor-exit(r10)
            return
        L7:
            com.xiaomi.push.service.XMPushService r0 = r10.a     // Catch: java.lang.Throwable -> L6f
            java.lang.String r0 = com.xiaomi.push.bj.a(r0)     // Catch: java.lang.Throwable -> L6f
            com.xiaomi.push.service.XMPushService r1 = r10.a     // Catch: java.lang.Throwable -> L6f
            boolean r1 = com.xiaomi.push.bj.c(r1)     // Catch: java.lang.Throwable -> L6f
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L6f
            long r4 = r10.a     // Catch: java.lang.Throwable -> L6f
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto L2a
            long r4 = r10.b     // Catch: java.lang.Throwable -> L6f
            long r8 = r10.a     // Catch: java.lang.Throwable -> L6f
            long r8 = r2 - r8
            long r4 = r4 + r8
            r10.b = r4     // Catch: java.lang.Throwable -> L6f
            r10.a = r6     // Catch: java.lang.Throwable -> L6f
        L2a:
            long r4 = r10.c     // Catch: java.lang.Throwable -> L6f
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 == 0) goto L3b
            long r4 = r10.d     // Catch: java.lang.Throwable -> L6f
            long r8 = r10.c     // Catch: java.lang.Throwable -> L6f
            long r8 = r2 - r8
            long r4 = r4 + r8
            r10.d = r4     // Catch: java.lang.Throwable -> L6f
            r10.c = r6     // Catch: java.lang.Throwable -> L6f
        L3b:
            if (r1 == 0) goto L6d
            java.lang.String r1 = r10.a     // Catch: java.lang.Throwable -> L6f
            boolean r1 = android.text.TextUtils.equals(r1, r0)     // Catch: java.lang.Throwable -> L6f
            if (r1 != 0) goto L4d
            long r4 = r10.b     // Catch: java.lang.Throwable -> L6f
            r8 = 30000(0x7530, double:1.4822E-319)
            int r1 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r1 > 0) goto L56
        L4d:
            long r4 = r10.b     // Catch: java.lang.Throwable -> L6f
            r8 = 5400000(0x5265c0, double:2.6679545E-317)
            int r1 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r1 <= 0) goto L59
        L56:
            r10.c()     // Catch: java.lang.Throwable -> L6f
        L59:
            r10.a = r0     // Catch: java.lang.Throwable -> L6f
            long r0 = r10.a     // Catch: java.lang.Throwable -> L6f
            int r0 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r0 != 0) goto L63
            r10.a = r2     // Catch: java.lang.Throwable -> L6f
        L63:
            com.xiaomi.push.service.XMPushService r0 = r10.a     // Catch: java.lang.Throwable -> L6f
            boolean r0 = r0.c()     // Catch: java.lang.Throwable -> L6f
            if (r0 == 0) goto L6d
            r10.c = r2     // Catch: java.lang.Throwable -> L6f
        L6d:
            monitor-exit(r10)
            return
        L6f:
            r0 = move-exception
            monitor-exit(r10)
            throw r0
    }

    @Override
    public void a(com.xiaomi.push.fw r3) {
            r2 = this;
            r0 = 0
            r2.a = r0
            r1 = 0
            r2.a = r1
            r2.a = r3
            com.xiaomi.push.service.XMPushService r3 = r2.a
            java.lang.String r3 = com.xiaomi.push.bj.a(r3)
            r2.a = r3
            com.xiaomi.push.ez r3 = com.xiaomi.push.ez.v
            int r3 = r3.a()
            com.xiaomi.push.fj.a(r0, r3)
            return
    }

    @Override
    public void a(com.xiaomi.push.fw r7, int r8, java.lang.Exception r9) {
            r6 = this;
            int r0 = r6.a
            if (r0 != 0) goto L13
            java.lang.Exception r0 = r6.a
            if (r0 != 0) goto L13
            r6.a = r8
            r6.a = r9
            java.lang.String r0 = r7.a()
            com.xiaomi.push.fj.b(r0, r9)
        L13:
            r9 = 22
            if (r8 != r9) goto L3a
            long r8 = r6.c
            r0 = 0
            int r8 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r8 == 0) goto L3a
            long r7 = r7.a()
            long r2 = r6.c
            long r7 = r7 - r2
            int r9 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r9 >= 0) goto L2b
            r7 = r0
        L2b:
            int r9 = com.xiaomi.push.gc.b()
            int r9 = r9 / 2
            long r2 = (long) r9
            long r7 = r7 + r2
            long r2 = r6.d
            long r2 = r2 + r7
            r6.d = r2
            r6.c = r0
        L3a:
            r6.a()
            int r7 = android.os.Process.myUid()
            r8 = -1
            long r0 = android.net.TrafficStats.getUidRxBytes(r7)     // Catch: java.lang.Exception -> L4f
            long r8 = android.net.TrafficStats.getUidTxBytes(r7)     // Catch: java.lang.Exception -> L4f
            r4 = r8
            r8 = r0
            r0 = r4
            goto L65
        L4f:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Failed to obtain traffic data: "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r7)
            r0 = r8
        L65:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r2 = "Stats rx="
            r7.append(r2)
            long r2 = r6.f
            long r2 = r8 - r2
            r7.append(r2)
            java.lang.String r2 = ", tx="
            r7.append(r2)
            long r2 = r6.e
            long r2 = r0 - r2
            r7.append(r2)
            java.lang.String r7 = r7.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r7)
            r6.f = r8
            r6.e = r0
            return
    }

    @Override
    public void a(com.xiaomi.push.fw r4, java.lang.Exception r5) {
            r3 = this;
            com.xiaomi.push.service.XMPushService r5 = r3.a
            boolean r5 = com.xiaomi.push.bj.c(r5)
            r0 = 0
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.d
            int r1 = r1.a()
            r2 = 1
            java.lang.String r4 = r4.a()
            com.xiaomi.push.fj.a(r0, r1, r2, r4, r5)
            r3.a()
            return
    }

    @Override
    public void b(com.xiaomi.push.fw r4) {
            r3 = this;
            r3.a()
            long r0 = android.os.SystemClock.elapsedRealtime()
            r3.c = r0
            com.xiaomi.push.ez r0 = com.xiaomi.push.ez.v
            int r0 = r0.a()
            java.lang.String r1 = r4.a()
            int r4 = r4.a()
            r2 = 0
            com.xiaomi.push.fj.a(r2, r0, r1, r4)
            return
    }
}
