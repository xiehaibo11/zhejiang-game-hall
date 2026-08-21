package com.huawei.hmf.tasks.a;

import com.huawei.hmf.tasks.ExecuteResult;
import com.huawei.hmf.tasks.OnSuccessListener;
import com.huawei.hmf.tasks.Task;
import java.util.concurrent.Executor;

public final class h<TResult> implements ExecuteResult<TResult> {
    private OnSuccessListener<TResult> a;
    private Executor b;
    private final Object c = new Object();

    h(Executor executor, OnSuccessListener<TResult> onSuccessListener) {
        this.a = onSuccessListener;
        this.b = executor;
    }

    @Override
    public final void cancel() {
        synchronized (this.c) {
            this.a = null;
        }
    }

    @Override
    public final void onComplete(final Task<TResult> task) {
        if (!task.isSuccessful() || task.isCanceled()) {
            return;
        }
        this.b.execute(new Runnable() {
            /* JADX WARN: Multi-variable type inference failed */
            @Override
            public final void run() {
                synchronized (h.this.c) {
                    if (h.this.a != null) {
                        h.this.a.onSuccess(task.getResult());
                    }
                }
            }
        });
    }
}
