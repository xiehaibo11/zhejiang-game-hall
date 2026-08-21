package com.alipay.sdk.widget;

import android.content.DialogInterface;

class o implements DialogInterface.OnClickListener {
    final n a;

    o(n nVar) {
        this.a = nVar;
    }

    @Override
    public void onClick(DialogInterface dialogInterface, int i) {
        this.a.b.w = true;
        this.a.a.proceed();
        dialogInterface.dismiss();
    }
}
