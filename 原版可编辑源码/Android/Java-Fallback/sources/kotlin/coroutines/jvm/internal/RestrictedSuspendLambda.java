package kotlin.coroutines.jvm.internal;

@kotlin.Metadata(d1 = {"\u0000,\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0000\b!\u0018\u00002\u00020\u00012\n\u0012\u0006\u0012\u0004\u0018\u00010\u00030\u00022\u00020\u0004B\u000f\b\u0016\u0012\u0006\u0010\u0005\u001a\u00020\u0006¢\u0006\u0002\u0010\u0007B\u001f\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0010\u0010\b\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0003\u0018\u00010\t¢\u0006\u0002\u0010\nJ\b\u0010\r\u001a\u00020\u000eH\u0016R\u0014\u0010\u0005\u001a\u00020\u0006X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u000f"}, d2 = {"Lkotlin/coroutines/jvm/internal/RestrictedSuspendLambda;", "Lkotlin/coroutines/jvm/internal/RestrictedContinuationImpl;", "Lkotlin/jvm/internal/FunctionBase;", "", "Lkotlin/coroutines/jvm/internal/SuspendFunction;", "arity", "", "(I)V", "completion", "Lkotlin/coroutines/Continuation;", "(ILkotlin/coroutines/Continuation;)V", "getArity", "()I", "toString", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class RestrictedSuspendLambda extends kotlin.coroutines.jvm.internal.RestrictedContinuationImpl implements kotlin.jvm.internal.FunctionBase<java.lang.Object>, kotlin.coroutines.jvm.internal.SuspendFunction {
    private final int arity;

    public RestrictedSuspendLambda(int r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RestrictedSuspendLambda(int r1, kotlin.coroutines.Continuation<java.lang.Object> r2) {
            r0 = this;
            r0.<init>(r2)
            r0.arity = r1
            return
    }

    @Override
    public int getArity() {
            r1 = this;
            int r0 = r1.arity
            return r0
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            kotlin.coroutines.Continuation r0 = r2.getCompletion()
            if (r0 != 0) goto L13
            r0 = r2
            kotlin.jvm.internal.FunctionBase r0 = (kotlin.jvm.internal.FunctionBase) r0
            java.lang.String r0 = kotlin.jvm.internal.Reflection.renderLambdaToString(r0)
            java.lang.String r1 = "renderLambdaToString(this)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            goto L17
        L13:
            java.lang.String r0 = super.toString()
        L17:
            return r0
    }
}
