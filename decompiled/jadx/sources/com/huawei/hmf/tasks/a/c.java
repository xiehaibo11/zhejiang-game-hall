package com.huawei.hmf.tasks.a;

import com.huawei.hmf.tasks.CancellationToken;
import java.util.ArrayList;
import java.util.List;

/* JADX INFO: loaded from: classes.dex */
public final class c extends CancellationToken {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public final List<Runnable> f1957a = new ArrayList();
    public final Object b = new Object();
    public boolean c = false;

    @Override // com.huawei.hmf.tasks.CancellationToken
    public final boolean isCancellationRequested() {
        return this.c;
    }

    @Override // com.huawei.hmf.tasks.CancellationToken
    public final CancellationToken register(Runnable runnable) {
        synchronized (this.b) {
            if (this.c) {
                runnable.run();
            } else {
                this.f1957a.add(runnable);
            }
        }
        return this;
    }
}
