package com.huawei.hmf.tasks.a;

import com.huawei.hmf.tasks.ExecuteResult;
import com.huawei.hmf.tasks.OnFailureListener;
import com.huawei.hmf.tasks.Task;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes.dex */
public final class f<TResult> implements ExecuteResult<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private OnFailureListener f1961a;
    private Executor b;
    private final Object c = new Object();

    f(Executor executor, OnFailureListener onFailureListener) {
        this.f1961a = onFailureListener;
        this.b = executor;
    }

    @Override // com.huawei.hmf.tasks.ExecuteResult
    public final void cancel() {
        synchronized (this.c) {
            this.f1961a = null;
        }
    }

    @Override // com.huawei.hmf.tasks.ExecuteResult
    public final void onComplete(final Task<TResult> task) {
        if (task.isSuccessful() || task.isCanceled()) {
            return;
        }
        this.b.execute(new Runnable() { // from class: com.huawei.hmf.tasks.a.f.1
            @Override // java.lang.Runnable
            public final void run() {
                synchronized (f.this.c) {
                    if (f.this.f1961a != null) {
                        f.this.f1961a.onFailure(task.getException());
                    }
                }
            }
        });
    }
}
