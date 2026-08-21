package com.vivo.push.d;

import com.vivo.push.model.UnvarnishedMessage;

/* JADX INFO: loaded from: classes4.dex */
final class q implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ UnvarnishedMessage f7912a;
    final /* synthetic */ p b;

    q(p pVar, UnvarnishedMessage unvarnishedMessage) {
        this.b = pVar;
        this.f7912a = unvarnishedMessage;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b.onTransmissionMessage(this.b.f7928a, this.f7912a);
    }
}
