package com.xiaomi.push;

class fc implements com.xiaomi.push.service.bg.b.a {
    private int a;
    private com.xiaomi.push.fw a;
    private com.xiaomi.push.service.XMPushService a;
    private com.xiaomi.push.service.bg.b a;
    private com.xiaomi.push.service.bg.c a;
    private boolean a;

    fc(com.xiaomi.push.service.XMPushService r2, com.xiaomi.push.service.bg.b r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.a = r2
            com.xiaomi.push.service.bg$c r2 = com.xiaomi.push.service.bg.c.b
            r1.a = r2
            r1.a = r3
            return
    }

    static void a(com.xiaomi.push.fc r0) {
            r0.c()
            return
    }

    private void b() {
            r1 = this;
            com.xiaomi.push.service.bg$b r0 = r1.a
            r0.b(r1)
            return
    }

    private void c() {
            r4 = this;
            r4.b()
            boolean r0 = r4.a
            if (r0 != 0) goto L8
            return
        L8:
            int r0 = r4.a
            r1 = 11
            if (r0 != r1) goto Lf
            return
        Lf:
            com.xiaomi.push.fh r0 = com.xiaomi.push.fh.a()
            com.xiaomi.push.fa r0 = r0.a()
            int[] r1 = com.xiaomi.push.fe.a
            com.xiaomi.push.service.bg$c r2 = r4.a
            int r2 = r2.ordinal()
            r1 = r1[r2]
            r2 = 1
            if (r1 == r2) goto L31
            r3 = 3
            if (r1 == r3) goto L28
            goto L5c
        L28:
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.H
        L2a:
            int r1 = r1.a()
            r0.a = r1
            goto L5c
        L31:
            int r1 = r4.a
            r3 = 17
            if (r1 != r3) goto L3a
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.L
            goto L2a
        L3a:
            r3 = 21
            if (r1 != r3) goto L41
            com.xiaomi.push.ez r1 = com.xiaomi.push.ez.S
            goto L2a
        L41:
            com.xiaomi.push.fg r1 = com.xiaomi.push.fh.a()     // Catch: java.lang.NullPointerException -> L5b
            java.lang.Exception r1 = r1.a()     // Catch: java.lang.NullPointerException -> L5b
            com.xiaomi.push.ff$a r1 = com.xiaomi.push.ff.c(r1)     // Catch: java.lang.NullPointerException -> L5b
            com.xiaomi.push.ez r3 = r1.a     // Catch: java.lang.NullPointerException -> L5b
            int r3 = r3.a()     // Catch: java.lang.NullPointerException -> L5b
            r0.a = r3     // Catch: java.lang.NullPointerException -> L5b
            java.lang.String r1 = r1.a     // Catch: java.lang.NullPointerException -> L5b
            r0.c(r1)     // Catch: java.lang.NullPointerException -> L5b
            goto L5c
        L5b:
            r0 = 0
        L5c:
            if (r0 == 0) goto L83
            com.xiaomi.push.fw r1 = r4.a
            java.lang.String r1 = r1.a()
            r0.b(r1)
            com.xiaomi.push.service.bg$b r1 = r4.a
            java.lang.String r1 = r1.b
            r0.d(r1)
            r0.b = r2
            com.xiaomi.push.service.bg$b r1 = r4.a     // Catch: java.lang.NumberFormatException -> L7c
            java.lang.String r1 = r1.g     // Catch: java.lang.NumberFormatException -> L7c
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.NumberFormatException -> L7c
            byte r1 = (byte) r1     // Catch: java.lang.NumberFormatException -> L7c
            r0.a(r1)     // Catch: java.lang.NumberFormatException -> L7c
        L7c:
            com.xiaomi.push.fh r1 = com.xiaomi.push.fh.a()
            r1.a(r0)
        L83:
            return
    }

    void a() {
            r1 = this;
            com.xiaomi.push.service.bg$b r0 = r1.a
            r0.a(r1)
            com.xiaomi.push.service.XMPushService r0 = r1.a
            com.xiaomi.push.fw r0 = r0.a()
            r1.a = r0
            return
    }

    @Override
    public void a(com.xiaomi.push.service.bg.c r2, com.xiaomi.push.service.bg.c r3, int r4) {
            r1 = this;
            boolean r0 = r1.a
            if (r0 != 0) goto Lf
            com.xiaomi.push.service.bg$c r0 = com.xiaomi.push.service.bg.c.b
            if (r2 != r0) goto Lf
            r1.a = r3
            r1.a = r4
            r2 = 1
            r1.a = r2
        Lf:
            com.xiaomi.push.service.XMPushService r2 = r1.a
            com.xiaomi.push.fd r3 = new com.xiaomi.push.fd
            r4 = 4
            r3.<init>(r1, r4)
            r2.a(r3)
            return
    }
}
