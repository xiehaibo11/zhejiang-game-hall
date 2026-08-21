package kotlin.coroutines.jvm.internal;

@kotlin.Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\u001a.\u0010\u0000\u001a\u00020\u00012\u001c\u0010\u0002\u001a\u0018\b\u0001\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00010\u0004\u0012\u0006\u0012\u0004\u0018\u00010\u00050\u0003H\u0001ø\u0001\u0000¢\u0006\u0002\u0010\u0006\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u0007"}, d2 = {"runSuspend", "", "block", "Lkotlin/Function1;", "Lkotlin/coroutines/Continuation;", "", "(Lkotlin/jvm/functions/Function1;)V", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class RunSuspendKt {
    public static final void runSuspend(kotlin.jvm.functions.Function1<? super kotlin.coroutines.Continuation<? super kotlin.Unit>, ? extends java.lang.Object> r2) {
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.coroutines.jvm.internal.RunSuspend r0 = new kotlin.coroutines.jvm.internal.RunSuspend
            r0.<init>()
            r1 = r0
            kotlin.coroutines.Continuation r1 = (kotlin.coroutines.Continuation) r1
            kotlin.coroutines.ContinuationKt.startCoroutine(r2, r1)
            r0.await()
            return
    }
}
