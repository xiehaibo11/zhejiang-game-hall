package com.qihoo360.replugin.utils.basic;

import java.util.Collection;
import java.util.Map;
import java.util.Set;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class ArrayMap<K, V> extends SimpleArrayMap<K, V> implements Map<K, V> {
    MapCollections<K, V> mCollections;

    public ArrayMap() {
    }

    public ArrayMap(int i) {
        super(i);
    }

    public ArrayMap(SimpleArrayMap simpleArrayMap) {
        super(simpleArrayMap);
    }

    private MapCollections<K, V> getCollection() {
        if (this.mCollections == null) {
            this.mCollections = new MapCollections<K, V>() { // from class: com.qihoo360.replugin.utils.basic.ArrayMap.1
                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected int colGetSize() {
                    return ArrayMap.this.mSize;
                }

                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected Object colGetEntry(int i, int i2) {
                    return ArrayMap.this.mArray[(i << 1) + i2];
                }

                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected int colIndexOfKey(Object obj) {
                    return ArrayMap.this.indexOfKey(obj);
                }

                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected int colIndexOfValue(Object obj) {
                    return ArrayMap.this.indexOfValue(obj);
                }

                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected Map<K, V> colGetMap() {
                    return ArrayMap.this;
                }

                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected void colPut(K k, V v) {
                    ArrayMap.this.put(k, v);
                }

                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected V colSetValue(int i, V v) {
                    return ArrayMap.this.setValueAt(i, v);
                }

                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected void colRemoveAt(int i) {
                    ArrayMap.this.removeAt(i);
                }

                @Override // com.qihoo360.replugin.utils.basic.MapCollections
                protected void colClear() {
                    ArrayMap.this.clear();
                }
            };
        }
        return this.mCollections;
    }

    public boolean containsAll(Collection<?> collection) {
        return MapCollections.containsAllHelper(this, collection);
    }

    @Override // java.util.Map
    public void putAll(Map<? extends K, ? extends V> map) {
        ensureCapacity(this.mSize + map.size());
        for (Map.Entry<? extends K, ? extends V> entry : map.entrySet()) {
            put(entry.getKey(), entry.getValue());
        }
    }

    public boolean removeAll(Collection<?> collection) {
        return MapCollections.removeAllHelper(this, collection);
    }

    public boolean retainAll(Collection<?> collection) {
        return MapCollections.retainAllHelper(this, collection);
    }

    @Override // java.util.Map
    public Set<Map.Entry<K, V>> entrySet() {
        return getCollection().getEntrySet();
    }

    @Override // java.util.Map
    public Set<K> keySet() {
        return getCollection().getKeySet();
    }

    @Override // java.util.Map
    public Collection<V> values() {
        return getCollection().getValues();
    }
}
