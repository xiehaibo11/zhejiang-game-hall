package com.huawei.hms.framework.network.grs.c;

class l implements Runnable {
    final com.huawei.hms.framework.network.grs.c.b.c a;
    final String b;
    final com.huawei.hms.framework.network.grs.a.c c;
    final com.huawei.hms.framework.network.grs.b d;
    final m e;

    l(m mVar, com.huawei.hms.framework.network.grs.c.b.c cVar, String str, com.huawei.hms.framework.network.grs.a.c cVar2, com.huawei.hms.framework.network.grs.b bVar) {
        this.e = mVar;
        this.a = cVar;
        this.b = str;
        this.c = cVar2;
        this.d = bVar;
    }

    @Override
    public void run() {
        m mVar = this.e;
        mVar.a(mVar.a(this.a, this.b, this.c), this.d);
    }
}
