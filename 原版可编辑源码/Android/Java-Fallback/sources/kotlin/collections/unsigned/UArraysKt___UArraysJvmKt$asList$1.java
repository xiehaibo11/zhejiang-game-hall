package kotlin.collections.unsigned;

@kotlin.Metadata(d1 = {"\u0000'\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\r*\u0001\u0000\b\n\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u00012\u00060\u0003j\u0002`\u0004J\u001b\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\u0002H\u0096\u0002ø\u0001\u0000¢\u0006\u0004\b\f\u0010\rJ\u001e\u0010\u000e\u001a\u00020\u00022\u0006\u0010\u000f\u001a\u00020\u0006H\u0096\u0002ø\u0001\u0000ø\u0001\u0001¢\u0006\u0004\b\u0010\u0010\u0011J\u001a\u0010\u0012\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0002H\u0016ø\u0001\u0000¢\u0006\u0004\b\u0013\u0010\u0011J\b\u0010\u0014\u001a\u00020\nH\u0016J\u001a\u0010\u0015\u001a\u00020\u00062\u0006\u0010\u000b\u001a\u00020\u0002H\u0016ø\u0001\u0000¢\u0006\u0004\b\u0016\u0010\u0011R\u0014\u0010\u0005\u001a\u00020\u00068VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\u0007\u0010\bø\u0001\u0000\u0082\u0002\b\n\u0002\b\u0019\n\u0002\b!¨\u0006\u0017"}, d2 = {"kotlin/collections/unsigned/UArraysKt___UArraysJvmKt$asList$1", "Lkotlin/collections/AbstractList;", "Lkotlin/UInt;", "Ljava/util/RandomAccess;", "Lkotlin/collections/RandomAccess;", "size", "", "getSize", "()I", "contains", "", "element", "contains-WZ4Q5Ns", "(I)Z", "get", "index", "get-pVg5ArA", "(I)I", "indexOf", "indexOf-WZ4Q5Ns", "isEmpty", "lastIndexOf", "lastIndexOf-WZ4Q5Ns", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class UArraysKt___UArraysJvmKt$asList$1 extends kotlin.collections.AbstractList<kotlin.UInt> implements java.util.RandomAccess {
    final int[] $this_asList;

    UArraysKt___UArraysJvmKt$asList$1(int[] r1) {
            r0 = this;
            r0.$this_asList = r1
            r0.<init>()
            return
    }

    @Override
    public final boolean contains(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof kotlin.UInt
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            kotlin.UInt r2 = (kotlin.UInt) r2
            int r2 = r2.unbox-impl()
            boolean r2 = r1.contains-WZ4Q5Ns(r2)
            return r2
    }

    public boolean contains-WZ4Q5Ns(int r2) {
            r1 = this;
            int[] r0 = r1.$this_asList
            boolean r2 = kotlin.UIntArray.contains-WZ4Q5Ns(r0, r2)
            return r2
    }

    @Override
    public java.lang.Object get(int r1) {
            r0 = this;
            int r1 = r0.get-pVg5ArA(r1)
            kotlin.UInt r1 = kotlin.UInt.box-impl(r1)
            return r1
    }

    public int get-pVg5ArA(int r2) {
            r1 = this;
            int[] r0 = r1.$this_asList
            int r2 = kotlin.UIntArray.get-pVg5ArA(r0, r2)
            return r2
    }

    @Override
    public int getSize() {
            r1 = this;
            int[] r0 = r1.$this_asList
            int r0 = kotlin.UIntArray.getSize-impl(r0)
            return r0
    }

    @Override
    public final int indexOf(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof kotlin.UInt
            if (r0 != 0) goto L6
            r2 = -1
            return r2
        L6:
            kotlin.UInt r2 = (kotlin.UInt) r2
            int r2 = r2.unbox-impl()
            int r2 = r1.indexOf-WZ4Q5Ns(r2)
            return r2
    }

    public int indexOf-WZ4Q5Ns(int r2) {
            r1 = this;
            int[] r0 = r1.$this_asList
            int r2 = kotlin.collections.ArraysKt.indexOf(r0, r2)
            return r2
    }

    @Override
    public boolean isEmpty() {
            r1 = this;
            int[] r0 = r1.$this_asList
            boolean r0 = kotlin.UIntArray.isEmpty-impl(r0)
            return r0
    }

    @Override
    public final int lastIndexOf(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof kotlin.UInt
            if (r0 != 0) goto L6
            r2 = -1
            return r2
        L6:
            kotlin.UInt r2 = (kotlin.UInt) r2
            int r2 = r2.unbox-impl()
            int r2 = r1.lastIndexOf-WZ4Q5Ns(r2)
            return r2
    }

    public int lastIndexOf-WZ4Q5Ns(int r2) {
            r1 = this;
            int[] r0 = r1.$this_asList
            int r2 = kotlin.collections.ArraysKt.lastIndexOf(r0, r2)
            return r2
    }
}
