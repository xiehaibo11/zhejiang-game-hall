package com.igexin.push.core;

class s implements android.os.IBinder.DeathRecipient {
    final com.igexin.push.core.r a;

    s(com.igexin.push.core.r r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void binderDied() {
            r3 = this;
            r0 = 0
            java.lang.Object[] r1 = new java.lang.Object[r0]
            java.lang.String r2 = "MsgServerSender|remote iservice binderDied and reconnect !!!"
            com.igexin.b.a.c.b.a(r2, r1)
            com.igexin.push.core.r r1 = r3.a
            com.igexin.push.core.t r1 = com.igexin.push.core.r.a(r1)
            android.os.Handler r1 = r1.a()
            r2 = 2
            android.os.Message r0 = android.os.Message.obtain(r1, r2, r0, r0)
            r0.sendToTarget()
            return
    }
}
