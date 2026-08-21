package kotlin.coroutines;

@kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b'\u0018\u00002\u00020\u0001B\u0011\u0012\n\u0010\u0002\u001a\u0006\u0012\u0002\b\u00030\u0003¢\u0006\u0002\u0010\u0004R\u0018\u0010\u0002\u001a\u0006\u0012\u0002\b\u00030\u0003X\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lkotlin/coroutines/AbstractCoroutineContextElement;", "Lkotlin/coroutines/CoroutineContext$Element;", "key", "Lkotlin/coroutines/CoroutineContext$Key;", "(Lkotlin/coroutines/CoroutineContext$Key;)V", "getKey", "()Lkotlin/coroutines/CoroutineContext$Key;", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class AbstractCoroutineContextElement implements kotlin.coroutines.CoroutineContext.Element {
    private final kotlin.coroutines.CoroutineContext.Key<?> key;

    public AbstractCoroutineContextElement(kotlin.coroutines.CoroutineContext.Key<?> r2) {
            r1 = this;
            java.lang.String r0 = "key"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.key = r2
            return
    }

    @Override
    public <R> R fold(R r1, kotlin.jvm.functions.Function2<? super R, ? super kotlin.coroutines.CoroutineContext.Element, ? extends R> r2) {
            r0 = this;
            java.lang.Object r1 = kotlin.coroutines.CoroutineContext.Element.DefaultImpls.fold(r0, r1, r2)
            return r1
    }

    @Override
    public <E extends kotlin.coroutines.CoroutineContext.Element> E get(kotlin.coroutines.CoroutineContext.Key<E> r1) {
            r0 = this;
            kotlin.coroutines.CoroutineContext$Element r1 = kotlin.coroutines.CoroutineContext.Element.DefaultImpls.get(r0, r1)
            return r1
    }

    @Override
    public kotlin.coroutines.CoroutineContext.Key<?> getKey() {
            r1 = this;
            kotlin.coroutines.CoroutineContext$Key<?> r0 = r1.key
            return r0
    }

    @Override
    public kotlin.coroutines.CoroutineContext minusKey(kotlin.coroutines.CoroutineContext.Key<?> r1) {
            r0 = this;
            kotlin.coroutines.CoroutineContext r1 = kotlin.coroutines.CoroutineContext.Element.DefaultImpls.minusKey(r0, r1)
            return r1
    }

    @Override
    public kotlin.coroutines.CoroutineContext plus(kotlin.coroutines.CoroutineContext r1) {
            r0 = this;
            kotlin.coroutines.CoroutineContext r1 = kotlin.coroutines.CoroutineContext.Element.DefaultImpls.plus(r0, r1)
            return r1
    }
}
