package com.igexin.push.core.a;

/* JADX INFO: loaded from: classes2.dex */
class f implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f2506a;
    final /* synthetic */ e b;

    f(e eVar, String str) {
        this.b = eVar;
        this.f2506a = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        this.b.b(this.f2506a);
    }
}
