package kotlin.coroutines.jvm.internal;

@kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\b\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000e\n\u0000\b!\u0018\u00002\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u00012\u00020\u00032\u00020\u0004B\u0017\u0012\u0010\u0010\u0005\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0018\u00010\u0001¢\u0006\u0002\u0010\u0006J$\u0010\f\u001a\b\u0012\u0004\u0012\u00020\r0\u00012\b\u0010\u000e\u001a\u0004\u0018\u00010\u00022\n\u0010\u0005\u001a\u0006\u0012\u0002\b\u00030\u0001H\u0016J\u001a\u0010\f\u001a\b\u0012\u0004\u0012\u00020\r0\u00012\n\u0010\u0005\u001a\u0006\u0012\u0002\b\u00030\u0001H\u0016J\n\u0010\u000f\u001a\u0004\u0018\u00010\u0010H\u0016J\"\u0010\u0011\u001a\u0004\u0018\u00010\u00022\u000e\u0010\u0012\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0013H$ø\u0001\u0000¢\u0006\u0002\u0010\u0014J\b\u0010\u0015\u001a\u00020\rH\u0014J\u001e\u0010\u0016\u001a\u00020\r2\u000e\u0010\u0012\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u0013ø\u0001\u0000¢\u0006\u0002\u0010\u0017J\b\u0010\u0018\u001a\u00020\u0019H\u0016R\u0016\u0010\u0007\u001a\u0004\u0018\u00010\u00038VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\b\u0010\tR\u001b\u0010\u0005\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0018\u00010\u0001¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u001a"}, d2 = {"Lkotlin/coroutines/jvm/internal/BaseContinuationImpl;", "Lkotlin/coroutines/Continuation;", "", "Lkotlin/coroutines/jvm/internal/CoroutineStackFrame;", "Ljava/io/Serializable;", "completion", "(Lkotlin/coroutines/Continuation;)V", "callerFrame", "getCallerFrame", "()Lkotlin/coroutines/jvm/internal/CoroutineStackFrame;", "getCompletion", "()Lkotlin/coroutines/Continuation;", "create", "", "value", "getStackTraceElement", "Ljava/lang/StackTraceElement;", "invokeSuspend", "result", "Lkotlin/Result;", "(Ljava/lang/Object;)Ljava/lang/Object;", "releaseIntercepted", "resumeWith", "(Ljava/lang/Object;)V", "toString", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class BaseContinuationImpl implements kotlin.coroutines.Continuation<java.lang.Object>, kotlin.coroutines.jvm.internal.CoroutineStackFrame, java.io.Serializable {
    private final kotlin.coroutines.Continuation<java.lang.Object> completion;

    public BaseContinuationImpl(kotlin.coroutines.Continuation<java.lang.Object> r1) {
            r0 = this;
            r0.<init>()
            r0.completion = r1
            return
    }

    public kotlin.coroutines.Continuation<kotlin.Unit> create(java.lang.Object r1, kotlin.coroutines.Continuation<?> r2) {
            r0 = this;
            java.lang.String r1 = "completion"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "create(Any?;Continuation) has not been overridden"
            r1.<init>(r2)
            throw r1
    }

    public kotlin.coroutines.Continuation<kotlin.Unit> create(kotlin.coroutines.Continuation<?> r2) {
            r1 = this;
            java.lang.String r0 = "completion"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            java.lang.String r0 = "create(Continuation) has not been overridden"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public kotlin.coroutines.jvm.internal.CoroutineStackFrame getCallerFrame() {
            r2 = this;
            kotlin.coroutines.Continuation<java.lang.Object> r0 = r2.completion
            boolean r1 = r0 instanceof kotlin.coroutines.jvm.internal.CoroutineStackFrame
            if (r1 == 0) goto L9
            kotlin.coroutines.jvm.internal.CoroutineStackFrame r0 = (kotlin.coroutines.jvm.internal.CoroutineStackFrame) r0
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public final kotlin.coroutines.Continuation<java.lang.Object> getCompletion() {
            r1 = this;
            kotlin.coroutines.Continuation<java.lang.Object> r0 = r1.completion
            return r0
    }

    @Override
    public java.lang.StackTraceElement getStackTraceElement() {
            r1 = this;
            java.lang.StackTraceElement r0 = kotlin.coroutines.jvm.internal.DebugMetadataKt.getStackTraceElement(r1)
            return r0
    }

    protected abstract java.lang.Object invokeSuspend(java.lang.Object r1);

    protected void releaseIntercepted() {
            r0 = this;
            return
    }

    @Override
    public final void resumeWith(java.lang.Object r4) {
            r3 = this;
            r0 = r3
        L1:
            r1 = r0
            kotlin.coroutines.Continuation r1 = (kotlin.coroutines.Continuation) r1
            kotlin.coroutines.jvm.internal.DebugProbesKt.probeCoroutineResumed(r1)
            kotlin.coroutines.jvm.internal.BaseContinuationImpl r0 = (kotlin.coroutines.jvm.internal.BaseContinuationImpl) r0
            kotlin.coroutines.Continuation<java.lang.Object> r1 = r0.completion
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            java.lang.Object r4 = r0.invokeSuspend(r4)     // Catch: java.lang.Throwable -> L20
            java.lang.Object r2 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()     // Catch: java.lang.Throwable -> L20
            if (r4 != r2) goto L19
            return
        L19:
            kotlin.Result$Companion r2 = kotlin.Result.Companion     // Catch: java.lang.Throwable -> L20
            java.lang.Object r4 = kotlin.Result.constructor-impl(r4)     // Catch: java.lang.Throwable -> L20
            goto L2b
        L20:
            r4 = move-exception
            kotlin.Result$Companion r2 = kotlin.Result.Companion
            java.lang.Object r4 = kotlin.ResultKt.createFailure(r4)
            java.lang.Object r4 = kotlin.Result.constructor-impl(r4)
        L2b:
            r0.releaseIntercepted()
            boolean r0 = r1 instanceof kotlin.coroutines.jvm.internal.BaseContinuationImpl
            if (r0 == 0) goto L34
            r0 = r1
            goto L1
        L34:
            r1.resumeWith(r4)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Continuation at "
            r0.append(r1)
            java.lang.StackTraceElement r1 = r2.getStackTraceElement()
            if (r1 == 0) goto L11
            goto L19
        L11:
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
        L19:
            java.io.Serializable r1 = (java.io.Serializable) r1
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
