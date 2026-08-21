package kotlin.coroutines;

@kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u001a+\u0010\u0000\u001a\u0004\u0018\u0001H\u0001\"\b\b\u0000\u0010\u0001*\u00020\u0002*\u00020\u00022\f\u0010\u0003\u001a\b\u0012\u0004\u0012\u0002H\u00010\u0004H\u0007¢\u0006\u0002\u0010\u0005\u001a\u0018\u0010\u0006\u001a\u00020\u0007*\u00020\u00022\n\u0010\u0003\u001a\u0006\u0012\u0002\b\u00030\u0004H\u0007¨\u0006\b"}, d2 = {"getPolymorphicElement", "E", "Lkotlin/coroutines/CoroutineContext$Element;", "key", "Lkotlin/coroutines/CoroutineContext$Key;", "(Lkotlin/coroutines/CoroutineContext$Element;Lkotlin/coroutines/CoroutineContext$Key;)Lkotlin/coroutines/CoroutineContext$Element;", "minusPolymorphicKey", "Lkotlin/coroutines/CoroutineContext;", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class CoroutineContextImplKt {
    public static final <E extends kotlin.coroutines.CoroutineContext.Element> E getPolymorphicElement(kotlin.coroutines.CoroutineContext.Element r2, kotlin.coroutines.CoroutineContext.Key<E> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "key"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = r3 instanceof kotlin.coroutines.AbstractCoroutineContextKey
            r1 = 0
            if (r0 == 0) goto L25
            kotlin.coroutines.AbstractCoroutineContextKey r3 = (kotlin.coroutines.AbstractCoroutineContextKey) r3
            kotlin.coroutines.CoroutineContext$Key r0 = r2.getKey()
            boolean r0 = r3.isSubKey$kotlin_stdlib(r0)
            if (r0 == 0) goto L24
            kotlin.coroutines.CoroutineContext$Element r2 = r3.tryCast$kotlin_stdlib(r2)
            boolean r3 = r2 instanceof kotlin.coroutines.CoroutineContext.Element
            if (r3 == 0) goto L24
            r1 = r2
        L24:
            return r1
        L25:
            kotlin.coroutines.CoroutineContext$Key r0 = r2.getKey()
            if (r0 != r3) goto L2c
            goto L2d
        L2c:
            r2 = r1
        L2d:
            return r2
    }

    public static final kotlin.coroutines.CoroutineContext minusPolymorphicKey(kotlin.coroutines.CoroutineContext.Element r1, kotlin.coroutines.CoroutineContext.Key<?> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "key"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r2 instanceof kotlin.coroutines.AbstractCoroutineContextKey
            if (r0 == 0) goto L25
            kotlin.coroutines.AbstractCoroutineContextKey r2 = (kotlin.coroutines.AbstractCoroutineContextKey) r2
            kotlin.coroutines.CoroutineContext$Key r0 = r1.getKey()
            boolean r0 = r2.isSubKey$kotlin_stdlib(r0)
            if (r0 == 0) goto L22
            kotlin.coroutines.CoroutineContext$Element r2 = r2.tryCast$kotlin_stdlib(r1)
            if (r2 == 0) goto L22
            kotlin.coroutines.EmptyCoroutineContext r1 = kotlin.coroutines.EmptyCoroutineContext.INSTANCE
        L22:
            kotlin.coroutines.CoroutineContext r1 = (kotlin.coroutines.CoroutineContext) r1
            return r1
        L25:
            kotlin.coroutines.CoroutineContext$Key r0 = r1.getKey()
            if (r0 != r2) goto L2d
            kotlin.coroutines.EmptyCoroutineContext r1 = kotlin.coroutines.EmptyCoroutineContext.INSTANCE
        L2d:
            kotlin.coroutines.CoroutineContext r1 = (kotlin.coroutines.CoroutineContext) r1
            return r1
    }
}
