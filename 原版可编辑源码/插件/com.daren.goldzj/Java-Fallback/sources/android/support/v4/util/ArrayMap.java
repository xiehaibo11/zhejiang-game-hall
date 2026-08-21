package android.support.v4.util;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map;
import java.util.Set;

public class ArrayMap<K, V> extends SimpleArrayMap<K, V> implements Map<K, V> {

    @Nullable
    MapCollections<K, V> mCollections;

    public ArrayMap() {
    }

    public ArrayMap(int r1) {
        super(r1);
    }

    public ArrayMap(SimpleArrayMap r1) {
        super(r1);
    }

    private MapCollections<K, V> getCollection() {
        if (this.mCollections != null) goto L6;
        this.mCollections = new 1(this);
    L6:
        return this.mCollections;
    }

    public boolean containsAll(@NonNull Collection<?> r1) {
        return MapCollections.containsAllHelper(this, r1);
    }

    @Override
    public void putAll(Map<? extends K, ? extends V> r3) {
        ensureCapacity(this.mSize + r3.size());
        Iterator<Map.Entry<? extends K, ? extends V>> r32 = r3.entrySet().iterator();
    L4:
        if (r32.hasNext() == false) goto L6;
        Map.Entry<? extends K, ? extends V> r0 = r32.next();
        put(r0.getKey(), r0.getValue());
        goto L4
    }

    public boolean removeAll(@NonNull Collection<?> r1) {
        return MapCollections.removeAllHelper(this, r1);
    }

    public boolean retainAll(@NonNull Collection<?> r1) {
        return MapCollections.retainAllHelper(this, r1);
    }

    @Override
    public Set<Map.Entry<K, V>> entrySet() {
        return getCollection().getEntrySet();
    }

    @Override
    public Set<K> keySet() {
        return getCollection().getKeySet();
    }

    @Override
    public Collection<V> values() {
        return getCollection().getValues();
    }
}
