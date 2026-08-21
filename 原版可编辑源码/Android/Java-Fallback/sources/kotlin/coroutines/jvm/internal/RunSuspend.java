package kotlin.coroutines.jvm.internal;

@kotlin.Metadata(d1 = {"\u0000 \n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\b\b\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0003J\u0006\u0010\u000e\u001a\u00020\u0002J\u001e\u0010\u000f\u001a\u00020\u00022\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\tH\u0016ø\u0001\u0000¢\u0006\u0002\u0010\u0010R\u0014\u0010\u0004\u001a\u00020\u00058VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0006\u0010\u0007R(\u0010\b\u001a\n\u0012\u0004\u0012\u00020\u0002\u0018\u00010\tX\u0086\u000eø\u0001\u0000ø\u0001\u0001¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u000b\"\u0004\b\f\u0010\r\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u0011"}, d2 = {"Lkotlin/coroutines/jvm/internal/RunSuspend;", "Lkotlin/coroutines/Continuation;", "", "()V", "context", "Lkotlin/coroutines/CoroutineContext;", "getContext", "()Lkotlin/coroutines/CoroutineContext;", "result", "Lkotlin/Result;", "getResult-xLWZpok", "()Lkotlin/Result;", "setResult", "(Lkotlin/Result;)V", "await", "resumeWith", "(Ljava/lang/Object;)V", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class RunSuspend implements kotlin.coroutines.Continuation<kotlin.Unit> {
    private kotlin.Result<kotlin.Unit> result;

    public RunSuspend() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void await() {
            r1 = this;
            monitor-enter(r1)
        L1:
            kotlin.Result r0 = r1.getResult-xLWZpok()     // Catch: java.lang.Throwable -> L17
            if (r0 != 0) goto Le
            r0 = r1
            java.lang.Object r0 = (java.lang.Object) r0     // Catch: java.lang.Throwable -> L17
            r0.wait()     // Catch: java.lang.Throwable -> L17
            goto L1
        Le:
            java.lang.Object r0 = r0.unbox-impl()     // Catch: java.lang.Throwable -> L17
            kotlin.ResultKt.throwOnFailure(r0)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)
            return
        L17:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public kotlin.coroutines.CoroutineContext getContext() {
            r1 = this;
            kotlin.coroutines.EmptyCoroutineContext r0 = kotlin.coroutines.EmptyCoroutineContext.INSTANCE
            kotlin.coroutines.CoroutineContext r0 = (kotlin.coroutines.CoroutineContext) r0
            return r0
    }

    public final kotlin.Result<kotlin.Unit> getResult-xLWZpok() {
            r1 = this;
            kotlin.Result<kotlin.Unit> r0 = r1.result
            return r0
    }

    @Override
    public void resumeWith(java.lang.Object r1) {
            r0 = this;
            monitor-enter(r0)
            kotlin.Result r1 = kotlin.Result.box-impl(r1)     // Catch: java.lang.Throwable -> L11
            r0.result = r1     // Catch: java.lang.Throwable -> L11
            r1 = r0
            java.lang.Object r1 = (java.lang.Object) r1     // Catch: java.lang.Throwable -> L11
            r1.notifyAll()     // Catch: java.lang.Throwable -> L11
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)
            return
        L11:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final void setResult(kotlin.Result<kotlin.Unit> r1) {
            r0 = this;
            r0.result = r1
            return
    }
}
