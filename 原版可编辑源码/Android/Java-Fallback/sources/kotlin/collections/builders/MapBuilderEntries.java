package kotlin.collections.builders;

@kotlin.Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0010'\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u001e\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010&\n\u0002\b\u0002\n\u0002\u0010)\n\u0002\b\u0004\b\u0000\u0018\u0000*\u0004\b\u0000\u0010\u0001*\u0004\b\u0001\u0010\u00022 \u0012\u0010\u0012\u000e\u0012\u0004\u0012\u0002H\u0001\u0012\u0004\u0012\u0002H\u00020\u0004\u0012\u0004\u0012\u0002H\u0001\u0012\u0004\u0012\u0002H\u00020\u0003B\u001b\b\u0000\u0012\u0012\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0006¢\u0006\u0002\u0010\u0007J\u001c\u0010\u000e\u001a\u00020\u000f2\u0012\u0010\u0010\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0004H\u0016J\"\u0010\u0011\u001a\u00020\u000f2\u0018\u0010\u0012\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u00040\u0013H\u0016J\b\u0010\u0014\u001a\u00020\u0015H\u0016J\"\u0010\u0016\u001a\u00020\u000f2\u0018\u0010\u0012\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u00040\u0013H\u0016J\u001c\u0010\u0017\u001a\u00020\u000f2\u0012\u0010\u0010\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0018H\u0016J\b\u0010\u0019\u001a\u00020\u000fH\u0016J\u001b\u0010\u001a\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u00040\u001bH\u0096\u0002J\u001c\u0010\u001c\u001a\u00020\u000f2\u0012\u0010\u0010\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0004H\u0016J\"\u0010\u001d\u001a\u00020\u000f2\u0018\u0010\u0012\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u00040\u0013H\u0016J\"\u0010\u001e\u001a\u00020\u000f2\u0018\u0010\u0012\u001a\u0014\u0012\u0010\u0012\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u00040\u0013H\u0016R\u001d\u0010\u0005\u001a\u000e\u0012\u0004\u0012\u00028\u0000\u0012\u0004\u0012\u00028\u00010\u0006¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0014\u0010\n\u001a\u00020\u000b8VX\u0096\u0004¢\u0006\u0006\u001a\u0004\b\f\u0010\r¨\u0006\u001f"}, d2 = {"Lkotlin/collections/builders/MapBuilderEntries;", "K", "V", "Lkotlin/collections/builders/AbstractMapBuilderEntrySet;", "", "backing", "Lkotlin/collections/builders/MapBuilder;", "(Lkotlin/collections/builders/MapBuilder;)V", "getBacking", "()Lkotlin/collections/builders/MapBuilder;", "size", "", "getSize", "()I", "add", "", "element", "addAll", "elements", "", "clear", "", "containsAll", "containsEntry", "", "isEmpty", "iterator", "", "remove", "removeAll", "retainAll", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class MapBuilderEntries<K, V> extends kotlin.collections.builders.AbstractMapBuilderEntrySet<java.util.Map.Entry<K, V>, K, V> {
    private final kotlin.collections.builders.MapBuilder<K, V> backing;

    public MapBuilderEntries(kotlin.collections.builders.MapBuilder<K, V> r2) {
            r1 = this;
            java.lang.String r0 = "backing"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.backing = r2
            return
    }

    @Override
    public boolean add(java.lang.Object r1) {
            r0 = this;
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            boolean r1 = r0.add(r1)
            return r1
    }

    public boolean add(java.util.Map.Entry<K, V> r2) {
            r1 = this;
            java.lang.String r0 = "element"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            r2.<init>()
            throw r2
    }

    @Override
    public boolean addAll(java.util.Collection<? extends java.util.Map.Entry<K, V>> r2) {
            r1 = this;
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
            r2.<init>()
            throw r2
    }

    @Override
    public void clear() {
            r1 = this;
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            r0.clear()
            return
    }

    @Override
    public boolean containsAll(java.util.Collection<? extends java.lang.Object> r2) {
            r1 = this;
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            boolean r2 = r0.containsAllEntries$kotlin_stdlib(r2)
            return r2
    }

    @Override
    public boolean containsEntry(java.util.Map.Entry<? extends K, ? extends V> r2) {
            r1 = this;
            java.lang.String r0 = "element"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            boolean r2 = r0.containsEntry$kotlin_stdlib(r2)
            return r2
    }

    public final kotlin.collections.builders.MapBuilder<K, V> getBacking() {
            r1 = this;
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            return r0
    }

    @Override
    public int getSize() {
            r1 = this;
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            int r0 = r0.size()
            return r0
    }

    @Override
    public boolean isEmpty() {
            r1 = this;
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            boolean r0 = r0.isEmpty()
            return r0
    }

    @Override
    public java.util.Iterator<java.util.Map.Entry<K, V>> iterator() {
            r1 = this;
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            kotlin.collections.builders.MapBuilder$EntriesItr r0 = r0.entriesIterator$kotlin_stdlib()
            java.util.Iterator r0 = (java.util.Iterator) r0
            return r0
    }

    @Override
    public boolean remove(java.util.Map.Entry r2) {
            r1 = this;
            java.lang.String r0 = "element"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            boolean r2 = r0.removeEntry$kotlin_stdlib(r2)
            return r2
    }

    @Override
    public boolean removeAll(java.util.Collection<? extends java.lang.Object> r2) {
            r1 = this;
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            r0.checkIsMutable$kotlin_stdlib()
            boolean r2 = super.removeAll(r2)
            return r2
    }

    @Override
    public boolean retainAll(java.util.Collection<? extends java.lang.Object> r2) {
            r1 = this;
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            kotlin.collections.builders.MapBuilder<K, V> r0 = r1.backing
            r0.checkIsMutable$kotlin_stdlib()
            boolean r2 = super.retainAll(r2)
            return r2
    }
}
