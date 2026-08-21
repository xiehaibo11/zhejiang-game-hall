package com.alipay.sdk.widget;

import android.content.DialogInterface;

/* JADX INFO: loaded from: classes.dex */
class o implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ n f1342a;

    o(n nVar) {
        this.f1342a = nVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f1342a.b.w = true;
        this.f1342a.f1341a.proceed();
        dialogInterface.dismiss();
    }
}
