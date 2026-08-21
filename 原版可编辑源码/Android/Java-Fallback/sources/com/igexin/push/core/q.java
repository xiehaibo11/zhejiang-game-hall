package com.igexin.push.core;

class q implements java.lang.Runnable {
    final android.content.ContentValues a;
    final java.lang.String b;
    final com.igexin.push.core.n c;

    q(com.igexin.push.core.n r1, android.content.ContentValues r2, java.lang.String r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r6 = this;
            com.igexin.push.core.c r0 = com.igexin.push.core.c.a()
            com.igexin.push.b.b r0 = r0.k()
            android.content.ContentValues r1 = r6.a
            java.lang.String r2 = "taskid"
            java.lang.String[] r2 = new java.lang.String[]{r2}
            r3 = 1
            java.lang.String[] r3 = new java.lang.String[r3]
            java.lang.String r4 = r6.b
            r5 = 0
            r3[r5] = r4
            java.lang.String r4 = "message"
            r0.a(r4, r1, r2, r3)
            return
    }
}
