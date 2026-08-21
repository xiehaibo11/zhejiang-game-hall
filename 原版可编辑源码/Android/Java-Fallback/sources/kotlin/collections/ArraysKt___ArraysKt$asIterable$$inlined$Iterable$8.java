package kotlin.collections;

@kotlin.Metadata(d1 = {"\u0000\u0011\n\u0000\n\u0002\u0010\u001c\n\u0000\n\u0002\u0010(\n\u0000*\u0001\u0000\b\n\u0018\u00002\b\u0012\u0004\u0012\u00028\u00000\u0001J\u000f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00028\u00000\u0003H\u0096\u0002¨\u0006\u0004¸\u0006\u0000"}, d2 = {"kotlin/collections/CollectionsKt__IterablesKt$Iterable$1", "", "iterator", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class ArraysKt___ArraysKt$asIterable$$inlined$Iterable$8 implements java.lang.Iterable<java.lang.Boolean>, kotlin.jvm.internal.markers.KMappedMarker {
    final boolean[] $this_asIterable$inlined;

    public ArraysKt___ArraysKt$asIterable$$inlined$Iterable$8(boolean[] r1) {
            r0 = this;
            r0.$this_asIterable$inlined = r1
            r0.<init>()
            return
    }

    @Override
    public java.util.Iterator<java.lang.Boolean> iterator() {
            r1 = this;
            boolean[] r0 = r1.$this_asIterable$inlined
            kotlin.collections.BooleanIterator r0 = kotlin.jvm.internal.ArrayIteratorsKt.iterator(r0)
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }
}
