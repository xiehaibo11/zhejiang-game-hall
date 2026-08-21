package android.support.v4.util;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.util.LinkedHashMap;
import java.util.Locale;
import java.util.Map;

public class LruCache<K, V> {
    private int createCount;
    private int evictionCount;
    private int hitCount;
    private final LinkedHashMap<K, V> map;
    private int maxSize;
    private int missCount;
    private int putCount;
    private int size;

    @Nullable
    protected V create(@NonNull K r1) {
        return null;
    }

    protected void entryRemoved(boolean r1, @NonNull K r2, @NonNull V r3, @Nullable V r4) {
    }

    protected int sizeOf(@NonNull K r1, @NonNull V r2) {
        return 1;
    }

    public LruCache(int r4) {
        if (r4 <= 0) goto L7;
        this.maxSize = r4;
        this.map = new LinkedHashMap(0, 0.75f, true);
        return;
    L7:
        throw new IllegalArgumentException("maxSize <= 0");
    }

    public void resize(int r2) {
        if (r2 <= 0) goto L12;
        monitor-enter(this);
        this.maxSize = r2;     // Catch: Throwable -> L8
        monitor-exit(this);     // Catch: Throwable -> L8
        trimToSize(r2);
        return;
    L8:
        th = move-exception;
        throw th;
    L12:
        throw new IllegalArgumentException("maxSize <= 0");
    }

    @Nullable
    public final V get(@NonNull K r5) {
        if (r5 == null) goto L33;
        monitor-enter(this);
        V r0 = this.map.get(r5);     // Catch: Throwable -> L29
        if (r0 == null) goto L9;
        this.hitCount++;
        monitor-exit(this);     // Catch: Throwable -> L29
        return r0;
    L9:
        this.missCount++;
        monitor-exit(this);     // Catch: Throwable -> L29
        V r02 = create(r5);
        if (r02 != null) goto L15;
        return null;
    L15:
        monitor-enter(this);
        this.createCount++;
        V r1 = this.map.put(r5, r02);     // Catch: Throwable -> L26
        if (r1 == null) goto L19;
        this.map.put(r5, r1);     // Catch: Throwable -> L26
    L20:
        monitor-exit(this);     // Catch: Throwable -> L26
        if (r1 == null) goto L24;
        entryRemoved(false, r5, r02, r1);
        return r1;
    L24:
        trimToSize(this.maxSize);
        return r02;
    L19:
        this.size += safeSizeOf(r5, r02);
    L26:
        th = move-exception;
        throw th;
    L29:
        th = move-exception;
        throw th;
    L33:
        throw new NullPointerException("key == null");
    }

    @Nullable
    public final V put(@NonNull K r4, @NonNull V r5) {
        if (r4 == null) goto L17;
        if (r5 == null) goto L17;
        monitor-enter(this);
        this.putCount++;
        this.size += safeSizeOf(r4, r5);
        V r0 = this.map.put(r4, r5);     // Catch: Throwable -> L13
        if (r0 == null) goto L8;
        this.size -= safeSizeOf(r4, r0);
    L8:
        monitor-exit(this);     // Catch: Throwable -> L13
        if (r0 == null) goto L11;
        entryRemoved(false, r4, r0, r5);
    L11:
        trimToSize(this.maxSize);
        return r0;
    L13:
        th = move-exception;
        throw th;
    L17:
        throw new NullPointerException("key == null || value == null");
    }

    public void trimToSize(int r5) {
    L2:
        monitor-enter(this);
    L21:
        th = move-exception;
        throw th;
    L4:
        if (this.size < 0) goto L20;
        if (this.map.isEmpty() == false) goto L10;
        if (this.size != 0) goto L20;
    L10:
        if (this.size <= r5) goto L17;
        if (this.map.isEmpty() == true) goto L17;
        Map.Entry<K, V> r0 = this.map.entrySet().iterator().next();     // Catch: Throwable -> L21
        K r1 = r0.getKey();     // Catch: Throwable -> L21
        V r02 = r0.getValue();     // Catch: Throwable -> L21
        this.map.remove(r1);     // Catch: Throwable -> L21
        this.size -= safeSizeOf(r1, r02);
        this.evictionCount++;
        monitor-exit(this);     // Catch: Throwable -> L21
        entryRemoved(true, r1, r02, null);
    L17:
        monitor-exit(this);     // Catch: Throwable -> L21
        return;
    L20:
        throw new IllegalStateException(getClass().getName() + ".sizeOf() is reporting inconsistent results!");     // Catch: Throwable -> L21
    }

    @Nullable
    public final V remove(@NonNull K r4) {
        if (r4 == null) goto L15;
        monitor-enter(this);
        V r0 = this.map.remove(r4);     // Catch: Throwable -> L11
        if (r0 == null) goto L7;
        this.size -= safeSizeOf(r4, r0);
    L7:
        monitor-exit(this);     // Catch: Throwable -> L11
        if (r0 == null) goto L10;
        entryRemoved(false, r4, r0, null);
    L10:
        return r0;
    L11:
        th = move-exception;
        throw th;
    L15:
        throw new NullPointerException("key == null");
    }

    private int safeSizeOf(K r4, V r5) {
        int r0 = sizeOf(r4, r5);
        if (r0 < 0) goto L6;
        return r0;
    L6:
        throw new IllegalStateException("Negative size: " + r4 + "=" + r5);
    }

    public final void evictAll() {
        trimToSize(-1);
    }

    public final synchronized int size() {
        monitor-enter(this);
        int r0 = this.size;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public final synchronized int maxSize() {
        monitor-enter(this);
        int r0 = this.maxSize;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public final synchronized int hitCount() {
        monitor-enter(this);
        int r0 = this.hitCount;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public final synchronized int missCount() {
        monitor-enter(this);
        int r0 = this.missCount;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public final synchronized int createCount() {
        monitor-enter(this);
        int r0 = this.createCount;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public final synchronized int putCount() {
        monitor-enter(this);
        int r0 = this.putCount;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public final synchronized int evictionCount() {
        monitor-enter(this);
        int r0 = this.evictionCount;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public final synchronized Map<K, V> snapshot() {
        monitor-enter(this);
        LinkedHashMap r0 = new LinkedHashMap(this.map);     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public final synchronized String toString() {
        monitor-enter(this);
        int r0 = this.hitCount + this.missCount;     // Catch: Throwable -> L10
        if (r0 == 0) goto L6;
        int r02 = (this.hitCount * 100) / r0;     // Catch: Throwable -> L10
    L7:
        String r03 = String.format(Locale.US, "LruCache[maxSize=%d,hits=%d,misses=%d,hitRate=%d%%]", new Object[]{Integer.valueOf(this.maxSize), Integer.valueOf(this.hitCount), Integer.valueOf(this.missCount), Integer.valueOf(r02)});     // Catch: Throwable -> L10
        monitor-exit(this);
        return r03;
    L6:
        r02 = 0;
    L10:
        th = move-exception;
        throw th;
    }
}
