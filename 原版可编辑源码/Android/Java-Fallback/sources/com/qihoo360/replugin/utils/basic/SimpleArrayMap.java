package com.qihoo360.replugin.utils.basic;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class SimpleArrayMap<K, V> {
    private static final int BASE_SIZE = 4;
    private static final int CACHE_SIZE = 10;
    private static final boolean DEBUG = false;
    private static final java.lang.String TAG = "ArrayMap";
    static java.lang.Object[] mBaseCache;
    static int mBaseCacheSize;
    static java.lang.Object[] mTwiceBaseCache;
    static int mTwiceBaseCacheSize;
    java.lang.Object[] mArray;
    int[] mHashes;
    int mSize;

    public SimpleArrayMap() {
            r1 = this;
            r1.<init>()
            int[] r0 = com.qihoo360.replugin.utils.basic.ContainerHelpers.EMPTY_INTS
            r1.mHashes = r0
            java.lang.Object[] r0 = com.qihoo360.replugin.utils.basic.ContainerHelpers.EMPTY_OBJECTS
            r1.mArray = r0
            r0 = 0
            r1.mSize = r0
            return
    }

    public SimpleArrayMap(int r1) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto Le
            int[] r1 = com.qihoo360.replugin.utils.basic.ContainerHelpers.EMPTY_INTS
            r0.mHashes = r1
            java.lang.Object[] r1 = com.qihoo360.replugin.utils.basic.ContainerHelpers.EMPTY_OBJECTS
            r0.mArray = r1
            goto L11
        Le:
            r0.allocArrays(r1)
        L11:
            r1 = 0
            r0.mSize = r1
            return
    }

    public SimpleArrayMap(com.qihoo360.replugin.utils.basic.SimpleArrayMap r1) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto L8
            r0.putAll(r1)
        L8:
            return
    }

    private void allocArrays(int r6) {
            r5 = this;
            r0 = 0
            r1 = 0
            r2 = 1
            r3 = 8
            if (r6 != r3) goto L32
            java.lang.Class<com.qihoo360.replugin.utils.basic.ArrayMap> r3 = com.qihoo360.replugin.utils.basic.ArrayMap.class
            monitor-enter(r3)
            java.lang.Object[] r4 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCache     // Catch: java.lang.Throwable -> L2f
            if (r4 == 0) goto L2d
            java.lang.Object[] r6 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCache     // Catch: java.lang.Throwable -> L2f
            r5.mArray = r6     // Catch: java.lang.Throwable -> L2f
            r4 = r6[r1]     // Catch: java.lang.Throwable -> L2f
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.Throwable -> L2f
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.Throwable -> L2f
            com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCache = r4     // Catch: java.lang.Throwable -> L2f
            r4 = r6[r2]     // Catch: java.lang.Throwable -> L2f
            int[] r4 = (int[]) r4     // Catch: java.lang.Throwable -> L2f
            int[] r4 = (int[]) r4     // Catch: java.lang.Throwable -> L2f
            r5.mHashes = r4     // Catch: java.lang.Throwable -> L2f
            r6[r2] = r0     // Catch: java.lang.Throwable -> L2f
            r6[r1] = r0     // Catch: java.lang.Throwable -> L2f
            int r6 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCacheSize     // Catch: java.lang.Throwable -> L2f
            int r6 = r6 - r2
            com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCacheSize = r6     // Catch: java.lang.Throwable -> L2f
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2f
            return
        L2d:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2f
            goto L60
        L2f:
            r6 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L2f
            throw r6
        L32:
            r3 = 4
            if (r6 != r3) goto L60
            java.lang.Class<com.qihoo360.replugin.utils.basic.ArrayMap> r3 = com.qihoo360.replugin.utils.basic.ArrayMap.class
            monitor-enter(r3)
            java.lang.Object[] r4 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCache     // Catch: java.lang.Throwable -> L5d
            if (r4 == 0) goto L5b
            java.lang.Object[] r6 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCache     // Catch: java.lang.Throwable -> L5d
            r5.mArray = r6     // Catch: java.lang.Throwable -> L5d
            r4 = r6[r1]     // Catch: java.lang.Throwable -> L5d
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.Throwable -> L5d
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.Throwable -> L5d
            com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCache = r4     // Catch: java.lang.Throwable -> L5d
            r4 = r6[r2]     // Catch: java.lang.Throwable -> L5d
            int[] r4 = (int[]) r4     // Catch: java.lang.Throwable -> L5d
            int[] r4 = (int[]) r4     // Catch: java.lang.Throwable -> L5d
            r5.mHashes = r4     // Catch: java.lang.Throwable -> L5d
            r6[r2] = r0     // Catch: java.lang.Throwable -> L5d
            r6[r1] = r0     // Catch: java.lang.Throwable -> L5d
            int r6 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCacheSize     // Catch: java.lang.Throwable -> L5d
            int r6 = r6 - r2
            com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCacheSize = r6     // Catch: java.lang.Throwable -> L5d
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5d
            return
        L5b:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5d
            goto L60
        L5d:
            r6 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L5d
            throw r6
        L60:
            int[] r0 = new int[r6]
            r5.mHashes = r0
            int r6 = r6 << r2
            java.lang.Object[] r6 = new java.lang.Object[r6]
            r5.mArray = r6
            return
    }

    private static void freeArrays(int[] r7, java.lang.Object[] r8, int r9) {
            int r0 = r7.length
            r1 = 0
            r2 = 2
            r3 = 0
            r4 = 10
            r5 = 1
            r6 = 8
            if (r0 != r6) goto L2e
            java.lang.Class<com.qihoo360.replugin.utils.basic.ArrayMap> r0 = com.qihoo360.replugin.utils.basic.ArrayMap.class
            monitor-enter(r0)
            int r6 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCacheSize     // Catch: java.lang.Throwable -> L2b
            if (r6 >= r4) goto L29
            java.lang.Object[] r4 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCache     // Catch: java.lang.Throwable -> L2b
            r8[r3] = r4     // Catch: java.lang.Throwable -> L2b
            r8[r5] = r7     // Catch: java.lang.Throwable -> L2b
            int r7 = r9 << 1
            int r7 = r7 - r5
        L1b:
            if (r7 < r2) goto L22
            r8[r7] = r1     // Catch: java.lang.Throwable -> L2b
            int r7 = r7 + (-1)
            goto L1b
        L22:
            com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCache = r8     // Catch: java.lang.Throwable -> L2b
            int r7 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCacheSize     // Catch: java.lang.Throwable -> L2b
            int r7 = r7 + r5
            com.qihoo360.replugin.utils.basic.SimpleArrayMap.mTwiceBaseCacheSize = r7     // Catch: java.lang.Throwable -> L2b
        L29:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            goto L55
        L2b:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
            throw r7
        L2e:
            int r0 = r7.length
            r6 = 4
            if (r0 != r6) goto L55
            java.lang.Class<com.qihoo360.replugin.utils.basic.ArrayMap> r0 = com.qihoo360.replugin.utils.basic.ArrayMap.class
            monitor-enter(r0)
            int r6 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCacheSize     // Catch: java.lang.Throwable -> L52
            if (r6 >= r4) goto L50
            java.lang.Object[] r4 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCache     // Catch: java.lang.Throwable -> L52
            r8[r3] = r4     // Catch: java.lang.Throwable -> L52
            r8[r5] = r7     // Catch: java.lang.Throwable -> L52
            int r7 = r9 << 1
            int r7 = r7 - r5
        L42:
            if (r7 < r2) goto L49
            r8[r7] = r1     // Catch: java.lang.Throwable -> L52
            int r7 = r7 + (-1)
            goto L42
        L49:
            com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCache = r8     // Catch: java.lang.Throwable -> L52
            int r7 = com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCacheSize     // Catch: java.lang.Throwable -> L52
            int r7 = r7 + r5
            com.qihoo360.replugin.utils.basic.SimpleArrayMap.mBaseCacheSize = r7     // Catch: java.lang.Throwable -> L52
        L50:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            goto L55
        L52:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L52
            throw r7
        L55:
            return
    }

    public void clear() {
            r3 = this;
            int r0 = r3.mSize
            if (r0 == 0) goto L16
            int[] r1 = r3.mHashes
            java.lang.Object[] r2 = r3.mArray
            freeArrays(r1, r2, r0)
            int[] r0 = com.qihoo360.replugin.utils.basic.ContainerHelpers.EMPTY_INTS
            r3.mHashes = r0
            java.lang.Object[] r0 = com.qihoo360.replugin.utils.basic.ContainerHelpers.EMPTY_OBJECTS
            r3.mArray = r0
            r0 = 0
            r3.mSize = r0
        L16:
            return
    }

    public boolean containsKey(java.lang.Object r1) {
            r0 = this;
            int r1 = r0.indexOfKey(r1)
            if (r1 < 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    public boolean containsValue(java.lang.Object r1) {
            r0 = this;
            int r1 = r0.indexOfValue(r1)
            if (r1 < 0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    public void ensureCapacity(int r5) {
            r4 = this;
            int[] r0 = r4.mHashes
            int r1 = r0.length
            if (r1 >= r5) goto L22
            java.lang.Object[] r1 = r4.mArray
            r4.allocArrays(r5)
            int r5 = r4.mSize
            if (r5 <= 0) goto L1d
            int[] r2 = r4.mHashes
            r3 = 0
            java.lang.System.arraycopy(r0, r3, r2, r3, r5)
            java.lang.Object[] r5 = r4.mArray
            int r2 = r4.mSize
            int r2 = r2 << 1
            java.lang.System.arraycopy(r1, r3, r5, r3, r2)
        L1d:
            int r5 = r4.mSize
            freeArrays(r0, r1, r5)
        L22:
            return
    }

    public boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            boolean r1 = r7 instanceof java.util.Map
            r2 = 0
            if (r1 == 0) goto L3d
            java.util.Map r7 = (java.util.Map) r7
            int r1 = r6.size()
            int r3 = r7.size()
            if (r1 == r3) goto L16
            return r2
        L16:
            r1 = r2
        L17:
            int r3 = r6.mSize     // Catch: java.lang.Throwable -> L3d
            if (r1 >= r3) goto L3c
            java.lang.Object r3 = r6.keyAt(r1)     // Catch: java.lang.Throwable -> L3d
            java.lang.Object r4 = r6.valueAt(r1)     // Catch: java.lang.Throwable -> L3d
            java.lang.Object r5 = r7.get(r3)     // Catch: java.lang.Throwable -> L3d
            if (r4 != 0) goto L32
            if (r5 != 0) goto L31
            boolean r3 = r7.containsKey(r3)     // Catch: java.lang.Throwable -> L3d
            if (r3 != 0) goto L39
        L31:
            return r2
        L32:
            boolean r3 = r4.equals(r5)     // Catch: java.lang.Throwable -> L3d
            if (r3 != 0) goto L39
            return r2
        L39:
            int r1 = r1 + 1
            goto L17
        L3c:
            return r0
        L3d:
            return r2
    }

    public V get(java.lang.Object r2) {
            r1 = this;
            int r2 = r1.indexOfKey(r2)
            if (r2 < 0) goto Lf
            java.lang.Object[] r0 = r1.mArray
            int r2 = r2 << 1
            int r2 = r2 + 1
            r2 = r0[r2]
            goto L10
        Lf:
            r2 = 0
        L10:
            return r2
    }

    public int hashCode() {
            r9 = this;
            int[] r0 = r9.mHashes
            java.lang.Object[] r1 = r9.mArray
            int r2 = r9.mSize
            r3 = 1
            r4 = 0
            r5 = r4
            r6 = r5
        La:
            if (r5 >= r2) goto L1f
            r7 = r1[r3]
            r8 = r0[r5]
            if (r7 != 0) goto L14
            r7 = r4
            goto L18
        L14:
            int r7 = r7.hashCode()
        L18:
            r7 = r7 ^ r8
            int r6 = r6 + r7
            int r5 = r5 + 1
            int r3 = r3 + 2
            goto La
        L1f:
            return r6
    }

    int indexOf(java.lang.Object r6, int r7) {
            r5 = this;
            int r0 = r5.mSize
            if (r0 != 0) goto L6
            r6 = -1
            return r6
        L6:
            int[] r1 = r5.mHashes
            int r1 = com.qihoo360.replugin.utils.basic.ContainerHelpers.binarySearch(r1, r0, r7)
            if (r1 >= 0) goto Lf
            return r1
        Lf:
            java.lang.Object[] r2 = r5.mArray
            int r3 = r1 << 1
            r2 = r2[r3]
            boolean r2 = r6.equals(r2)
            if (r2 == 0) goto L1c
            return r1
        L1c:
            int r2 = r1 + 1
        L1e:
            if (r2 >= r0) goto L36
            int[] r3 = r5.mHashes
            r3 = r3[r2]
            if (r3 != r7) goto L36
            java.lang.Object[] r3 = r5.mArray
            int r4 = r2 << 1
            r3 = r3[r4]
            boolean r3 = r6.equals(r3)
            if (r3 == 0) goto L33
            return r2
        L33:
            int r2 = r2 + 1
            goto L1e
        L36:
            int r1 = r1 + (-1)
        L38:
            if (r1 < 0) goto L50
            int[] r0 = r5.mHashes
            r0 = r0[r1]
            if (r0 != r7) goto L50
            java.lang.Object[] r0 = r5.mArray
            int r3 = r1 << 1
            r0 = r0[r3]
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L4d
            return r1
        L4d:
            int r1 = r1 + (-1)
            goto L38
        L50:
            int r6 = ~r2
            return r6
    }

    public int indexOfKey(java.lang.Object r2) {
            r1 = this;
            if (r2 != 0) goto L7
            int r2 = r1.indexOfNull()
            goto Lf
        L7:
            int r0 = r2.hashCode()
            int r2 = r1.indexOf(r2, r0)
        Lf:
            return r2
    }

    int indexOfNull() {
            r5 = this;
            int r0 = r5.mSize
            if (r0 != 0) goto L6
            r0 = -1
            return r0
        L6:
            int[] r1 = r5.mHashes
            r2 = 0
            int r1 = com.qihoo360.replugin.utils.basic.ContainerHelpers.binarySearch(r1, r0, r2)
            if (r1 >= 0) goto L10
            return r1
        L10:
            java.lang.Object[] r2 = r5.mArray
            int r3 = r1 << 1
            r2 = r2[r3]
            if (r2 != 0) goto L19
            return r1
        L19:
            int r2 = r1 + 1
        L1b:
            if (r2 >= r0) goto L2f
            int[] r3 = r5.mHashes
            r3 = r3[r2]
            if (r3 != 0) goto L2f
            java.lang.Object[] r3 = r5.mArray
            int r4 = r2 << 1
            r3 = r3[r4]
            if (r3 != 0) goto L2c
            return r2
        L2c:
            int r2 = r2 + 1
            goto L1b
        L2f:
            int r1 = r1 + (-1)
        L31:
            if (r1 < 0) goto L45
            int[] r0 = r5.mHashes
            r0 = r0[r1]
            if (r0 != 0) goto L45
            java.lang.Object[] r0 = r5.mArray
            int r3 = r1 << 1
            r0 = r0[r3]
            if (r0 != 0) goto L42
            return r1
        L42:
            int r1 = r1 + (-1)
            goto L31
        L45:
            int r0 = ~r2
            return r0
    }

    int indexOfValue(java.lang.Object r6) {
            r5 = this;
            int r0 = r5.mSize
            int r0 = r0 * 2
            java.lang.Object[] r1 = r5.mArray
            r2 = 1
            if (r6 != 0) goto L15
            r6 = r2
        La:
            if (r6 >= r0) goto L26
            r3 = r1[r6]
            if (r3 != 0) goto L12
            int r6 = r6 >> r2
            return r6
        L12:
            int r6 = r6 + 2
            goto La
        L15:
            r3 = r2
        L16:
            if (r3 >= r0) goto L26
            r4 = r1[r3]
            boolean r4 = r6.equals(r4)
            if (r4 == 0) goto L23
            int r6 = r3 >> 1
            return r6
        L23:
            int r3 = r3 + 2
            goto L16
        L26:
            r6 = -1
            return r6
    }

    public boolean isEmpty() {
            r1 = this;
            int r0 = r1.mSize
            if (r0 > 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public K keyAt(int r2) {
            r1 = this;
            java.lang.Object[] r0 = r1.mArray
            int r2 = r2 << 1
            r2 = r0[r2]
            return r2
    }

    public V put(K r9, V r10) {
            r8 = this;
            r0 = 0
            if (r9 != 0) goto L9
            int r1 = r8.indexOfNull()
            r2 = r0
            goto L14
        L9:
            int r1 = r9.hashCode()
            int r2 = r8.indexOf(r9, r1)
            r7 = r2
            r2 = r1
            r1 = r7
        L14:
            if (r1 < 0) goto L21
            int r9 = r1 << 1
            int r9 = r9 + 1
            java.lang.Object[] r0 = r8.mArray
            r1 = r0[r9]
            r0[r9] = r10
            return r1
        L21:
            int r1 = ~r1
            int r3 = r8.mSize
            int[] r4 = r8.mHashes
            int r4 = r4.length
            if (r3 < r4) goto L50
            r4 = 4
            r5 = 8
            if (r3 < r5) goto L32
            int r4 = r3 >> 1
            int r4 = r4 + r3
            goto L35
        L32:
            if (r3 < r4) goto L35
            r4 = r5
        L35:
            int[] r3 = r8.mHashes
            java.lang.Object[] r5 = r8.mArray
            r8.allocArrays(r4)
            int[] r4 = r8.mHashes
            int r6 = r4.length
            if (r6 <= 0) goto L4b
            int r6 = r3.length
            java.lang.System.arraycopy(r3, r0, r4, r0, r6)
            java.lang.Object[] r4 = r8.mArray
            int r6 = r5.length
            java.lang.System.arraycopy(r5, r0, r4, r0, r6)
        L4b:
            int r0 = r8.mSize
            freeArrays(r3, r5, r0)
        L50:
            int r0 = r8.mSize
            if (r1 >= r0) goto L6a
            int[] r3 = r8.mHashes
            int r4 = r1 + 1
            int r0 = r0 - r1
            java.lang.System.arraycopy(r3, r1, r3, r4, r0)
            java.lang.Object[] r0 = r8.mArray
            int r3 = r1 << 1
            int r4 = r4 << 1
            int r5 = r8.mSize
            int r5 = r5 - r1
            int r5 = r5 << 1
            java.lang.System.arraycopy(r0, r3, r0, r4, r5)
        L6a:
            int[] r0 = r8.mHashes
            r0[r1] = r2
            java.lang.Object[] r0 = r8.mArray
            int r1 = r1 << 1
            r0[r1] = r9
            int r1 = r1 + 1
            r0[r1] = r10
            int r9 = r8.mSize
            int r9 = r9 + 1
            r8.mSize = r9
            r9 = 0
            return r9
    }

    public void putAll(com.qihoo360.replugin.utils.basic.SimpleArrayMap<? extends K, ? extends V> r5) {
            r4 = this;
            int r0 = r5.mSize
            int r1 = r4.mSize
            int r1 = r1 + r0
            r4.ensureCapacity(r1)
            int r1 = r4.mSize
            r2 = 0
            if (r1 != 0) goto L22
            if (r0 <= 0) goto L32
            int[] r1 = r5.mHashes
            int[] r3 = r4.mHashes
            java.lang.System.arraycopy(r1, r2, r3, r2, r0)
            java.lang.Object[] r5 = r5.mArray
            java.lang.Object[] r1 = r4.mArray
            int r3 = r0 << 1
            java.lang.System.arraycopy(r5, r2, r1, r2, r3)
            r4.mSize = r0
            goto L32
        L22:
            if (r2 >= r0) goto L32
            java.lang.Object r1 = r5.keyAt(r2)
            java.lang.Object r3 = r5.valueAt(r2)
            r4.put(r1, r3)
            int r2 = r2 + 1
            goto L22
        L32:
            return
    }

    public V remove(java.lang.Object r1) {
            r0 = this;
            int r1 = r0.indexOfKey(r1)
            if (r1 < 0) goto Lb
            java.lang.Object r1 = r0.removeAt(r1)
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public V removeAt(int r9) {
            r8 = this;
            java.lang.Object[] r0 = r8.mArray
            int r1 = r9 << 1
            int r2 = r1 + 1
            r2 = r0[r2]
            int r3 = r8.mSize
            r4 = 0
            r5 = 1
            if (r3 > r5) goto L1e
            int[] r9 = r8.mHashes
            freeArrays(r9, r0, r3)
            int[] r9 = com.qihoo360.replugin.utils.basic.ContainerHelpers.EMPTY_INTS
            r8.mHashes = r9
            java.lang.Object[] r9 = com.qihoo360.replugin.utils.basic.ContainerHelpers.EMPTY_OBJECTS
            r8.mArray = r9
            r8.mSize = r4
            goto L89
        L1e:
            int[] r0 = r8.mHashes
            int r6 = r0.length
            r7 = 8
            if (r6 <= r7) goto L61
            int r0 = r0.length
            int r0 = r0 / 3
            if (r3 >= r0) goto L61
            if (r3 <= r7) goto L30
            int r0 = r3 >> 1
            int r7 = r3 + r0
        L30:
            int[] r0 = r8.mHashes
            java.lang.Object[] r3 = r8.mArray
            r8.allocArrays(r7)
            int r6 = r8.mSize
            int r6 = r6 - r5
            r8.mSize = r6
            if (r9 <= 0) goto L48
            int[] r6 = r8.mHashes
            java.lang.System.arraycopy(r0, r4, r6, r4, r9)
            java.lang.Object[] r6 = r8.mArray
            java.lang.System.arraycopy(r3, r4, r6, r4, r1)
        L48:
            int r4 = r8.mSize
            if (r9 >= r4) goto L89
            int r6 = r9 + 1
            int[] r7 = r8.mHashes
            int r4 = r4 - r9
            java.lang.System.arraycopy(r0, r6, r7, r9, r4)
            int r0 = r6 << 1
            java.lang.Object[] r4 = r8.mArray
            int r6 = r8.mSize
            int r6 = r6 - r9
            int r9 = r6 << 1
            java.lang.System.arraycopy(r3, r0, r4, r1, r9)
            goto L89
        L61:
            int r0 = r8.mSize
            int r0 = r0 - r5
            r8.mSize = r0
            if (r9 >= r0) goto L7c
            int[] r3 = r8.mHashes
            int r4 = r9 + 1
            int r0 = r0 - r9
            java.lang.System.arraycopy(r3, r4, r3, r9, r0)
            java.lang.Object[] r0 = r8.mArray
            int r3 = r4 << 1
            int r4 = r8.mSize
            int r4 = r4 - r9
            int r9 = r4 << 1
            java.lang.System.arraycopy(r0, r3, r0, r1, r9)
        L7c:
            java.lang.Object[] r9 = r8.mArray
            int r0 = r8.mSize
            int r1 = r0 << 1
            r3 = 0
            r9[r1] = r3
            int r0 = r0 << r5
            int r0 = r0 + r5
            r9[r0] = r3
        L89:
            return r2
    }

    public V setValueAt(int r3, V r4) {
            r2 = this;
            int r3 = r3 << 1
            int r3 = r3 + 1
            java.lang.Object[] r0 = r2.mArray
            r1 = r0[r3]
            r0[r3] = r4
            return r1
    }

    public int size() {
            r1 = this;
            int r0 = r1.mSize
            return r0
    }

    public java.lang.String toString() {
            r4 = this;
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L9
            java.lang.String r0 = "{}"
            return r0
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r4.mSize
            int r1 = r1 * 28
            r0.<init>(r1)
            r1 = 123(0x7b, float:1.72E-43)
            r0.append(r1)
            r1 = 0
        L18:
            int r2 = r4.mSize
            if (r1 >= r2) goto L47
            if (r1 <= 0) goto L23
            java.lang.String r2 = ", "
            r0.append(r2)
        L23:
            java.lang.Object r2 = r4.keyAt(r1)
            java.lang.String r3 = "(this Map)"
            if (r2 == r4) goto L2f
            r0.append(r2)
            goto L32
        L2f:
            r0.append(r3)
        L32:
            r2 = 61
            r0.append(r2)
            java.lang.Object r2 = r4.valueAt(r1)
            if (r2 == r4) goto L41
            r0.append(r2)
            goto L44
        L41:
            r0.append(r3)
        L44:
            int r1 = r1 + 1
            goto L18
        L47:
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public V valueAt(int r2) {
            r1 = this;
            java.lang.Object[] r0 = r1.mArray
            int r2 = r2 << 1
            int r2 = r2 + 1
            r2 = r0[r2]
            return r2
    }
}
