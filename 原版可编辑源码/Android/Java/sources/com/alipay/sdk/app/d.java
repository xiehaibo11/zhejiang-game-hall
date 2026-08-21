package com.alipay.sdk.app;

import android.content.DialogInterface;

class d implements DialogInterface.OnClickListener {
    final c a;

    d(c cVar) {
        this.a = cVar;
    }

    @Override
    public void onClick(DialogInterface dialogInterface, int i) {
        this.a.c.b = true;
        this.a.b.proceed();
        dialogInterface.dismiss();
    }
}
