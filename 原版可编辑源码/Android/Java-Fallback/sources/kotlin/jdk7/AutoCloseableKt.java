package kotlin.jdk7;

@kotlin.Metadata(d1 = {"\u0000\u001c\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0003\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0018\u0010\u0000\u001a\u00020\u0001*\u0004\u0018\u00010\u00022\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004H\u0001\u001aH\u0010\u0005\u001a\u0002H\u0006\"\n\b\u0000\u0010\u0007*\u0004\u0018\u00010\u0002\"\u0004\b\u0001\u0010\u0006*\u0002H\u00072\u0012\u0010\b\u001a\u000e\u0012\u0004\u0012\u0002H\u0007\u0012\u0004\u0012\u0002H\u00060\tH\u0087\bø\u0001\u0000\u0082\u0002\n\n\b\b\u0001\u0012\u0002\u0010\u0001 \u0001¢\u0006\u0002\u0010\n\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u000b"}, d2 = {"closeFinally", "", "Ljava/lang/AutoCloseable;", "cause", "", "use", "R", "T", "block", "Lkotlin/Function1;", "(Ljava/lang/AutoCloseable;Lkotlin/jvm/functions/Function1;)Ljava/lang/Object;", "kotlin-stdlib-jdk7"}, k = 2, mv = {1, 5, 1}, pn = "kotlin")
public final class AutoCloseableKt {
    public static final void closeFinally(java.lang.AutoCloseable r0, java.lang.Throwable r1) {
            if (r0 != 0) goto L3
            goto L11
        L3:
            if (r1 != 0) goto L9
            r0.close()
            goto L11
        L9:
            r0.close()     // Catch: java.lang.Throwable -> Ld
            goto L11
        Ld:
            r0 = move-exception
            kotlin.ExceptionsKt.addSuppressed(r1, r0)
        L11:
            return
    }

    private static final <T extends java.lang.AutoCloseable, R> R use(T r2, kotlin.jvm.functions.Function1<? super T, ? extends R> r3) {
            r0 = 0
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            r1 = 1
            java.lang.Object r3 = r3.invoke(r2)     // Catch: java.lang.Throwable -> L12
            kotlin.jvm.internal.InlineMarker.finallyStart(r1)
            closeFinally(r2, r0)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r1)
            return r3
        L12:
            r3 = move-exception
            throw r3     // Catch: java.lang.Throwable -> L14
        L14:
            r0 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r1)
            closeFinally(r2, r3)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r1)
            throw r0
    }
}
