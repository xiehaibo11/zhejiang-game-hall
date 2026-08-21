package com.alipay.sdk.app;

import android.content.DialogInterface;

class e implements DialogInterface.OnClickListener {
    final c a;

    e(c cVar) {
        this.a = cVar;
    }

    @Override
    public void onClick(DialogInterface dialogInterface, int i) {
        this.a.b.cancel();
        this.a.c.b = false;
        j.a(j.c());
        this.a.a.finish();
    }
}
