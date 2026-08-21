package com.alipay.sdk.auth;

import android.content.DialogInterface;

/* JADX INFO: loaded from: classes.dex */
class f implements DialogInterface.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ d f1128a;

    f(d dVar) {
        this.f1128a = dVar;
    }

    @Override // android.content.DialogInterface.OnClickListener
    public void onClick(DialogInterface dialogInterface, int i) {
        this.f1128a.f1126a.cancel();
        AuthActivity.this.g = false;
        g.a(AuthActivity.this, AuthActivity.this.d + "?resultCode=150");
        AuthActivity.this.finish();
    }
}
