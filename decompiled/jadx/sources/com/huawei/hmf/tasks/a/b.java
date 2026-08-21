package com.huawei.hmf.tasks.a;

import com.huawei.hmf.tasks.ExecuteResult;
import com.huawei.hmf.tasks.OnCanceledListener;
import com.huawei.hmf.tasks.Task;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes.dex */
public final class b<TResult> implements ExecuteResult<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private OnCanceledListener f1955a;
    private Executor b;
    private final Object c = new Object();

    b(Executor executor, OnCanceledListener onCanceledListener) {
        this.f1955a = onCanceledListener;
        this.b = executor;
    }

    @Override // com.huawei.hmf.tasks.ExecuteResult
    public final void cancel() {
        synchronized (this.c) {
            this.f1955a = null;
        }
    }

    @Override // com.huawei.hmf.tasks.ExecuteResult
    public final void onComplete(Task<TResult> task) {
        if (task.isCanceled()) {
            this.b.execute(new Runnable() { // from class: com.huawei.hmf.tasks.a.b.1
                @Override // java.lang.Runnable
                public final void run() {
                    synchronized (b.this.c) {
                        if (b.this.f1955a != null) {
                            b.this.f1955a.onCanceled();
                        }
                    }
                }
            });
        }
    }
}
