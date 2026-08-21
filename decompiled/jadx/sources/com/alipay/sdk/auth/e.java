package com.alipay.sdk.auth;

import android.content.DialogInterface;

/* JADX INFO: loaded from: classes.dex */
class e implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ d f1127a;

    e(d dVar) {
        this.f1127a = dVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        AuthActivity.this.g = true;
        this.f1127a.f1126a.proceed();
        dialogInterface.dismiss();
    }
}
