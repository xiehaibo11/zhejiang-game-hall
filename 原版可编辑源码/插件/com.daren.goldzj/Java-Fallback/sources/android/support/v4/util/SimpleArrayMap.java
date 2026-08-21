package android.support.v4.util;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import java.util.ConcurrentModificationException;
import java.util.Map;

public class SimpleArrayMap<K, V> {
    private static final int BASE_SIZE = 4;
    private static final int CACHE_SIZE = 10;
    private static final boolean CONCURRENT_MODIFICATION_EXCEPTIONS = true;
    private static final boolean DEBUG = false;
    private static final String TAG = "ArrayMap";

    @Nullable
    static Object[] mBaseCache;
    static int mBaseCacheSize;

    @Nullable
    static Object[] mTwiceBaseCache;
    static int mTwiceBaseCacheSize;
    Object[] mArray;
    int[] mHashes;
    int mSize;

    private static int binarySearchHashes(int[] r0, int r1, int r2) {
        return ContainerHelpers.binarySearch(r0, r1, r2);
    L5:
        throw new ConcurrentModificationException();
    }

    int indexOf(Object r6, int r7) {
        int r0 = this.mSize;
        if (r0 != 0) goto L6;
        return -1;
    L6:
        int r1 = binarySearchHashes(this.mHashes, r0, r7);
        if (r1 >= 0) goto L10;
        return r1;
    L10:
        if (r6.equals(this.mArray[r1 << 1]) == false) goto L12;
        return r1;
    L12:
        int r2 = r1 + 1;
    L13:
        if (r2 >= r0) goto L20;
        if (this.mHashes[r2] != r7) goto L20;
        if (r6.equals(this.mArray[r2 << 1]) == true) goto L18;
        r2 = r2 + 1;
        goto L13
    L18:
        return r2;
    L20:
        int r12 = r1 - 1;
    L21:
        if (r12 < 0) goto L29;
        if (this.mHashes[r12] != r7) goto L29;
        if (r6.equals(this.mArray[r12 << 1]) == true) goto L26;
        r12 = r12 - 1;
        goto L21
    L26:
        return r12;
    L29:
        return ~r2;
    }

    int indexOfNull() {
        int r0 = this.mSize;
        if (r0 != 0) goto L6;
        return -1;
    L6:
        int r1 = binarySearchHashes(this.mHashes, r0, 0);
        if (r1 >= 0) goto L10;
        return r1;
    L10:
        if (this.mArray[r1 << 1] != null) goto L12;
        return r1;
    L12:
        int r2 = r1 + 1;
    L13:
        if (r2 >= r0) goto L20;
        if (this.mHashes[r2] != 0) goto L20;
        if (this.mArray[r2 << 1] == null) goto L18;
        r2 = r2 + 1;
        goto L13
    L18:
        return r2;
    L20:
        int r12 = r1 - 1;
    L21:
        if (r12 < 0) goto L29;
        if (this.mHashes[r12] != 0) goto L29;
        if (this.mArray[r12 << 1] == null) goto L26;
        r12 = r12 - 1;
        goto L21
    L26:
        return r12;
    L29:
        return ~r2;
    }

    private void allocArrays(int r6) {
        if (r6 != 8) goto L17;
        monitor-enter(ArrayMap.class);
    L13:
        th = move-exception;
        throw th;
    L7:
        if (mTwiceBaseCache == null) goto L11;
        Object[] r62 = mTwiceBaseCache;     // Catch: Throwable -> L13
        this.mArray = r62;     // Catch: Throwable -> L13
        mTwiceBaseCache = (Object[]) r62[0];     // Catch: Throwable -> L13
        this.mHashes = (int[]) r62[1];     // Catch: Throwable -> L13
        r62[1] = null;     // Catch: Throwable -> L13
        r62[0] = null;     // Catch: Throwable -> L13
        mTwiceBaseCacheSize--;
        monitor-exit(ArrayMap.class);     // Catch: Throwable -> L13
        return;
    L11:
        monitor-exit(ArrayMap.class);     // Catch: Throwable -> L13
    L30:
        this.mHashes = new int[r6];
        this.mArray = new Object[r6 << 1];
        return;
    L17:
        if (r6 != 4) goto L30;
        monitor-enter(ArrayMap.class);
    L27:
        th = move-exception;
        throw th;
    L21:
        if (mBaseCache == null) goto L25;
        Object[] r63 = mBaseCache;     // Catch: Throwable -> L27
        this.mArray = r63;     // Catch: Throwable -> L27
        mBaseCache = (Object[]) r63[0];     // Catch: Throwable -> L27
        this.mHashes = (int[]) r63[1];     // Catch: Throwable -> L27
        r63[1] = null;     // Catch: Throwable -> L27
        r63[0] = null;     // Catch: Throwable -> L27
        mBaseCacheSize--;
        monitor-exit(ArrayMap.class);     // Catch: Throwable -> L27
        return;
    L25:
        monitor-exit(ArrayMap.class);     // Catch: Throwable -> L27
        goto L30
    }

    private static void freeArrays(int[] r7, Object[] r8, int r9) {
        if (r7.length != 8) goto L18;
        monitor-enter(ArrayMap.class);
    L14:
        th = move-exception;
        throw th;
    L7:
        if (mTwiceBaseCacheSize >= 10) goto L12;
        r8[0] = mTwiceBaseCache;     // Catch: Throwable -> L14
        r8[1] = r7;     // Catch: Throwable -> L14
        int r72 = (r9 << 1) - 1;     // Catch: Throwable -> L14
    L9:
        if (r72 < 2) goto L11;
        r8[r72] = null;     // Catch: Throwable -> L14
        r72 = r72 - 1;
        goto L9
    L11:
        mTwiceBaseCache = r8;     // Catch: Throwable -> L14
        mTwiceBaseCacheSize++;
    L12:
        monitor-exit(ArrayMap.class);     // Catch: Throwable -> L14
        return;
    L18:
        if (r7.length == 4) goto L20;
        return;
    L20:
        monitor-enter(ArrayMap.class);
    L29:
        th = move-exception;
        throw th;
    L22:
        if (mBaseCacheSize >= 10) goto L27;
        r8[0] = mBaseCache;     // Catch: Throwable -> L29
        r8[1] = r7;     // Catch: Throwable -> L29
        int r73 = (r9 << 1) - 1;     // Catch: Throwable -> L29
    L24:
        if (r73 < 2) goto L26;
        r8[r73] = null;     // Catch: Throwable -> L29
        r73 = r73 - 1;
        goto L24
    L26:
        mBaseCache = r8;     // Catch: Throwable -> L29
        mBaseCacheSize++;
    L27:
        monitor-exit(ArrayMap.class);     // Catch: Throwable -> L29
    }

    public SimpleArrayMap() {
        this.mHashes = ContainerHelpers.EMPTY_INTS;
        this.mArray = ContainerHelpers.EMPTY_OBJECTS;
        this.mSize = 0;
    }

    public SimpleArrayMap(int r1) {
        if (r1 != 0) goto L5;
        this.mHashes = ContainerHelpers.EMPTY_INTS;
        this.mArray = ContainerHelpers.EMPTY_OBJECTS;
    L6:
        this.mSize = 0;
        return;
    L5:
        allocArrays(r1);
        goto L6
    }

    /* JADX WARN: Multi-variable type inference failed */
    public SimpleArrayMap(SimpleArrayMap<K, V> r1) {
        this();
        if (r1 == 0) goto L6;
        putAll(r1);
        return;
    }

    public void clear() {
        int r0 = this.mSize;
        if (r0 <= 0) goto L6;
        int[] r1 = this.mHashes;
        Object[] r2 = this.mArray;
        this.mHashes = ContainerHelpers.EMPTY_INTS;
        this.mArray = ContainerHelpers.EMPTY_OBJECTS;
        this.mSize = 0;
        freeArrays(r1, r2, r0);
    L6:
        if (this.mSize > 0) goto L9;
        return;
    L9:
        throw new ConcurrentModificationException();
    }

    public void ensureCapacity(int r6) {
        int r0 = this.mSize;
        int[] r1 = this.mHashes;
        if (r1.length >= r6) goto L9;
        Object[] r2 = this.mArray;
        allocArrays(r6);
        if (this.mSize <= 0) goto L7;
        System.arraycopy(r1, 0, this.mHashes, 0, r0);
        System.arraycopy(r2, 0, this.mArray, 0, r0 << 1);
    L7:
        freeArrays(r1, r2, r0);
    L9:
        if (this.mSize != r0) goto L12;
        return;
    L12:
        throw new ConcurrentModificationException();
    }

    public boolean containsKey(@Nullable Object r1) {
        if (indexOfKey(r1) < 0) goto L5;
        return CONCURRENT_MODIFICATION_EXCEPTIONS;
    L5:
        return false;
    }

    public int indexOfKey(@Nullable Object r2) {
        if (r2 != null) goto L5;
        return indexOfNull();
    L5:
        return indexOf(r2, r2.hashCode());
    }

    int indexOfValue(Object r6) {
        int r0 = this.mSize * 2;
        Object[] r1 = this.mArray;
        if (r6 != null) goto L11;
        int r62 = 1;
    L5:
        if (r62 >= r0) goto L18;
        if (r1[r62] == null) goto L9;
        r62 = r62 + 2;
        goto L5
    L9:
        return r62 >> 1;
    L18:
        return -1;
    L11:
        int r3 = 1;
    L12:
        if (r3 >= r0) goto L24;
        if (r6.equals(r1[r3]) == true) goto L16;
        r3 = r3 + 2;
        goto L12
    L16:
        return r3 >> 1;
    L24:
        return -1;
    }

    public boolean containsValue(Object r1) {
        if (indexOfValue(r1) < 0) goto L5;
        return CONCURRENT_MODIFICATION_EXCEPTIONS;
    L5:
        return false;
    }

    @Nullable
    public V get(Object r2) {
        int r22 = indexOfKey(r2);
        if (r22 >= 0) goto L7;
        return null;
    L7:
        return (V) this.mArray[(r22 << 1) + 1];
    }

    public K keyAt(int r2) {
        return (K) this.mArray[r2 << 1];
    }

    public V valueAt(int r2) {
        return (V) this.mArray[(r2 << 1) + 1];
    }

    public V setValueAt(int r3, V r4) {
        int r32 = (r3 << 1) + 1;
        Object[] r0 = this.mArray;
        V r1 = (V) r0[r32];
        r0[r32] = r4;
        return r1;
    }

    public boolean isEmpty() {
        if (this.mSize > 0) goto L5;
        return CONCURRENT_MODIFICATION_EXCEPTIONS;
    L5:
        return false;
    }

    @Nullable
    public V put(K r10, V r11) {
        int r0 = this.mSize;
        if (r10 != null) goto L5;
        int r2 = indexOfNull();
        int r3 = 0;
    L6:
        if (r2 < 0) goto L9;
        int r102 = (r2 << 1) + 1;
        Object[] r02 = this.mArray;
        V r1 = (V) r02[r102];
        r02[r102] = r11;
        return r1;
    L9:
        int r22 = ~r2;
        if (r0 < this.mHashes.length) goto L24;
        int r4 = 4;
        if (r0 < 8) goto L14;
        r4 = (r0 >> 1) + r0;
    L16:
        int[] r5 = this.mHashes;
        Object[] r6 = this.mArray;
        allocArrays(r4);
        if (r0 != this.mSize) goto L23;
        int[] r42 = this.mHashes;
        if (r42.length <= 0) goto L21;
        System.arraycopy(r5, 0, r42, 0, r5.length);
        System.arraycopy(r6, 0, this.mArray, 0, r6.length);
    L21:
        freeArrays(r5, r6, r0);
        goto L24
    L23:
        throw new ConcurrentModificationException();
    L14:
        if (r0 < 4) goto L16;
        r4 = 8;
    L24:
        if (r22 >= r0) goto L26;
        int[] r12 = this.mHashes;
        int r43 = r22 + 1;
        System.arraycopy(r12, r22, r12, r43, r0 - r22);
        Object[] r13 = this.mArray;
        System.arraycopy(r13, r22 << 1, r13, r43 << 1, (this.mSize - r22) << 1);
    L26:
        int r14 = this.mSize;
        if (r0 != r14) goto L33;
        int[] r03 = this.mHashes;
        if (r22 >= r03.length) goto L33;
        r03[r22] = r3;
        Object[] r04 = this.mArray;
        int r23 = r22 << 1;
        r04[r23] = r10;
        r04[r23 + 1] = r11;
        this.mSize = r14 + 1;
        return null;
    L33:
        throw new ConcurrentModificationException();
    L5:
        int r24 = r10.hashCode();
        r3 = r24;
        r2 = indexOf(r10, r24);
        goto L6
    }

    public void putAll(@NonNull SimpleArrayMap<? extends K, ? extends V> r5) {
        int r0 = r5.mSize;
        ensureCapacity(this.mSize + r0);
        int r2 = 0;
        if (this.mSize != 0) goto L6;
        if (r0 <= 0) goto L8;
        System.arraycopy(r5.mHashes, 0, this.mHashes, 0, r0);
        System.arraycopy(r5.mArray, 0, this.mArray, 0, r0 << 1);
        this.mSize = r0;
        return;
    L8:
        return;
    L6:
        if (r2 >= r0) goto L11;
        put(r5.keyAt(r2), r5.valueAt(r2));
        r2 = r2 + 1;
        goto L6
    }

    @Nullable
    public V remove(Object r1) {
        int r12 = indexOfKey(r1);
        if (r12 >= 0) goto L5;
        return null;
    L5:
        return removeAt(r12);
    }

    public V removeAt(int r11) {
        Object[] r0 = this.mArray;
        int r1 = r11 << 1;
        V r2 = (V) r0[r1 + 1];
        int r3 = this.mSize;
        if (r3 > 1) goto L5;
        freeArrays(this.mHashes, r0, r3);
        this.mHashes = ContainerHelpers.EMPTY_INTS;
        this.mArray = ContainerHelpers.EMPTY_OBJECTS;
        int r02 = 0;
    L23:
        if (r3 != this.mSize) goto L27;
        this.mSize = r02;
        return r2;
    L27:
        throw new ConcurrentModificationException();
    L5:
        r02 = r3 - 1;
        int[] r6 = this.mHashes;
        int r8 = 8;
        if (r6.length > 8) goto L8;
    L19:
        if (r11 >= r02) goto L21;
        int[] r4 = this.mHashes;
        int r62 = r11 + 1;
        int r7 = r02 - r11;
        System.arraycopy(r4, r62, r4, r11, r7);
        Object[] r112 = this.mArray;
        System.arraycopy(r112, r62 << 1, r112, r1, r7 << 1);
    L21:
        Object[] r113 = this.mArray;
        int r12 = r02 << 1;
        r113[r12] = null;
        r113[r12 + 1] = null;
        goto L23
    L8:
        if (r3 >= (r6.length / 3)) goto L19;
        if (r3 <= 8) goto L11;
        r8 = r3 + (r3 >> 1);
    L11:
        int[] r63 = this.mHashes;
        Object[] r72 = this.mArray;
        allocArrays(r8);
        if (r3 != this.mSize) goto L18;
        if (r11 <= 0) goto L15;
        System.arraycopy(r63, 0, this.mHashes, 0, r11);
        System.arraycopy(r72, 0, this.mArray, 0, r1);
    L15:
        if (r11 >= r02) goto L23;
        int r42 = r11 + 1;
        int r9 = r02 - r11;
        System.arraycopy(r63, r42, this.mHashes, r11, r9);
        System.arraycopy(r72, r42 << 1, this.mArray, r1, r9 << 1);
        goto L23
    L18:
        throw new ConcurrentModificationException();
    }

    public int size() {
        return this.mSize;
    }

    public boolean equals(Object r7) {
        if (this != r7) goto L6;
        return CONCURRENT_MODIFICATION_EXCEPTIONS;
    L6:
        if ((r7 instanceof SimpleArrayMap) == false) goto L26;
        SimpleArrayMap r72 = (SimpleArrayMap) r7;
        if (size() == r72.size()) goto L10;
        return false;
    L10:
        int r1 = 0;
    L48:
        if (r1 >= this.mSize) goto L23;
        K r3 = keyAt(r1);     // Catch: Throwable -> L24
        V r4 = valueAt(r1);     // Catch: Throwable -> L24
        Object r5 = r72.get(r3);     // Catch: Throwable -> L24
        if (r4 != null) goto L20;
        if (r5 != null) goto L18;
        if (r72.containsKey(r3) == false) goto L18;
    L22:
        r1 = r1 + 1;
    L18:
        return false;
    L20:
        if (r4.equals(r5) == true) goto L22;
        return false;
    L23:
        return CONCURRENT_MODIFICATION_EXCEPTIONS;
    L24:
        return false;
    L26:
        if ((r7 instanceof Map) == false) goto L44;
        Map r73 = (Map) r7;
        if (size() == r73.size()) goto L30;
        return false;
    L30:
        int r12 = 0;
    L46:
        if (r12 >= this.mSize) goto L43;
        K r32 = keyAt(r12);     // Catch: Throwable -> L45
        V r42 = valueAt(r12);     // Catch: Throwable -> L45
        Object r52 = r73.get(r32);     // Catch: Throwable -> L45
        if (r42 != null) goto L40;
        if (r52 != null) goto L38;
        if (r73.containsKey(r32) == false) goto L38;
    L42:
        r12 = r12 + 1;
    L38:
        return false;
    L40:
        if (r42.equals(r52) == true) goto L42;
        return false;
    L43:
        return CONCURRENT_MODIFICATION_EXCEPTIONS;
    L44:
        return false;
    }

    public int hashCode() {
        int[] r0 = this.mHashes;
        Object[] r1 = this.mArray;
        int r2 = this.mSize;
        int r3 = 0;
        int r5 = 0;
        int r6 = 1;
    L3:
        if (r3 >= r2) goto L9;
        Object r7 = r1[r6];
        int r8 = r0[r3];
        if (r7 != null) goto L7;
        int r72 = 0;
    L8:
        r5 = r5 + (r72 ^ r8);
        r3 = r3 + 1;
        r6 = r6 + 2;
        goto L3
    L7:
        r72 = r7.hashCode();
        goto L8
    L9:
        return r5;
    }

    public String toString() {
        if (isEmpty() == false) goto L6;
        return "{}";
    L6:
        StringBuilder r0 = new StringBuilder(this.mSize * 28);
        r0.append('{');
        int r1 = 0;
    L8:
        if (r1 >= this.mSize) goto L20;
        if (r1 <= 0) goto L11;
        r0.append(", ");
    L11:
        K r2 = keyAt(r1);
        if (r2 == this) goto L14;
        r0.append(r2);
    L15:
        r0.append('=');
        V r22 = valueAt(r1);
        if (r22 == this) goto L18;
        r0.append(r22);
    L19:
        r1 = r1 + 1;
        goto L8
    L18:
        r0.append("(this Map)");
        goto L19
    L14:
        r0.append("(this Map)");
        goto L15
    L20:
        r0.append('}');
        return r0.toString();
    }
}
