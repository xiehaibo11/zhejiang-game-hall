package com.huawei.hms.framework.network.grs.c;

/* JADX INFO: loaded from: classes.dex */
class l implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ com.huawei.hms.framework.network.grs.c.b.c f2072a;
    final /* synthetic */ String b;
    final /* synthetic */ com.huawei.hms.framework.network.grs.a.c c;
    final /* synthetic */ com.huawei.hms.framework.network.grs.b d;
    final /* synthetic */ m e;

    l(m mVar, com.huawei.hms.framework.network.grs.c.b.c cVar, String str, com.huawei.hms.framework.network.grs.a.c cVar2, com.huawei.hms.framework.network.grs.b bVar) {
        this.e = mVar;
        this.f2072a = cVar;
        this.b = str;
        this.c = cVar2;
        this.d = bVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        m mVar = this.e;
        mVar.a(mVar.a(this.f2072a, this.b, this.c), this.d);
    }
}
