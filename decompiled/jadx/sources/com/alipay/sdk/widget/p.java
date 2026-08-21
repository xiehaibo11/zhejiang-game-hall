package com.alipay.sdk.widget;

import android.content.DialogInterface;

/* JADX INFO: loaded from: classes.dex */
class p implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ n f1343a;

    p(n nVar) {
        this.f1343a = nVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f1343a.f1341a.cancel();
        this.f1343a.b.w = false;
        com.alipay.sdk.app.j.a(com.alipay.sdk.app.j.c());
        this.f1343a.b.f1336a.finish();
    }
}
