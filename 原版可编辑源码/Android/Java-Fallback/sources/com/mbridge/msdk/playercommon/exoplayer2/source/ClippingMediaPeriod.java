package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class ClippingMediaPeriod implements com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod, com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback {
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback callback;
    long endUs;
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod mediaPeriod;
    private long pendingInitialDiscontinuityPositionUs;
    private com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod.ClippingSampleStream[] sampleStreams;
    long startUs;

    private final class ClippingSampleStream implements com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream {
        public final com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream childStream;
        private boolean sentEos;
        final com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod this$0;

        public ClippingSampleStream(com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r1, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.childStream = r2
                return
        }

        public final void clearSentEos() {
                r1 = this;
                r0 = 0
                r1.sentEos = r0
                return
        }

        @Override
        public final boolean isReady() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r0 = r1.this$0
                boolean r0 = r0.isPendingInitialDiscontinuity()
                if (r0 != 0) goto L12
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r1.childStream
                boolean r0 = r0.isReady()
                if (r0 == 0) goto L12
                r0 = 1
                goto L13
            L12:
                r0 = 0
            L13:
                return r0
        }

        @Override
        public final void maybeThrowError() throws java.io.IOException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r1.childStream
                r0.maybeThrowError()
                return
        }

        @Override
        public final int readData(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r11, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r12, boolean r13) {
                r10 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r0 = r10.this$0
                boolean r0 = r0.isPendingInitialDiscontinuity()
                r1 = -3
                if (r0 == 0) goto La
                return r1
            La:
                boolean r0 = r10.sentEos
                r2 = 4
                r3 = -4
                if (r0 == 0) goto L14
                r12.setFlags(r2)
                return r3
            L14:
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r10.childStream
                int r13 = r0.readData(r11, r12, r13)
                r0 = -5
                r4 = -9223372036854775808
                if (r13 != r0) goto L4a
                com.mbridge.msdk.playercommon.exoplayer2.Format r12 = r11.format
                int r13 = r12.encoderDelay
                if (r13 != 0) goto L29
                int r13 = r12.encoderPadding
                if (r13 == 0) goto L49
            L29:
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r13 = r10.this$0
                long r1 = r13.startUs
                r6 = 0
                int r13 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
                r1 = 0
                if (r13 == 0) goto L36
                r13 = r1
                goto L38
            L36:
                int r13 = r12.encoderDelay
            L38:
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r2 = r10.this$0
                long r2 = r2.endUs
                int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r2 == 0) goto L41
                goto L43
            L41:
                int r1 = r12.encoderPadding
            L43:
                com.mbridge.msdk.playercommon.exoplayer2.Format r12 = r12.copyWithGaplessInfo(r13, r1)
                r11.format = r12
            L49:
                return r0
            L4a:
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r11 = r10.this$0
                long r6 = r11.endUs
                int r11 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
                if (r11 == 0) goto L74
                if (r13 != r3) goto L5e
                long r6 = r12.timeUs
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r11 = r10.this$0
                long r8 = r11.endUs
                int r11 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
                if (r11 >= 0) goto L6a
            L5e:
                if (r13 != r1) goto L74
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r11 = r10.this$0
                long r0 = r11.getBufferedPositionUs()
                int r11 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
                if (r11 != 0) goto L74
            L6a:
                r12.clear()
                r12.setFlags(r2)
                r11 = 1
                r10.sentEos = r11
                return r3
            L74:
                return r13
        }

        @Override
        public final int skipData(long r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod r0 = r1.this$0
                boolean r0 = r0.isPendingInitialDiscontinuity()
                if (r0 == 0) goto La
                r2 = -3
                return r2
            La:
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r0 = r1.childStream
                int r2 = r0.skipData(r2)
                return r2
        }
    }

    public ClippingMediaPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1, boolean r2, long r3, long r5) {
            r0 = this;
            r0.<init>()
            r0.mediaPeriod = r1
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod.ClippingSampleStream[r1]
            r0.sampleStreams = r1
            if (r2 == 0) goto Le
            r1 = r3
            goto L13
        Le:
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L13:
            r0.pendingInitialDiscontinuityPositionUs = r1
            r0.startUs = r3
            r0.endUs = r5
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.SeekParameters clipSeekParameters(long r9, com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r11) {
            r8 = this;
            long r0 = r11.toleranceBeforeUs
            long r2 = r8.startUs
            long r4 = r9 - r2
            r2 = 0
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r0, r2, r4)
            long r2 = r11.toleranceAfterUs
            long r4 = r8.endUs
            r6 = -9223372036854775808
            int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r6 != 0) goto L1d
            r9 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r6 = r9
            goto L1f
        L1d:
            long r4 = r4 - r9
            r6 = r4
        L1f:
            r4 = 0
            long r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r2, r4, r6)
            long r2 = r11.toleranceBeforeUs
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L32
            long r2 = r11.toleranceAfterUs
            int r2 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r2 != 0) goto L32
            return r11
        L32:
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r11 = new com.mbridge.msdk.playercommon.exoplayer2.SeekParameters
            r11.<init>(r0, r9)
            return r11
    }

    private static boolean shouldKeepInitialDiscontinuity(long r2, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r4) {
            r0 = 0
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r3 = 0
            if (r2 == 0) goto L20
            int r2 = r4.length
            r0 = r3
        L9:
            if (r0 >= r2) goto L20
            r1 = r4[r0]
            if (r1 == 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r1.getSelectedFormat()
            java.lang.String r1 = r1.sampleMimeType
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.isAudio(r1)
            if (r1 != 0) goto L1d
            r2 = 1
            return r2
        L1d:
            int r0 = r0 + 1
            goto L9
        L20:
            return r3
    }

    @Override
    public final boolean continueLoading(long r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            boolean r2 = r0.continueLoading(r2)
            return r2
    }

    @Override
    public final void discardBuffer(long r2, boolean r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            r0.discardBuffer(r2, r4)
            return
    }

    @Override
    public final long getAdjustedSeekPositionUs(long r4, com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r6) {
            r3 = this;
            long r0 = r3.startUs
            int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r2 != 0) goto L7
            return r0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r6 = r3.clipSeekParameters(r4, r6)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r3.mediaPeriod
            long r4 = r0.getAdjustedSeekPositionUs(r4, r6)
            return r4
    }

    @Override
    public final long getBufferedPositionUs() {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r7.mediaPeriod
            long r0 = r0.getBufferedPositionUs()
            r2 = -9223372036854775808
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L18
            long r4 = r7.endUs
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 == 0) goto L17
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 < 0) goto L17
            goto L18
        L17:
            return r0
        L18:
            return r2
    }

    @Override
    public final long getNextLoadPositionUs() {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r7.mediaPeriod
            long r0 = r0.getNextLoadPositionUs()
            r2 = -9223372036854775808
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L18
            long r4 = r7.endUs
            int r6 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r6 == 0) goto L17
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 < 0) goto L17
            goto L18
        L17:
            return r0
        L18:
            return r2
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getTrackGroups() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r0.getTrackGroups()
            return r0
    }

    final boolean isPendingInitialDiscontinuity() {
            r4 = this;
            long r0 = r4.pendingInitialDiscontinuityPositionUs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    @Override
    public final void maybeThrowPrepareError() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            r0.maybeThrowPrepareError()
            return
    }

    public final void onContinueLoadingRequested(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r1 = r0.callback
            r1.onContinueLoadingRequested(r0)
            return
    }

    @Override
    public final void onContinueLoadingRequested(com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod) r1
            r0.onContinueLoadingRequested(r1)
            return
    }

    @Override
    public final void onPrepared(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r1 = r0.callback
            r1.onPrepared(r0)
            return
    }

    @Override
    public final void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback r1, long r2) {
            r0 = this;
            r0.callback = r1
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1 = r0.mediaPeriod
            r1.prepare(r0, r2)
            return
    }

    @Override
    public final long readDiscontinuity() {
            r9 = this;
            boolean r0 = r9.isPendingInitialDiscontinuity()
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r0 == 0) goto L19
            long r3 = r9.pendingInitialDiscontinuityPositionUs
            r9.pendingInitialDiscontinuityPositionUs = r1
            long r5 = r9.readDiscontinuity()
            int r0 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r0 == 0) goto L18
            r3 = r5
        L18:
            return r3
        L19:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r9.mediaPeriod
            long r3 = r0.readDiscontinuity()
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L24
            return r1
        L24:
            long r0 = r9.startUs
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r1 = 1
            r2 = 0
            if (r0 < 0) goto L2e
            r0 = r1
            goto L2f
        L2e:
            r0 = r2
        L2f:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            long r5 = r9.endUs
            r7 = -9223372036854775808
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 == 0) goto L40
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 > 0) goto L3f
            goto L40
        L3f:
            r1 = r2
        L40:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            return r3
    }

    @Override
    public final void reevaluateBuffer(long r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r1.mediaPeriod
            r0.reevaluateBuffer(r2)
            return
    }

    @Override
    public final long seekToUs(long r6) {
            r5 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r5.pendingInitialDiscontinuityPositionUs = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream[] r0 = r5.sampleStreams
            int r1 = r0.length
            r2 = 0
            r3 = r2
        Lc:
            if (r3 >= r1) goto L18
            r4 = r0[r3]
            if (r4 == 0) goto L15
            r4.clearSentEos()
        L15:
            int r3 = r3 + 1
            goto Lc
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r0 = r5.mediaPeriod
            long r0 = r0.seekToUs(r6)
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 == 0) goto L34
            long r6 = r5.startUs
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 < 0) goto L35
            long r6 = r5.endUs
            r3 = -9223372036854775808
            int r3 = (r6 > r3 ? 1 : (r6 == r3 ? 0 : -1))
            if (r3 == 0) goto L34
            int r6 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r6 > 0) goto L35
        L34:
            r2 = 1
        L35:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r2)
            return r0
    }

    @Override
    public final long selectTracks(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r13, boolean[] r14, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r15, boolean[] r16, long r17) {
            r12 = this;
            r0 = r12
            r1 = r15
            int r2 = r1.length
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream[] r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod.ClippingSampleStream[r2]
            r0.sampleStreams = r2
            int r2 = r1.length
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r9 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[r2]
            r10 = 0
            r2 = r10
        Lc:
            int r3 = r1.length
            r11 = 0
            if (r2 >= r3) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream[] r3 = r0.sampleStreams
            r4 = r1[r2]
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod.ClippingSampleStream) r4
            r3[r2] = r4
            r4 = r3[r2]
            if (r4 == 0) goto L20
            r3 = r3[r2]
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r11 = r3.childStream
        L20:
            r9[r2] = r11
            int r2 = r2 + 1
            goto Lc
        L25:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r2 = r0.mediaPeriod
            r3 = r13
            r4 = r14
            r5 = r9
            r6 = r16
            r7 = r17
            long r2 = r2.selectTracks(r3, r4, r5, r6, r7)
            boolean r4 = r12.isPendingInitialDiscontinuity()
            if (r4 == 0) goto L47
            long r4 = r0.startUs
            int r6 = (r17 > r4 ? 1 : (r17 == r4 ? 0 : -1))
            if (r6 != 0) goto L47
            r6 = r13
            boolean r4 = shouldKeepInitialDiscontinuity(r4, r13)
            if (r4 == 0) goto L47
            r4 = r2
            goto L4c
        L47:
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L4c:
            r0.pendingInitialDiscontinuityPositionUs = r4
            int r4 = (r2 > r17 ? 1 : (r2 == r17 ? 0 : -1))
            if (r4 == 0) goto L67
            long r4 = r0.startUs
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 < 0) goto L65
            long r4 = r0.endUs
            r6 = -9223372036854775808
            int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r6 == 0) goto L67
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 > 0) goto L65
            goto L67
        L65:
            r4 = r10
            goto L68
        L67:
            r4 = 1
        L68:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r4)
        L6b:
            int r4 = r1.length
            if (r10 >= r4) goto L99
            r4 = r9[r10]
            if (r4 != 0) goto L77
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream[] r4 = r0.sampleStreams
            r4[r10] = r11
            goto L90
        L77:
            r4 = r1[r10]
            if (r4 == 0) goto L85
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream[] r4 = r0.sampleStreams
            r4 = r4[r10]
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream r4 = r4.childStream
            r5 = r9[r10]
            if (r4 == r5) goto L90
        L85:
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream[] r4 = r0.sampleStreams
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream r5 = new com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream
            r6 = r9[r10]
            r5.<init>(r12, r6)
            r4[r10] = r5
        L90:
            com.mbridge.msdk.playercommon.exoplayer2.source.ClippingMediaPeriod$ClippingSampleStream[] r4 = r0.sampleStreams
            r4 = r4[r10]
            r1[r10] = r4
            int r10 = r10 + 1
            goto L6b
        L99:
            return r2
    }

    public final void updateClipping(long r1, long r3) {
            r0 = this;
            r0.startUs = r1
            r0.endUs = r3
            return
    }
}
