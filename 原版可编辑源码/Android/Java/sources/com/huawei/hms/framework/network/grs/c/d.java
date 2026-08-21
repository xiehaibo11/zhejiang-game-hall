package com.huawei.hms.framework.network.grs.c;

import java.util.concurrent.Callable;
import java.util.concurrent.ExecutorService;

class d implements Callable<f> {
    final ExecutorService a;
    final String b;
    final com.huawei.hms.framework.network.grs.a.c c;
    final e d;

    d(e eVar, ExecutorService executorService, String str, com.huawei.hms.framework.network.grs.a.c cVar) {
        this.d = eVar;
        this.a = executorService;
        this.b = str;
        this.c = cVar;
    }

    @Override
    public f call() {
        return this.d.b(this.a, this.b, this.c);
    }
}
