package kotlin.coroutines;

@kotlin.Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0000\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0001\u0018\u0000 \u001a*\u0006\b\u0000\u0010\u0001 \u00002\b\u0012\u0004\u0012\u0002H\u00010\u00022\u00020\u0003:\u0001\u001aB\u0015\b\u0011\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002¢\u0006\u0002\u0010\u0005B\u001f\b\u0000\u0012\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0002\u0010\bJ\n\u0010\u0011\u001a\u0004\u0018\u00010\u0007H\u0001J\n\u0010\u0012\u001a\u0004\u0018\u00010\u0013H\u0016J\u001e\u0010\u0014\u001a\u00020\u00152\f\u0010\u0010\u001a\b\u0012\u0004\u0012\u00028\u00000\u0016H\u0016ø\u0001\u0000¢\u0006\u0002\u0010\u0017J\b\u0010\u0018\u001a\u00020\u0019H\u0016R\u0016\u0010\t\u001a\u0004\u0018\u00010\u00038VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR\u0014\u0010\f\u001a\u00020\r8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u000e\u0010\u000fR\u0014\u0010\u0004\u001a\b\u0012\u0004\u0012\u00028\u00000\u0002X\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0010\u001a\u0004\u0018\u00010\u0007X\u0082\u000e¢\u0006\u0002\n\u0000\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u001b"}, d2 = {"Lkotlin/coroutines/SafeContinuation;", "T", "Lkotlin/coroutines/Continuation;", "Lkotlin/coroutines/jvm/internal/CoroutineStackFrame;", "delegate", "(Lkotlin/coroutines/Continuation;)V", "initialResult", "", "(Lkotlin/coroutines/Continuation;Ljava/lang/Object;)V", "callerFrame", "getCallerFrame", "()Lkotlin/coroutines/jvm/internal/CoroutineStackFrame;", "context", "Lkotlin/coroutines/CoroutineContext;", "getContext", "()Lkotlin/coroutines/CoroutineContext;", "result", "getOrThrow", "getStackTraceElement", "Ljava/lang/StackTraceElement;", "resumeWith", "", "Lkotlin/Result;", "(Ljava/lang/Object;)V", "toString", "", "Companion", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class SafeContinuation<T> implements kotlin.coroutines.Continuation<T>, kotlin.coroutines.jvm.internal.CoroutineStackFrame {
    private static final kotlin.coroutines.SafeContinuation.Companion Companion = null;

    @java.lang.Deprecated
    private static final java.util.concurrent.atomic.AtomicReferenceFieldUpdater<kotlin.coroutines.SafeContinuation<?>, java.lang.Object> RESULT = null;
    private final kotlin.coroutines.Continuation<T> delegate;
    private volatile java.lang.Object result;

    @kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0082\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002Rd\u0010\u0003\u001aR\u0012\u0014\u0012\u0012\u0012\u0002\b\u0003 \u0006*\b\u0012\u0002\b\u0003\u0018\u00010\u00050\u0005\u0012\f\u0012\n \u0006*\u0004\u0018\u00010\u00010\u0001 \u0006*(\u0012\u0014\u0012\u0012\u0012\u0002\b\u0003 \u0006*\b\u0012\u0002\b\u0003\u0018\u00010\u00050\u0005\u0012\f\u0012\n \u0006*\u0004\u0018\u00010\u00010\u0001\u0018\u00010\u00040\u0004X\u0082\u0004¢\u0006\b\n\u0000\u0012\u0004\b\u0007\u0010\u0002¨\u0006\b"}, d2 = {"Lkotlin/coroutines/SafeContinuation$Companion;", "", "()V", "RESULT", "Ljava/util/concurrent/atomic/AtomicReferenceFieldUpdater;", "Lkotlin/coroutines/SafeContinuation;", "kotlin.jvm.PlatformType", "getRESULT$annotations", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
    private static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        private static void getRESULT$annotations() {
                return
        }
    }

    static {
            kotlin.coroutines.SafeContinuation$Companion r0 = new kotlin.coroutines.SafeContinuation$Companion
            r1 = 0
            r0.<init>(r1)
            kotlin.coroutines.SafeContinuation.Companion = r0
            java.lang.Class<kotlin.coroutines.SafeContinuation> r0 = kotlin.coroutines.SafeContinuation.class
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            java.lang.String r2 = "result"
            java.util.concurrent.atomic.AtomicReferenceFieldUpdater r0 = java.util.concurrent.atomic.AtomicReferenceFieldUpdater.newUpdater(r0, r1, r2)
            kotlin.coroutines.SafeContinuation.RESULT = r0
            return
    }

    public SafeContinuation(kotlin.coroutines.Continuation<? super T> r2) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.coroutines.intrinsics.CoroutineSingletons r0 = kotlin.coroutines.intrinsics.CoroutineSingletons.UNDECIDED
            r1.<init>(r2, r0)
            return
    }

    public SafeContinuation(kotlin.coroutines.Continuation<? super T> r2, java.lang.Object r3) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.delegate = r2
            r1.result = r3
            return
    }

    @Override
    public kotlin.coroutines.jvm.internal.CoroutineStackFrame getCallerFrame() {
            r2 = this;
            kotlin.coroutines.Continuation<T> r0 = r2.delegate
            boolean r1 = r0 instanceof kotlin.coroutines.jvm.internal.CoroutineStackFrame
            if (r1 == 0) goto L9
            kotlin.coroutines.jvm.internal.CoroutineStackFrame r0 = (kotlin.coroutines.jvm.internal.CoroutineStackFrame) r0
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    @Override
    public kotlin.coroutines.CoroutineContext getContext() {
            r1 = this;
            kotlin.coroutines.Continuation<T> r0 = r1.delegate
            kotlin.coroutines.CoroutineContext r0 = r0.getContext()
            return r0
    }

    public final java.lang.Object getOrThrow() {
            r3 = this;
            java.lang.Object r0 = r3.result
            kotlin.coroutines.intrinsics.CoroutineSingletons r1 = kotlin.coroutines.intrinsics.CoroutineSingletons.UNDECIDED
            if (r0 != r1) goto L1b
            java.util.concurrent.atomic.AtomicReferenceFieldUpdater<kotlin.coroutines.SafeContinuation<?>, java.lang.Object> r0 = kotlin.coroutines.SafeContinuation.RESULT
            kotlin.coroutines.intrinsics.CoroutineSingletons r1 = kotlin.coroutines.intrinsics.CoroutineSingletons.UNDECIDED
            java.lang.Object r2 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            boolean r0 = r0.compareAndSet(r3, r1, r2)
            if (r0 == 0) goto L19
            java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            return r0
        L19:
            java.lang.Object r0 = r3.result
        L1b:
            kotlin.coroutines.intrinsics.CoroutineSingletons r1 = kotlin.coroutines.intrinsics.CoroutineSingletons.RESUMED
            if (r0 != r1) goto L24
            java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            goto L28
        L24:
            boolean r1 = r0 instanceof kotlin.Result.Failure
            if (r1 != 0) goto L29
        L28:
            return r0
        L29:
            kotlin.Result$Failure r0 = (kotlin.Result.Failure) r0
            java.lang.Throwable r0 = r0.exception
            throw r0
    }

    @Override
    public java.lang.StackTraceElement getStackTraceElement() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void resumeWith(java.lang.Object r4) {
            r3 = this;
        L0:
            java.lang.Object r0 = r3.result
            kotlin.coroutines.intrinsics.CoroutineSingletons r1 = kotlin.coroutines.intrinsics.CoroutineSingletons.UNDECIDED
            if (r0 != r1) goto L11
            java.util.concurrent.atomic.AtomicReferenceFieldUpdater<kotlin.coroutines.SafeContinuation<?>, java.lang.Object> r0 = kotlin.coroutines.SafeContinuation.RESULT
            kotlin.coroutines.intrinsics.CoroutineSingletons r1 = kotlin.coroutines.intrinsics.CoroutineSingletons.UNDECIDED
            boolean r0 = r0.compareAndSet(r3, r1, r4)
            if (r0 == 0) goto L0
            return
        L11:
            java.lang.Object r1 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            if (r0 != r1) goto L2b
            java.util.concurrent.atomic.AtomicReferenceFieldUpdater<kotlin.coroutines.SafeContinuation<?>, java.lang.Object> r0 = kotlin.coroutines.SafeContinuation.RESULT
            java.lang.Object r1 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            kotlin.coroutines.intrinsics.CoroutineSingletons r2 = kotlin.coroutines.intrinsics.CoroutineSingletons.RESUMED
            boolean r0 = r0.compareAndSet(r3, r1, r2)
            if (r0 == 0) goto L0
            kotlin.coroutines.Continuation<T> r0 = r3.delegate
            r0.resumeWith(r4)
            return
        L2b:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "Already resumed"
            r4.<init>(r0)
            throw r4
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SafeContinuation for "
            r0.append(r1)
            kotlin.coroutines.Continuation<T> r1 = r2.delegate
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
