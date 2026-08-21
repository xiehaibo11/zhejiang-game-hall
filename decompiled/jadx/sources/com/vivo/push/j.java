package com.vivo.push;

/* JADX INFO: loaded from: classes4.dex */
final class j implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.vivo.push.b.b f7926a;
    final /* synthetic */ String b;
    final /* synthetic */ e c;

    j(e eVar, com.vivo.push.b.b bVar, String str) {
        this.c = eVar;
        this.f7926a = bVar;
        this.b = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.c.a(this.f7926a);
        this.c.e(this.b);
    }
}
