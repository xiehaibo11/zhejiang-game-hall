package com.alipay.sdk.data;

import android.content.Context;
import java.util.HashMap;
import java.util.concurrent.Callable;

/* JADX INFO: loaded from: classes.dex */
class d implements Callable<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ Context f1144a;
    final /* synthetic */ HashMap b;
    final /* synthetic */ c c;

    d(c cVar, Context context, HashMap map) {
        this.c = cVar;
        this.f1144a = context;
        this.b = map;
    }

    @Override // java.util.concurrent.Callable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public String call() throws Exception {
        return this.c.a(this.f1144a, this.b);
    }
}
