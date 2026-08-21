package com.igexin.push.extension.distribution.basic.stub;

class a implements java.lang.Runnable {
    final boolean a;
    final com.igexin.push.extension.distribution.basic.stub.PushExtension b;

    a(com.igexin.push.extension.distribution.basic.stub.PushExtension r1, boolean r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            boolean r0 = r2.a
            if (r0 == 0) goto Lb
            com.igexin.push.extension.distribution.basic.c.c r0 = com.igexin.push.extension.distribution.basic.c.c.a()
            r0.e()
        Lb:
            r0 = 5000(0x1388, double:2.4703E-320)
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L10
        L10:
            boolean r0 = com.igexin.push.core.d.n
            if (r0 == 0) goto L1d
            com.igexin.push.extension.distribution.basic.a.d r0 = com.igexin.push.extension.distribution.basic.a.d.a()
            boolean r1 = com.igexin.push.core.d.n
            r0.a(r1)
        L1d:
            return
    }
}
