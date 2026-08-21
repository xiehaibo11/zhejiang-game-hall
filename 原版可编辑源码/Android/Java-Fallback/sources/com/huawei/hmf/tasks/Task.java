package com.huawei.hmf.tasks;

public abstract class Task<TResult> {
    public Task() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.huawei.hmf.tasks.Task<TResult> addOnCanceledListener(android.app.Activity r1, com.huawei.hmf.tasks.OnCanceledListener r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "addOnCanceledListener is not implemented."
            r1.<init>(r2)
            throw r1
    }

    public com.huawei.hmf.tasks.Task<TResult> addOnCanceledListener(com.huawei.hmf.tasks.OnCanceledListener r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "addOnCanceledListener is not implemented."
            r2.<init>(r0)
            throw r2
    }

    public com.huawei.hmf.tasks.Task<TResult> addOnCanceledListener(java.util.concurrent.Executor r1, com.huawei.hmf.tasks.OnCanceledListener r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "addOnCanceledListener is not implemented."
            r1.<init>(r2)
            throw r1
    }

    public com.huawei.hmf.tasks.Task<TResult> addOnCompleteListener(android.app.Activity r1, com.huawei.hmf.tasks.OnCompleteListener<TResult> r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "addOnCompleteListener is not implemented"
            r1.<init>(r2)
            throw r1
    }

    public com.huawei.hmf.tasks.Task<TResult> addOnCompleteListener(com.huawei.hmf.tasks.OnCompleteListener<TResult> r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "addOnCompleteListener is not implemented"
            r2.<init>(r0)
            throw r2
    }

    public com.huawei.hmf.tasks.Task<TResult> addOnCompleteListener(java.util.concurrent.Executor r1, com.huawei.hmf.tasks.OnCompleteListener<TResult> r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "addOnCompleteListener is not implemented"
            r1.<init>(r2)
            throw r1
    }

    public abstract com.huawei.hmf.tasks.Task<TResult> addOnFailureListener(android.app.Activity r1, com.huawei.hmf.tasks.OnFailureListener r2);

    public abstract com.huawei.hmf.tasks.Task<TResult> addOnFailureListener(com.huawei.hmf.tasks.OnFailureListener r1);

    public abstract com.huawei.hmf.tasks.Task<TResult> addOnFailureListener(java.util.concurrent.Executor r1, com.huawei.hmf.tasks.OnFailureListener r2);

    public abstract com.huawei.hmf.tasks.Task<TResult> addOnSuccessListener(android.app.Activity r1, com.huawei.hmf.tasks.OnSuccessListener<TResult> r2);

    public abstract com.huawei.hmf.tasks.Task<TResult> addOnSuccessListener(com.huawei.hmf.tasks.OnSuccessListener<TResult> r1);

    public abstract com.huawei.hmf.tasks.Task<TResult> addOnSuccessListener(java.util.concurrent.Executor r1, com.huawei.hmf.tasks.OnSuccessListener<TResult> r2);

    public <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> continueWith(com.huawei.hmf.tasks.Continuation<TResult, TContinuationResult> r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "continueWith is not implemented"
            r2.<init>(r0)
            throw r2
    }

    public <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> continueWith(java.util.concurrent.Executor r1, com.huawei.hmf.tasks.Continuation<TResult, TContinuationResult> r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "continueWith is not implemented"
            r1.<init>(r2)
            throw r1
    }

    public <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> continueWithTask(com.huawei.hmf.tasks.Continuation<TResult, com.huawei.hmf.tasks.Task<TContinuationResult>> r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "continueWithTask is not implemented"
            r2.<init>(r0)
            throw r2
    }

    public <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> continueWithTask(java.util.concurrent.Executor r1, com.huawei.hmf.tasks.Continuation<TResult, com.huawei.hmf.tasks.Task<TContinuationResult>> r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "continueWithTask is not implemented"
            r1.<init>(r2)
            throw r1
    }

    public abstract java.lang.Exception getException();

    public abstract TResult getResult();

    public abstract <E extends java.lang.Throwable> TResult getResultThrowException(java.lang.Class<E> r1) throws java.lang.Throwable;

    public abstract boolean isCanceled();

    public abstract boolean isComplete();

    public abstract boolean isSuccessful();

    public <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> onSuccessTask(com.huawei.hmf.tasks.SuccessContinuation<TResult, TContinuationResult> r2) {
            r1 = this;
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "onSuccessTask is not implemented"
            r2.<init>(r0)
            throw r2
    }

    public <TContinuationResult> com.huawei.hmf.tasks.Task<TContinuationResult> onSuccessTask(java.util.concurrent.Executor r1, com.huawei.hmf.tasks.SuccessContinuation<TResult, TContinuationResult> r2) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "onSuccessTask is not implemented"
            r1.<init>(r2)
            throw r1
    }
}
