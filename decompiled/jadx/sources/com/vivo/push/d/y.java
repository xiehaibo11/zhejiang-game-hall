package com.vivo.push.d;

/* JADX INFO: loaded from: classes4.dex */
final class y implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.vivo.push.b.r f7917a;
    final /* synthetic */ x b;

    y(x xVar, com.vivo.push.b.r rVar) {
        this.b = xVar;
        this.f7917a = rVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b.onPublish(this.b.f7928a, this.f7917a.h(), this.f7917a.g());
    }
}
