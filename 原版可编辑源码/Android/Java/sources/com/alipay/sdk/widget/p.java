package com.alipay.sdk.widget;

import android.content.DialogInterface;

class p implements DialogInterface.OnClickListener {
    final n a;

    p(n nVar) {
        this.a = nVar;
    }

    @Override
    public void onClick(DialogInterface dialogInterface, int i) {
        this.a.a.cancel();
        this.a.b.w = false;
        com.alipay.sdk.app.j.a(com.alipay.sdk.app.j.c());
        this.a.b.a.finish();
    }
}
