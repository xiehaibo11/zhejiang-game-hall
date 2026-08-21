package com.huawei.hms.framework.network.grs.c;

import java.util.concurrent.Callable;

class k implements Callable<f> {
    final com.huawei.hms.framework.network.grs.c.b.c a;
    final String b;
    final com.huawei.hms.framework.network.grs.a.c c;
    final m d;

    k(m mVar, com.huawei.hms.framework.network.grs.c.b.c cVar, String str, com.huawei.hms.framework.network.grs.a.c cVar2) {
        this.d = mVar;
        this.a = cVar;
        this.b = str;
        this.c = cVar2;
    }

    @Override
    public f call() {
        return new e(this.a, this.d.d).a(this.d.a, this.b, this.c);
    }
}
