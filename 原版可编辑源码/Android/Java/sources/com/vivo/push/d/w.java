package com.vivo.push.d;

import com.vivo.push.model.UPSNotificationMessage;

final class w implements Runnable {
    final UPSNotificationMessage a;
    final u b;

    w(u uVar, UPSNotificationMessage uPSNotificationMessage) {
        this.b = uVar;
        this.a = uPSNotificationMessage;
    }

    @Override
    public final void run() {
        this.b.b.onNotificationMessageClicked(this.b.a, this.a);
    }
}
