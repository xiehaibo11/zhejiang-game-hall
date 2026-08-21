package com.alipay.sdk.app;

import android.content.DialogInterface;

/* JADX INFO: loaded from: classes.dex */
class e implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f1108a;

    e(c cVar) {
        this.f1108a = cVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f1108a.b.cancel();
        this.f1108a.c.b = false;
        j.a(j.c());
        this.f1108a.f1106a.finish();
    }
}
