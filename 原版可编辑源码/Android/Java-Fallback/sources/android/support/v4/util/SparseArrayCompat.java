package android.support.v4.util;

public class SparseArrayCompat<E> implements java.lang.Cloneable {
    private static final java.lang.Object DELETED = null;
    private boolean mGarbage;
    private int[] mKeys;
    private int mSize;
    private java.lang.Object[] mValues;

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            android.support.v4.util.SparseArrayCompat.DELETED = r0
            return
    }

    public SparseArrayCompat() {
            r1 = this;
            r0 = 10
            r1.<init>(r0)
            return
    }

    public SparseArrayCompat(int r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.mGarbage = r0
            if (r3 != 0) goto L11
            int[] r3 = android.support.v4.util.ContainerHelpers.EMPTY_INTS
            r2.mKeys = r3
            java.lang.Object[] r3 = android.support.v4.util.ContainerHelpers.EMPTY_OBJECTS
            r2.mValues = r3
            goto L1d
        L11:
            int r3 = android.support.v4.util.ContainerHelpers.idealIntArraySize(r3)
            int[] r1 = new int[r3]
            r2.mKeys = r1
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r2.mValues = r3
        L1d:
            r2.mSize = r0
            return
    }

    private void gc() {
            r8 = this;
            int r0 = r8.mSize
            int[] r1 = r8.mKeys
            java.lang.Object[] r2 = r8.mValues
            r3 = 0
            r4 = r3
            r5 = r4
        L9:
            if (r4 >= r0) goto L21
            r6 = r2[r4]
            java.lang.Object r7 = android.support.v4.util.SparseArrayCompat.DELETED
            if (r6 == r7) goto L1e
            if (r4 == r5) goto L1c
            r7 = r1[r4]
            r1[r5] = r7
            r2[r5] = r6
            r6 = 0
            r2[r4] = r6
        L1c:
            int r5 = r5 + 1
        L1e:
            int r4 = r4 + 1
            goto L9
        L21:
            r8.mGarbage = r3
            r8.mSize = r5
            return
    }

    public void append(int r7, E r8) {
            r6 = this;
            int r0 = r6.mSize
            if (r0 == 0) goto L10
            int[] r1 = r6.mKeys
            int r0 = r0 + (-1)
            r0 = r1[r0]
            if (r7 > r0) goto L10
            r6.put(r7, r8)
            return
        L10:
            boolean r0 = r6.mGarbage
            if (r0 == 0) goto L1e
            int r0 = r6.mSize
            int[] r1 = r6.mKeys
            int r1 = r1.length
            if (r0 < r1) goto L1e
            r6.gc()
        L1e:
            int r0 = r6.mSize
            int[] r1 = r6.mKeys
            int r1 = r1.length
            if (r0 < r1) goto L40
            int r1 = r0 + 1
            int r1 = android.support.v4.util.ContainerHelpers.idealIntArraySize(r1)
            int[] r2 = new int[r1]
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int[] r3 = r6.mKeys
            int r4 = r3.length
            r5 = 0
            java.lang.System.arraycopy(r3, r5, r2, r5, r4)
            java.lang.Object[] r3 = r6.mValues
            int r4 = r3.length
            java.lang.System.arraycopy(r3, r5, r1, r5, r4)
            r6.mKeys = r2
            r6.mValues = r1
        L40:
            int[] r1 = r6.mKeys
            r1[r0] = r7
            java.lang.Object[] r7 = r6.mValues
            r7[r0] = r8
            int r0 = r0 + 1
            r6.mSize = r0
            return
    }

    public void clear() {
            r5 = this;
            int r0 = r5.mSize
            java.lang.Object[] r1 = r5.mValues
            r2 = 0
            r3 = r2
        L6:
            if (r3 >= r0) goto Le
            r4 = 0
            r1[r3] = r4
            int r3 = r3 + 1
            goto L6
        Le:
            r5.mSize = r2
            r5.mGarbage = r2
            return
    }

    public android.support.v4.util.SparseArrayCompat<E> clone() {
            r2 = this;
            java.lang.Object r0 = super.clone()     // Catch: java.lang.CloneNotSupportedException -> L1b
            android.support.v4.util.SparseArrayCompat r0 = (android.support.v4.util.SparseArrayCompat) r0     // Catch: java.lang.CloneNotSupportedException -> L1b
            int[] r1 = r2.mKeys     // Catch: java.lang.CloneNotSupportedException -> L1b
            java.lang.Object r1 = r1.clone()     // Catch: java.lang.CloneNotSupportedException -> L1b
            int[] r1 = (int[]) r1     // Catch: java.lang.CloneNotSupportedException -> L1b
            r0.mKeys = r1     // Catch: java.lang.CloneNotSupportedException -> L1b
            java.lang.Object[] r1 = r2.mValues     // Catch: java.lang.CloneNotSupportedException -> L1b
            java.lang.Object r1 = r1.clone()     // Catch: java.lang.CloneNotSupportedException -> L1b
            java.lang.Object[] r1 = (java.lang.Object[]) r1     // Catch: java.lang.CloneNotSupportedException -> L1b
            r0.mValues = r1     // Catch: java.lang.CloneNotSupportedException -> L1b
            return r0
        L1b:
            r0 = move-exception
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>(r0)
            throw r1
    }

    public java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            android.support.v4.util.SparseArrayCompat r0 = r1.clone()
            return r0
    }

    public boolean containsKey(int r1) {
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

    public boolean containsValue(E r1) {
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

    public void delete(int r4) {
            r3 = this;
            int[] r0 = r3.mKeys
            int r1 = r3.mSize
            int r4 = android.support.v4.util.ContainerHelpers.binarySearch(r0, r1, r4)
            if (r4 < 0) goto L17
            java.lang.Object[] r0 = r3.mValues
            r1 = r0[r4]
            java.lang.Object r2 = android.support.v4.util.SparseArrayCompat.DELETED
            if (r1 == r2) goto L17
            r0[r4] = r2
            r4 = 1
            r3.mGarbage = r4
        L17:
            return
    }

    public E get(int r2) {
            r1 = this;
            r0 = 0
            java.lang.Object r2 = r1.get(r2, r0)
            return r2
    }

    public E get(int r4, E r5) {
            r3 = this;
            int[] r0 = r3.mKeys
            int r1 = r3.mSize
            int r4 = android.support.v4.util.ContainerHelpers.binarySearch(r0, r1, r4)
            if (r4 < 0) goto L16
            java.lang.Object[] r0 = r3.mValues
            r1 = r0[r4]
            java.lang.Object r2 = android.support.v4.util.SparseArrayCompat.DELETED
            if (r1 != r2) goto L13
            goto L16
        L13:
            r4 = r0[r4]
            return r4
        L16:
            return r5
    }

    public int indexOfKey(int r3) {
            r2 = this;
            boolean r0 = r2.mGarbage
            if (r0 == 0) goto L7
            r2.gc()
        L7:
            int[] r0 = r2.mKeys
            int r1 = r2.mSize
            int r3 = android.support.v4.util.ContainerHelpers.binarySearch(r0, r1, r3)
            return r3
    }

    public int indexOfValue(E r3) {
            r2 = this;
            boolean r0 = r2.mGarbage
            if (r0 == 0) goto L7
            r2.gc()
        L7:
            r0 = 0
        L8:
            int r1 = r2.mSize
            if (r0 >= r1) goto L16
            java.lang.Object[] r1 = r2.mValues
            r1 = r1[r0]
            if (r1 != r3) goto L13
            return r0
        L13:
            int r0 = r0 + 1
            goto L8
        L16:
            r3 = -1
            return r3
    }

    public boolean isEmpty() {
            r1 = this;
            int r0 = r1.size()
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public int keyAt(int r2) {
            r1 = this;
            boolean r0 = r1.mGarbage
            if (r0 == 0) goto L7
            r1.gc()
        L7:
            int[] r0 = r1.mKeys
            r2 = r0[r2]
            return r2
    }

    public void put(int r7, E r8) {
            r6 = this;
            int[] r0 = r6.mKeys
            int r1 = r6.mSize
            int r0 = android.support.v4.util.ContainerHelpers.binarySearch(r0, r1, r7)
            if (r0 < 0) goto Lf
            java.lang.Object[] r7 = r6.mValues
            r7[r0] = r8
            goto L80
        Lf:
            int r0 = ~r0
            int r1 = r6.mSize
            if (r0 >= r1) goto L23
            java.lang.Object[] r1 = r6.mValues
            r2 = r1[r0]
            java.lang.Object r3 = android.support.v4.util.SparseArrayCompat.DELETED
            if (r2 != r3) goto L23
            int[] r2 = r6.mKeys
            r2[r0] = r7
            r1[r0] = r8
            return
        L23:
            boolean r1 = r6.mGarbage
            if (r1 == 0) goto L3a
            int r1 = r6.mSize
            int[] r2 = r6.mKeys
            int r2 = r2.length
            if (r1 < r2) goto L3a
            r6.gc()
            int[] r0 = r6.mKeys
            int r1 = r6.mSize
            int r0 = android.support.v4.util.ContainerHelpers.binarySearch(r0, r1, r7)
            int r0 = ~r0
        L3a:
            int r1 = r6.mSize
            int[] r2 = r6.mKeys
            int r2 = r2.length
            if (r1 < r2) goto L5c
            int r1 = r1 + 1
            int r1 = android.support.v4.util.ContainerHelpers.idealIntArraySize(r1)
            int[] r2 = new int[r1]
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int[] r3 = r6.mKeys
            int r4 = r3.length
            r5 = 0
            java.lang.System.arraycopy(r3, r5, r2, r5, r4)
            java.lang.Object[] r3 = r6.mValues
            int r4 = r3.length
            java.lang.System.arraycopy(r3, r5, r1, r5, r4)
            r6.mKeys = r2
            r6.mValues = r1
        L5c:
            int r1 = r6.mSize
            int r2 = r1 - r0
            if (r2 == 0) goto L72
            int[] r2 = r6.mKeys
            int r3 = r0 + 1
            int r1 = r1 - r0
            java.lang.System.arraycopy(r2, r0, r2, r3, r1)
            java.lang.Object[] r1 = r6.mValues
            int r2 = r6.mSize
            int r2 = r2 - r0
            java.lang.System.arraycopy(r1, r0, r1, r3, r2)
        L72:
            int[] r1 = r6.mKeys
            r1[r0] = r7
            java.lang.Object[] r7 = r6.mValues
            r7[r0] = r8
            int r7 = r6.mSize
            int r7 = r7 + 1
            r6.mSize = r7
        L80:
            return
    }

    public void putAll(android.support.v4.util.SparseArrayCompat<? extends E> r5) {
            r4 = this;
            int r0 = r5.size()
            r1 = 0
        L5:
            if (r1 >= r0) goto L15
            int r2 = r5.keyAt(r1)
            java.lang.Object r3 = r5.valueAt(r1)
            r4.put(r2, r3)
            int r1 = r1 + 1
            goto L5
        L15:
            return
    }

    public void remove(int r1) {
            r0 = this;
            r0.delete(r1)
            return
    }

    public void removeAt(int r4) {
            r3 = this;
            java.lang.Object[] r0 = r3.mValues
            r1 = r0[r4]
            java.lang.Object r2 = android.support.v4.util.SparseArrayCompat.DELETED
            if (r1 == r2) goto Ld
            r0[r4] = r2
            r4 = 1
            r3.mGarbage = r4
        Ld:
            return
    }

    public void removeAtRange(int r2, int r3) {
            r1 = this;
            int r0 = r1.mSize
            int r3 = r3 + r2
            int r3 = java.lang.Math.min(r0, r3)
        L7:
            if (r2 >= r3) goto Lf
            r1.removeAt(r2)
            int r2 = r2 + 1
            goto L7
        Lf:
            return
    }

    public void setValueAt(int r2, E r3) {
            r1 = this;
            boolean r0 = r1.mGarbage
            if (r0 == 0) goto L7
            r1.gc()
        L7:
            java.lang.Object[] r0 = r1.mValues
            r0[r2] = r3
            return
    }

    public int size() {
            r1 = this;
            boolean r0 = r1.mGarbage
            if (r0 == 0) goto L7
            r1.gc()
        L7:
            int r0 = r1.mSize
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            int r0 = r3.size()
            if (r0 > 0) goto L9
            java.lang.String r0 = "{}"
            return r0
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            int r1 = r3.mSize
            int r1 = r1 * 28
            r0.<init>(r1)
            r1 = 123(0x7b, float:1.72E-43)
            r0.append(r1)
            r1 = 0
        L18:
            int r2 = r3.mSize
            if (r1 >= r2) goto L41
            if (r1 <= 0) goto L23
            java.lang.String r2 = ", "
            r0.append(r2)
        L23:
            int r2 = r3.keyAt(r1)
            r0.append(r2)
            r2 = 61
            r0.append(r2)
            java.lang.Object r2 = r3.valueAt(r1)
            if (r2 == r3) goto L39
            r0.append(r2)
            goto L3e
        L39:
            java.lang.String r2 = "(this Map)"
            r0.append(r2)
        L3e:
            int r1 = r1 + 1
            goto L18
        L41:
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public E valueAt(int r2) {
            r1 = this;
            boolean r0 = r1.mGarbage
            if (r0 == 0) goto L7
            r1.gc()
        L7:
            java.lang.Object[] r0 = r1.mValues
            r2 = r0[r2]
            return r2
    }
}
