package com.mbridge.msdk.playercommon.exoplayer2.source;

public interface ShuffleOrder {

    public static class DefaultShuffleOrder implements com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder {
        private final int[] indexInShuffled;
        private final java.util.Random random;
        private final int[] shuffled;

        public DefaultShuffleOrder(int r2) {
                r1 = this;
                java.util.Random r0 = new java.util.Random
                r0.<init>()
                r1.<init>(r2, r0)
                return
        }

        public DefaultShuffleOrder(int r2, long r3) {
                r1 = this;
                java.util.Random r0 = new java.util.Random
                r0.<init>(r3)
                r1.<init>(r2, r0)
                return
        }

        private DefaultShuffleOrder(int r1, java.util.Random r2) {
                r0 = this;
                int[] r1 = createShuffledList(r1, r2)
                r0.<init>(r1, r2)
                return
        }

        private DefaultShuffleOrder(int[] r3, java.util.Random r4) {
                r2 = this;
                r2.<init>()
                r2.shuffled = r3
                r2.random = r4
                int r4 = r3.length
                int[] r4 = new int[r4]
                r2.indexInShuffled = r4
                r4 = 0
            Ld:
                int r0 = r3.length
                if (r4 >= r0) goto L19
                int[] r0 = r2.indexInShuffled
                r1 = r3[r4]
                r0[r1] = r4
                int r4 = r4 + 1
                goto Ld
            L19:
                return
        }

        private static int[] createShuffledList(int r5, java.util.Random r6) {
                int[] r0 = new int[r5]
                r1 = 0
            L3:
                if (r1 >= r5) goto L13
                int r2 = r1 + 1
                int r3 = r6.nextInt(r2)
                r4 = r0[r3]
                r0[r1] = r4
                r0[r3] = r1
                r1 = r2
                goto L3
            L13:
                return r0
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndClear() {
                r4 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder
                java.util.Random r1 = new java.util.Random
                java.util.Random r2 = r4.random
                long r2 = r2.nextLong()
                r1.<init>(r2)
                r2 = 0
                r0.<init>(r2, r1)
                return r0
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndInsert(int r9, int r10) {
                r8 = this;
                int[] r0 = new int[r10]
                int[] r1 = new int[r10]
                r2 = 0
                r3 = r2
            L6:
                if (r3 >= r10) goto L26
                java.util.Random r4 = r8.random
                int[] r5 = r8.shuffled
                int r5 = r5.length
                int r5 = r5 + 1
                int r4 = r4.nextInt(r5)
                r0[r3] = r4
                java.util.Random r4 = r8.random
                int r5 = r3 + 1
                int r4 = r4.nextInt(r5)
                r6 = r1[r4]
                r1[r3] = r6
                int r3 = r3 + r9
                r1[r4] = r3
                r3 = r5
                goto L6
            L26:
                java.util.Arrays.sort(r0)
                int[] r3 = r8.shuffled
                int r3 = r3.length
                int r3 = r3 + r10
                int[] r3 = new int[r3]
                r4 = r2
                r5 = r4
            L31:
                int[] r6 = r8.shuffled
                int r6 = r6.length
                int r6 = r6 + r10
                if (r2 >= r6) goto L5a
                if (r4 >= r10) goto L45
                r6 = r0[r4]
                if (r5 != r6) goto L45
                int r6 = r4 + 1
                r4 = r1[r4]
                r3[r2] = r4
                r4 = r6
                goto L57
            L45:
                int[] r6 = r8.shuffled
                int r7 = r5 + 1
                r5 = r6[r5]
                r3[r2] = r5
                r5 = r3[r2]
                if (r5 < r9) goto L56
                r5 = r3[r2]
                int r5 = r5 + r10
                r3[r2] = r5
            L56:
                r5 = r7
            L57:
                int r2 = r2 + 1
                goto L31
            L5a:
                com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder
                java.util.Random r10 = new java.util.Random
                java.util.Random r0 = r8.random
                long r0 = r0.nextLong()
                r10.<init>(r0)
                r9.<init>(r3, r10)
                return r9
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndRemove(int r8) {
                r7 = this;
                int[] r0 = r7.shuffled
                int r0 = r0.length
                r1 = 1
                int r0 = r0 - r1
                int[] r0 = new int[r0]
                r2 = 0
                r3 = r2
            L9:
                int[] r4 = r7.shuffled
                int r5 = r4.length
                if (r2 >= r5) goto L2b
                r4 = r4[r2]
                if (r4 != r8) goto L14
                r3 = r1
                goto L28
            L14:
                if (r3 == 0) goto L19
                int r4 = r2 + (-1)
                goto L1a
            L19:
                r4 = r2
            L1a:
                int[] r5 = r7.shuffled
                r6 = r5[r2]
                if (r6 <= r8) goto L24
                r5 = r5[r2]
                int r5 = r5 - r1
                goto L26
            L24:
                r5 = r5[r2]
            L26:
                r0[r4] = r5
            L28:
                int r2 = r2 + 1
                goto L9
            L2b:
                com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder r8 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$DefaultShuffleOrder
                java.util.Random r1 = new java.util.Random
                java.util.Random r2 = r7.random
                long r2 = r2.nextLong()
                r1.<init>(r2)
                r8.<init>(r0, r1)
                return r8
        }

        @Override
        public int getFirstIndex() {
                r2 = this;
                int[] r0 = r2.shuffled
                int r1 = r0.length
                if (r1 <= 0) goto L9
                r1 = 0
                r0 = r0[r1]
                goto La
            L9:
                r0 = -1
            La:
                return r0
        }

        @Override
        public int getLastIndex() {
                r2 = this;
                int[] r0 = r2.shuffled
                int r1 = r0.length
                if (r1 <= 0) goto Lb
                int r1 = r0.length
                int r1 = r1 + (-1)
                r0 = r0[r1]
                goto Lc
            Lb:
                r0 = -1
            Lc:
                return r0
        }

        @Override
        public int getLength() {
                r1 = this;
                int[] r0 = r1.shuffled
                int r0 = r0.length
                return r0
        }

        @Override
        public int getNextIndex(int r3) {
                r2 = this;
                int[] r0 = r2.indexInShuffled
                r3 = r0[r3]
                int r3 = r3 + 1
                int[] r0 = r2.shuffled
                int r1 = r0.length
                if (r3 >= r1) goto Le
                r3 = r0[r3]
                goto Lf
            Le:
                r3 = -1
            Lf:
                return r3
        }

        @Override
        public int getPreviousIndex(int r2) {
                r1 = this;
                int[] r0 = r1.indexInShuffled
                r2 = r0[r2]
                r0 = -1
                int r2 = r2 + r0
                if (r2 < 0) goto Lc
                int[] r0 = r1.shuffled
                r0 = r0[r2]
            Lc:
                return r0
        }
    }

    public static final class UnshuffledShuffleOrder implements com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder {
        private final int length;

        public UnshuffledShuffleOrder(int r1) {
                r0 = this;
                r0.<init>()
                r0.length = r1
                return
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndClear() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$UnshuffledShuffleOrder r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$UnshuffledShuffleOrder
                r1 = 0
                r0.<init>(r1)
                return r0
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndInsert(int r2, int r3) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$UnshuffledShuffleOrder r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$UnshuffledShuffleOrder
                int r0 = r1.length
                int r0 = r0 + r3
                r2.<init>(r0)
                return r2
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndRemove(int r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$UnshuffledShuffleOrder r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder$UnshuffledShuffleOrder
                int r0 = r1.length
                int r0 = r0 + (-1)
                r2.<init>(r0)
                return r2
        }

        @Override
        public final int getFirstIndex() {
                r1 = this;
                int r0 = r1.length
                if (r0 <= 0) goto L6
                r0 = 0
                goto L7
            L6:
                r0 = -1
            L7:
                return r0
        }

        @Override
        public final int getLastIndex() {
                r1 = this;
                int r0 = r1.length
                if (r0 <= 0) goto L7
                int r0 = r0 + (-1)
                goto L8
            L7:
                r0 = -1
            L8:
                return r0
        }

        @Override
        public final int getLength() {
                r1 = this;
                int r0 = r1.length
                return r0
        }

        @Override
        public final int getNextIndex(int r2) {
                r1 = this;
                int r2 = r2 + 1
                int r0 = r1.length
                if (r2 >= r0) goto L7
                goto L8
            L7:
                r2 = -1
            L8:
                return r2
        }

        @Override
        public final int getPreviousIndex(int r2) {
                r1 = this;
                r0 = -1
                int r2 = r2 + r0
                if (r2 < 0) goto L5
                r0 = r2
            L5:
                return r0
        }
    }

    com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndClear();

    com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndInsert(int r1, int r2);

    com.mbridge.msdk.playercommon.exoplayer2.source.ShuffleOrder cloneAndRemove(int r1);

    int getFirstIndex();

    int getLastIndex();

    int getLength();

    int getNextIndex(int r1);

    int getPreviousIndex(int r1);
}
