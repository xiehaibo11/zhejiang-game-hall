package com.alipay.sdk.auth;

import android.content.DialogInterface;

class e implements DialogInterface.OnClickListener {
    final d a;

    e(d dVar) {
        this.a = dVar;
    }

    @Override
    public void onClick(DialogInterface dialogInterface, int i) {
        AuthActivity.this.g = true;
        this.a.a.proceed();
        dialogInterface.dismiss();
    }
}
