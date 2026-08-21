package com.xiaomi.push;

class dh extends com.xiaomi.push.ao.b {
    com.xiaomi.push.ao.b a;
    final com.xiaomi.push.df a;

    dh(com.xiaomi.push.df r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void b() {
            r2 = this;
            com.xiaomi.push.df r0 = r2.a
            java.util.concurrent.ConcurrentLinkedQueue r0 = com.xiaomi.push.df.a(r0)
            java.lang.Object r0 = r0.peek()
            com.xiaomi.push.df$b r0 = (com.xiaomi.push.df.b) r0
            if (r0 == 0) goto L29
            boolean r1 = r0.a()
            if (r1 == 0) goto L29
            com.xiaomi.push.df r1 = r2.a
            java.util.concurrent.ConcurrentLinkedQueue r1 = com.xiaomi.push.df.a(r1)
            boolean r1 = r1.remove(r0)
            if (r1 == 0) goto L22
            r2.a = r0
        L22:
            com.xiaomi.push.ao$b r0 = r2.a
            if (r0 == 0) goto L29
            r0.b()
        L29:
            return
    }

    @Override
    public void c() {
            r1 = this;
            com.xiaomi.push.ao$b r0 = r1.a
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }
}
