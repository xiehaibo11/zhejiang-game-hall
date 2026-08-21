package com.vivo.push.d;

import com.vivo.push.model.UnvarnishedMessage;

final class q implements Runnable {
    final UnvarnishedMessage a;
    final p b;

    q(p pVar, UnvarnishedMessage unvarnishedMessage) {
        this.b = pVar;
        this.a = unvarnishedMessage;
    }

    @Override
    public final void run() {
        this.b.b.onTransmissionMessage(this.b.a, this.a);
    }
}
