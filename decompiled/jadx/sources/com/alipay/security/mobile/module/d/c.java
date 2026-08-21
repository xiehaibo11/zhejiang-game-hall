package com.alipay.security.mobile.module.d;

/* JADX INFO: loaded from: classes.dex */
final class c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ b f1357a;

    c(b bVar) {
        this.f1357a = bVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            this.f1357a.b();
        } catch (Exception e) {
            d.a(e);
        }
    }
}
