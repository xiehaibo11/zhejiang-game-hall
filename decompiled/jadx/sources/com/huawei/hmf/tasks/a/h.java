package com.huawei.hmf.tasks.a;

import com.huawei.hmf.tasks.ExecuteResult;
import com.huawei.hmf.tasks.OnSuccessListener;
import com.huawei.hmf.tasks.Task;
import java.util.concurrent.Executor;

/* JADX INFO: loaded from: classes.dex */
public final class h<TResult> implements ExecuteResult<TResult> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private OnSuccessListener<TResult> f1964a;
    private Executor b;
    private final Object c = new Object();

    h(Executor executor, OnSuccessListener<TResult> onSuccessListener) {
        this.f1964a = onSuccessListener;
        this.b = executor;
    }

    @Override // com.huawei.hmf.tasks.ExecuteResult
    public final void cancel() {
        synchronized (this.c) {
            this.f1964a = null;
        }
    }

    @Override // com.huawei.hmf.tasks.ExecuteResult
    public final void onComplete(final Task<TResult> task) {
        if (!task.isSuccessful() || task.isCanceled()) {
            return;
        }
        this.b.execute(new Runnable() { // from class: com.huawei.hmf.tasks.a.h.1
            /* JADX WARN: Multi-variable type inference failed */
            @Override // java.lang.Runnable
            public final void run() {
                synchronized (h.this.c) {
                    if (h.this.f1964a != null) {
                        h.this.f1964a.onSuccess(task.getResult());
                    }
                }
            }
        });
    }
}
