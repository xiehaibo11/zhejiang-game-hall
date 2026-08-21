package com.alipay.sdk.app;

import android.content.DialogInterface;

/* JADX INFO: loaded from: classes.dex */
class d implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ c f1107a;

    d(c cVar) {
        this.f1107a = cVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f1107a.c.b = true;
        this.f1107a.b.proceed();
        dialogInterface.dismiss();
    }
}
