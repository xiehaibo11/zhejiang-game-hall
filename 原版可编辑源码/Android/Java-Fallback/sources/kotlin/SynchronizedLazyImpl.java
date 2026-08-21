package kotlin;

@kotlin.Metadata(d1 = {"\u00000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0002\u0018\u0000*\u0006\b\u0000\u0010\u0001 \u00012\b\u0012\u0004\u0012\u0002H\u00010\u00022\u00060\u0003j\u0002`\u0004B\u001f\u0012\f\u0010\u0005\u001a\b\u0012\u0004\u0012\u00028\u00000\u0006\u0012\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b¢\u0006\u0002\u0010\tJ\b\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\u0011H\u0016J\b\u0010\u0012\u001a\u00020\bH\u0002R\u0010\u0010\n\u001a\u0004\u0018\u00010\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0016\u0010\u0005\u001a\n\u0012\u0004\u0012\u00028\u0000\u0018\u00010\u0006X\u0088\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u000b\u001a\u00028\u00008VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\f\u0010\r¨\u0006\u0013"}, d2 = {"Lkotlin/SynchronizedLazyImpl;", "T", "Lkotlin/Lazy;", "Ljava/io/Serializable;", "Lkotlin/io/Serializable;", "initializer", "Lkotlin/Function0;", "lock", "", "(Lkotlin/jvm/functions/Function0;Ljava/lang/Object;)V", "_value", "value", "getValue", "()Ljava/lang/Object;", "isInitialized", "", "toString", "", "writeReplace", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
final class SynchronizedLazyImpl<T> implements kotlin.Lazy<T>, java.io.Serializable {
    private volatile java.lang.Object _value;
    private kotlin.jvm.functions.Function0<? extends T> initializer;
    private final java.lang.Object lock;

    public SynchronizedLazyImpl(kotlin.jvm.functions.Function0<? extends T> r2, java.lang.Object r3) {
            r1 = this;
            java.lang.String r0 = "initializer"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.initializer = r2
            kotlin.UNINITIALIZED_VALUE r2 = kotlin.UNINITIALIZED_VALUE.INSTANCE
            r1._value = r2
            if (r3 != 0) goto L11
            r3 = r1
        L11:
            r1.lock = r3
            return
    }

    public SynchronizedLazyImpl(kotlin.jvm.functions.Function0 r1, java.lang.Object r2, int r3, kotlin.jvm.internal.DefaultConstructorMarker r4) {
            r0 = this;
            r3 = r3 & 2
            if (r3 == 0) goto L5
            r2 = 0
        L5:
            r0.<init>(r1, r2)
            return
    }

    private final java.lang.Object writeReplace() {
            r2 = this;
            kotlin.InitializedLazyImpl r0 = new kotlin.InitializedLazyImpl
            java.lang.Object r1 = r2.getValue()
            r0.<init>(r1)
            return r0
    }

    @Override
    public T getValue() {
            r3 = this;
            java.lang.Object r0 = r3._value
            kotlin.UNINITIALIZED_VALUE r1 = kotlin.UNINITIALIZED_VALUE.INSTANCE
            if (r0 == r1) goto L7
            return r0
        L7:
            java.lang.Object r0 = r3.lock
            monitor-enter(r0)
            java.lang.Object r1 = r3._value     // Catch: java.lang.Throwable -> L21
            kotlin.UNINITIALIZED_VALUE r2 = kotlin.UNINITIALIZED_VALUE.INSTANCE     // Catch: java.lang.Throwable -> L21
            if (r1 == r2) goto L11
            goto L1f
        L11:
            kotlin.jvm.functions.Function0<? extends T> r1 = r3.initializer     // Catch: java.lang.Throwable -> L21
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)     // Catch: java.lang.Throwable -> L21
            java.lang.Object r1 = r1.invoke()     // Catch: java.lang.Throwable -> L21
            r3._value = r1     // Catch: java.lang.Throwable -> L21
            r2 = 0
            r3.initializer = r2     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r0)
            return r1
        L21:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    @Override
    public boolean isInitialized() {
            r2 = this;
            java.lang.Object r0 = r2._value
            kotlin.UNINITIALIZED_VALUE r1 = kotlin.UNINITIALIZED_VALUE.INSTANCE
            if (r0 == r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            boolean r0 = r1.isInitialized()
            if (r0 == 0) goto Lf
            java.lang.Object r0 = r1.getValue()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            goto L11
        Lf:
            java.lang.String r0 = "Lazy value not initialized yet."
        L11:
            return r0
    }
}
