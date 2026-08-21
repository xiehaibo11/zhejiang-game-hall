package com.vivo.push.d;

final class q implements java.lang.Runnable {
    final com.vivo.push.model.UnvarnishedMessage a;
    final com.vivo.push.d.p b;

    q(com.vivo.push.d.p r1, com.vivo.push.model.UnvarnishedMessage r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r3 = this;
            com.vivo.push.d.p r0 = r3.b
            com.vivo.push.sdk.PushMessageCallback r0 = r0.b
            com.vivo.push.d.p r1 = r3.b
            android.content.Context r1 = com.vivo.push.d.p.a(r1)
            com.vivo.push.model.UnvarnishedMessage r2 = r3.a
            r0.onTransmissionMessage(r1, r2)
            return
    }
}
