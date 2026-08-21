package kotlin.collections.unsigned;

@kotlin.Metadata(d1 = {"\u0000'\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u000e*\u0001\u0000\b\n\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u00012\u00060\u0003j\u0002`\u0004J\u001b\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u0002H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b\f\u0010\rJ\u001e\u0010\u000e\u001a\u00020\u00022\u0006\u0010\u000f\u001a\u00020\u0006H\u0096\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u0010\u0010\u0011J\u001a\u0010\u0012\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0002H\u0016ø\u0001\u0000¢\u0006\u0004\b\u0013\u0010\u0014J\b\u0010\u0015\u001a\u00020\nH\u0016J\u001a\u0010\u0016\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0002H\u0016ø\u0001\u0000¢\u0006\u0004\b\u0017\u0010\u0014R\u0014\u0010\u0005\u001a\u00020\u00068VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0007\u0010\bø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u0018"}, d2 = {"kotlin/collections/unsigned/UArraysKt___UArraysJvmKt$asList$2", "Lkotlin/collections/AbstractList;", "Lkotlin/ULong;", "Ljava/util/RandomAccess;", "Lkotlin/collections/RandomAccess;", "size", "", "getSize", "()I", "contains", "", "element", "contains-VKZWuLQ", "(J)Z", "get", "index", "get-s-VKNKU", "(I)J", "indexOf", "indexOf-VKZWuLQ", "(J)I", "isEmpty", "lastIndexOf", "lastIndexOf-VKZWuLQ", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class UArraysKt___UArraysJvmKt$asList$2 extends kotlin.collections.AbstractList<kotlin.ULong> implements java.util.RandomAccess {
    final long[] $this_asList;

    UArraysKt___UArraysJvmKt$asList$2(long[] r1) {
            r0 = this;
            r0.$this_asList = r1
            r0.<init>()
            return
    }

    @Override
    public final boolean contains(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof kotlin.ULong
            if (r0 != 0) goto L6
            r3 = 0
            return r3
        L6:
            kotlin.ULong r3 = (kotlin.ULong) r3
            long r0 = r3.unbox-impl()
            boolean r3 = r2.contains-VKZWuLQ(r0)
            return r3
    }

    public boolean contains-VKZWuLQ(long r2) {
            r1 = this;
            long[] r0 = r1.$this_asList
            boolean r2 = kotlin.ULongArray.contains-VKZWuLQ(r0, r2)
            return r2
    }

    @Override
    public java.lang.Object get(int r3) {
            r2 = this;
            long r0 = r2.get-s-VKNKU(r3)
            kotlin.ULong r3 = kotlin.ULong.box-impl(r0)
            return r3
    }

    public long get-s-VKNKU(int r3) {
            r2 = this;
            long[] r0 = r2.$this_asList
            long r0 = kotlin.ULongArray.get-s-VKNKU(r0, r3)
            return r0
    }

    @Override
    public int getSize() {
            r1 = this;
            long[] r0 = r1.$this_asList
            int r0 = kotlin.ULongArray.getSize-impl(r0)
            return r0
    }

    @Override
    public final int indexOf(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof kotlin.ULong
            if (r0 != 0) goto L6
            r3 = -1
            return r3
        L6:
            kotlin.ULong r3 = (kotlin.ULong) r3
            long r0 = r3.unbox-impl()
            int r3 = r2.indexOf-VKZWuLQ(r0)
            return r3
    }

    public int indexOf-VKZWuLQ(long r2) {
            r1 = this;
            long[] r0 = r1.$this_asList
            int r2 = kotlin.collections.ArraysKt.indexOf(r0, r2)
            return r2
    }

    @Override
    public boolean isEmpty() {
            r1 = this;
            long[] r0 = r1.$this_asList
            boolean r0 = kotlin.ULongArray.isEmpty-impl(r0)
            return r0
    }

    @Override
    public final int lastIndexOf(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof kotlin.ULong
            if (r0 != 0) goto L6
            r3 = -1
            return r3
        L6:
            kotlin.ULong r3 = (kotlin.ULong) r3
            long r0 = r3.unbox-impl()
            int r3 = r2.lastIndexOf-VKZWuLQ(r0)
            return r3
    }

    public int lastIndexOf-VKZWuLQ(long r2) {
            r1 = this;
            long[] r0 = r1.$this_asList
            int r2 = kotlin.collections.ArraysKt.lastIndexOf(r0, r2)
            return r2
    }
}
