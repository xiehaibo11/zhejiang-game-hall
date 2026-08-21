package com.xiaomi.push.service;

final class aq implements java.lang.Runnable {
    final java.util.List a;
    final boolean a;

    aq(java.util.List r1, boolean r2) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            java.lang.String r0 = "www.baidu.com:80"
            boolean r0 = com.xiaomi.push.service.ap.a(r0)
            java.util.List r1 = r4.a
            java.util.Iterator r1 = r1.iterator()
        Lc:
            boolean r2 = r1.hasNext()
            r3 = 1
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            if (r0 != 0) goto L24
            boolean r0 = com.xiaomi.push.service.ap.a(r2)
            if (r0 == 0) goto L22
            goto L24
        L22:
            r0 = 0
            goto L25
        L24:
            r0 = r3
        L25:
            if (r0 == 0) goto Lc
            boolean r2 = r4.a
            if (r2 != 0) goto Lc
        L2b:
            if (r0 == 0) goto L2e
            goto L2f
        L2e:
            r3 = 2
        L2f:
            com.xiaomi.push.fj.a(r3)
            return
    }
}
