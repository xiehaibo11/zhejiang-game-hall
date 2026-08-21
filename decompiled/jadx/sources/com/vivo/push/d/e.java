package com.vivo.push.d;

import android.text.TextUtils;

/* JADX INFO: loaded from: classes4.dex */
final class e implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f7907a;
    final /* synthetic */ com.vivo.push.b.i b;
    final /* synthetic */ d c;

    e(d dVar, String str, com.vivo.push.b.i iVar) {
        this.c = dVar;
        this.f7907a = str;
        this.b = iVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        if (!TextUtils.isEmpty(this.f7907a)) {
            this.c.b.onReceiveRegId(this.c.f7928a, this.f7907a);
        }
        this.c.b.onBind(this.c.f7928a, this.b.h(), this.b.d());
    }
}
