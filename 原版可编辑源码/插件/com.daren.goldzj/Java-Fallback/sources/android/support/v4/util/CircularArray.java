package android.support.v4.util;

public final class CircularArray<E> {
    private int mCapacityBitmask;
    private E[] mElements;
    private int mHead;
    private int mTail;

    private void doubleCapacity() {
        E[] r0 = this.mElements;
        int r1 = r0.length;
        int r2 = this.mHead;
        int r3 = r1 - r2;
        int r4 = r1 << 1;
        if (r4 < 0) goto L7;
        Object[] r5 = new Object[r4];
        System.arraycopy(r0, r2, r5, 0, r3);
        System.arraycopy(this.mElements, 0, r5, r3, this.mHead);
        this.mElements = (E[]) r5;
        this.mHead = 0;
        this.mTail = r1;
        this.mCapacityBitmask = r4 - 1;
        return;
    L7:
        throw new RuntimeException("Max array capacity exceeded");
    }

    public CircularArray() {
        this(8);
    }

    public CircularArray(int r3) {
        if (r3 < 1) goto L14;
        if (r3 > 1073741824) goto L12;
        if (Integer.bitCount(r3) == 1) goto L9;
        r3 = Integer.highestOneBit(r3 - 1) << 1;
    L9:
        this.mCapacityBitmask = r3 - 1;
        this.mElements = (E[]) new Object[r3];
        return;
    L12:
        throw new IllegalArgumentException("capacity must be <= 2^30");
    L14:
        throw new IllegalArgumentException("capacity must be >= 1");
    }

    public void addFirst(E r3) {
        this.mHead = (this.mHead - 1) & this.mCapacityBitmask;
        E[] r0 = this.mElements;
        int r1 = this.mHead;
        r0[r1] = r3;
        if (r1 != this.mTail) goto L6;
        doubleCapacity();
        return;
    }

    public void addLast(E r3) {
        E[] r0 = this.mElements;
        int r1 = this.mTail;
        r0[r1] = r3;
        int r32 = this.mCapacityBitmask;
        this.mTail = r32 & (r1 + 1);
        if (this.mTail != this.mHead) goto L6;
        doubleCapacity();
        return;
    }

    public E popFirst() {
        int r0 = this.mHead;
        if (r0 == this.mTail) goto L7;
        E[] r1 = this.mElements;
        E r2 = r1[r0];
        r1[r0] = null;
        this.mHead = (r0 + 1) & this.mCapacityBitmask;
        return r2;
    L7:
        throw new ArrayIndexOutOfBoundsException();
    }

    public E popLast() {
        int r0 = this.mHead;
        int r1 = this.mTail;
        if (r0 == r1) goto L7;
        int r02 = this.mCapacityBitmask & (r1 - 1);
        E[] r12 = this.mElements;
        E r2 = r12[r02];
        r12[r02] = null;
        this.mTail = r02;
        return r2;
    L7:
        throw new ArrayIndexOutOfBoundsException();
    }

    public void clear() {
        removeFromStart(size());
    }

    public void removeFromStart(int r5) {
        if (r5 > 0) goto L5;
        return;
    L5:
        if (r5 > size()) goto L21;
        int r0 = this.mElements.length;
        int r1 = this.mHead;
        if (r5 >= (r0 - r1)) goto L9;
        r0 = r1 + r5;
    L9:
        int r12 = this.mHead;
    L11:
        if (r12 >= r0) goto L13;
        this.mElements[r12] = null;
        r12 = r12 + 1;
        goto L11
    L13:
        int r13 = this.mHead;
        int r02 = r0 - r13;
        int r52 = r5 - r02;
        int r14 = r13 + r02;
        this.mHead = this.mCapacityBitmask & r14;
        if (r52 <= 0) goto L24;
        int r03 = 0;
    L16:
        if (r03 >= r52) goto L18;
        this.mElements[r03] = null;
        r03 = r03 + 1;
        goto L16
    L18:
        this.mHead = r52;
        return;
    L24:
        return;
    L21:
        throw new ArrayIndexOutOfBoundsException();
    }

    public void removeFromEnd(int r5) {
        if (r5 > 0) goto L5;
        return;
    L5:
        if (r5 > size()) goto L22;
        int r0 = 0;
        int r1 = this.mTail;
        if (r5 >= r1) goto L9;
        r0 = r1 - r5;
    L9:
        int r12 = r0;
    L10:
        int r2 = this.mTail;
        if (r12 >= r2) goto L13;
        this.mElements[r12] = null;
        r12 = r12 + 1;
        goto L10
    L13:
        int r02 = r2 - r0;
        int r52 = r5 - r02;
        this.mTail = r2 - r02;
        if (r52 <= 0) goto L25;
        this.mTail = this.mElements.length;
        int r03 = this.mTail - r52;
        int r53 = r03;
    L17:
        if (r53 >= this.mTail) goto L19;
        this.mElements[r53] = null;
        r53 = r53 + 1;
        goto L17
    L19:
        this.mTail = r03;
        return;
    L25:
        return;
    L22:
        throw new ArrayIndexOutOfBoundsException();
    }

    public E getFirst() {
        int r0 = this.mHead;
        if (r0 == this.mTail) goto L7;
        return this.mElements[r0];
    L7:
        throw new ArrayIndexOutOfBoundsException();
    }

    public E getLast() {
        int r0 = this.mHead;
        int r1 = this.mTail;
        if (r0 == r1) goto L7;
        return this.mElements[(r1 - 1) & this.mCapacityBitmask];
    L7:
        throw new ArrayIndexOutOfBoundsException();
    }

    public E get(int r3) {
        if (r3 < 0) goto L8;
        if (r3 >= size()) goto L8;
        E[] r0 = this.mElements;
        int r1 = this.mHead + r3;
        return r0[this.mCapacityBitmask & r1];
    L8:
        throw new ArrayIndexOutOfBoundsException();
    }

    public int size() {
        return (this.mTail - this.mHead) & this.mCapacityBitmask;
    }

    public boolean isEmpty() {
        if (this.mHead != this.mTail) goto L5;
        return true;
    L5:
        return false;
    }
}
