package com.alipay.sdk.data;

import android.content.Context;

class b implements Runnable {
    final Context a;
    final a b;

    b(a aVar, Context context) {
        this.b = aVar;
        this.a = context;
    }

    @Override
    public void run() {
        try {
            com.alipay.sdk.packet.b bVarA = new com.alipay.sdk.packet.impl.b().a(this.a);
            if (bVarA != null) {
                this.b.b(bVarA.b());
                this.b.i();
            }
        } catch (Throwable th) {
            com.alipay.sdk.util.c.a(th);
        }
    }
}
