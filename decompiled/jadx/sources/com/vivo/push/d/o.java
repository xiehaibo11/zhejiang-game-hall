package com.vivo.push.d;

/* JADX INFO: loaded from: classes4.dex */
final class o implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.vivo.push.b.n f7911a;
    final /* synthetic */ n b;

    o(n nVar, com.vivo.push.b.n nVar2) {
        this.b = nVar;
        this.f7911a = nVar2;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b.onLog(this.b.f7928a, this.f7911a.d(), this.f7911a.e(), this.f7911a.f());
    }
}
