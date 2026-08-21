package com.vivo.push.util;

import java.util.List;

final class l implements Runnable {
    final List a;
    final k b;

    l(k kVar, List list) {
        this.b = kVar;
        this.a = list;
    }

    @Override
    public final void run() {
        if (this.b.b != null) {
            w.b().a("com.vivo.push.notify_key", this.b.c);
            NotifyAdapterUtil.pushNotification(this.b.a, this.a, this.b.b, this.b.c, this.b.e, this.b.f);
        }
    }
}
