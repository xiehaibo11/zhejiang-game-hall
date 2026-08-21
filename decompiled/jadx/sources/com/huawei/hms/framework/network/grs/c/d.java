package com.huawei.hms.framework.network.grs.c;

import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;

/* JADX INFO: loaded from: classes.dex */
class d implements Callable<f> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ ExecutorService f2067a;
    final /* synthetic */ String b;
    final /* synthetic */ com.huawei.hms.framework.network.grs.a.c c;
    final /* synthetic */ e d;

    d(e eVar, ExecutorService executorService, String str, com.huawei.hms.framework.network.grs.a.c cVar) {
        this.d = eVar;
        this.f2067a = executorService;
        this.b = str;
        this.c = cVar;
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // java.util.concurrent.Callable
    public f call() {
        return this.d.b(this.f2067a, this.b, this.c);
    }
}
