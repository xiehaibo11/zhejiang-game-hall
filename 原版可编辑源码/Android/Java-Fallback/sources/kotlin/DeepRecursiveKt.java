package kotlin;

@kotlin.Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u001a2\u0010\u0006\u001a\u0002H\u0007\"\u0004\b\u0000\u0010\b\"\u0004\b\u0001\u0010\u0007*\u000e\u0012\u0004\u0012\u0002H\b\u0012\u0004\u0012\u0002H\u00070\t2\u0006\u0010\n\u001a\u0002H\bH\u0087\u0002¢\u0006\u0002\u0010\u000b\"!\u0010\u0000\u001a\b\u0012\u0004\u0012\u00020\u00020\u00018\u0002X\u0083\u0004ø\u0001\u0000¢\u0006\n\n\u0002\u0010\u0005\u0012\u0004\b\u0003\u0010\u0004*v\b\u0003\u0010\f\"5\b\u0001\u0012\f\u0012\n\u0012\u0002\b\u0003\u0012\u0002\b\u00030\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0012\f\u0012\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u000f\u0012\u0006\u0012\u0004\u0018\u00010\u00020\r¢\u0006\u0002\b\u001025\b\u0001\u0012\f\u0012\n\u0012\u0002\b\u0003\u0012\u0002\b\u00030\u000e\u0012\u0006\u0012\u0004\u0018\u00010\u0002\u0012\f\u0012\n\u0012\u0006\u0012\u0004\u0018\u00010\u00020\u000f\u0012\u0006\u0012\u0004\u0018\u00010\u00020\r¢\u0006\u0002\b\u0010B\u0002\b\u0011\u0082\u0002\u0004\n\u0002\b\u0019¨\u0006\u0012"}, d2 = {"UNDEFINED_RESULT", "Lkotlin/Result;", "", "getUNDEFINED_RESULT$annotations", "()V", "Ljava/lang/Object;", "invoke", "R", "T", "Lkotlin/DeepRecursiveFunction;", "value", "(Lkotlin/DeepRecursiveFunction;Ljava/lang/Object;)Ljava/lang/Object;", "DeepRecursiveFunctionBlock", "Lkotlin/Function3;", "Lkotlin/DeepRecursiveScope;", "Lkotlin/coroutines/Continuation;", "Lkotlin/ExtensionFunctionType;", "Lkotlin/ExperimentalStdlibApi;", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class DeepRecursiveKt {
    private static final java.lang.Object UNDEFINED_RESULT = null;

    static {
            kotlin.Result$Companion r0 = kotlin.Result.Companion
            java.lang.Object r0 = kotlin.coroutines.intrinsics.IntrinsicsKt.getCOROUTINE_SUSPENDED()
            java.lang.Object r0 = kotlin.Result.constructor-impl(r0)
            kotlin.DeepRecursiveKt.UNDEFINED_RESULT = r0
            return
    }

    private static void DeepRecursiveFunctionBlock$annotations() {
            return
    }

    public static final java.lang.Object access$getUNDEFINED_RESULT$p() {
            java.lang.Object r0 = kotlin.DeepRecursiveKt.UNDEFINED_RESULT
            return r0
    }

    private static void getUNDEFINED_RESULT$annotations() {
            return
    }

    public static final <T, R> R invoke(kotlin.DeepRecursiveFunction<T, R> r1, T r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.DeepRecursiveScopeImpl r0 = new kotlin.DeepRecursiveScopeImpl
            kotlin.jvm.functions.Function3 r1 = r1.getBlock$kotlin_stdlib()
            r0.<init>(r1, r2)
            java.lang.Object r1 = r0.runCallLoop()
            return r1
    }
}
