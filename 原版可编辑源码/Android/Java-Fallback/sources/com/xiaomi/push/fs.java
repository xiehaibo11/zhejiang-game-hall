package com.xiaomi.push;

public class fs extends com.xiaomi.push.gd {
    private com.xiaomi.push.fn a;
    private com.xiaomi.push.fo a;
    private java.lang.Thread a;
    private byte[] a;

    public fs(com.xiaomi.push.service.XMPushService r1, com.xiaomi.push.fx r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private com.xiaomi.push.fl a(boolean r3) {
            r2 = this;
            com.xiaomi.push.fr r0 = new com.xiaomi.push.fr
            r0.<init>()
            if (r3 == 0) goto Lc
            java.lang.String r3 = "1"
            r0.a(r3)
        Lc:
            byte[] r3 = com.xiaomi.push.fj.a()
            if (r3 == 0) goto L26
            com.xiaomi.push.dx$j r1 = new com.xiaomi.push.dx$j
            r1.<init>()
            com.xiaomi.push.a r3 = com.xiaomi.push.a.a(r3)
            r1.a(r3)
            byte[] r3 = r1.a()
            r1 = 0
            r0.a(r3, r1)
        L26:
            return r0
    }

    static com.xiaomi.push.fn a(com.xiaomi.push.fs r0) {
            com.xiaomi.push.fn r0 = r0.a
            return r0
    }

    private void h() {
            r3 = this;
            com.xiaomi.push.fn r0 = new com.xiaomi.push.fn     // Catch: java.lang.Exception -> L3f
            java.net.Socket r1 = r3.a     // Catch: java.lang.Exception -> L3f
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Exception -> L3f
            com.xiaomi.push.service.XMPushService r2 = r3.a     // Catch: java.lang.Exception -> L3f
            r0.<init>(r1, r3, r2)     // Catch: java.lang.Exception -> L3f
            r3.a = r0     // Catch: java.lang.Exception -> L3f
            com.xiaomi.push.fo r0 = new com.xiaomi.push.fo     // Catch: java.lang.Exception -> L3f
            java.net.Socket r1 = r3.a     // Catch: java.lang.Exception -> L3f
            java.io.OutputStream r1 = r1.getOutputStream()     // Catch: java.lang.Exception -> L3f
            r0.<init>(r1, r3)     // Catch: java.lang.Exception -> L3f
            r3.a = r0     // Catch: java.lang.Exception -> L3f
            com.xiaomi.push.ft r0 = new com.xiaomi.push.ft     // Catch: java.lang.Exception -> L3f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3f
            r1.<init>()     // Catch: java.lang.Exception -> L3f
            java.lang.String r2 = "Blob Reader ("
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            int r2 = r3.b     // Catch: java.lang.Exception -> L3f
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            java.lang.String r2 = ")"
            r1.append(r2)     // Catch: java.lang.Exception -> L3f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L3f
            r0.<init>(r3, r1)     // Catch: java.lang.Exception -> L3f
            r3.a = r0     // Catch: java.lang.Exception -> L3f
            r0.start()     // Catch: java.lang.Exception -> L3f
            return
        L3f:
            r0 = move-exception
            com.xiaomi.push.gh r1 = new com.xiaomi.push.gh
            java.lang.String r2 = "Error to init reader and writer"
            r1.<init>(r2, r0)
            throw r1
    }

    @Override
    protected synchronized void a() {
            r1 = this;
            monitor-enter(r1)
            r1.h()     // Catch: java.lang.Throwable -> Lb
            com.xiaomi.push.fo r0 = r1.a     // Catch: java.lang.Throwable -> Lb
            r0.a()     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return
        Lb:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    protected synchronized void a(int r3, java.lang.Exception r4) {
            r2 = this;
            monitor-enter(r2)
            com.xiaomi.push.fn r0 = r2.a     // Catch: java.lang.Throwable -> L24
            r1 = 0
            if (r0 == 0) goto Ld
            com.xiaomi.push.fn r0 = r2.a     // Catch: java.lang.Throwable -> L24
            r0.b()     // Catch: java.lang.Throwable -> L24
            r2.a = r1     // Catch: java.lang.Throwable -> L24
        Ld:
            com.xiaomi.push.fo r0 = r2.a     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L1d
            com.xiaomi.push.fo r0 = r2.a     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L24
            r0.b()     // Catch: java.lang.Exception -> L17 java.lang.Throwable -> L24
            goto L1b
        L17:
            r0 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r0)     // Catch: java.lang.Throwable -> L24
        L1b:
            r2.a = r1     // Catch: java.lang.Throwable -> L24
        L1d:
            r2.a = r1     // Catch: java.lang.Throwable -> L24
            super.a(r3, r4)     // Catch: java.lang.Throwable -> L24
            monitor-exit(r2)
            return
        L24:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    void a(com.xiaomi.push.fl r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            boolean r0 = r3.a()
            if (r0 == 0) goto L45
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[Slim] RCV blob chid="
            r0.append(r1)
            int r1 = r3.a()
            r0.append(r1)
            java.lang.String r1 = "; id="
            r0.append(r1)
            java.lang.String r1 = r3.e()
            r0.append(r1)
            java.lang.String r1 = "; errCode="
            r0.append(r1)
            int r1 = r3.b()
            r0.append(r1)
            java.lang.String r1 = "; err="
            r0.append(r1)
            java.lang.String r1 = r3.c()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
        L45:
            int r0 = r3.a()
            if (r0 != 0) goto L85
            java.lang.String r0 = r3.a()
            java.lang.String r1 = "PING"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L73
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[Slim] RCV ping id="
            r0.append(r1)
            java.lang.String r1 = r3.e()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r2.g()
            goto L85
        L73:
            java.lang.String r0 = r3.a()
            java.lang.String r1 = "CLOSE"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L85
            r0 = 13
            r1 = 0
            r2.c(r0, r1)
        L85:
            java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw$a> r0 = r2.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L8f:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L9f
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.fw$a r1 = (com.xiaomi.push.fw.a) r1
            r1.a(r3)
            goto L8f
        L9f:
            return
    }

    @Override
    @java.lang.Deprecated
    public void a(com.xiaomi.push.gn r2) {
            r1 = this;
            r0 = 0
            com.xiaomi.push.fl r2 = com.xiaomi.push.fl.a(r2, r0)
            r1.b(r2)
            return
    }

    @Override
    public synchronized void a(com.xiaomi.push.service.bg.b r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = r1.c()     // Catch: java.lang.Throwable -> La
            com.xiaomi.push.fk.a(r2, r0, r1)     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)
            return
        La:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void a(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            monitor-enter(r0)
            com.xiaomi.push.fk.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    protected void a(boolean r3) {
            r2 = this;
            com.xiaomi.push.fo r0 = r2.a
            if (r0 == 0) goto L27
            com.xiaomi.push.fl r3 = r2.a(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[Slim] SND ping id="
            r0.append(r1)
            java.lang.String r1 = r3.e()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r0)
            r2.b(r3)
            r2.f()
            return
        L27:
            com.xiaomi.push.gh r3 = new com.xiaomi.push.gh
            java.lang.String r0 = "The BlobWriter is null."
            r3.<init>(r0)
            throw r3
    }

    @Override
    public void a(com.xiaomi.push.fl[] r4) {
            r3 = this;
            int r0 = r4.length
            r1 = 0
        L2:
            if (r1 >= r0) goto Lc
            r2 = r4[r1]
            r3.b(r2)
            int r1 = r1 + 1
            goto L2
        Lc:
            return
    }

    @Override
    public boolean a() {
            r1 = this;
            r0 = 1
            return r0
    }

    synchronized byte[] a() {
            r4 = this;
            monitor-enter(r4)
            byte[] r0 = r4.a     // Catch: java.lang.Throwable -> L4c
            if (r0 != 0) goto L48
            java.lang.String r0 = r4.a     // Catch: java.lang.Throwable -> L4c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L4c
            if (r0 != 0) goto L48
            java.lang.String r0 = com.xiaomi.push.service.bv.a()     // Catch: java.lang.Throwable -> L4c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4c
            r1.<init>()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = r4.a     // Catch: java.lang.Throwable -> L4c
            java.lang.String r3 = r4.a     // Catch: java.lang.Throwable -> L4c
            int r3 = r3.length()     // Catch: java.lang.Throwable -> L4c
            int r3 = r3 / 2
            java.lang.String r2 = r2.substring(r3)     // Catch: java.lang.Throwable -> L4c
            r1.append(r2)     // Catch: java.lang.Throwable -> L4c
            int r2 = r0.length()     // Catch: java.lang.Throwable -> L4c
            int r2 = r2 / 2
            java.lang.String r0 = r0.substring(r2)     // Catch: java.lang.Throwable -> L4c
            r1.append(r0)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Throwable -> L4c
            java.lang.String r1 = r4.a     // Catch: java.lang.Throwable -> L4c
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Throwable -> L4c
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Throwable -> L4c
            byte[] r0 = com.xiaomi.push.service.bp.a(r1, r0)     // Catch: java.lang.Throwable -> L4c
            r4.a = r0     // Catch: java.lang.Throwable -> L4c
        L48:
            byte[] r0 = r4.a     // Catch: java.lang.Throwable -> L4c
            monitor-exit(r4)
            return r0
        L4c:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public void b(com.xiaomi.push.fl r12) {
            r11 = this;
            com.xiaomi.push.fo r0 = r11.a
            if (r0 == 0) goto L46
            int r0 = r0.a(r12)     // Catch: java.lang.Exception -> L3f
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L3f
            r11.d = r1     // Catch: java.lang.Exception -> L3f
            java.lang.String r4 = r12.f()     // Catch: java.lang.Exception -> L3f
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L3f
            if (r1 != 0) goto L24
            com.xiaomi.push.service.XMPushService r3 = r11.a     // Catch: java.lang.Exception -> L3f
            long r5 = (long) r0     // Catch: java.lang.Exception -> L3f
            r7 = 0
            r8 = 1
            long r9 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L3f
            com.xiaomi.push.hb.a(r3, r4, r5, r7, r8, r9)     // Catch: java.lang.Exception -> L3f
        L24:
            java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw$a> r0 = r11.b     // Catch: java.lang.Exception -> L3f
            java.util.Collection r0 = r0.values()     // Catch: java.lang.Exception -> L3f
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L3f
        L2e:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L3f
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L3f
            com.xiaomi.push.fw$a r1 = (com.xiaomi.push.fw.a) r1     // Catch: java.lang.Exception -> L3f
            r1.a(r12)     // Catch: java.lang.Exception -> L3f
            goto L2e
        L3e:
            return
        L3f:
            r12 = move-exception
            com.xiaomi.push.gh r0 = new com.xiaomi.push.gh
            r0.<init>(r12)
            throw r0
        L46:
            com.xiaomi.push.gh r12 = new com.xiaomi.push.gh
            java.lang.String r0 = "the writer is null."
            r12.<init>(r0)
            throw r12
    }

    void b(com.xiaomi.push.gn r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.util.Map<com.xiaomi.push.gb, com.xiaomi.push.fw$a> r0 = r2.a
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r0.next()
            com.xiaomi.push.fw$a r1 = (com.xiaomi.push.fw.a) r1
            r1.a(r3)
            goto Ld
        L1d:
            return
    }
}
