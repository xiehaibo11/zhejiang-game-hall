package kotlin.collections;

@kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "This class is not going to be stabilized and is to be removed soon.")
@kotlin.Metadata(d1 = {"\u0000\u0010\n\u0002\u0018\u0002\n\u0002\u0010(\n\u0002\u0018\u0002\n\u0002\b\u0007\b'\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0003J\u0016\u0010\u0004\u001a\u00020\u0002H\u0086\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u0005\u0010\u0006J\u0015\u0010\u0007\u001a\u00020\u0002H&ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\b\u0010\u0006ø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\t"}, d2 = {"Lkotlin/collections/UByteIterator;", "", "Lkotlin/UByte;", "()V", "next", "next-w2LRezQ", "()B", "nextUByte", "nextUByte-w2LRezQ", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public abstract class UByteIterator implements java.util.Iterator<kotlin.UByte>, kotlin.jvm.internal.markers.KMappedMarker {
    public UByteIterator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public kotlin.UByte next() {
            r1 = this;
            byte r0 = r1.next-w2LRezQ()
            kotlin.UByte r0 = kotlin.UByte.box-impl(r0)
            return r0
    }

    public final byte next-w2LRezQ() {
            r1 = this;
            byte r0 = r1.nextUByte-w2LRezQ()
            return r0
    }

    public abstract byte nextUByte-w2LRezQ();

    @Override
    public void remove() {
            r2 = this;
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Operation is not supported for read-only collection"
            r0.<init>(r1)
            throw r0
    }
}
