package com.alipay.sdk.data;

import android.content.Context;
import java.util.HashMap;
import java.util.concurrent.Callable;

class d implements Callable<String> {
    final Context a;
    final HashMap b;
    final c c;

    d(c cVar, Context context, HashMap map) {
        this.c = cVar;
        this.a = context;
        this.b = map;
    }

    @Override
    public String call() throws Exception {
        return this.c.a(this.a, this.b);
    }
}
