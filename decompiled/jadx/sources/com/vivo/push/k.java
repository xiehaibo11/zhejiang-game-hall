package com.vivo.push;

import com.vivo.push.e;

/* JADX INFO: loaded from: classes4.dex */
final class k implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f7927a;
    final /* synthetic */ e b;

    k(e eVar, String str) {
        this.b = eVar;
        this.f7927a = str;
    }

    @Override // java.lang.Runnable
    public final void run() {
        e.a aVarD = this.b.d(this.f7927a);
        if (aVarD != null) {
            aVarD.a(1003, new Object[0]);
        }
    }
}
