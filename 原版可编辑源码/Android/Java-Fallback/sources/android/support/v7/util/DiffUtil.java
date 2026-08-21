package android.support.v7.util;

public class DiffUtil {
    private static final java.util.Comparator<android.support.v7.util.DiffUtil.Snake> SNAKE_COMPARATOR = null;


    public static abstract class Callback {
        public Callback() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract boolean areContentsTheSame(int r1, int r2);

        public abstract boolean areItemsTheSame(int r1, int r2);

        public java.lang.Object getChangePayload(int r1, int r2) {
                r0 = this;
                r1 = 0
                return r1
        }

        public abstract int getNewListSize();

        public abstract int getOldListSize();
    }

    public static class DiffResult {
        private static final int FLAG_CHANGED = 2;
        private static final int FLAG_IGNORE = 16;
        private static final int FLAG_MASK = 31;
        private static final int FLAG_MOVED_CHANGED = 4;
        private static final int FLAG_MOVED_NOT_CHANGED = 8;
        private static final int FLAG_NOT_CHANGED = 1;
        private static final int FLAG_OFFSET = 5;
        public static final int NO_POSITION = -1;
        private final android.support.v7.util.DiffUtil.Callback mCallback;
        private final boolean mDetectMoves;
        private final int[] mNewItemStatuses;
        private final int mNewListSize;
        private final int[] mOldItemStatuses;
        private final int mOldListSize;
        private final java.util.List<android.support.v7.util.DiffUtil.Snake> mSnakes;

        DiffResult(android.support.v7.util.DiffUtil.Callback r1, java.util.List<android.support.v7.util.DiffUtil.Snake> r2, int[] r3, int[] r4, boolean r5) {
                r0 = this;
                r0.<init>()
                r0.mSnakes = r2
                r0.mOldItemStatuses = r3
                r0.mNewItemStatuses = r4
                r2 = 0
                java.util.Arrays.fill(r3, r2)
                int[] r3 = r0.mNewItemStatuses
                java.util.Arrays.fill(r3, r2)
                r0.mCallback = r1
                int r2 = r1.getOldListSize()
                r0.mOldListSize = r2
                int r1 = r1.getNewListSize()
                r0.mNewListSize = r1
                r0.mDetectMoves = r5
                r0.addRootSnake()
                r0.findMatchingItems()
                return
        }

        private void addRootSnake() {
                r3 = this;
                java.util.List<android.support.v7.util.DiffUtil$Snake> r0 = r3.mSnakes
                boolean r0 = r0.isEmpty()
                r1 = 0
                if (r0 == 0) goto Lb
                r0 = 0
                goto L13
            Lb:
                java.util.List<android.support.v7.util.DiffUtil$Snake> r0 = r3.mSnakes
                java.lang.Object r0 = r0.get(r1)
                android.support.v7.util.DiffUtil$Snake r0 = (android.support.v7.util.DiffUtil.Snake) r0
            L13:
                if (r0 == 0) goto L1d
                int r2 = r0.x
                if (r2 != 0) goto L1d
                int r0 = r0.y
                if (r0 == 0) goto L31
            L1d:
                android.support.v7.util.DiffUtil$Snake r0 = new android.support.v7.util.DiffUtil$Snake
                r0.<init>()
                r0.x = r1
                r0.y = r1
                r0.removal = r1
                r0.size = r1
                r0.reverse = r1
                java.util.List<android.support.v7.util.DiffUtil$Snake> r2 = r3.mSnakes
                r2.add(r1, r0)
            L31:
                return
        }

        private void dispatchAdditions(java.util.List<android.support.v7.util.DiffUtil.PostponedUpdate> r7, android.support.v7.util.ListUpdateCallback r8, int r9, int r10, int r11) {
                r6 = this;
                boolean r0 = r6.mDetectMoves
                if (r0 != 0) goto L8
                r8.onInserted(r9, r10)
                return
            L8:
                r0 = 1
                int r10 = r10 - r0
            La:
                if (r10 < 0) goto L86
                int[] r1 = r6.mNewItemStatuses
                int r2 = r11 + r10
                r1 = r1[r2]
                r1 = r1 & 31
                if (r1 == 0) goto L6a
                r3 = 4
                if (r1 == r3) goto L4f
                r4 = 8
                if (r1 == r4) goto L4f
                r3 = 16
                if (r1 != r3) goto L2b
                android.support.v7.util.DiffUtil$PostponedUpdate r1 = new android.support.v7.util.DiffUtil$PostponedUpdate
                r3 = 0
                r1.<init>(r2, r9, r3)
                r7.add(r1)
                goto L83
            L2b:
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                java.lang.String r9 = "unknown flag for pos "
                r8.append(r9)
                r8.append(r2)
                java.lang.String r9 = " "
                r8.append(r9)
                long r9 = (long) r1
                java.lang.String r9 = java.lang.Long.toBinaryString(r9)
                r8.append(r9)
                java.lang.String r8 = r8.toString()
                r7.<init>(r8)
                throw r7
            L4f:
                int[] r4 = r6.mNewItemStatuses
                r4 = r4[r2]
                int r4 = r4 >> 5
                android.support.v7.util.DiffUtil$PostponedUpdate r5 = removePostponedUpdate(r7, r4, r0)
                int r5 = r5.currentPos
                r8.onMoved(r5, r9)
                if (r1 != r3) goto L83
                android.support.v7.util.DiffUtil$Callback r1 = r6.mCallback
                java.lang.Object r1 = r1.getChangePayload(r4, r2)
                r8.onChanged(r9, r0, r1)
                goto L83
            L6a:
                r8.onInserted(r9, r0)
                java.util.Iterator r1 = r7.iterator()
            L71:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L83
                java.lang.Object r2 = r1.next()
                android.support.v7.util.DiffUtil$PostponedUpdate r2 = (android.support.v7.util.DiffUtil.PostponedUpdate) r2
                int r3 = r2.currentPos
                int r3 = r3 + r0
                r2.currentPos = r3
                goto L71
            L83:
                int r10 = r10 + (-1)
                goto La
            L86:
                return
        }

        private void dispatchRemovals(java.util.List<android.support.v7.util.DiffUtil.PostponedUpdate> r9, android.support.v7.util.ListUpdateCallback r10, int r11, int r12, int r13) {
                r8 = this;
                boolean r0 = r8.mDetectMoves
                if (r0 != 0) goto L8
                r10.onRemoved(r11, r12)
                return
            L8:
                r0 = 1
                int r12 = r12 - r0
            La:
                if (r12 < 0) goto L91
                int[] r1 = r8.mOldItemStatuses
                int r2 = r13 + r12
                r1 = r1[r2]
                r1 = r1 & 31
                if (r1 == 0) goto L72
                r3 = 4
                if (r1 == r3) goto L50
                r4 = 8
                if (r1 == r4) goto L50
                r3 = 16
                if (r1 != r3) goto L2c
                android.support.v7.util.DiffUtil$PostponedUpdate r1 = new android.support.v7.util.DiffUtil$PostponedUpdate
                int r3 = r11 + r12
                r1.<init>(r2, r3, r0)
                r9.add(r1)
                goto L8d
            L2c:
                java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
                java.lang.StringBuilder r10 = new java.lang.StringBuilder
                r10.<init>()
                java.lang.String r11 = "unknown flag for pos "
                r10.append(r11)
                r10.append(r2)
                java.lang.String r11 = " "
                r10.append(r11)
                long r11 = (long) r1
                java.lang.String r11 = java.lang.Long.toBinaryString(r11)
                r10.append(r11)
                java.lang.String r10 = r10.toString()
                r9.<init>(r10)
                throw r9
            L50:
                int[] r4 = r8.mOldItemStatuses
                r4 = r4[r2]
                int r4 = r4 >> 5
                r5 = 0
                android.support.v7.util.DiffUtil$PostponedUpdate r5 = removePostponedUpdate(r9, r4, r5)
                int r6 = r11 + r12
                int r7 = r5.currentPos
                int r7 = r7 - r0
                r10.onMoved(r6, r7)
                if (r1 != r3) goto L8d
                int r1 = r5.currentPos
                int r1 = r1 - r0
                android.support.v7.util.DiffUtil$Callback r3 = r8.mCallback
                java.lang.Object r2 = r3.getChangePayload(r2, r4)
                r10.onChanged(r1, r0, r2)
                goto L8d
            L72:
                int r1 = r11 + r12
                r10.onRemoved(r1, r0)
                java.util.Iterator r1 = r9.iterator()
            L7b:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L8d
                java.lang.Object r2 = r1.next()
                android.support.v7.util.DiffUtil$PostponedUpdate r2 = (android.support.v7.util.DiffUtil.PostponedUpdate) r2
                int r3 = r2.currentPos
                int r3 = r3 - r0
                r2.currentPos = r3
                goto L7b
            L8d:
                int r12 = r12 + (-1)
                goto La
            L91:
                return
        }

        private void findAddition(int r3, int r4, int r5) {
                r2 = this;
                int[] r0 = r2.mOldItemStatuses
                int r1 = r3 + (-1)
                r0 = r0[r1]
                if (r0 == 0) goto L9
                return
            L9:
                r0 = 0
                r2.findMatchingItem(r3, r4, r5, r0)
                return
        }

        private boolean findMatchingItem(int r9, int r10, int r11, boolean r12) {
                r8 = this;
                if (r12 == 0) goto L7
                int r10 = r10 + (-1)
                r1 = r9
                r0 = r10
                goto La
            L7:
                int r0 = r9 + (-1)
                r1 = r0
            La:
                if (r11 < 0) goto L7c
                java.util.List<android.support.v7.util.DiffUtil$Snake> r2 = r8.mSnakes
                java.lang.Object r2 = r2.get(r11)
                android.support.v7.util.DiffUtil$Snake r2 = (android.support.v7.util.DiffUtil.Snake) r2
                int r3 = r2.x
                int r4 = r2.size
                int r3 = r3 + r4
                int r4 = r2.y
                int r5 = r2.size
                int r4 = r4 + r5
                r5 = 8
                r6 = 4
                r7 = 1
                if (r12 == 0) goto L4c
                int r1 = r1 - r7
            L25:
                if (r1 < r3) goto L75
                android.support.v7.util.DiffUtil$Callback r10 = r8.mCallback
                boolean r10 = r10.areItemsTheSame(r1, r0)
                if (r10 == 0) goto L49
                android.support.v7.util.DiffUtil$Callback r9 = r8.mCallback
                boolean r9 = r9.areContentsTheSame(r1, r0)
                if (r9 == 0) goto L38
                goto L39
            L38:
                r5 = r6
            L39:
                int[] r9 = r8.mNewItemStatuses
                int r10 = r1 << 5
                r10 = r10 | 16
                r9[r0] = r10
                int[] r9 = r8.mOldItemStatuses
                int r10 = r0 << 5
                r10 = r10 | r5
                r9[r1] = r10
                return r7
            L49:
                int r1 = r1 + (-1)
                goto L25
            L4c:
                int r10 = r10 - r7
            L4d:
                if (r10 < r4) goto L75
                android.support.v7.util.DiffUtil$Callback r1 = r8.mCallback
                boolean r1 = r1.areItemsTheSame(r0, r10)
                if (r1 == 0) goto L72
                android.support.v7.util.DiffUtil$Callback r11 = r8.mCallback
                boolean r11 = r11.areContentsTheSame(r0, r10)
                if (r11 == 0) goto L60
                goto L61
            L60:
                r5 = r6
            L61:
                int[] r11 = r8.mOldItemStatuses
                int r9 = r9 - r7
                int r12 = r10 << 5
                r12 = r12 | 16
                r11[r9] = r12
                int[] r11 = r8.mNewItemStatuses
                int r9 = r9 << 5
                r9 = r9 | r5
                r11[r10] = r9
                return r7
            L72:
                int r10 = r10 + (-1)
                goto L4d
            L75:
                int r1 = r2.x
                int r10 = r2.y
                int r11 = r11 + (-1)
                goto La
            L7c:
                r9 = 0
                return r9
        }

        private void findMatchingItems() {
                r9 = this;
                int r0 = r9.mOldListSize
                int r1 = r9.mNewListSize
                java.util.List<android.support.v7.util.DiffUtil$Snake> r2 = r9.mSnakes
                int r2 = r2.size()
                r3 = 1
                int r2 = r2 - r3
            Lc:
                if (r2 < 0) goto L62
                java.util.List<android.support.v7.util.DiffUtil$Snake> r4 = r9.mSnakes
                java.lang.Object r4 = r4.get(r2)
                android.support.v7.util.DiffUtil$Snake r4 = (android.support.v7.util.DiffUtil.Snake) r4
                int r5 = r4.x
                int r6 = r4.size
                int r5 = r5 + r6
                int r6 = r4.y
                int r7 = r4.size
                int r6 = r6 + r7
                boolean r7 = r9.mDetectMoves
                if (r7 == 0) goto L34
            L24:
                if (r0 <= r5) goto L2c
                r9.findAddition(r0, r1, r2)
                int r0 = r0 + (-1)
                goto L24
            L2c:
                if (r1 <= r6) goto L34
                r9.findRemoval(r0, r1, r2)
                int r1 = r1 + (-1)
                goto L2c
            L34:
                r0 = 0
            L35:
                int r1 = r4.size
                if (r0 >= r1) goto L5b
                int r1 = r4.x
                int r1 = r1 + r0
                int r5 = r4.y
                int r5 = r5 + r0
                android.support.v7.util.DiffUtil$Callback r6 = r9.mCallback
                boolean r6 = r6.areContentsTheSame(r1, r5)
                if (r6 == 0) goto L49
                r6 = r3
                goto L4a
            L49:
                r6 = 2
            L4a:
                int[] r7 = r9.mOldItemStatuses
                int r8 = r5 << 5
                r8 = r8 | r6
                r7[r1] = r8
                int[] r7 = r9.mNewItemStatuses
                int r1 = r1 << 5
                r1 = r1 | r6
                r7[r5] = r1
                int r0 = r0 + 1
                goto L35
            L5b:
                int r0 = r4.x
                int r1 = r4.y
                int r2 = r2 + (-1)
                goto Lc
            L62:
                return
        }

        private void findRemoval(int r3, int r4, int r5) {
                r2 = this;
                int[] r0 = r2.mNewItemStatuses
                int r1 = r4 + (-1)
                r0 = r0[r1]
                if (r0 == 0) goto L9
                return
            L9:
                r0 = 1
                r2.findMatchingItem(r3, r4, r5, r0)
                return
        }

        private static android.support.v7.util.DiffUtil.PostponedUpdate removePostponedUpdate(java.util.List<android.support.v7.util.DiffUtil.PostponedUpdate> r5, int r6, boolean r7) {
                int r0 = r5.size()
                r1 = 1
                int r0 = r0 - r1
            L6:
                if (r0 < 0) goto L36
                java.lang.Object r2 = r5.get(r0)
                android.support.v7.util.DiffUtil$PostponedUpdate r2 = (android.support.v7.util.DiffUtil.PostponedUpdate) r2
                int r3 = r2.posInOwnerList
                if (r3 != r6) goto L33
                boolean r3 = r2.removal
                if (r3 != r7) goto L33
                r5.remove(r0)
            L19:
                int r6 = r5.size()
                if (r0 >= r6) goto L32
                java.lang.Object r6 = r5.get(r0)
                android.support.v7.util.DiffUtil$PostponedUpdate r6 = (android.support.v7.util.DiffUtil.PostponedUpdate) r6
                int r3 = r6.currentPos
                if (r7 == 0) goto L2b
                r4 = r1
                goto L2c
            L2b:
                r4 = -1
            L2c:
                int r3 = r3 + r4
                r6.currentPos = r3
                int r0 = r0 + 1
                goto L19
            L32:
                return r2
            L33:
                int r0 = r0 + (-1)
                goto L6
            L36:
                r5 = 0
                return r5
        }

        public int convertNewPositionToOld(int r4) {
                r3 = this;
                if (r4 < 0) goto L12
                int[] r0 = r3.mNewItemStatuses
                int r1 = r0.length
                if (r4 >= r1) goto L12
                r4 = r0[r4]
                r0 = r4 & 31
                if (r0 != 0) goto Lf
                r4 = -1
                return r4
            Lf:
                int r4 = r4 >> 5
                return r4
            L12:
                java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Index out of bounds - passed position = "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = ", new list size = "
                r1.append(r4)
                int[] r4 = r3.mNewItemStatuses
                int r4 = r4.length
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        public int convertOldPositionToNew(int r4) {
                r3 = this;
                if (r4 < 0) goto L12
                int[] r0 = r3.mOldItemStatuses
                int r1 = r0.length
                if (r4 >= r1) goto L12
                r4 = r0[r4]
                r0 = r4 & 31
                if (r0 != 0) goto Lf
                r4 = -1
                return r4
            Lf:
                int r4 = r4 >> 5
                return r4
            L12:
                java.lang.IndexOutOfBoundsException r0 = new java.lang.IndexOutOfBoundsException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Index out of bounds - passed position = "
                r1.append(r2)
                r1.append(r4)
                java.lang.String r4 = ", old list size = "
                r1.append(r4)
                int[] r4 = r3.mOldItemStatuses
                int r4 = r4.length
                r1.append(r4)
                java.lang.String r4 = r1.toString()
                r0.<init>(r4)
                throw r0
        }

        public void dispatchUpdatesTo(android.support.v7.util.ListUpdateCallback r15) {
                r14 = this;
                boolean r0 = r15 instanceof android.support.v7.util.BatchingListUpdateCallback
                if (r0 == 0) goto L7
                android.support.v7.util.BatchingListUpdateCallback r15 = (android.support.v7.util.BatchingListUpdateCallback) r15
                goto Ld
            L7:
                android.support.v7.util.BatchingListUpdateCallback r0 = new android.support.v7.util.BatchingListUpdateCallback
                r0.<init>(r15)
                r15 = r0
            Ld:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                int r1 = r14.mOldListSize
                int r2 = r14.mNewListSize
                java.util.List<android.support.v7.util.DiffUtil$Snake> r3 = r14.mSnakes
                int r3 = r3.size()
                r7 = 1
                int r3 = r3 - r7
                r8 = r2
                r9 = r3
            L20:
                if (r9 < 0) goto L79
                java.util.List<android.support.v7.util.DiffUtil$Snake> r2 = r14.mSnakes
                java.lang.Object r2 = r2.get(r9)
                r10 = r2
                android.support.v7.util.DiffUtil$Snake r10 = (android.support.v7.util.DiffUtil.Snake) r10
                int r11 = r10.size
                int r2 = r10.x
                int r12 = r2 + r11
                int r2 = r10.y
                int r13 = r2 + r11
                if (r12 >= r1) goto L41
                int r5 = r1 - r12
                r1 = r14
                r2 = r0
                r3 = r15
                r4 = r12
                r6 = r12
                r1.dispatchRemovals(r2, r3, r4, r5, r6)
            L41:
                if (r13 >= r8) goto L4d
                int r5 = r8 - r13
                r1 = r14
                r2 = r0
                r3 = r15
                r4 = r12
                r6 = r13
                r1.dispatchAdditions(r2, r3, r4, r5, r6)
            L4d:
                int r11 = r11 + (-1)
            L4f:
                if (r11 < 0) goto L72
                int[] r1 = r14.mOldItemStatuses
                int r2 = r10.x
                int r2 = r2 + r11
                r1 = r1[r2]
                r1 = r1 & 31
                r2 = 2
                if (r1 != r2) goto L6f
                int r1 = r10.x
                int r1 = r1 + r11
                android.support.v7.util.DiffUtil$Callback r2 = r14.mCallback
                int r3 = r10.x
                int r3 = r3 + r11
                int r4 = r10.y
                int r4 = r4 + r11
                java.lang.Object r2 = r2.getChangePayload(r3, r4)
                r15.onChanged(r1, r7, r2)
            L6f:
                int r11 = r11 + (-1)
                goto L4f
            L72:
                int r1 = r10.x
                int r8 = r10.y
                int r9 = r9 + (-1)
                goto L20
            L79:
                r15.dispatchLastEvent()
                return
        }

        public void dispatchUpdatesTo(android.support.v7.widget.RecyclerView.Adapter r2) {
                r1 = this;
                android.support.v7.util.AdapterListUpdateCallback r0 = new android.support.v7.util.AdapterListUpdateCallback
                r0.<init>(r2)
                r1.dispatchUpdatesTo(r0)
                return
        }

        java.util.List<android.support.v7.util.DiffUtil.Snake> getSnakes() {
                r1 = this;
                java.util.List<android.support.v7.util.DiffUtil$Snake> r0 = r1.mSnakes
                return r0
        }
    }

    public static abstract class ItemCallback<T> {
        public ItemCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        public abstract boolean areContentsTheSame(T r1, T r2);

        public abstract boolean areItemsTheSame(T r1, T r2);

        public java.lang.Object getChangePayload(T r1, T r2) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    private static class PostponedUpdate {
        int currentPos;
        int posInOwnerList;
        boolean removal;

        public PostponedUpdate(int r1, int r2, boolean r3) {
                r0 = this;
                r0.<init>()
                r0.posInOwnerList = r1
                r0.currentPos = r2
                r0.removal = r3
                return
        }
    }

    static class Range {
        int newListEnd;
        int newListStart;
        int oldListEnd;
        int oldListStart;

        public Range() {
                r0 = this;
                r0.<init>()
                return
        }

        public Range(int r1, int r2, int r3, int r4) {
                r0 = this;
                r0.<init>()
                r0.oldListStart = r1
                r0.oldListEnd = r2
                r0.newListStart = r3
                r0.newListEnd = r4
                return
        }
    }

    static class Snake {
        boolean removal;
        boolean reverse;
        int size;
        int x;
        int y;

        Snake() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            android.support.v7.util.DiffUtil$1 r0 = new android.support.v7.util.DiffUtil$1
            r0.<init>()
            android.support.v7.util.DiffUtil.SNAKE_COMPARATOR = r0
            return
    }

    private DiffUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.support.v7.util.DiffUtil.DiffResult calculateDiff(android.support.v7.util.DiffUtil.Callback r1) {
            r0 = 1
            android.support.v7.util.DiffUtil$DiffResult r1 = calculateDiff(r1, r0)
            return r1
    }

    public static android.support.v7.util.DiffUtil.DiffResult calculateDiff(android.support.v7.util.DiffUtil.Callback r15, boolean r16) {
            int r0 = r15.getOldListSize()
            int r1 = r15.getNewListSize()
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            android.support.v7.util.DiffUtil$Range r3 = new android.support.v7.util.DiffUtil$Range
            r5 = 0
            r3.<init>(r5, r0, r5, r1)
            r2.add(r3)
            int r3 = r0 + r1
            int r0 = r0 - r1
            int r0 = java.lang.Math.abs(r0)
            int r3 = r3 + r0
            int r0 = r3 * 2
            int[] r1 = new int[r0]
            int[] r0 = new int[r0]
            java.util.ArrayList r13 = new java.util.ArrayList
            r13.<init>()
        L2e:
            boolean r5 = r2.isEmpty()
            if (r5 != 0) goto Lf3
            int r5 = r2.size()
            int r5 = r5 + (-1)
            java.lang.Object r5 = r2.remove(r5)
            r14 = r5
            android.support.v7.util.DiffUtil$Range r14 = (android.support.v7.util.DiffUtil.Range) r14
            int r6 = r14.oldListStart
            int r7 = r14.oldListEnd
            int r8 = r14.newListStart
            int r9 = r14.newListEnd
            r5 = r15
            r10 = r1
            r11 = r0
            r12 = r3
            android.support.v7.util.DiffUtil$Snake r5 = diffPartial(r5, r6, r7, r8, r9, r10, r11, r12)
            if (r5 == 0) goto Lee
            int r6 = r5.size
            if (r6 <= 0) goto L5a
            r4.add(r5)
        L5a:
            int r6 = r5.x
            int r7 = r14.oldListStart
            int r6 = r6 + r7
            r5.x = r6
            int r6 = r5.y
            int r7 = r14.newListStart
            int r6 = r6 + r7
            r5.y = r6
            boolean r6 = r13.isEmpty()
            if (r6 == 0) goto L74
            android.support.v7.util.DiffUtil$Range r6 = new android.support.v7.util.DiffUtil$Range
            r6.<init>()
            goto L80
        L74:
            int r6 = r13.size()
            int r6 = r6 + (-1)
            java.lang.Object r6 = r13.remove(r6)
            android.support.v7.util.DiffUtil$Range r6 = (android.support.v7.util.DiffUtil.Range) r6
        L80:
            int r7 = r14.oldListStart
            r6.oldListStart = r7
            int r7 = r14.newListStart
            r6.newListStart = r7
            boolean r7 = r5.reverse
            if (r7 == 0) goto L95
            int r7 = r5.x
            r6.oldListEnd = r7
            int r7 = r5.y
            r6.newListEnd = r7
            goto Lae
        L95:
            boolean r7 = r5.removal
            if (r7 == 0) goto La4
            int r7 = r5.x
            int r7 = r7 + (-1)
            r6.oldListEnd = r7
            int r7 = r5.y
            r6.newListEnd = r7
            goto Lae
        La4:
            int r7 = r5.x
            r6.oldListEnd = r7
            int r7 = r5.y
            int r7 = r7 + (-1)
            r6.newListEnd = r7
        Lae:
            r2.add(r6)
            boolean r6 = r5.reverse
            if (r6 == 0) goto Ldb
            boolean r6 = r5.removal
            if (r6 == 0) goto Lca
            int r6 = r5.x
            int r7 = r5.size
            int r6 = r6 + r7
            int r6 = r6 + 1
            r14.oldListStart = r6
            int r6 = r5.y
            int r5 = r5.size
            int r6 = r6 + r5
            r14.newListStart = r6
            goto Le9
        Lca:
            int r6 = r5.x
            int r7 = r5.size
            int r6 = r6 + r7
            r14.oldListStart = r6
            int r6 = r5.y
            int r5 = r5.size
            int r6 = r6 + r5
            int r6 = r6 + 1
            r14.newListStart = r6
            goto Le9
        Ldb:
            int r6 = r5.x
            int r7 = r5.size
            int r6 = r6 + r7
            r14.oldListStart = r6
            int r6 = r5.y
            int r5 = r5.size
            int r6 = r6 + r5
            r14.newListStart = r6
        Le9:
            r2.add(r14)
            goto L2e
        Lee:
            r13.add(r14)
            goto L2e
        Lf3:
            java.util.Comparator<android.support.v7.util.DiffUtil$Snake> r2 = android.support.v7.util.DiffUtil.SNAKE_COMPARATOR
            java.util.Collections.sort(r4, r2)
            android.support.v7.util.DiffUtil$DiffResult r8 = new android.support.v7.util.DiffUtil$DiffResult
            r2 = r8
            r3 = r15
            r5 = r1
            r6 = r0
            r7 = r16
            r2.<init>(r3, r4, r5, r6, r7)
            return r8
    }

    private static android.support.v7.util.DiffUtil.Snake diffPartial(android.support.v7.util.DiffUtil.Callback r19, int r20, int r21, int r22, int r23, int[] r24, int[] r25, int r26) {
            r0 = r19
            r1 = r24
            r2 = r25
            int r3 = r21 - r20
            int r4 = r23 - r22
            r5 = 1
            if (r3 < r5) goto L133
            if (r4 >= r5) goto L11
            goto L133
        L11:
            int r6 = r3 - r4
            int r7 = r3 + r4
            int r7 = r7 + r5
            int r7 = r7 / 2
            int r8 = r26 - r7
            int r8 = r8 - r5
            int r9 = r26 + r7
            int r9 = r9 + r5
            r10 = 0
            java.util.Arrays.fill(r1, r8, r9, r10)
            int r8 = r8 + r6
            int r9 = r9 + r6
            java.util.Arrays.fill(r2, r8, r9, r3)
            int r8 = r6 % 2
            if (r8 == 0) goto L2d
            r8 = r5
            goto L2e
        L2d:
            r8 = r10
        L2e:
            r9 = r10
        L2f:
            if (r9 > r7) goto L12b
            int r11 = -r9
            r12 = r11
        L33:
            if (r12 > r9) goto La2
            if (r12 == r11) goto L4d
            if (r12 == r9) goto L45
            int r13 = r26 + r12
            int r14 = r13 + (-1)
            r14 = r1[r14]
            int r13 = r13 + r5
            r13 = r1[r13]
            if (r14 >= r13) goto L45
            goto L4d
        L45:
            int r13 = r26 + r12
            int r13 = r13 - r5
            r13 = r1[r13]
            int r13 = r13 + r5
            r14 = r5
            goto L53
        L4d:
            int r13 = r26 + r12
            int r13 = r13 + r5
            r13 = r1[r13]
            r14 = r10
        L53:
            int r15 = r13 - r12
        L55:
            if (r13 >= r3) goto L6a
            if (r15 >= r4) goto L6a
            int r10 = r20 + r13
            int r5 = r22 + r15
            boolean r5 = r0.areItemsTheSame(r10, r5)
            if (r5 == 0) goto L6a
            int r13 = r13 + 1
            int r15 = r15 + 1
            r5 = 1
            r10 = 0
            goto L55
        L6a:
            int r5 = r26 + r12
            r1[r5] = r13
            if (r8 == 0) goto L9c
            int r10 = r6 - r9
            r13 = 1
            int r10 = r10 + r13
            if (r12 < r10) goto L9c
            int r10 = r6 + r9
            int r10 = r10 - r13
            if (r12 > r10) goto L9c
            r10 = r1[r5]
            r13 = r2[r5]
            if (r10 < r13) goto L9c
            android.support.v7.util.DiffUtil$Snake r0 = new android.support.v7.util.DiffUtil$Snake
            r0.<init>()
            r3 = r2[r5]
            r0.x = r3
            int r3 = r0.x
            int r3 = r3 - r12
            r0.y = r3
            r1 = r1[r5]
            r2 = r2[r5]
            int r1 = r1 - r2
            r0.size = r1
            r0.removal = r14
            r13 = 0
            r0.reverse = r13
            return r0
        L9c:
            r13 = 0
            int r12 = r12 + 2
            r10 = r13
            r5 = 1
            goto L33
        La2:
            r13 = r10
            r5 = r11
        La4:
            if (r5 > r9) goto L120
            int r10 = r5 + r6
            int r12 = r9 + r6
            if (r10 == r12) goto Lc6
            int r12 = r11 + r6
            if (r10 == r12) goto Lbd
            int r12 = r26 + r10
            int r14 = r12 + (-1)
            r14 = r2[r14]
            r15 = 1
            int r12 = r12 + r15
            r12 = r2[r12]
            if (r14 >= r12) goto Lbe
            goto Lc7
        Lbd:
            r15 = 1
        Lbe:
            int r12 = r26 + r10
            int r12 = r12 + r15
            r12 = r2[r12]
            int r12 = r12 - r15
            r14 = r15
            goto Lcd
        Lc6:
            r15 = 1
        Lc7:
            int r12 = r26 + r10
            int r12 = r12 - r15
            r12 = r2[r12]
            r14 = r13
        Lcd:
            int r16 = r12 - r10
        Lcf:
            if (r12 <= 0) goto Lec
            if (r16 <= 0) goto Lec
            int r17 = r20 + r12
            int r13 = r17 + (-1)
            int r17 = r22 + r16
            r18 = r3
            int r3 = r17 + (-1)
            boolean r3 = r0.areItemsTheSame(r13, r3)
            if (r3 == 0) goto Lee
            int r12 = r12 + (-1)
            int r16 = r16 + (-1)
            r3 = r18
            r13 = 0
            r15 = 1
            goto Lcf
        Lec:
            r18 = r3
        Lee:
            int r3 = r26 + r10
            r2[r3] = r12
            if (r8 != 0) goto L119
            if (r10 < r11) goto L119
            if (r10 > r9) goto L119
            r12 = r1[r3]
            r13 = r2[r3]
            if (r12 < r13) goto L119
            android.support.v7.util.DiffUtil$Snake r0 = new android.support.v7.util.DiffUtil$Snake
            r0.<init>()
            r4 = r2[r3]
            r0.x = r4
            int r4 = r0.x
            int r4 = r4 - r10
            r0.y = r4
            r1 = r1[r3]
            r2 = r2[r3]
            int r1 = r1 - r2
            r0.size = r1
            r0.removal = r14
            r3 = 1
            r0.reverse = r3
            return r0
        L119:
            r3 = 1
            int r5 = r5 + 2
            r3 = r18
            r13 = 0
            goto La4
        L120:
            r18 = r3
            r3 = 1
            int r9 = r9 + 1
            r5 = r3
            r3 = r18
            r10 = 0
            goto L2f
        L12b:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "DiffUtil hit an unexpected case while trying to calculate the optimal path. Please make sure your data is not changing during the diff calculation."
            r0.<init>(r1)
            throw r0
        L133:
            r0 = 0
            return r0
    }
}
