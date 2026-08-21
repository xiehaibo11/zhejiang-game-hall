package com.vivo.push.d;

import com.vivo.push.model.UPSNotificationMessage;

/* JADX INFO: loaded from: classes4.dex */
final class w implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ UPSNotificationMessage f7916a;
    final /* synthetic */ u b;

    w(u uVar, UPSNotificationMessage uPSNotificationMessage) {
        this.b = uVar;
        this.f7916a = uPSNotificationMessage;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b.onNotificationMessageClicked(this.b.f7928a, this.f7916a);
    }
}
