package com.huawei.hms.framework.network.grs.c;

import java.util.concurrent.Callable;

/* JADX INFO: loaded from: classes.dex */
class k implements Callable<f> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.huawei.hms.framework.network.grs.c.b.c f2071a;
    final /* synthetic */ String b;
    final /* synthetic */ com.huawei.hms.framework.network.grs.a.c c;
    final /* synthetic */ m d;

    k(m mVar, com.huawei.hms.framework.network.grs.c.b.c cVar, String str, com.huawei.hms.framework.network.grs.a.c cVar2) {
        this.d = mVar;
        this.f2071a = cVar;
        this.b = str;
        this.c = cVar2;
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // java.util.concurrent.Callable
    public f call() {
        return new e(this.f2071a, this.d.d).a(this.d.f2073a, this.b, this.c);
    }
}
