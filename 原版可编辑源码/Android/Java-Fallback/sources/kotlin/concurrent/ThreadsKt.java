package kotlin.concurrent;

@kotlin.Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\u001aJ\u0010\u0000\u001a\u00020\u00012\b\b\u0002\u0010\u0002\u001a\u00020\u00032\b\b\u0002\u0010\u0004\u001a\u00020\u00032\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u00062\n\b\u0002\u0010\u0007\u001a\u0004\u0018\u00010\b2\b\b\u0002\u0010\t\u001a\u00020\n2\f\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\r0\f\u001a3\u0010\u000e\u001a\u0002H\u000f\"\b\b\u0000\u0010\u000f*\u00020\u0010*\b\u0012\u0004\u0012\u0002H\u000f0\u00112\f\u0010\u0012\u001a\b\u0012\u0004\u0012\u0002H\u000f0\fH\u0087\bø\u0001\u0000¢\u0006\u0002\u0010\u0013\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u0014"}, d2 = {"thread", "Ljava/lang/Thread;", "start", "", "isDaemon", "contextClassLoader", "Ljava/lang/ClassLoader;", "name", "", "priority", "", "block", "Lkotlin/Function0;", "", "getOrSet", "T", "", "Ljava/lang/ThreadLocal;", "default", "(Ljava/lang/ThreadLocal;Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class ThreadsKt {
    private static final <T> T getOrSet(java.lang.ThreadLocal<T> r1, kotlin.jvm.functions.Function0<? extends T> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "default"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.Object r0 = r1.get()
            if (r0 != 0) goto L17
            java.lang.Object r0 = r2.invoke()
            r1.set(r0)
        L17:
            return r0
    }

    public static final java.lang.Thread thread(boolean r1, boolean r2, java.lang.ClassLoader r3, java.lang.String r4, int r5, kotlin.jvm.functions.Function0<kotlin.Unit> r6) {
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            kotlin.concurrent.ThreadsKt$thread$thread$1 r0 = new kotlin.concurrent.ThreadsKt$thread$thread$1
            r0.<init>(r6)
            if (r2 == 0) goto L10
            r2 = 1
            r0.setDaemon(r2)
        L10:
            if (r5 <= 0) goto L15
            r0.setPriority(r5)
        L15:
            if (r4 == 0) goto L1a
            r0.setName(r4)
        L1a:
            if (r3 == 0) goto L1f
            r0.setContextClassLoader(r3)
        L1f:
            if (r1 == 0) goto L24
            r0.start()
        L24:
            java.lang.Thread r0 = (java.lang.Thread) r0
            return r0
    }

    public static java.lang.Thread thread$default(boolean r6, boolean r7, java.lang.ClassLoader r8, java.lang.String r9, int r10, kotlin.jvm.functions.Function0 r11, int r12, java.lang.Object r13) {
            r13 = r12 & 1
            if (r13 == 0) goto L5
            r6 = 1
        L5:
            r0 = r6
            r6 = r12 & 2
            if (r6 == 0) goto Lb
            r7 = 0
        Lb:
            r1 = r7
            r6 = r12 & 4
            r7 = 0
            if (r6 == 0) goto L13
            r2 = r7
            goto L14
        L13:
            r2 = r8
        L14:
            r6 = r12 & 8
            if (r6 == 0) goto L1a
            r3 = r7
            goto L1b
        L1a:
            r3 = r9
        L1b:
            r6 = r12 & 16
            if (r6 == 0) goto L20
            r10 = -1
        L20:
            r4 = r10
            r5 = r11
            java.lang.Thread r6 = thread(r0, r1, r2, r3, r4, r5)
            return r6
    }
}
