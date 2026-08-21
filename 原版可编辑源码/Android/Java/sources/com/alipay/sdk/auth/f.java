package com.alipay.sdk.auth;

import android.content.DialogInterface;

class f implements DialogInterface.OnClickListener {
    final d a;

    f(d dVar) {
        this.a = dVar;
    }

    @Override
    public void onClick(DialogInterface dialogInterface, int i) {
        this.a.a.cancel();
        AuthActivity.this.g = false;
        g.a(AuthActivity.this, AuthActivity.this.d + "?resultCode=150");
        AuthActivity.this.finish();
    }
}
