package com.vivo.push.d;

/* JADX INFO: loaded from: classes4.dex */
final class ae implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.vivo.push.b.i f7906a;
    final /* synthetic */ ad b;

    ae(ad adVar, com.vivo.push.b.i iVar) {
        this.b = adVar;
        this.f7906a = iVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b.onUnBind(this.b.f7928a, this.f7906a.h(), this.f7906a.d());
    }
}
