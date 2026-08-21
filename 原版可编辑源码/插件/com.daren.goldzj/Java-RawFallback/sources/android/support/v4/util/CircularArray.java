package android.support.v4.util;

public final class CircularArray<E> {
    private int mCapacityBitmask;
    private E[] mElements;
    private int mHead;
    private int mTail;

    public CircularArray() {
            r1 = this;
            r0 = 8
            r1.<init>(r0)
            return
    }

    public CircularArray(int r3) {
            r2 = this;
            r2.<init>()
            r0 = 1
            if (r3 < r0) goto L2a
            r1 = 1073741824(0x40000000, float:2.0)
            if (r3 > r1) goto L22
            int r1 = java.lang.Integer.bitCount(r3)
            if (r1 == r0) goto L17
            int r3 = r3 + (-1)
            int r3 = java.lang.Integer.highestOneBit(r3)
            int r3 = r3 << r0
        L17:
            int r0 = r3 + (-1)
            r2.mCapacityBitmask = r0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            r2.mElements = r3
            return
        L22:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "capacity must be <= 2^30"
            r3.<init>(r0)
            throw r3
        L2a:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "capacity must be >= 1"
            r3.<init>(r0)
            throw r3
    }

    private void doubleCapacity() {
            r7 = this;
            E[] r0 = r7.mElements
            int r1 = r0.length
            int r2 = r7.mHead
            int r3 = r1 - r2
            int r4 = r1 << 1
            if (r4 < 0) goto L25
            java.lang.Object[] r5 = new java.lang.Object[r4]
            r6 = 0
            java.lang.System.arraycopy(r0, r2, r5, r6, r3)
            E[] r0 = r7.mElements
            int r2 = r7.mHead
            java.lang.System.arraycopy(r0, r6, r5, r3, r2)
            java.lang.Object[] r5 = (java.lang.Object[]) r5
            r7.mElements = r5
            r7.mHead = r6
            r7.mTail = r1
            int r4 = r4 + (-1)
            r7.mCapacityBitmask = r4
            return
        L25:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Max array capacity exceeded"
            r0.<init>(r1)
            throw r0
    }

    public void addFirst(E r3) {
            r2 = this;
            int r0 = r2.mHead
            int r0 = r0 + (-1)
            int r1 = r2.mCapacityBitmask
            r0 = r0 & r1
            r2.mHead = r0
            E[] r0 = r2.mElements
            int r1 = r2.mHead
            r0[r1] = r3
            int r3 = r2.mTail
            if (r1 != r3) goto L16
            r2.doubleCapacity()
        L16:
            return
    }

    public void addLast(E r3) {
            r2 = this;
            E[] r0 = r2.mElements
            int r1 = r2.mTail
            r0[r1] = r3
            int r1 = r1 + 1
            int r3 = r2.mCapacityBitmask
            r3 = r3 & r1
            r2.mTail = r3
            int r3 = r2.mTail
            int r0 = r2.mHead
            if (r3 != r0) goto L16
            r2.doubleCapacity()
        L16:
            return
    }

    public void clear() {
            r1 = this;
            int r0 = r1.size()
            r1.removeFromStart(r0)
            return
    }

    public E get(int r3) {
            r2 = this;
            if (r3 < 0) goto L13
            int r0 = r2.size()
            if (r3 >= r0) goto L13
            E[] r0 = r2.mElements
            int r1 = r2.mHead
            int r1 = r1 + r3
            int r3 = r2.mCapacityBitmask
            r3 = r3 & r1
            r3 = r0[r3]
            return r3
        L13:
            java.lang.ArrayIndexOutOfBoundsException r3 = new java.lang.ArrayIndexOutOfBoundsException
            r3.<init>()
            throw r3
    }

    public E getFirst() {
            r2 = this;
            int r0 = r2.mHead
            int r1 = r2.mTail
            if (r0 == r1) goto Lb
            E[] r1 = r2.mElements
            r0 = r1[r0]
            return r0
        Lb:
            java.lang.ArrayIndexOutOfBoundsException r0 = new java.lang.ArrayIndexOutOfBoundsException
            r0.<init>()
            throw r0
    }

    public E getLast() {
            r3 = this;
            int r0 = r3.mHead
            int r1 = r3.mTail
            if (r0 == r1) goto L10
            E[] r0 = r3.mElements
            int r1 = r1 + (-1)
            int r2 = r3.mCapacityBitmask
            r1 = r1 & r2
            r0 = r0[r1]
            return r0
        L10:
            java.lang.ArrayIndexOutOfBoundsException r0 = new java.lang.ArrayIndexOutOfBoundsException
            r0.<init>()
            throw r0
    }

    public boolean isEmpty() {
            r2 = this;
            int r0 = r2.mHead
            int r1 = r2.mTail
            if (r0 != r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public E popFirst() {
            r4 = this;
            int r0 = r4.mHead
            int r1 = r4.mTail
            if (r0 == r1) goto L15
            E[] r1 = r4.mElements
            r2 = r1[r0]
            r3 = 0
            r1[r0] = r3
            int r0 = r0 + 1
            int r1 = r4.mCapacityBitmask
            r0 = r0 & r1
            r4.mHead = r0
            return r2
        L15:
            java.lang.ArrayIndexOutOfBoundsException r0 = new java.lang.ArrayIndexOutOfBoundsException
            r0.<init>()
            throw r0
    }

    public E popLast() {
            r4 = this;
            int r0 = r4.mHead
            int r1 = r4.mTail
            if (r0 == r1) goto L15
            int r1 = r1 + (-1)
            int r0 = r4.mCapacityBitmask
            r0 = r0 & r1
            E[] r1 = r4.mElements
            r2 = r1[r0]
            r3 = 0
            r1[r0] = r3
            r4.mTail = r0
            return r2
        L15:
            java.lang.ArrayIndexOutOfBoundsException r0 = new java.lang.ArrayIndexOutOfBoundsException
            r0.<init>()
            throw r0
    }

    public void removeFromEnd(int r5) {
            r4 = this;
            if (r5 > 0) goto L3
            return
        L3:
            int r0 = r4.size()
            if (r5 > r0) goto L3c
            r0 = 0
            int r1 = r4.mTail
            if (r5 >= r1) goto L10
            int r0 = r1 - r5
        L10:
            r1 = r0
        L11:
            int r2 = r4.mTail
            r3 = 0
            if (r1 >= r2) goto L1d
            E[] r2 = r4.mElements
            r2[r1] = r3
            int r1 = r1 + 1
            goto L11
        L1d:
            int r0 = r2 - r0
            int r5 = r5 - r0
            int r2 = r2 - r0
            r4.mTail = r2
            if (r5 <= 0) goto L3b
            E[] r0 = r4.mElements
            int r0 = r0.length
            r4.mTail = r0
            int r0 = r4.mTail
            int r0 = r0 - r5
            r5 = r0
        L2e:
            int r1 = r4.mTail
            if (r5 >= r1) goto L39
            E[] r1 = r4.mElements
            r1[r5] = r3
            int r5 = r5 + 1
            goto L2e
        L39:
            r4.mTail = r0
        L3b:
            return
        L3c:
            java.lang.ArrayIndexOutOfBoundsException r5 = new java.lang.ArrayIndexOutOfBoundsException
            r5.<init>()
            throw r5
    }

    public void removeFromStart(int r5) {
            r4 = this;
            if (r5 > 0) goto L3
            return
        L3:
            int r0 = r4.size()
            if (r5 > r0) goto L39
            E[] r0 = r4.mElements
            int r0 = r0.length
            int r1 = r4.mHead
            int r2 = r0 - r1
            if (r5 >= r2) goto L14
            int r0 = r1 + r5
        L14:
            int r1 = r4.mHead
        L16:
            r2 = 0
            if (r1 >= r0) goto L20
            E[] r3 = r4.mElements
            r3[r1] = r2
            int r1 = r1 + 1
            goto L16
        L20:
            int r1 = r4.mHead
            int r0 = r0 - r1
            int r5 = r5 - r0
            int r1 = r1 + r0
            int r0 = r4.mCapacityBitmask
            r0 = r0 & r1
            r4.mHead = r0
            if (r5 <= 0) goto L38
            r0 = 0
        L2d:
            if (r0 >= r5) goto L36
            E[] r1 = r4.mElements
            r1[r0] = r2
            int r0 = r0 + 1
            goto L2d
        L36:
            r4.mHead = r5
        L38:
            return
        L39:
            java.lang.ArrayIndexOutOfBoundsException r5 = new java.lang.ArrayIndexOutOfBoundsException
            r5.<init>()
            throw r5
    }

    public int size() {
            r2 = this;
            int r0 = r2.mTail
            int r1 = r2.mHead
            int r0 = r0 - r1
            int r1 = r2.mCapacityBitmask
            r0 = r0 & r1
            return r0
    }
}
