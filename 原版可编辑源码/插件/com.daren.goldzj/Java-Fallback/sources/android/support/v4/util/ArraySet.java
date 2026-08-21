package android.support.v4.util;

import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.support.annotation.RestrictTo;
import java.lang.reflect.Array;
import java.util.Collection;
import java.util.Iterator;
import java.util.Set;

public final class ArraySet<E> implements Collection<E>, Set<E> {
    private static final int BASE_SIZE = 4;
    private static final int CACHE_SIZE = 10;
    private static final boolean DEBUG = false;
    private static final int[] INT = null;
    private static final Object[] OBJECT = null;
    private static final String TAG = "ArraySet";

    @Nullable
    private static Object[] sBaseCache;
    private static int sBaseCacheSize;

    @Nullable
    private static Object[] sTwiceBaseCache;
    private static int sTwiceBaseCacheSize;
    Object[] mArray;
    private MapCollections<E, E> mCollections;
    private int[] mHashes;
    int mSize;

    static {
        INT = new int[0];
        OBJECT = new Object[0];
    }

    private int indexOf(Object r5, int r6) {
        int r0 = this.mSize;
        if (r0 != 0) goto L6;
        return -1;
    L6:
        int r1 = ContainerHelpers.binarySearch(this.mHashes, r0, r6);
        if (r1 >= 0) goto L10;
        return r1;
    L10:
        if (r5.equals(this.mArray[r1]) == false) goto L12;
        return r1;
    L12:
        int r2 = r1 + 1;
    L13:
        if (r2 >= r0) goto L20;
        if (this.mHashes[r2] != r6) goto L20;
        if (r5.equals(this.mArray[r2]) == true) goto L18;
        r2 = r2 + 1;
        goto L13
    L18:
        return r2;
    L20:
        int r12 = r1 - 1;
    L21:
        if (r12 < 0) goto L29;
        if (this.mHashes[r12] != r6) goto L29;
        if (r5.equals(this.mArray[r12]) == true) goto L26;
        r12 = r12 - 1;
        goto L21
    L26:
        return r12;
    L29:
        return ~r2;
    }

    private int indexOfNull() {
        int r0 = this.mSize;
        if (r0 != 0) goto L6;
        return -1;
    L6:
        int r1 = ContainerHelpers.binarySearch(this.mHashes, r0, 0);
        if (r1 >= 0) goto L10;
        return r1;
    L10:
        if (this.mArray[r1] != null) goto L12;
        return r1;
    L12:
        int r2 = r1 + 1;
    L13:
        if (r2 >= r0) goto L20;
        if (this.mHashes[r2] != 0) goto L20;
        if (this.mArray[r2] == null) goto L18;
        r2 = r2 + 1;
        goto L13
    L18:
        return r2;
    L20:
        int r12 = r1 - 1;
    L21:
        if (r12 < 0) goto L29;
        if (this.mHashes[r12] != 0) goto L29;
        if (this.mArray[r12] == null) goto L26;
        r12 = r12 - 1;
        goto L21
    L26:
        return r12;
    L29:
        return ~r2;
    }

    private void allocArrays(int r6) {
        if (r6 != 8) goto L17;
        monitor-enter(ArraySet.class);
    L13:
        th = move-exception;
        throw th;
    L7:
        if (sTwiceBaseCache == null) goto L11;
        Object[] r62 = sTwiceBaseCache;     // Catch: Throwable -> L13
        this.mArray = r62;     // Catch: Throwable -> L13
        sTwiceBaseCache = (Object[]) r62[0];     // Catch: Throwable -> L13
        this.mHashes = (int[]) r62[1];     // Catch: Throwable -> L13
        r62[1] = null;     // Catch: Throwable -> L13
        r62[0] = null;     // Catch: Throwable -> L13
        sTwiceBaseCacheSize--;
        monitor-exit(ArraySet.class);     // Catch: Throwable -> L13
        return;
    L11:
        monitor-exit(ArraySet.class);     // Catch: Throwable -> L13
    L30:
        this.mHashes = new int[r6];
        this.mArray = new Object[r6];
        return;
    L17:
        if (r6 != 4) goto L30;
        monitor-enter(ArraySet.class);
    L27:
        th = move-exception;
        throw th;
    L21:
        if (sBaseCache == null) goto L25;
        Object[] r63 = sBaseCache;     // Catch: Throwable -> L27
        this.mArray = r63;     // Catch: Throwable -> L27
        sBaseCache = (Object[]) r63[0];     // Catch: Throwable -> L27
        this.mHashes = (int[]) r63[1];     // Catch: Throwable -> L27
        r63[1] = null;     // Catch: Throwable -> L27
        r63[0] = null;     // Catch: Throwable -> L27
        sBaseCacheSize--;
        monitor-exit(ArraySet.class);     // Catch: Throwable -> L27
        return;
    L25:
        monitor-exit(ArraySet.class);     // Catch: Throwable -> L27
        goto L30
    }

    private static void freeArrays(int[] r7, Object[] r8, int r9) {
        if (r7.length != 8) goto L18;
        monitor-enter(ArraySet.class);
    L14:
        th = move-exception;
        throw th;
    L7:
        if (sTwiceBaseCacheSize >= 10) goto L12;
        r8[0] = sTwiceBaseCache;     // Catch: Throwable -> L14
        r8[1] = r7;     // Catch: Throwable -> L14
        int r92 = r9 - 1;     // Catch: Throwable -> L14
    L9:
        if (r92 < 2) goto L11;
        r8[r92] = null;     // Catch: Throwable -> L14
        r92 = r92 - 1;
        goto L9
    L11:
        sTwiceBaseCache = r8;     // Catch: Throwable -> L14
        sTwiceBaseCacheSize++;
    L12:
        monitor-exit(ArraySet.class);     // Catch: Throwable -> L14
        return;
    L18:
        if (r7.length == 4) goto L20;
        return;
    L20:
        monitor-enter(ArraySet.class);
    L29:
        th = move-exception;
        throw th;
    L22:
        if (sBaseCacheSize >= 10) goto L27;
        r8[0] = sBaseCache;     // Catch: Throwable -> L29
        r8[1] = r7;     // Catch: Throwable -> L29
        int r93 = r9 - 1;     // Catch: Throwable -> L29
    L24:
        if (r93 < 2) goto L26;
        r8[r93] = null;     // Catch: Throwable -> L29
        r93 = r93 - 1;
        goto L24
    L26:
        sBaseCache = r8;     // Catch: Throwable -> L29
        sBaseCacheSize++;
    L27:
        monitor-exit(ArraySet.class);     // Catch: Throwable -> L29
    }

    public ArraySet() {
        this(0);
    }

    public ArraySet(int r1) {
        if (r1 != 0) goto L5;
        this.mHashes = INT;
        this.mArray = OBJECT;
    L6:
        this.mSize = 0;
        return;
    L5:
        allocArrays(r1);
        goto L6
    }

    /* JADX WARN: Multi-variable type inference failed */
    public ArraySet(@Nullable ArraySet<E> r1) {
        this();
        if (r1 == 0) goto L6;
        addAll(r1);
        return;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public ArraySet(@Nullable Collection<E> r1) {
        this();
        if (r1 == 0) goto L6;
        addAll(r1);
        return;
    }

    @Override
    public void clear() {
        int r0 = this.mSize;
        if (r0 == 0) goto L6;
        freeArrays(this.mHashes, this.mArray, r0);
        this.mHashes = INT;
        this.mArray = OBJECT;
        this.mSize = 0;
        return;
    }

    public void ensureCapacity(int r5) {
        int[] r0 = this.mHashes;
        if (r0.length >= r5) goto L9;
        Object[] r1 = this.mArray;
        allocArrays(r5);
        int r52 = this.mSize;
        if (r52 <= 0) goto L7;
        System.arraycopy(r0, 0, this.mHashes, 0, r52);
        System.arraycopy(r1, 0, this.mArray, 0, this.mSize);
    L7:
        freeArrays(r0, r1, this.mSize);
        return;
    }

    @Override
    public boolean contains(@Nullable Object r1) {
        if (indexOf(r1) < 0) goto L5;
        return true;
    L5:
        return false;
    }

    public int indexOf(@Nullable Object r2) {
        if (r2 != null) goto L5;
        return indexOfNull();
    L5:
        return indexOf(r2, r2.hashCode());
    }

    @Nullable
    public E valueAt(int r2) {
        return (E) this.mArray[r2];
    }

    @Override
    public boolean isEmpty() {
        if (this.mSize > 0) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    public boolean add(@Nullable E r9) {
        if (r9 != null) goto L5;
        int r1 = indexOfNull();
        int r2 = 0;
    L6:
        if (r1 < 0) goto L8;
        return false;
    L8:
        int r12 = ~r1;
        int r3 = this.mSize;
        if (r3 < this.mHashes.length) goto L19;
        int r4 = 4;
        if (r3 < 8) goto L13;
        r4 = (r3 >> 1) + r3;
    L15:
        int[] r32 = this.mHashes;
        Object[] r5 = this.mArray;
        allocArrays(r4);
        int[] r42 = this.mHashes;
        if (r42.length <= 0) goto L18;
        System.arraycopy(r32, 0, r42, 0, r32.length);
        System.arraycopy(r5, 0, this.mArray, 0, r5.length);
    L18:
        freeArrays(r32, r5, this.mSize);
        goto L19
    L13:
        if (r3 < 4) goto L15;
        r4 = 8;
    L19:
        int r0 = this.mSize;
        if (r12 >= r0) goto L22;
        int[] r33 = this.mHashes;
        int r43 = r12 + 1;
        System.arraycopy(r33, r12, r33, r43, r0 - r12);
        Object[] r02 = this.mArray;
        System.arraycopy(r02, r12, r02, r43, this.mSize - r12);
    L22:
        this.mHashes[r12] = r2;
        this.mArray[r12] = r9;
        this.mSize++;
        return true;
    L5:
        int r13 = r9.hashCode();
        r2 = r13;
        r1 = indexOf(r9, r13);
        goto L6
    }

    @RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
    public void append(E r5) {
        int r0 = this.mSize;
        if (r5 != null) goto L5;
        int r1 = 0;
    L6:
        int[] r2 = this.mHashes;
        if (r0 >= r2.length) goto L16;
        if (r0 > 0) goto L10;
    L13:
        this.mSize = r0 + 1;
        this.mHashes[r0] = r1;
        this.mArray[r0] = r5;
        return;
    L10:
        if (r2[r0 - 1] <= r1) goto L13;
        add(r5);
        return;
    L16:
        throw new IllegalStateException("Array is full");
    L5:
        r1 = r5.hashCode();
        goto L6
    }

    public void addAll(@NonNull ArraySet<? extends E> r5) {
        int r0 = r5.mSize;
        ensureCapacity(this.mSize + r0);
        int r2 = 0;
        if (this.mSize != 0) goto L6;
        if (r0 <= 0) goto L8;
        System.arraycopy(r5.mHashes, 0, this.mHashes, 0, r0);
        System.arraycopy(r5.mArray, 0, this.mArray, 0, r0);
        this.mSize = r0;
        return;
    L8:
        return;
    L6:
        if (r2 >= r0) goto L11;
        add(r5.valueAt(r2));
        r2 = r2 + 1;
        goto L6
    }

    @Override
    public boolean remove(@Nullable Object r1) {
        int r12 = indexOf(r1);
        if (r12 < 0) goto L6;
        removeAt(r12);
        return true;
    L6:
        return false;
    }

    public E removeAt(int r8) {
        Object[] r0 = this.mArray;
        E r1 = (E) r0[r8];
        int r2 = this.mSize;
        if (r2 > 1) goto L5;
        freeArrays(this.mHashes, r0, r2);
        this.mHashes = INT;
        this.mArray = OBJECT;
        this.mSize = 0;
    L21:
        return r1;
    L5:
        int[] r02 = this.mHashes;
        int r6 = 8;
        if (r02.length > 8) goto L8;
    L17:
        this.mSize--;
        int r03 = this.mSize;
        if (r8 >= r03) goto L20;
        int[] r22 = this.mHashes;
        int r3 = r8 + 1;
        System.arraycopy(r22, r3, r22, r8, r03 - r8);
        Object[] r04 = this.mArray;
        System.arraycopy(r04, r3, r04, r8, this.mSize - r8);
    L20:
        this.mArray[this.mSize] = null;
        goto L21
    L8:
        if (r2 >= (r02.length / 3)) goto L17;
        if (r2 <= 8) goto L11;
        r6 = r2 + (r2 >> 1);
    L11:
        int[] r05 = this.mHashes;
        Object[] r23 = this.mArray;
        allocArrays(r6);
        this.mSize--;
        if (r8 <= 0) goto L14;
        System.arraycopy(r05, 0, this.mHashes, 0, r8);
        System.arraycopy(r23, 0, this.mArray, 0, r8);
    L14:
        int r32 = this.mSize;
        if (r8 >= r32) goto L21;
        int r4 = r8 + 1;
        System.arraycopy(r05, r4, this.mHashes, r8, r32 - r8);
        System.arraycopy(r23, r4, this.mArray, r8, this.mSize - r8);
        goto L21
    }

    public boolean removeAll(@NonNull ArraySet<? extends E> r6) {
        int r0 = r6.mSize;
        int r1 = this.mSize;
        int r3 = 0;
    L3:
        if (r3 >= r0) goto L6;
        remove(r6.valueAt(r3));
        r3 = r3 + 1;
        goto L3
    L6:
        if (r1 == this.mSize) goto L10;
        return true;
    L10:
        return false;
    }

    @Override
    public int size() {
        return this.mSize;
    }

    @Override
    @NonNull
    public Object[] toArray() {
        int r0 = this.mSize;
        Object[] r1 = new Object[r0];
        System.arraycopy(this.mArray, 0, r1, 0, r0);
        return r1;
    }

    @Override
    @NonNull
    public <T> T[] toArray(@NonNull T[] r4) {
        if (r4.length >= this.mSize) goto L5;
        r4 = (T[]) ((Object[]) Array.newInstance(r4.getClass().getComponentType(), this.mSize));
    L5:
        T[] r42 = r4;
        System.arraycopy(this.mArray, 0, r42, 0, this.mSize);
        int r0 = r4.length;
        int r1 = this.mSize;
        if (r0 <= r1) goto L8;
        r4[r1] = null;
    L8:
        return r4;
    }

    @Override
    public boolean equals(Object r5) {
        if (this != r5) goto L6;
        return true;
    L6:
        if ((r5 instanceof Set) == false) goto L18;
        Set r52 = (Set) r5;
        if (size() == r52.size()) goto L10;
        return false;
    L10:
        int r1 = 0;
    L20:
        if (r1 >= this.mSize) goto L17;
        if (r52.contains(valueAt(r1)) == false) goto L15;
        r1 = r1 + 1;
        goto L20
    L15:
        return false;
    L17:
        return true;
    L18:
        return false;
    }

    @Override
    public int hashCode() {
        int[] r0 = this.mHashes;
        int r1 = this.mSize;
        int r2 = 0;
        int r3 = 0;
    L3:
        if (r2 >= r1) goto L5;
        r3 = r3 + r0[r2];
        r2 = r2 + 1;
        goto L3
    L5:
        return r3;
    }

    public String toString() {
        if (isEmpty() == false) goto L6;
        return "{}";
    L6:
        StringBuilder r0 = new StringBuilder(this.mSize * 14);
        r0.append('{');
        int r1 = 0;
    L8:
        if (r1 >= this.mSize) goto L16;
        if (r1 <= 0) goto L11;
        r0.append(", ");
    L11:
        E r2 = valueAt(r1);
        if (r2 == this) goto L14;
        r0.append(r2);
    L15:
        r1 = r1 + 1;
        goto L8
    L14:
        r0.append("(this Set)");
        goto L15
    L16:
        r0.append('}');
        return r0.toString();
    }

    private MapCollections<E, E> getCollection() {
        if (this.mCollections != null) goto L6;
        this.mCollections = new 1(this);
    L6:
        return this.mCollections;
    }

    @Override
    public Iterator<E> iterator() {
        return getCollection().getKeySet().iterator();
    }

    @Override
    public boolean containsAll(@NonNull Collection<?> r2) {
        Iterator<?> r22 = r2.iterator();
    L4:
        if (r22.hasNext() == false) goto L9;
        if (contains(r22.next()) == true) goto L4;
        return false;
    L9:
        return true;
    }

    @Override
    public boolean addAll(@NonNull Collection<? extends E> r3) {
        ensureCapacity(this.mSize + r3.size());
        Iterator<? extends E> r32 = r3.iterator();
        boolean r0 = false;
    L4:
        if (r32.hasNext() == false) goto L6;
        r0 = r0 | add(r32.next());
        goto L4
    L6:
        return r0;
    }

    @Override
    public boolean removeAll(@NonNull Collection<?> r3) {
        Iterator<?> r32 = r3.iterator();
        boolean r0 = false;
    L4:
        if (r32.hasNext() == false) goto L6;
        r0 = r0 | remove(r32.next());
        goto L4
    L6:
        return r0;
    }

    @Override
    public boolean retainAll(@NonNull Collection<?> r5) {
        int r0 = this.mSize - 1;
        boolean r2 = false;
    L3:
        if (r0 < 0) goto L8;
        if (r5.contains(this.mArray[r0]) == true) goto L7;
        removeAt(r0);
        r2 = true;
    L7:
        r0 = r0 - 1;
        goto L3
    L8:
        return r2;
    }
}
