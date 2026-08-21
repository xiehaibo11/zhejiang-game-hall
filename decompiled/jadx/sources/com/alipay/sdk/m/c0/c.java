package com.alipay.sdk.m.c0;

/* JADX INFO: loaded from: classes.dex */
public final class c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final /* synthetic */ b f1172a;

    public c(b bVar) {
        this.f1172a = bVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        try {
            this.f1172a.b();
        } catch (Exception e) {
            d.a(e);
        }
    }
}
