package android.support.v7.util;

public class SortedList<T> {
    private static final int CAPACITY_GROWTH = 10;
    private static final int DELETION = 2;
    private static final int INSERTION = 1;
    public static final int INVALID_POSITION = -1;
    private static final int LOOKUP = 4;
    private static final int MIN_CAPACITY = 10;
    private android.support.v7.util.SortedList.BatchedCallback mBatchedCallback;
    private android.support.v7.util.SortedList.Callback mCallback;
    T[] mData;
    private int mNewDataStart;
    private T[] mOldData;
    private int mOldDataSize;
    private int mOldDataStart;
    private int mSize;
    private final java.lang.Class<T> mTClass;

    public static class BatchedCallback<T2> extends android.support.v7.util.SortedList.Callback<T2> {
        private final android.support.v7.util.BatchingListUpdateCallback mBatchingListUpdateCallback;
        final android.support.v7.util.SortedList.Callback<T2> mWrappedCallback;

        public BatchedCallback(android.support.v7.util.SortedList.Callback<T2> r2) {
                r1 = this;
                r1.<init>()
                r1.mWrappedCallback = r2
                android.support.v7.util.BatchingListUpdateCallback r0 = new android.support.v7.util.BatchingListUpdateCallback
                r0.<init>(r2)
                r1.mBatchingListUpdateCallback = r0
                return
        }

        @Override
        public boolean areContentsTheSame(T2 r2, T2 r3) {
                r1 = this;
                android.support.v7.util.SortedList$Callback<T2> r0 = r1.mWrappedCallback
                boolean r2 = r0.areContentsTheSame(r2, r3)
                return r2
        }

        @Override
        public boolean areItemsTheSame(T2 r2, T2 r3) {
                r1 = this;
                android.support.v7.util.SortedList$Callback<T2> r0 = r1.mWrappedCallback
                boolean r2 = r0.areItemsTheSame(r2, r3)
                return r2
        }

        @Override
        public int compare(T2 r2, T2 r3) {
                r1 = this;
                android.support.v7.util.SortedList$Callback<T2> r0 = r1.mWrappedCallback
                int r2 = r0.compare(r2, r3)
                return r2
        }

        public void dispatchLastEvent() {
                r1 = this;
                android.support.v7.util.BatchingListUpdateCallback r0 = r1.mBatchingListUpdateCallback
                r0.dispatchLastEvent()
                return
        }

        @Override
        public java.lang.Object getChangePayload(T2 r2, T2 r3) {
                r1 = this;
                android.support.v7.util.SortedList$Callback<T2> r0 = r1.mWrappedCallback
                java.lang.Object r2 = r0.getChangePayload(r2, r3)
                return r2
        }

        @Override
        public void onChanged(int r3, int r4) {
                r2 = this;
                android.support.v7.util.BatchingListUpdateCallback r0 = r2.mBatchingListUpdateCallback
                r1 = 0
                r0.onChanged(r3, r4, r1)
                return
        }

        @Override
        public void onChanged(int r2, int r3, java.lang.Object r4) {
                r1 = this;
                android.support.v7.util.BatchingListUpdateCallback r0 = r1.mBatchingListUpdateCallback
                r0.onChanged(r2, r3, r4)
                return
        }

        @Override
        public void onInserted(int r2, int r3) {
                r1 = this;
                android.support.v7.util.BatchingListUpdateCallback r0 = r1.mBatchingListUpdateCallback
                r0.onInserted(r2, r3)
                return
        }

        @Override
        public void onMoved(int r2, int r3) {
                r1 = this;
                android.support.v7.util.BatchingListUpdateCallback r0 = r1.mBatchingListUpdateCallback
                r0.onMoved(r2, r3)
                return
        }

        @Override
        public void onRemoved(int r2, int r3) {
                r1 = this;
                android.support.v7.util.BatchingListUpdateCallback r0 = r1.mBatchingListUpdateCallback
                r0.onRemoved(r2, r3)
                return
        }
    }

    public static abstract class Callback<T2> implements java.util.Comparator<T2>, android.support.v7.util.ListUpdateCallback {
        public Callback() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract boolean areContentsTheSame(T2 r1, T2 r2);

        public abstract boolean areItemsTheSame(T2 r1, T2 r2);

        @Override
        public abstract int compare(T2 r1, T2 r2);

        public java.lang.Object getChangePayload(T2 r1, T2 r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        public abstract void onChanged(int r1, int r2);

        public void onChanged(int r1, int r2, java.lang.Object r3) {
                r0 = this;
                r0.onChanged(r1, r2)
                return
        }
    }

    public SortedList(java.lang.Class<T> r2, android.support.v7.util.SortedList.Callback<T> r3) {
            r1 = this;
            r0 = 10
            r1.<init>(r2, r3, r0)
            return
    }

    public SortedList(java.lang.Class<T> r1, android.support.v7.util.SortedList.Callback<T> r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.mTClass = r1
            java.lang.Object r1 = java.lang.reflect.Array.newInstance(r1, r3)
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            r0.mData = r1
            r0.mCallback = r2
            r1 = 0
            r0.mSize = r1
            return
    }

    private int add(T r7, boolean r8) {
            r6 = this;
            T[] r2 = r6.mData
            int r4 = r6.mSize
            r3 = 0
            r5 = 1
            r0 = r6
            r1 = r7
            int r0 = r0.findIndexOf(r1, r2, r3, r4, r5)
            r1 = 1
            r2 = -1
            if (r0 != r2) goto L12
            r0 = 0
            goto L3d
        L12:
            int r2 = r6.mSize
            if (r0 >= r2) goto L3d
            T[] r2 = r6.mData
            r2 = r2[r0]
            android.support.v7.util.SortedList$Callback r3 = r6.mCallback
            boolean r3 = r3.areItemsTheSame(r2, r7)
            if (r3 == 0) goto L3d
            android.support.v7.util.SortedList$Callback r8 = r6.mCallback
            boolean r8 = r8.areContentsTheSame(r2, r7)
            if (r8 == 0) goto L2f
            T[] r8 = r6.mData
            r8[r0] = r7
            return r0
        L2f:
            T[] r8 = r6.mData
            r8[r0] = r7
            android.support.v7.util.SortedList$Callback r8 = r6.mCallback
            java.lang.Object r7 = r8.getChangePayload(r2, r7)
            r8.onChanged(r0, r1, r7)
            return r0
        L3d:
            r6.addToData(r0, r7)
            if (r8 == 0) goto L47
            android.support.v7.util.SortedList$Callback r7 = r6.mCallback
            r7.onInserted(r0, r1)
        L47:
            return r0
    }

    private void addAllInternal(T[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 1
            if (r0 >= r1) goto L5
            return
        L5:
            int r0 = r2.sortAndDedup(r3)
            int r1 = r2.mSize
            if (r1 != 0) goto L18
            r2.mData = r3
            r2.mSize = r0
            android.support.v7.util.SortedList$Callback r3 = r2.mCallback
            r1 = 0
            r3.onInserted(r1, r0)
            goto L1b
        L18:
            r2.merge(r3, r0)
        L1b:
            return
    }

    private void addToData(int r4, T r5) {
            r3 = this;
            int r0 = r3.mSize
            if (r4 > r0) goto L3c
            T[] r1 = r3.mData
            int r2 = r1.length
            if (r0 != r2) goto L2b
            java.lang.Class<T> r0 = r3.mTClass
            int r1 = r1.length
            int r1 = r1 + 10
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r1)
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            T[] r1 = r3.mData
            r2 = 0
            java.lang.System.arraycopy(r1, r2, r0, r2, r4)
            r0[r4] = r5
            T[] r5 = r3.mData
            int r1 = r4 + 1
            int r2 = r3.mSize
            int r2 = r2 - r4
            java.lang.System.arraycopy(r5, r4, r0, r1, r2)
            r3.mData = r0
            goto L35
        L2b:
            int r2 = r4 + 1
            int r0 = r0 - r4
            java.lang.System.arraycopy(r1, r4, r1, r2, r0)
            T[] r0 = r3.mData
            r0[r4] = r5
        L35:
            int r4 = r3.mSize
            int r4 = r4 + 1
            r3.mSize = r4
            return
        L3c:
            java.lang.IndexOutOfBoundsException r5 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "cannot add item to "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = " because size is "
            r0.append(r4)
            int r4 = r3.mSize
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r5.<init>(r4)
            throw r5
    }

    private T[] copyArray(T[] r4) {
            r3 = this;
            java.lang.Class<T> r0 = r3.mTClass
            int r1 = r4.length
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r1)
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            int r1 = r4.length
            r2 = 0
            java.lang.System.arraycopy(r4, r2, r0, r2, r1)
            return r0
    }

    private int findIndexOf(T r6, T[] r7, int r8, int r9, int r10) {
            r5 = this;
        L0:
            r0 = -1
            r1 = 1
            if (r8 >= r9) goto L2f
            int r2 = r8 + r9
            int r2 = r2 / 2
            r3 = r7[r2]
            android.support.v7.util.SortedList$Callback r4 = r5.mCallback
            int r4 = r4.compare(r3, r6)
            if (r4 >= 0) goto L16
            int r2 = r2 + 1
            r8 = r2
            goto L0
        L16:
            if (r4 != 0) goto L2d
            android.support.v7.util.SortedList$Callback r7 = r5.mCallback
            boolean r7 = r7.areItemsTheSame(r3, r6)
            if (r7 == 0) goto L21
            return r2
        L21:
            int r6 = r5.linearEqualitySearch(r6, r2, r8, r9)
            if (r10 != r1) goto L2c
            if (r6 != r0) goto L2a
            goto L2b
        L2a:
            r2 = r6
        L2b:
            return r2
        L2c:
            return r6
        L2d:
            r9 = r2
            goto L0
        L2f:
            if (r10 != r1) goto L32
            goto L33
        L32:
            r8 = r0
        L33:
            return r8
    }

    private int findSameItem(T r3, T[] r4, int r5, int r6) {
            r2 = this;
        L0:
            if (r5 >= r6) goto L10
            android.support.v7.util.SortedList$Callback r0 = r2.mCallback
            r1 = r4[r5]
            boolean r0 = r0.areItemsTheSame(r1, r3)
            if (r0 == 0) goto Ld
            return r5
        Ld:
            int r5 = r5 + 1
            goto L0
        L10:
            r3 = -1
            return r3
    }

    private int linearEqualitySearch(T r4, int r5, int r6, int r7) {
            r3 = this;
            int r0 = r5 + (-1)
        L2:
            if (r0 < r6) goto L1d
            T[] r1 = r3.mData
            r1 = r1[r0]
            android.support.v7.util.SortedList$Callback r2 = r3.mCallback
            int r2 = r2.compare(r1, r4)
            if (r2 == 0) goto L11
            goto L1d
        L11:
            android.support.v7.util.SortedList$Callback r2 = r3.mCallback
            boolean r1 = r2.areItemsTheSame(r1, r4)
            if (r1 == 0) goto L1a
            return r0
        L1a:
            int r0 = r0 + (-1)
            goto L2
        L1d:
            int r5 = r5 + 1
            if (r5 >= r7) goto L37
            T[] r6 = r3.mData
            r6 = r6[r5]
            android.support.v7.util.SortedList$Callback r0 = r3.mCallback
            int r0 = r0.compare(r6, r4)
            if (r0 == 0) goto L2e
            goto L37
        L2e:
            android.support.v7.util.SortedList$Callback r0 = r3.mCallback
            boolean r6 = r0.areItemsTheSame(r6, r4)
            if (r6 == 0) goto L1d
            return r5
        L37:
            r4 = -1
            return r4
    }

    private void merge(T[] r9, int r10) {
            r8 = this;
            android.support.v7.util.SortedList$Callback r0 = r8.mCallback
            boolean r0 = r0 instanceof android.support.v7.util.SortedList.BatchedCallback
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto Lb
            r8.beginBatchedUpdates()
        Lb:
            T[] r2 = r8.mData
            r8.mOldData = r2
            r2 = 0
            r8.mOldDataStart = r2
            int r3 = r8.mSize
            r8.mOldDataSize = r3
            int r3 = r3 + r10
            int r3 = r3 + 10
            java.lang.Class<T> r4 = r8.mTClass
            java.lang.Object r3 = java.lang.reflect.Array.newInstance(r4, r3)
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            r8.mData = r3
            r8.mNewDataStart = r2
        L27:
            int r3 = r8.mOldDataStart
            int r4 = r8.mOldDataSize
            if (r3 < r4) goto L2f
            if (r2 >= r10) goto L5f
        L2f:
            int r3 = r8.mOldDataStart
            int r4 = r8.mOldDataSize
            if (r3 != r4) goto L4e
            int r10 = r10 - r2
            T[] r1 = r8.mData
            int r3 = r8.mNewDataStart
            java.lang.System.arraycopy(r9, r2, r1, r3, r10)
            int r9 = r8.mNewDataStart
            int r9 = r9 + r10
            r8.mNewDataStart = r9
            int r1 = r8.mSize
            int r1 = r1 + r10
            r8.mSize = r1
            android.support.v7.util.SortedList$Callback r1 = r8.mCallback
            int r9 = r9 - r10
            r1.onInserted(r9, r10)
            goto L5f
        L4e:
            if (r2 != r10) goto L68
            int r4 = r4 - r3
            T[] r9 = r8.mOldData
            T[] r10 = r8.mData
            int r1 = r8.mNewDataStart
            java.lang.System.arraycopy(r9, r3, r10, r1, r4)
            int r9 = r8.mNewDataStart
            int r9 = r9 + r4
            r8.mNewDataStart = r9
        L5f:
            r9 = 0
            r8.mOldData = r9
            if (r0 == 0) goto L67
            r8.endBatchedUpdates()
        L67:
            return
        L68:
            T[] r4 = r8.mOldData
            r3 = r4[r3]
            r4 = r9[r2]
            android.support.v7.util.SortedList$Callback r5 = r8.mCallback
            int r5 = r5.compare(r3, r4)
            if (r5 <= 0) goto L8e
            T[] r3 = r8.mData
            int r5 = r8.mNewDataStart
            int r6 = r5 + 1
            r8.mNewDataStart = r6
            r3[r5] = r4
            int r3 = r8.mSize
            int r3 = r3 + r1
            r8.mSize = r3
            int r2 = r2 + 1
            android.support.v7.util.SortedList$Callback r3 = r8.mCallback
            int r6 = r6 - r1
            r3.onInserted(r6, r1)
            goto L27
        L8e:
            if (r5 != 0) goto Lbf
            android.support.v7.util.SortedList$Callback r5 = r8.mCallback
            boolean r5 = r5.areItemsTheSame(r3, r4)
            if (r5 == 0) goto Lbf
            T[] r5 = r8.mData
            int r6 = r8.mNewDataStart
            int r7 = r6 + 1
            r8.mNewDataStart = r7
            r5[r6] = r4
            int r2 = r2 + 1
            int r5 = r8.mOldDataStart
            int r5 = r5 + r1
            r8.mOldDataStart = r5
            android.support.v7.util.SortedList$Callback r5 = r8.mCallback
            boolean r5 = r5.areContentsTheSame(r3, r4)
            if (r5 != 0) goto L27
            android.support.v7.util.SortedList$Callback r5 = r8.mCallback
            int r6 = r8.mNewDataStart
            int r6 = r6 - r1
            java.lang.Object r3 = r5.getChangePayload(r3, r4)
            r5.onChanged(r6, r1, r3)
            goto L27
        Lbf:
            T[] r4 = r8.mData
            int r5 = r8.mNewDataStart
            int r6 = r5 + 1
            r8.mNewDataStart = r6
            r4[r5] = r3
            int r3 = r8.mOldDataStart
            int r3 = r3 + r1
            r8.mOldDataStart = r3
            goto L27
    }

    private boolean remove(T r7, boolean r8) {
            r6 = this;
            T[] r2 = r6.mData
            int r4 = r6.mSize
            r3 = 0
            r5 = 2
            r0 = r6
            r1 = r7
            int r7 = r0.findIndexOf(r1, r2, r3, r4, r5)
            r0 = -1
            if (r7 != r0) goto L11
            r7 = 0
            return r7
        L11:
            r6.removeItemAtIndex(r7, r8)
            r7 = 1
            return r7
    }

    private void removeItemAtIndex(int r5, boolean r6) {
            r4 = this;
            T[] r0 = r4.mData
            int r1 = r5 + 1
            int r2 = r4.mSize
            int r2 = r2 - r5
            r3 = 1
            int r2 = r2 - r3
            java.lang.System.arraycopy(r0, r1, r0, r5, r2)
            int r0 = r4.mSize
            int r0 = r0 - r3
            r4.mSize = r0
            T[] r1 = r4.mData
            r2 = 0
            r1[r0] = r2
            if (r6 == 0) goto L1d
            android.support.v7.util.SortedList$Callback r6 = r4.mCallback
            r6.onRemoved(r5, r3)
        L1d:
            return
    }

    private void replaceAllInsert(T r3) {
            r2 = this;
            T[] r0 = r2.mData
            int r1 = r2.mNewDataStart
            r0[r1] = r3
            r3 = 1
            int r1 = r1 + r3
            r2.mNewDataStart = r1
            int r0 = r2.mSize
            int r0 = r0 + r3
            r2.mSize = r0
            android.support.v7.util.SortedList$Callback r0 = r2.mCallback
            int r1 = r1 - r3
            r0.onInserted(r1, r3)
            return
    }

    private void replaceAllInternal(T[] r8) {
            r7 = this;
            android.support.v7.util.SortedList$Callback r0 = r7.mCallback
            boolean r0 = r0 instanceof android.support.v7.util.SortedList.BatchedCallback
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto Lb
            r7.beginBatchedUpdates()
        Lb:
            r2 = 0
            r7.mOldDataStart = r2
            int r3 = r7.mSize
            r7.mOldDataSize = r3
            T[] r3 = r7.mData
            r7.mOldData = r3
            r7.mNewDataStart = r2
            int r2 = r7.sortAndDedup(r8)
            java.lang.Class<T> r3 = r7.mTClass
            java.lang.Object r3 = java.lang.reflect.Array.newInstance(r3, r2)
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            java.lang.Object[] r3 = (java.lang.Object[]) r3
            r7.mData = r3
        L28:
            int r3 = r7.mNewDataStart
            if (r3 < r2) goto L32
            int r3 = r7.mOldDataStart
            int r4 = r7.mOldDataSize
            if (r3 >= r4) goto L5f
        L32:
            int r3 = r7.mOldDataStart
            int r4 = r7.mOldDataSize
            if (r3 < r4) goto L50
            int r1 = r7.mNewDataStart
            int r2 = r2 - r1
            T[] r3 = r7.mData
            java.lang.System.arraycopy(r8, r1, r3, r1, r2)
            int r8 = r7.mNewDataStart
            int r8 = r8 + r2
            r7.mNewDataStart = r8
            int r8 = r7.mSize
            int r8 = r8 + r2
            r7.mSize = r8
            android.support.v7.util.SortedList$Callback r8 = r7.mCallback
            r8.onInserted(r1, r2)
            goto L5f
        L50:
            int r5 = r7.mNewDataStart
            if (r5 < r2) goto L68
            int r4 = r4 - r3
            int r8 = r7.mSize
            int r8 = r8 - r4
            r7.mSize = r8
            android.support.v7.util.SortedList$Callback r8 = r7.mCallback
            r8.onRemoved(r5, r4)
        L5f:
            r8 = 0
            r7.mOldData = r8
            if (r0 == 0) goto L67
            r7.endBatchedUpdates()
        L67:
            return
        L68:
            T[] r4 = r7.mOldData
            r3 = r4[r3]
            r4 = r8[r5]
            android.support.v7.util.SortedList$Callback r5 = r7.mCallback
            int r5 = r5.compare(r3, r4)
            if (r5 >= 0) goto L7a
            r7.replaceAllRemove()
            goto L28
        L7a:
            if (r5 <= 0) goto L80
            r7.replaceAllInsert(r4)
            goto L28
        L80:
            android.support.v7.util.SortedList$Callback r5 = r7.mCallback
            boolean r5 = r5.areItemsTheSame(r3, r4)
            if (r5 != 0) goto L8f
            r7.replaceAllRemove()
            r7.replaceAllInsert(r4)
            goto L28
        L8f:
            T[] r5 = r7.mData
            int r6 = r7.mNewDataStart
            r5[r6] = r4
            int r5 = r7.mOldDataStart
            int r5 = r5 + r1
            r7.mOldDataStart = r5
            int r6 = r6 + r1
            r7.mNewDataStart = r6
            android.support.v7.util.SortedList$Callback r5 = r7.mCallback
            boolean r5 = r5.areContentsTheSame(r3, r4)
            if (r5 != 0) goto L28
            android.support.v7.util.SortedList$Callback r5 = r7.mCallback
            int r6 = r7.mNewDataStart
            int r6 = r6 - r1
            java.lang.Object r3 = r5.getChangePayload(r3, r4)
            r5.onChanged(r6, r1, r3)
            goto L28
    }

    private void replaceAllRemove() {
            r3 = this;
            int r0 = r3.mSize
            r1 = 1
            int r0 = r0 - r1
            r3.mSize = r0
            int r0 = r3.mOldDataStart
            int r0 = r0 + r1
            r3.mOldDataStart = r0
            android.support.v7.util.SortedList$Callback r0 = r3.mCallback
            int r2 = r3.mNewDataStart
            r0.onRemoved(r2, r1)
            return
    }

    private int sortAndDedup(T[] r8) {
            r7 = this;
            int r0 = r8.length
            r1 = 0
            if (r0 != 0) goto L5
            return r1
        L5:
            android.support.v7.util.SortedList$Callback r0 = r7.mCallback
            java.util.Arrays.sort(r8, r0)
            r0 = 1
            r2 = r1
            r1 = r0
        Ld:
            int r3 = r8.length
            if (r0 >= r3) goto L39
            r3 = r8[r0]
            android.support.v7.util.SortedList$Callback r4 = r7.mCallback
            r5 = r8[r2]
            int r4 = r4.compare(r5, r3)
            if (r4 != 0) goto L2d
            int r4 = r7.findSameItem(r3, r8, r2, r1)
            r5 = -1
            if (r4 == r5) goto L26
            r8[r4] = r3
            goto L36
        L26:
            if (r1 == r0) goto L2a
            r8[r1] = r3
        L2a:
            int r1 = r1 + 1
            goto L36
        L2d:
            if (r1 == r0) goto L31
            r8[r1] = r3
        L31:
            int r2 = r1 + 1
            r6 = r2
            r2 = r1
            r1 = r6
        L36:
            int r0 = r0 + 1
            goto Ld
        L39:
            return r1
    }

    private void throwIfInMutationOperation() {
            r2 = this;
            T[] r0 = r2.mOldData
            if (r0 != 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Data cannot be mutated in the middle of a batch update operation such as addAll or replaceAll."
            r0.<init>(r1)
            throw r0
    }

    public int add(T r2) {
            r1 = this;
            r1.throwIfInMutationOperation()
            r0 = 1
            int r2 = r1.add(r2, r0)
            return r2
    }

    public void addAll(java.util.Collection<T> r3) {
            r2 = this;
            java.lang.Class<T> r0 = r2.mTClass
            int r1 = r3.size()
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r1)
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Object[] r3 = r3.toArray(r0)
            r0 = 1
            r2.addAll(r3, r0)
            return
    }

    public void addAll(T... r2) {
            r1 = this;
            r0 = 0
            r1.addAll(r2, r0)
            return
    }

    public void addAll(T[] r2, boolean r3) {
            r1 = this;
            r1.throwIfInMutationOperation()
            int r0 = r2.length
            if (r0 != 0) goto L7
            return
        L7:
            if (r3 == 0) goto Ld
            r1.addAllInternal(r2)
            goto L14
        Ld:
            java.lang.Object[] r2 = r1.copyArray(r2)
            r1.addAllInternal(r2)
        L14:
            return
    }

    public void beginBatchedUpdates() {
            r2 = this;
            r2.throwIfInMutationOperation()
            android.support.v7.util.SortedList$Callback r0 = r2.mCallback
            boolean r1 = r0 instanceof android.support.v7.util.SortedList.BatchedCallback
            if (r1 == 0) goto La
            return
        La:
            android.support.v7.util.SortedList$BatchedCallback r1 = r2.mBatchedCallback
            if (r1 != 0) goto L15
            android.support.v7.util.SortedList$BatchedCallback r1 = new android.support.v7.util.SortedList$BatchedCallback
            r1.<init>(r0)
            r2.mBatchedCallback = r1
        L15:
            android.support.v7.util.SortedList$BatchedCallback r0 = r2.mBatchedCallback
            r2.mCallback = r0
            return
    }

    public void clear() {
            r4 = this;
            r4.throwIfInMutationOperation()
            int r0 = r4.mSize
            if (r0 != 0) goto L8
            return
        L8:
            T[] r1 = r4.mData
            r2 = 0
            r3 = 0
            java.util.Arrays.fill(r1, r3, r0, r2)
            r4.mSize = r3
            android.support.v7.util.SortedList$Callback r1 = r4.mCallback
            r1.onRemoved(r3, r0)
            return
    }

    public void endBatchedUpdates() {
            r2 = this;
            r2.throwIfInMutationOperation()
            android.support.v7.util.SortedList$Callback r0 = r2.mCallback
            boolean r1 = r0 instanceof android.support.v7.util.SortedList.BatchedCallback
            if (r1 == 0) goto Le
            android.support.v7.util.SortedList$BatchedCallback r0 = (android.support.v7.util.SortedList.BatchedCallback) r0
            r0.dispatchLastEvent()
        Le:
            android.support.v7.util.SortedList$Callback r0 = r2.mCallback
            android.support.v7.util.SortedList$BatchedCallback r1 = r2.mBatchedCallback
            if (r0 != r1) goto L18
            android.support.v7.util.SortedList$Callback<T2> r0 = r1.mWrappedCallback
            r2.mCallback = r0
        L18:
            return
    }

    public T get(int r4) throws java.lang.IndexOutOfBoundsException {
            r3 = this;
            int r0 = r3.mSize
            if (r4 >= r0) goto L1a
            if (r4 < 0) goto L1a
            T[] r0 = r3.mOldData
            if (r0 == 0) goto L15
            int r1 = r3.mNewDataStart
            if (r4 < r1) goto L15
            int r4 = r4 - r1
            int r1 = r3.mOldDataStart
            int r4 = r4 + r1
            r4 = r0[r4]
            return r4
        L15:
            T[] r0 = r3.mData
            r4 = r0[r4]
            return r4
        L1a:
            java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Asked to get item at "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = " but size is "
            r1.append(r4)
            int r4 = r3.mSize
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public int indexOf(T r9) {
            r8 = this;
            T[] r0 = r8.mOldData
            if (r0 == 0) goto L2b
            T[] r3 = r8.mData
            r4 = 0
            int r5 = r8.mNewDataStart
            r6 = 4
            r1 = r8
            r2 = r9
            int r0 = r1.findIndexOf(r2, r3, r4, r5, r6)
            r1 = -1
            if (r0 == r1) goto L14
            return r0
        L14:
            T[] r4 = r8.mOldData
            int r5 = r8.mOldDataStart
            int r6 = r8.mOldDataSize
            r7 = 4
            r2 = r8
            r3 = r9
            int r9 = r2.findIndexOf(r3, r4, r5, r6, r7)
            if (r9 == r1) goto L2a
            int r0 = r8.mOldDataStart
            int r9 = r9 - r0
            int r0 = r8.mNewDataStart
            int r9 = r9 + r0
            return r9
        L2a:
            return r1
        L2b:
            T[] r2 = r8.mData
            r3 = 0
            int r4 = r8.mSize
            r5 = 4
            r0 = r8
            r1 = r9
            int r9 = r0.findIndexOf(r1, r2, r3, r4, r5)
            return r9
    }

    public void recalculatePositionOfItemAt(int r3) {
            r2 = this;
            r2.throwIfInMutationOperation()
            java.lang.Object r0 = r2.get(r3)
            r1 = 0
            r2.removeItemAtIndex(r3, r1)
            int r0 = r2.add(r0, r1)
            if (r3 == r0) goto L16
            android.support.v7.util.SortedList$Callback r1 = r2.mCallback
            r1.onMoved(r3, r0)
        L16:
            return
    }

    public boolean remove(T r2) {
            r1 = this;
            r1.throwIfInMutationOperation()
            r0 = 1
            boolean r2 = r1.remove(r2, r0)
            return r2
    }

    public T removeItemAt(int r3) {
            r2 = this;
            r2.throwIfInMutationOperation()
            java.lang.Object r0 = r2.get(r3)
            r1 = 1
            r2.removeItemAtIndex(r3, r1)
            return r0
    }

    public void replaceAll(java.util.Collection<T> r3) {
            r2 = this;
            java.lang.Class<T> r0 = r2.mTClass
            int r1 = r3.size()
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r0, r1)
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Object[] r0 = (java.lang.Object[]) r0
            java.lang.Object[] r3 = r3.toArray(r0)
            r0 = 1
            r2.replaceAll(r3, r0)
            return
    }

    public void replaceAll(T... r2) {
            r1 = this;
            r0 = 0
            r1.replaceAll(r2, r0)
            return
    }

    public void replaceAll(T[] r1, boolean r2) {
            r0 = this;
            r0.throwIfInMutationOperation()
            if (r2 == 0) goto L9
            r0.replaceAllInternal(r1)
            goto L10
        L9:
            java.lang.Object[] r1 = r0.copyArray(r1)
            r0.replaceAllInternal(r1)
        L10:
            return
    }

    public int size() {
            r1 = this;
            int r0 = r1.mSize
            return r0
    }

    public void updateItemAt(int r6, T r7) {
            r5 = this;
            r5.throwIfInMutationOperation()
            java.lang.Object r0 = r5.get(r6)
            r1 = 0
            r2 = 1
            if (r0 == r7) goto L16
            android.support.v7.util.SortedList$Callback r3 = r5.mCallback
            boolean r3 = r3.areContentsTheSame(r0, r7)
            if (r3 != 0) goto L14
            goto L16
        L14:
            r3 = r1
            goto L17
        L16:
            r3 = r2
        L17:
            if (r0 == r7) goto L31
            android.support.v7.util.SortedList$Callback r4 = r5.mCallback
            int r4 = r4.compare(r0, r7)
            if (r4 != 0) goto L31
            T[] r1 = r5.mData
            r1[r6] = r7
            if (r3 == 0) goto L30
            android.support.v7.util.SortedList$Callback r1 = r5.mCallback
            java.lang.Object r7 = r1.getChangePayload(r0, r7)
            r1.onChanged(r6, r2, r7)
        L30:
            return
        L31:
            if (r3 == 0) goto L3c
            android.support.v7.util.SortedList$Callback r3 = r5.mCallback
            java.lang.Object r0 = r3.getChangePayload(r0, r7)
            r3.onChanged(r6, r2, r0)
        L3c:
            r5.removeItemAtIndex(r6, r1)
            int r7 = r5.add(r7, r1)
            if (r6 == r7) goto L4a
            android.support.v7.util.SortedList$Callback r0 = r5.mCallback
            r0.onMoved(r6, r7)
        L4a:
            return
    }
}
