package com.huawei.hmf.tasks;

import com.huawei.hmf.tasks.a.c;
import java.util.Iterator;

/* JADX INFO: loaded from: classes.dex */
public class CancellationTokenSource {
    private c impl = new c();

    public void cancel() {
        c cVar = this.impl;
        if (cVar.c) {
            return;
        }
        synchronized (cVar.b) {
            cVar.c = true;
            Iterator<Runnable> it = cVar.f1957a.iterator();
            while (it.hasNext()) {
                it.next().run();
            }
        }
    }

    public CancellationToken getToken() {
        return this.impl;
    }
}
