package com.igexin.push.core.a;

class h implements java.lang.Runnable {
    final com.igexin.push.core.bean.PushTaskBean a;
    final java.lang.String b;
    final com.igexin.push.core.a.e c;

    h(com.igexin.push.core.a.e r1, com.igexin.push.core.bean.PushTaskBean r2, java.lang.String r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.igexin.push.core.a.e r0 = r3.c
            com.igexin.push.core.bean.PushTaskBean r1 = r3.a
            java.lang.String r2 = r3.b
            r0.b(r1, r2)
            return
    }
}
