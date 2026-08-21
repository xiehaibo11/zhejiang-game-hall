package com.mbridge.msdk.playercommon.exoplayer2.text.cea;

abstract class CeaDecoder implements com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder {
    private static final int NUM_INPUT_BUFFERS = 10;
    private static final int NUM_OUTPUT_BUFFERS = 2;
    private final java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer> availableInputBuffers;
    private final java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer> availableOutputBuffers;
    private com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer dequeuedInputBuffer;
    private long playbackPositionUs;
    private long queuedInputBufferCount;
    private final java.util.PriorityQueue<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer> queuedInputBuffers;

    static class 1 {
    }

    private static final class CeaInputBuffer extends com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer implements java.lang.Comparable<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer> {
        private long queuedInputBufferCount;

        private CeaInputBuffer() {
                r0 = this;
                r0.<init>()
                return
        }

        CeaInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static long access$202(com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer r0, long r1) {
                r0.queuedInputBufferCount = r1
                return r1
        }

        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer r9) {
                r8 = this;
                boolean r0 = r8.isEndOfStream()
                boolean r1 = r9.isEndOfStream()
                r2 = 1
                r3 = -1
                if (r0 == r1) goto L15
                boolean r9 = r8.isEndOfStream()
                if (r9 == 0) goto L13
                goto L14
            L13:
                r2 = r3
            L14:
                return r2
            L15:
                long r0 = r8.timeUs
                long r4 = r9.timeUs
                long r0 = r0 - r4
                r4 = 0
                int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
                if (r6 != 0) goto L2b
                long r0 = r8.queuedInputBufferCount
                long r6 = r9.queuedInputBufferCount
                long r0 = r0 - r6
                int r9 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
                if (r9 != 0) goto L2b
                r9 = 0
                return r9
            L2b:
                int r9 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
                if (r9 <= 0) goto L30
                goto L31
            L30:
                r2 = r3
            L31:
                return r2
        }

        @Override
        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer) r1
                int r1 = r0.compareTo(r1)
                return r1
        }
    }

    private final class CeaOutputBuffer extends com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer {
        final com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder this$0;

        private CeaOutputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        CeaOutputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder r1, com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void release() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder r0 = r1.this$0
                r0.releaseOutputBuffer(r1)
                return
        }
    }

    public CeaDecoder() {
            r5 = this;
            r5.<init>()
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r5.availableInputBuffers = r0
            r0 = 0
            r1 = r0
        Lc:
            r2 = 10
            r3 = 0
            if (r1 >= r2) goto L1e
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r2 = r5.availableInputBuffers
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer
            r4.<init>(r3)
            r2.add(r4)
            int r1 = r1 + 1
            goto Lc
        L1e:
            java.util.ArrayDeque r1 = new java.util.ArrayDeque
            r1.<init>()
            r5.availableOutputBuffers = r1
        L25:
            r1 = 2
            if (r0 >= r1) goto L35
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer> r1 = r5.availableOutputBuffers
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaOutputBuffer r2 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaOutputBuffer
            r2.<init>(r5, r3)
            r1.add(r2)
            int r0 = r0 + 1
            goto L25
        L35:
            java.util.PriorityQueue r0 = new java.util.PriorityQueue
            r0.<init>()
            r5.queuedInputBuffers = r0
            return
    }

    private void releaseInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer r2) {
            r1 = this;
            r2.clear()
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r0 = r1.availableInputBuffers
            r0.add(r2)
            return
    }

    protected abstract com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle createSubtitle();

    protected abstract void decode(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r1);

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer dequeueInputBuffer() throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r0 = r1.dequeuedInputBuffer
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r0 = r1.availableInputBuffers
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L14
            r0 = 0
            return r0
        L14:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r0 = r1.availableInputBuffers
            java.lang.Object r0 = r0.pollFirst()
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r0 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer) r0
            r1.dequeuedInputBuffer = r0
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer dequeueInputBuffer() throws java.lang.Exception {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r0 = r1.dequeueInputBuffer()
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer dequeueOutputBuffer() throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r9 = this;
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer> r0 = r9.availableOutputBuffers
            boolean r0 = r0.isEmpty()
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            java.util.PriorityQueue<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r0 = r9.queuedInputBuffers
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L6e
            java.util.PriorityQueue<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r0 = r9.queuedInputBuffers
            java.lang.Object r0 = r0.peek()
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r0 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer) r0
            long r2 = r0.timeUs
            long r4 = r9.playbackPositionUs
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L6e
            java.util.PriorityQueue<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r0 = r9.queuedInputBuffers
            java.lang.Object r0 = r0.poll()
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r0 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer) r0
            boolean r2 = r0.isEndOfStream()
            if (r2 == 0) goto L40
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer> r1 = r9.availableOutputBuffers
            java.lang.Object r1 = r1.pollFirst()
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer) r1
            r2 = 4
            r1.addFlag(r2)
            r9.releaseInputBuffer(r0)
            return r1
        L40:
            r9.decode(r0)
            boolean r2 = r9.isNewSubtitleDataAvailable()
            if (r2 == 0) goto L6a
            com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle r6 = r9.createSubtitle()
            boolean r2 = r0.isDecodeOnly()
            if (r2 != 0) goto L6a
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer> r1 = r9.availableOutputBuffers
            java.lang.Object r1 = r1.pollFirst()
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer) r1
            long r4 = r0.timeUs
            r7 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r3 = r1
            r3.setContent(r4, r6, r7)
            r9.releaseInputBuffer(r0)
            return r1
        L6a:
            r9.releaseInputBuffer(r0)
            goto La
        L6e:
            return r1
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer dequeueOutputBuffer() throws java.lang.Exception {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r0 = r1.dequeueOutputBuffer()
            return r0
    }

    @Override
    public void flush() {
            r2 = this;
            r0 = 0
            r2.queuedInputBufferCount = r0
            r2.playbackPositionUs = r0
        L6:
            java.util.PriorityQueue<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r0 = r2.queuedInputBuffers
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1a
            java.util.PriorityQueue<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r0 = r2.queuedInputBuffers
            java.lang.Object r0 = r0.poll()
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r0 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer) r0
            r2.releaseInputBuffer(r0)
            goto L6
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r0 = r2.dequeuedInputBuffer
            if (r0 == 0) goto L24
            r2.releaseInputBuffer(r0)
            r0 = 0
            r2.dequeuedInputBuffer = r0
        L24:
            return
    }

    @Override
    public abstract java.lang.String getName();

    protected abstract boolean isNewSubtitleDataAvailable();

    public void queueInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r5) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r0 = r4.dequeuedInputBuffer
            if (r5 != r0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            boolean r5 = r5.isDecodeOnly()
            if (r5 == 0) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r5 = r4.dequeuedInputBuffer
            r4.releaseInputBuffer(r5)
            goto L29
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r5 = r4.dequeuedInputBuffer
            long r0 = r4.queuedInputBufferCount
            r2 = 1
            long r2 = r2 + r0
            r4.queuedInputBufferCount = r2
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder.CeaInputBuffer.access$202(r5, r0)
            java.util.PriorityQueue<com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer> r5 = r4.queuedInputBuffers
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder$CeaInputBuffer r0 = r4.dequeuedInputBuffer
            r5.add(r0)
        L29:
            r5 = 0
            r4.dequeuedInputBuffer = r5
            return
    }

    @Override
    public void queueInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r1) throws java.lang.Exception {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer) r1
            r0.queueInputBuffer(r1)
            return
    }

    @Override
    public void release() {
            r0 = this;
            return
    }

    protected void releaseOutputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r2) {
            r1 = this;
            r2.clear()
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer> r0 = r1.availableOutputBuffers
            r0.add(r2)
            return
    }

    @Override
    public void setPositionUs(long r1) {
            r0 = this;
            r0.playbackPositionUs = r1
            return
    }
}
