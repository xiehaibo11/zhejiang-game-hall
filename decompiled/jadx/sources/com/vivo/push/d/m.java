package com.vivo.push.d;

/* JADX INFO: loaded from: classes4.dex */
final class m implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.vivo.push.b.m f7910a;
    final /* synthetic */ l b;

    m(l lVar, com.vivo.push.b.m mVar) {
        this.b = lVar;
        this.f7910a = mVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.b.b.onListTags(this.b.f7928a, this.f7910a.h(), this.f7910a.d(), this.f7910a.g());
    }
}
