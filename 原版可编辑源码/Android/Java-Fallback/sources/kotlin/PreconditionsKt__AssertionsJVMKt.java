package kotlin;

@kotlin.Metadata(d1 = {"\u0000\u0018\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\u001a\u0011\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u0003H\u0087\b\u001a\"\u0010\u0000\u001a\u00020\u00012\u0006\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u00020\u00060\u0005H\u0087\bø\u0001\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u0007"}, d2 = {"assert", "", "value", "", "lazyMessage", "Lkotlin/Function0;", "", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/PreconditionsKt")
class PreconditionsKt__AssertionsJVMKt {
    public PreconditionsKt__AssertionsJVMKt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final void assert(boolean r1) {
            boolean r0 = kotlin._Assertions.ENABLED
            if (r0 == 0) goto Lf
            if (r1 == 0) goto L7
            goto Lf
        L7:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            java.lang.String r0 = "Assertion failed"
            r1.<init>(r0)
            throw r1
        Lf:
            return
    }

    private static final void assert(boolean r1, kotlin.jvm.functions.Function0<? extends java.lang.Object> r2) {
            java.lang.String r0 = "lazyMessage"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = kotlin._Assertions.ENABLED
            if (r0 == 0) goto L16
            if (r1 == 0) goto Lc
            goto L16
        Lc:
            java.lang.Object r1 = r2.invoke()
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>(r1)
            throw r2
        L16:
            return
    }
}
