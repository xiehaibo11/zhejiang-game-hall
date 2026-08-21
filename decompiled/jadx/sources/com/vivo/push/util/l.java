package com.vivo.push.util;

import java.util.List;

/* JADX INFO: loaded from: classes4.dex */
final class l implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ List f7950a;
    final /* synthetic */ k b;

    l(k kVar, List list) {
        this.b = kVar;
        this.f7950a = list;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (this.b.b != null) {
            w.b().a("com.vivo.push.notify_key", this.b.c);
            NotifyAdapterUtil.pushNotification(this.b.f7949a, this.f7950a, this.b.b, this.b.c, this.b.e, this.b.f);
        }
    }
}
