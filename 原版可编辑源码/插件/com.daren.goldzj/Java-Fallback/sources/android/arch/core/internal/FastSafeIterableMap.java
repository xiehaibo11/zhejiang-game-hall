package android.arch.core.internal;

import android.arch.core.internal.SafeIterableMap;
import android.support.annotation.NonNull;
import android.support.annotation.RestrictTo;
import java.util.HashMap;
import java.util.Map;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public class FastSafeIterableMap<K, V> extends SafeIterableMap<K, V> {
    private HashMap<K, SafeIterableMap.Entry<K, V>> mHashMap;

    public FastSafeIterableMap() {
        this.mHashMap = new HashMap();
    }

    @Override
    protected SafeIterableMap.Entry<K, V> get(K r2) {
        return this.mHashMap.get(r2);
    }

    @Override
    public V putIfAbsent(@NonNull K r2, @NonNull V r3) {
        SafeIterableMap.Entry<K, V> r0 = get(r2);
        if (r0 != null) goto L5;
        this.mHashMap.put(r2, put(r2, r3));
        return null;
    L5:
        return r0.mValue;
    }

    @Override
    public V remove(@NonNull K r3) {
        V r0 = (V) super.remove(r3);
        this.mHashMap.remove(r3);
        return r0;
    }

    public boolean contains(K r2) {
        return this.mHashMap.containsKey(r2);
    }

    public Map.Entry<K, V> ceil(K r2) {
        if (contains(r2) == true) goto L5;
        return null;
    L5:
        return this.mHashMap.get(r2).mPrevious;
    }
}
