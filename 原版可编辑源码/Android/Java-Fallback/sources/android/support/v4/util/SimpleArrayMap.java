package android.support.v4.util;

public class SimpleArrayMap<K, V> {
    private static final int BASE_SIZE = 4;
    private static final int CACHE_SIZE = 10;
    private static final boolean CONCURRENT_MODIFICATION_EXCEPTIONS = true;
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
            int[] r0 = android.support.v4.util.ContainerHelpers.EMPTY_INTS
            r1.mHashes = r0
            java.lang.Object[] r0 = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS
            r1.mArray = r0
            r0 = 0
            r1.mSize = r0
            return
    }

    public SimpleArrayMap(int r1) {
            r0 = this;
            r0.<init>()
            if (r1 != 0) goto Le
            int[] r1 = android.support.v4.util.ContainerHelpers.EMPTY_INTS
            r0.mHashes = r1
            java.lang.Object[] r1 = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS
            r0.mArray = r1
            goto L11
        Le:
            r0.allocArrays(r1)
        L11:
            r1 = 0
            r0.mSize = r1
            return
    }

    public SimpleArrayMap(android.support.v4.util.SimpleArrayMap<K, V> r1) {
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
            java.lang.Class<android.support.v4.util.ArrayMap> r3 = android.support.v4.util.ArrayMap.class
            monitor-enter(r3)
            java.lang.Object[] r4 = android.support.v4.util.SimpleArrayMap.mTwiceBaseCache     // Catch: java.lang.Throwable -> L2f
            if (r4 == 0) goto L2d
            java.lang.Object[] r6 = android.support.v4.util.SimpleArrayMap.mTwiceBaseCache     // Catch: java.lang.Throwable -> L2f
            r5.mArray = r6     // Catch: java.lang.Throwable -> L2f
            r4 = r6[r1]     // Catch: java.lang.Throwable -> L2f
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.Throwable -> L2f
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.Throwable -> L2f
            android.support.v4.util.SimpleArrayMap.mTwiceBaseCache = r4     // Catch: java.lang.Throwable -> L2f
            r4 = r6[r2]     // Catch: java.lang.Throwable -> L2f
            int[] r4 = (int[]) r4     // Catch: java.lang.Throwable -> L2f
            int[] r4 = (int[]) r4     // Catch: java.lang.Throwable -> L2f
            r5.mHashes = r4     // Catch: java.lang.Throwable -> L2f
            r6[r2] = r0     // Catch: java.lang.Throwable -> L2f
            r6[r1] = r0     // Catch: java.lang.Throwable -> L2f
            int r6 = android.support.v4.util.SimpleArrayMap.mTwiceBaseCacheSize     // Catch: java.lang.Throwable -> L2f
            int r6 = r6 - r2
            android.support.v4.util.SimpleArrayMap.mTwiceBaseCacheSize = r6     // Catch: java.lang.Throwable -> L2f
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
            java.lang.Class<android.support.v4.util.ArrayMap> r3 = android.support.v4.util.ArrayMap.class
            monitor-enter(r3)
            java.lang.Object[] r4 = android.support.v4.util.SimpleArrayMap.mBaseCache     // Catch: java.lang.Throwable -> L5d
            if (r4 == 0) goto L5b
            java.lang.Object[] r6 = android.support.v4.util.SimpleArrayMap.mBaseCache     // Catch: java.lang.Throwable -> L5d
            r5.mArray = r6     // Catch: java.lang.Throwable -> L5d
            r4 = r6[r1]     // Catch: java.lang.Throwable -> L5d
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.Throwable -> L5d
            java.lang.Object[] r4 = (java.lang.Object[]) r4     // Catch: java.lang.Throwable -> L5d
            android.support.v4.util.SimpleArrayMap.mBaseCache = r4     // Catch: java.lang.Throwable -> L5d
            r4 = r6[r2]     // Catch: java.lang.Throwable -> L5d
            int[] r4 = (int[]) r4     // Catch: java.lang.Throwable -> L5d
            int[] r4 = (int[]) r4     // Catch: java.lang.Throwable -> L5d
            r5.mHashes = r4     // Catch: java.lang.Throwable -> L5d
            r6[r2] = r0     // Catch: java.lang.Throwable -> L5d
            r6[r1] = r0     // Catch: java.lang.Throwable -> L5d
            int r6 = android.support.v4.util.SimpleArrayMap.mBaseCacheSize     // Catch: java.lang.Throwable -> L5d
            int r6 = r6 - r2
            android.support.v4.util.SimpleArrayMap.mBaseCacheSize = r6     // Catch: java.lang.Throwable -> L5d
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

    private static int binarySearchHashes(int[] r0, int r1, int r2) {
            int r0 = android.support.v4.util.ContainerHelpers.binarySearch(r0, r1, r2)     // Catch: java.lang.ArrayIndexOutOfBoundsException -> L5
            return r0
        L5:
            java.util.ConcurrentModificationException r0 = new java.util.ConcurrentModificationException
            r0.<init>()
            throw r0
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
            java.lang.Class<android.support.v4.util.ArrayMap> r0 = android.support.v4.util.ArrayMap.class
            monitor-enter(r0)
            int r6 = android.support.v4.util.SimpleArrayMap.mTwiceBaseCacheSize     // Catch: java.lang.Throwable -> L2b
            if (r6 >= r4) goto L29
            java.lang.Object[] r4 = android.support.v4.util.SimpleArrayMap.mTwiceBaseCache     // Catch: java.lang.Throwable -> L2b
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
            android.support.v4.util.SimpleArrayMap.mTwiceBaseCache = r8     // Catch: java.lang.Throwable -> L2b
            int r7 = android.support.v4.util.SimpleArrayMap.mTwiceBaseCacheSize     // Catch: java.lang.Throwable -> L2b
            int r7 = r7 + r5
            android.support.v4.util.SimpleArrayMap.mTwiceBaseCacheSize = r7     // Catch: java.lang.Throwable -> L2b
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
            java.lang.Class<android.support.v4.util.ArrayMap> r0 = android.support.v4.util.ArrayMap.class
            monitor-enter(r0)
            int r6 = android.support.v4.util.SimpleArrayMap.mBaseCacheSize     // Catch: java.lang.Throwable -> L52
            if (r6 >= r4) goto L50
            java.lang.Object[] r4 = android.support.v4.util.SimpleArrayMap.mBaseCache     // Catch: java.lang.Throwable -> L52
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
            android.support.v4.util.SimpleArrayMap.mBaseCache = r8     // Catch: java.lang.Throwable -> L52
            int r7 = android.support.v4.util.SimpleArrayMap.mBaseCacheSize     // Catch: java.lang.Throwable -> L52
            int r7 = r7 + r5
            android.support.v4.util.SimpleArrayMap.mBaseCacheSize = r7     // Catch: java.lang.Throwable -> L52
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
            r4 = this;
            int r0 = r4.mSize
            if (r0 <= 0) goto L16
            int[] r1 = r4.mHashes
            java.lang.Object[] r2 = r4.mArray
            int[] r3 = android.support.v4.util.ContainerHelpers.EMPTY_INTS
            r4.mHashes = r3
            java.lang.Object[] r3 = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS
            r4.mArray = r3
            r3 = 0
            r4.mSize = r3
            freeArrays(r1, r2, r0)
        L16:
            int r0 = r4.mSize
            if (r0 > 0) goto L1b
            return
        L1b:
            java.util.ConcurrentModificationException r0 = new java.util.ConcurrentModificationException
            r0.<init>()
            throw r0
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

    public void ensureCapacity(int r6) {
            r5 = this;
            int r0 = r5.mSize
            int[] r1 = r5.mHashes
            int r2 = r1.length
            if (r2 >= r6) goto L20
            java.lang.Object[] r2 = r5.mArray
            r5.allocArrays(r6)
            int r6 = r5.mSize
            if (r6 <= 0) goto L1d
            int[] r6 = r5.mHashes
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r6, r3, r0)
            java.lang.Object[] r6 = r5.mArray
            int r4 = r0 << 1
            java.lang.System.arraycopy(r2, r3, r6, r3, r4)
        L1d:
            freeArrays(r1, r2, r0)
        L20:
            int r6 = r5.mSize
            if (r6 != r0) goto L25
            return
        L25:
            java.util.ConcurrentModificationException r6 = new java.util.ConcurrentModificationException
            r6.<init>()
            throw r6
    }

    public boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            boolean r1 = r7 instanceof android.support.v4.util.SimpleArrayMap
            r2 = 0
            if (r1 == 0) goto L3e
            android.support.v4.util.SimpleArrayMap r7 = (android.support.v4.util.SimpleArrayMap) r7
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
        L3e:
            boolean r1 = r7 instanceof java.util.Map
            if (r1 == 0) goto L76
            java.util.Map r7 = (java.util.Map) r7
            int r1 = r6.size()
            int r3 = r7.size()
            if (r1 == r3) goto L4f
            return r2
        L4f:
            r1 = r2
        L50:
            int r3 = r6.mSize     // Catch: java.lang.Throwable -> L76
            if (r1 >= r3) goto L75
            java.lang.Object r3 = r6.keyAt(r1)     // Catch: java.lang.Throwable -> L76
            java.lang.Object r4 = r6.valueAt(r1)     // Catch: java.lang.Throwable -> L76
            java.lang.Object r5 = r7.get(r3)     // Catch: java.lang.Throwable -> L76
            if (r4 != 0) goto L6b
            if (r5 != 0) goto L6a
            boolean r3 = r7.containsKey(r3)     // Catch: java.lang.Throwable -> L76
            if (r3 != 0) goto L72
        L6a:
            return r2
        L6b:
            boolean r3 = r4.equals(r5)     // Catch: java.lang.Throwable -> L76
            if (r3 != 0) goto L72
            return r2
        L72:
            int r1 = r1 + 1
            goto L50
        L75:
            return r0
        L76:
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
            int r1 = binarySearchHashes(r1, r0, r7)
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
            int r1 = binarySearchHashes(r1, r0, r2)
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

    public V put(K r10, V r11) {
            r9 = this;
            int r0 = r9.mSize
            r1 = 0
            if (r10 != 0) goto Lb
            int r2 = r9.indexOfNull()
            r3 = r1
            goto L16
        Lb:
            int r2 = r10.hashCode()
            int r3 = r9.indexOf(r10, r2)
            r8 = r3
            r3 = r2
            r2 = r8
        L16:
            if (r2 < 0) goto L23
            int r10 = r2 << 1
            int r10 = r10 + 1
            java.lang.Object[] r0 = r9.mArray
            r1 = r0[r10]
            r0[r10] = r11
            return r1
        L23:
            int r2 = ~r2
            int[] r4 = r9.mHashes
            int r4 = r4.length
            if (r0 < r4) goto L59
            r4 = 4
            r5 = 8
            if (r0 < r5) goto L32
            int r4 = r0 >> 1
            int r4 = r4 + r0
            goto L35
        L32:
            if (r0 < r4) goto L35
            r4 = r5
        L35:
            int[] r5 = r9.mHashes
            java.lang.Object[] r6 = r9.mArray
            r9.allocArrays(r4)
            int r4 = r9.mSize
            if (r0 != r4) goto L53
            int[] r4 = r9.mHashes
            int r7 = r4.length
            if (r7 <= 0) goto L4f
            int r7 = r5.length
            java.lang.System.arraycopy(r5, r1, r4, r1, r7)
            java.lang.Object[] r4 = r9.mArray
            int r7 = r6.length
            java.lang.System.arraycopy(r6, r1, r4, r1, r7)
        L4f:
            freeArrays(r5, r6, r0)
            goto L59
        L53:
            java.util.ConcurrentModificationException r10 = new java.util.ConcurrentModificationException
            r10.<init>()
            throw r10
        L59:
            if (r2 >= r0) goto L72
            int[] r1 = r9.mHashes
            int r4 = r2 + 1
            int r5 = r0 - r2
            java.lang.System.arraycopy(r1, r2, r1, r4, r5)
            java.lang.Object[] r1 = r9.mArray
            int r5 = r2 << 1
            int r4 = r4 << 1
            int r6 = r9.mSize
            int r6 = r6 - r2
            int r6 = r6 << 1
            java.lang.System.arraycopy(r1, r5, r1, r4, r6)
        L72:
            int r1 = r9.mSize
            if (r0 != r1) goto L8d
            int[] r0 = r9.mHashes
            int r4 = r0.length
            if (r2 >= r4) goto L8d
            r0[r2] = r3
            java.lang.Object[] r0 = r9.mArray
            int r2 = r2 << 1
            r0[r2] = r10
            int r2 = r2 + 1
            r0[r2] = r11
            int r1 = r1 + 1
            r9.mSize = r1
            r10 = 0
            return r10
        L8d:
            java.util.ConcurrentModificationException r10 = new java.util.ConcurrentModificationException
            r10.<init>()
            throw r10
    }

    public void putAll(android.support.v4.util.SimpleArrayMap<? extends K, ? extends V> r5) {
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

    public V removeAt(int r11) {
            r10 = this;
            java.lang.Object[] r0 = r10.mArray
            int r1 = r11 << 1
            int r2 = r1 + 1
            r2 = r0[r2]
            int r3 = r10.mSize
            r4 = 0
            r5 = 1
            if (r3 > r5) goto L1c
            int[] r11 = r10.mHashes
            freeArrays(r11, r0, r3)
            int[] r11 = android.support.v4.util.ContainerHelpers.EMPTY_INTS
            r10.mHashes = r11
            java.lang.Object[] r11 = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS
            r10.mArray = r11
            goto L81
        L1c:
            int r0 = r3 + (-1)
            int[] r6 = r10.mHashes
            int r7 = r6.length
            r8 = 8
            if (r7 <= r8) goto L62
            int r6 = r6.length
            int r6 = r6 / 3
            if (r3 >= r6) goto L62
            if (r3 <= r8) goto L30
            int r6 = r3 >> 1
            int r8 = r3 + r6
        L30:
            int[] r6 = r10.mHashes
            java.lang.Object[] r7 = r10.mArray
            r10.allocArrays(r8)
            int r8 = r10.mSize
            if (r3 != r8) goto L5c
            if (r11 <= 0) goto L47
            int[] r8 = r10.mHashes
            java.lang.System.arraycopy(r6, r4, r8, r4, r11)
            java.lang.Object[] r8 = r10.mArray
            java.lang.System.arraycopy(r7, r4, r8, r4, r1)
        L47:
            if (r11 >= r0) goto L80
            int r4 = r11 + 1
            int[] r8 = r10.mHashes
            int r9 = r0 - r11
            java.lang.System.arraycopy(r6, r4, r8, r11, r9)
            int r11 = r4 << 1
            java.lang.Object[] r4 = r10.mArray
            int r5 = r9 << 1
            java.lang.System.arraycopy(r7, r11, r4, r1, r5)
            goto L80
        L5c:
            java.util.ConcurrentModificationException r11 = new java.util.ConcurrentModificationException
            r11.<init>()
            throw r11
        L62:
            if (r11 >= r0) goto L76
            int[] r4 = r10.mHashes
            int r6 = r11 + 1
            int r7 = r0 - r11
            java.lang.System.arraycopy(r4, r6, r4, r11, r7)
            java.lang.Object[] r11 = r10.mArray
            int r4 = r6 << 1
            int r6 = r7 << 1
            java.lang.System.arraycopy(r11, r4, r11, r1, r6)
        L76:
            java.lang.Object[] r11 = r10.mArray
            int r1 = r0 << 1
            r4 = 0
            r11[r1] = r4
            int r1 = r1 + r5
            r11[r1] = r4
        L80:
            r4 = r0
        L81:
            int r11 = r10.mSize
            if (r3 != r11) goto L88
            r10.mSize = r4
            return r2
        L88:
            java.util.ConcurrentModificationException r11 = new java.util.ConcurrentModificationException
            r11.<init>()
            throw r11
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
