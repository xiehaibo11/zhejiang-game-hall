package kotlin.coroutines.jvm.internal;

@kotlin.Metadata(d1 = {"\u0000$\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0000\b!\u0018\u00002\u00020\u0001B\u0019\b\u0016\u0012\u0010\u0010\u0002\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0018\u00010\u0003¢\u0006\u0002\u0010\u0005B!\u0012\u0010\u0010\u0002\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0018\u00010\u0003\u0012\b\u0010\u0006\u001a\u0004\u0018\u00010\u0007¢\u0006\u0002\u0010\bJ\u000e\u0010\f\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00040\u0003J\b\u0010\r\u001a\u00020\u000eH\u0014R\u0010\u0010\u0006\u001a\u0004\u0018\u00010\u0007X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\t\u001a\u00020\u00078VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\n\u0010\u000bR\u0018\u0010\f\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0018\u00010\u0003X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lkotlin/coroutines/jvm/internal/ContinuationImpl;", "Lkotlin/coroutines/jvm/internal/BaseContinuationImpl;", "completion", "Lkotlin/coroutines/Continuation;", "", "(Lkotlin/coroutines/Continuation;)V", "_context", "Lkotlin/coroutines/CoroutineContext;", "(Lkotlin/coroutines/Continuation;Lkotlin/coroutines/CoroutineContext;)V", "context", "getContext", "()Lkotlin/coroutines/CoroutineContext;", "intercepted", "releaseIntercepted", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class ContinuationImpl extends kotlin.coroutines.jvm.internal.BaseContinuationImpl {
    private final kotlin.coroutines.CoroutineContext _context;
    private transient kotlin.coroutines.Continuation<java.lang.Object> intercepted;

    public ContinuationImpl(kotlin.coroutines.Continuation<java.lang.Object> r2) {
            r1 = this;
            if (r2 == 0) goto L7
            kotlin.coroutines.CoroutineContext r0 = r2.getContext()
            goto L8
        L7:
            r0 = 0
        L8:
            r1.<init>(r2, r0)
            return
    }

    public ContinuationImpl(kotlin.coroutines.Continuation<java.lang.Object> r1, kotlin.coroutines.CoroutineContext r2) {
            r0 = this;
            r0.<init>(r1)
            r0._context = r2
            return
    }

    @Override
    public kotlin.coroutines.CoroutineContext getContext() {
            r1 = this;
            kotlin.coroutines.CoroutineContext r0 = r1._context
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            return r0
    }

    public final kotlin.coroutines.Continuation<java.lang.Object> intercepted() {
            r2 = this;
            kotlin.coroutines.Continuation<java.lang.Object> r0 = r2.intercepted
            if (r0 != 0) goto L22
            kotlin.coroutines.CoroutineContext r0 = r2.getContext()
            kotlin.coroutines.ContinuationInterceptor$Key r1 = kotlin.coroutines.ContinuationInterceptor.Key
            kotlin.coroutines.CoroutineContext$Key r1 = (kotlin.coroutines.CoroutineContext.Key) r1
            kotlin.coroutines.CoroutineContext$Element r0 = r0.get(r1)
            kotlin.coroutines.ContinuationInterceptor r0 = (kotlin.coroutines.ContinuationInterceptor) r0
            if (r0 == 0) goto L1d
            r1 = r2
            kotlin.coroutines.Continuation r1 = (kotlin.coroutines.Continuation) r1
            kotlin.coroutines.Continuation r0 = r0.interceptContinuation(r1)
            if (r0 != 0) goto L20
        L1d:
            r0 = r2
            kotlin.coroutines.Continuation r0 = (kotlin.coroutines.Continuation) r0
        L20:
            r2.intercepted = r0
        L22:
            return r0
    }

    @Override
    protected void releaseIntercepted() {
            r3 = this;
            kotlin.coroutines.Continuation<java.lang.Object> r0 = r3.intercepted
            if (r0 == 0) goto L1a
            if (r0 == r3) goto L1a
            kotlin.coroutines.CoroutineContext r1 = r3.getContext()
            kotlin.coroutines.ContinuationInterceptor$Key r2 = kotlin.coroutines.ContinuationInterceptor.Key
            kotlin.coroutines.CoroutineContext$Key r2 = (kotlin.coroutines.CoroutineContext.Key) r2
            kotlin.coroutines.CoroutineContext$Element r1 = r1.get(r2)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            kotlin.coroutines.ContinuationInterceptor r1 = (kotlin.coroutines.ContinuationInterceptor) r1
            r1.releaseInterceptedContinuation(r0)
        L1a:
            kotlin.coroutines.jvm.internal.CompletedContinuation r0 = kotlin.coroutines.jvm.internal.CompletedContinuation.INSTANCE
            kotlin.coroutines.Continuation r0 = (kotlin.coroutines.Continuation) r0
            r3.intercepted = r0
            return
    }
}
