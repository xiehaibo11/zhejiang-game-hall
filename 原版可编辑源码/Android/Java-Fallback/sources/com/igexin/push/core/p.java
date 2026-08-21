package com.igexin.push.core;

class p implements java.lang.Runnable {
    final android.content.ContentValues a;
    final com.igexin.push.core.n b;

    p(com.igexin.push.core.n r1, android.content.ContentValues r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r3 = this;
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.b.b r0 = r0.k()
            android.content.ContentValues r1 = r3.a
            java.lang.String r2 = "message"
            r0.a(r2, r1)
            return
    }
}
