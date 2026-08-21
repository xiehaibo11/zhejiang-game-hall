package com.xiaomi.push;

public class fh {
    private int a;
    private long a;
    private com.xiaomi.push.bl a;
    private com.xiaomi.push.fg a;
    private java.lang.String a;
    private boolean a;

    class a {
        static final com.xiaomi.push.fh a = null;

        static {
                com.xiaomi.push.fh r0 = new com.xiaomi.push.fh
                r0.<init>()
                com.xiaomi.push.fh.a.a = r0
                return
        }
    }

    public fh() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            com.xiaomi.push.bl r0 = com.xiaomi.push.bl.a()
            r1.a = r0
            return
    }

    private com.xiaomi.push.fa a(com.xiaomi.push.bl.a r3) {
            r2 = this;
            int r0 = r3.a
            if (r0 != 0) goto L11
            java.lang.Object r0 = r3.a
            boolean r0 = r0 instanceof com.xiaomi.push.fa
            if (r0 == 0) goto Lf
            java.lang.Object r3 = r3.a
            com.xiaomi.push.fa r3 = (com.xiaomi.push.fa) r3
            goto L29
        Lf:
            r3 = 0
            goto L29
        L11:
            com.xiaomi.push.fa r0 = r2.a()
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.k
            int r1 = r1.a()
            r0.a(r1)
            int r1 = r3.a
            r0.c(r1)
            java.lang.String r3 = r3.a
            r0.c(r3)
            r3 = r0
        L29:
            return r3
    }

    private com.xiaomi.push.fb a(int r8) {
            r7 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.xiaomi.push.fb r1 = new com.xiaomi.push.fb
            java.lang.String r2 = r7.a
            r1.<init>(r2, r0)
            com.xiaomi.push.fg r2 = r7.a
            com.xiaomi.push.service.XMPushService r2 = r2.a
            boolean r2 = com.xiaomi.push.bj.e(r2)
            if (r2 != 0) goto L21
            com.xiaomi.push.fg r2 = r7.a
            com.xiaomi.push.service.XMPushService r2 = r2.a
            java.lang.String r2 = com.xiaomi.push.j.k(r2)
            r1.a(r2)
        L21:
            com.xiaomi.push.jn r2 = new com.xiaomi.push.jn
            r2.<init>(r8)
            com.xiaomi.push.jl$a r3 = new com.xiaomi.push.jl$a
            r3.<init>()
            com.xiaomi.push.jf r3 = r3.a(r2)
            r1.b(r3)     // Catch: com.xiaomi.push.iz -> L32
        L32:
            com.xiaomi.push.bl r4 = r7.a
            java.util.LinkedList r4 = r4.a()
        L38:
            int r5 = r4.size()     // Catch: java.lang.Throwable -> L5d
            if (r5 <= 0) goto L5d
            java.lang.Object r5 = r4.getLast()     // Catch: java.lang.Throwable -> L5d
            com.xiaomi.push.bl$a r5 = (com.xiaomi.push.bl.a) r5     // Catch: java.lang.Throwable -> L5d
            com.xiaomi.push.fa r5 = r7.a(r5)     // Catch: java.lang.Throwable -> L5d
            if (r5 == 0) goto L4d
            r5.b(r3)     // Catch: java.lang.Throwable -> L5d
        L4d:
            int r6 = r2.a_()     // Catch: java.lang.Throwable -> L5d
            if (r6 <= r8) goto L54
            goto L5d
        L54:
            if (r5 == 0) goto L59
            r0.add(r5)     // Catch: java.lang.Throwable -> L5d
        L59:
            r4.removeLast()     // Catch: java.lang.Throwable -> L5d
            goto L38
        L5d:
            return r1
    }

    public static com.xiaomi.push.fg a() {
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a.a
            monitor-enter(r0)
            com.xiaomi.push.fh r1 = com.xiaomi.push.fh.a.a     // Catch: java.lang.Throwable -> L9
            com.xiaomi.push.fg r1 = r1.a     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return r1
        L9:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            throw r1
    }

    public static com.xiaomi.push.fh a() {
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a.a
            return r0
    }

    private void a() {
            r4 = this;
            boolean r0 = r4.a
            if (r0 == 0) goto L19
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.a
            long r0 = r0 - r2
            int r2 = r4.a
            long r2 = (long) r2
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L19
            r0 = 0
            r4.a = r0
            r0 = 0
            r4.a = r0
        L19:
            return
    }

    synchronized com.xiaomi.push.fa a() {
            r5 = this;
            monitor-enter(r5)
            com.xiaomi.push.fa r0 = new com.xiaomi.push.fa     // Catch: java.lang.Throwable -> L24
            r0.<init>()     // Catch: java.lang.Throwable -> L24
            com.xiaomi.push.fg r1 = r5.a     // Catch: java.lang.Throwable -> L24
            com.xiaomi.push.service.XMPushService r1 = r1.a     // Catch: java.lang.Throwable -> L24
            java.lang.String r1 = com.xiaomi.push.bj.a(r1)     // Catch: java.lang.Throwable -> L24
            r0.a(r1)     // Catch: java.lang.Throwable -> L24
            r1 = 0
            r0.a = r1     // Catch: java.lang.Throwable -> L24
            r1 = 1
            r0.b = r1     // Catch: java.lang.Throwable -> L24
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L24
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            int r1 = (int) r1     // Catch: java.lang.Throwable -> L24
            r0.d(r1)     // Catch: java.lang.Throwable -> L24
            monitor-exit(r5)
            return r0
        L24:
            r0 = move-exception
            monitor-exit(r5)
            throw r0
    }

    synchronized com.xiaomi.push.fb a() {
            r2 = this;
            monitor-enter(r2)
            r0 = 0
            boolean r1 = r2.b()     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto L1a
            r0 = 750(0x2ee, float:1.051E-42)
            com.xiaomi.push.fg r1 = r2.a     // Catch: java.lang.Throwable -> L1c
            com.xiaomi.push.service.XMPushService r1 = r1.a     // Catch: java.lang.Throwable -> L1c
            boolean r1 = com.xiaomi.push.bj.e(r1)     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto L16
            r0 = 375(0x177, float:5.25E-43)
        L16:
            com.xiaomi.push.fb r0 = r2.a(r0)     // Catch: java.lang.Throwable -> L1c
        L1a:
            monitor-exit(r2)
            return r0
        L1c:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public void a(int r4) {
            r3 = this;
            if (r4 <= 0) goto L3b
            int r4 = r4 * 1000
            r0 = 604800000(0x240c8400, float:3.046947E-17)
            if (r4 <= r0) goto La
            r4 = r0
        La:
            int r0 = r3.a
            if (r0 != r4) goto L12
            boolean r0 = r3.a
            if (r0 != 0) goto L3b
        L12:
            r0 = 1
            r3.a = r0
            long r0 = java.lang.System.currentTimeMillis()
            r3.a = r0
            r3.a = r4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "enable dot duration = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " start = "
            r0.append(r4)
            long r1 = r3.a
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.c(r4)
        L3b:
            return
    }

    synchronized void a(com.xiaomi.push.fa r2) {
            r1 = this;
            monitor-enter(r1)
            com.xiaomi.push.bl r0 = r1.a     // Catch: java.lang.Throwable -> L8
            r0.a(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized void a(com.xiaomi.push.service.XMPushService r2) {
            r1 = this;
            monitor-enter(r1)
            com.xiaomi.push.fg r0 = new com.xiaomi.push.fg     // Catch: java.lang.Throwable -> L1a
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L1a
            r1.a = r0     // Catch: java.lang.Throwable -> L1a
            java.lang.String r2 = ""
            r1.a = r2     // Catch: java.lang.Throwable -> L1a
            com.xiaomi.push.service.bv r2 = com.xiaomi.push.service.bv.a()     // Catch: java.lang.Throwable -> L1a
            com.xiaomi.push.fi r0 = new com.xiaomi.push.fi     // Catch: java.lang.Throwable -> L1a
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1a
            r2.a(r0)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r1)
            return
        L1a:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.a
            return r0
    }

    boolean b() {
            r1 = this;
            r1.a()
            boolean r0 = r1.a
            if (r0 == 0) goto L11
            com.xiaomi.push.bl r0 = r1.a
            int r0 = r0.a()
            if (r0 <= 0) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            return r0
    }
}
