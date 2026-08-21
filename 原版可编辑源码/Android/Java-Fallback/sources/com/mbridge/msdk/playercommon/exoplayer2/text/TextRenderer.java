package com.mbridge.msdk.playercommon.exoplayer2.text;

public final class TextRenderer extends com.mbridge.msdk.playercommon.exoplayer2.BaseRenderer implements android.os.Handler.Callback {
    private static final int MSG_UPDATE_OUTPUT = 0;
    private static final int REPLACEMENT_STATE_NONE = 0;
    private static final int REPLACEMENT_STATE_SIGNAL_END_OF_STREAM = 1;
    private static final int REPLACEMENT_STATE_WAIT_END_OF_STREAM = 2;
    private com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder decoder;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory decoderFactory;
    private int decoderReplacementState;
    private final com.mbridge.msdk.playercommon.exoplayer2.FormatHolder formatHolder;
    private boolean inputStreamEnded;
    private com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer nextInputBuffer;
    private com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer nextSubtitle;
    private int nextSubtitleEventIndex;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput output;
    private final android.os.Handler outputHandler;
    private boolean outputStreamEnded;
    private com.mbridge.msdk.playercommon.exoplayer2.Format streamFormat;
    private com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer subtitle;

    public interface Output extends com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput {
    }

    private @interface ReplacementState {
    }

    public TextRenderer(com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r2, android.os.Looper r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory r0 = com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory.DEFAULT
            r1.<init>(r2, r3, r0)
            return
    }

    public TextRenderer(com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r2, android.os.Looper r3, com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory r4) {
            r1 = this;
            r0 = 3
            r1.<init>(r0)
            java.lang.Object r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r2 = (com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput) r2
            r1.output = r2
            if (r3 != 0) goto L10
            r2 = 0
            goto L15
        L10:
            android.os.Handler r2 = new android.os.Handler
            r2.<init>(r3, r1)
        L15:
            r1.outputHandler = r2
            r1.decoderFactory = r4
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r2 = new com.mbridge.msdk.playercommon.exoplayer2.FormatHolder
            r2.<init>()
            r1.formatHolder = r2
            return
    }

    private void clearOutput() {
            r1 = this;
            java.util.List r0 = java.util.Collections.emptyList()
            r1.updateOutput(r0)
            return
    }

    private long getNextEventTime() {
            r2 = this;
            int r0 = r2.nextSubtitleEventIndex
            r1 = -1
            if (r0 == r1) goto L17
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r1 = r2.subtitle
            int r1 = r1.getEventTimeCount()
            if (r0 < r1) goto Le
            goto L17
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r0 = r2.subtitle
            int r1 = r2.nextSubtitleEventIndex
            long r0 = r0.getEventTime(r1)
            goto L1c
        L17:
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
        L1c:
            return r0
    }

    private void invokeUpdateOutputInternal(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r0 = r1.output
            r0.onCues(r2)
            return
    }

    private void releaseBuffers() {
            r2 = this;
            r0 = 0
            r2.nextInputBuffer = r0
            r1 = -1
            r2.nextSubtitleEventIndex = r1
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r1 = r2.subtitle
            if (r1 == 0) goto Lf
            r1.release()
            r2.subtitle = r0
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r1 = r2.nextSubtitle
            if (r1 == 0) goto L18
            r1.release()
            r2.nextSubtitle = r0
        L18:
            return
    }

    private void releaseDecoder() {
            r1 = this;
            r1.releaseBuffers()
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r0 = r1.decoder
            r0.release()
            r0 = 0
            r1.decoder = r0
            r0 = 0
            r1.decoderReplacementState = r0
            return
    }

    private void replaceDecoder() {
            r2 = this;
            r2.releaseDecoder()
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory r0 = r2.decoderFactory
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r2.streamFormat
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r0 = r0.createDecoder(r1)
            r2.decoder = r0
            return
    }

    private void updateOutput(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r3) {
            r2 = this;
            android.os.Handler r0 = r2.outputHandler
            if (r0 == 0) goto Ld
            r1 = 0
            android.os.Message r3 = r0.obtainMessage(r1, r3)
            r3.sendToTarget()
            goto L10
        Ld:
            r2.invokeUpdateOutputInternal(r3)
        L10:
            return
    }

    @Override
    public final boolean handleMessage(android.os.Message r2) {
            r1 = this;
            int r0 = r2.what
            if (r0 != 0) goto Ld
            java.lang.Object r2 = r2.obj
            java.util.List r2 = (java.util.List) r2
            r1.invokeUpdateOutputInternal(r2)
            r2 = 1
            return r2
        Ld:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            r2.<init>()
            throw r2
    }

    @Override
    public final boolean isEnded() {
            r1 = this;
            boolean r0 = r1.outputStreamEnded
            return r0
    }

    @Override
    public final boolean isReady() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    protected final void onDisabled() {
            r1 = this;
            r0 = 0
            r1.streamFormat = r0
            r1.clearOutput()
            r1.releaseDecoder()
            return
    }

    @Override
    protected final void onPositionReset(long r1, boolean r3) {
            r0 = this;
            r0.clearOutput()
            r1 = 0
            r0.inputStreamEnded = r1
            r0.outputStreamEnded = r1
            int r1 = r0.decoderReplacementState
            if (r1 == 0) goto L10
            r0.replaceDecoder()
            goto L18
        L10:
            r0.releaseBuffers()
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r1 = r0.decoder
            r1.flush()
        L18:
            return
    }

    @Override
    protected final void onStreamChanged(com.mbridge.msdk.playercommon.exoplayer2.Format[] r1, long r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            r2 = 0
            r1 = r1[r2]
            r0.streamFormat = r1
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r2 = r0.decoder
            if (r2 == 0) goto Ld
            r1 = 1
            r0.decoderReplacementState = r1
            goto L15
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory r2 = r0.decoderFactory
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r1 = r2.createDecoder(r1)
            r0.decoder = r1
        L15:
            return
    }

    @Override
    public final void render(long r9, long r11) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r8 = this;
            boolean r11 = r8.outputStreamEnded
            if (r11 == 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r11 = r8.nextSubtitle
            if (r11 != 0) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r11 = r8.decoder
            r11.setPositionUs(r9)
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r11 = r8.decoder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L19
            java.lang.Object r11 = r11.dequeueOutputBuffer()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L19
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r11 = (com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer) r11     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L19
            r8.nextSubtitle = r11     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L19
            goto L23
        L19:
            r9 = move-exception
            int r10 = r8.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r9 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r9, r10)
            throw r9
        L23:
            int r11 = r8.getState()
            r12 = 2
            if (r11 == r12) goto L2b
            return
        L2b:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r11 = r8.subtitle
            r0 = 0
            r1 = 1
            if (r11 == 0) goto L45
            long r2 = r8.getNextEventTime()
            r11 = r0
        L36:
            int r2 = (r2 > r9 ? 1 : (r2 == r9 ? 0 : -1))
            if (r2 > 0) goto L46
            int r11 = r8.nextSubtitleEventIndex
            int r11 = r11 + r1
            r8.nextSubtitleEventIndex = r11
            long r2 = r8.getNextEventTime()
            r11 = r1
            goto L36
        L45:
            r11 = r0
        L46:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r2 = r8.nextSubtitle
            r3 = 0
            if (r2 == 0) goto L8a
            boolean r2 = r2.isEndOfStream()
            if (r2 == 0) goto L6e
            if (r11 != 0) goto L8a
            long r4 = r8.getNextEventTime()
            r6 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 != 0) goto L8a
            int r2 = r8.decoderReplacementState
            if (r2 != r12) goto L68
            r8.replaceDecoder()
            goto L8a
        L68:
            r8.releaseBuffers()
            r8.outputStreamEnded = r1
            goto L8a
        L6e:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r2 = r8.nextSubtitle
            long r4 = r2.timeUs
            int r2 = (r4 > r9 ? 1 : (r4 == r9 ? 0 : -1))
            if (r2 > 0) goto L8a
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r11 = r8.subtitle
            if (r11 == 0) goto L7d
            r11.release()
        L7d:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r11 = r8.nextSubtitle
            r8.subtitle = r11
            r8.nextSubtitle = r3
            int r11 = r11.getNextEventTimeIndex(r9)
            r8.nextSubtitleEventIndex = r11
            r11 = r1
        L8a:
            if (r11 == 0) goto L95
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r11 = r8.subtitle
            java.util.List r9 = r11.getCues(r9)
            r8.updateOutput(r9)
        L95:
            int r9 = r8.decoderReplacementState
            if (r9 != r12) goto L9a
            return
        L9a:
            boolean r9 = r8.inputStreamEnded     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            if (r9 != 0) goto Lf7
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r9 = r8.nextInputBuffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            if (r9 != 0) goto Laf
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r9 = r8.decoder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            java.lang.Object r9 = r9.dequeueInputBuffer()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r9 = (com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer) r9     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r8.nextInputBuffer = r9     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            if (r9 != 0) goto Laf
            return
        Laf:
            int r9 = r8.decoderReplacementState     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            if (r9 != r1) goto Lc5
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r9 = r8.nextInputBuffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r10 = 4
            r9.setFlags(r10)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r9 = r8.decoder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r10 = r8.nextInputBuffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r9.queueInputBuffer(r10)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r8.nextInputBuffer = r3     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r8.decoderReplacementState = r12     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            return
        Lc5:
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r9 = r8.formatHolder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r10 = r8.nextInputBuffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            int r9 = r8.readSource(r9, r10, r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r10 = -4
            if (r9 != r10) goto Lf4
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r9 = r8.nextInputBuffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            boolean r9 = r9.isEndOfStream()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            if (r9 == 0) goto Ldb
            r8.inputStreamEnded = r1     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            goto Lea
        Ldb:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r9 = r8.nextInputBuffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r10 = r8.formatHolder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            com.mbridge.msdk.playercommon.exoplayer2.Format r10 = r10.format     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            long r10 = r10.subsampleOffsetUs     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r9.subsampleOffsetUs = r10     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r9 = r8.nextInputBuffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r9.flip()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
        Lea:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoder r9 = r8.decoder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r10 = r8.nextInputBuffer     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r9.queueInputBuffer(r10)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            r8.nextInputBuffer = r3     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> Lf8
            goto L9a
        Lf4:
            r10 = -3
            if (r9 != r10) goto L9a
        Lf7:
            return
        Lf8:
            r9 = move-exception
            int r10 = r8.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r9 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r9, r10)
            throw r9
    }

    @Override
    public final int supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderFactory r0 = r1.decoderFactory
            boolean r0 = r0.supportsFormat(r2)
            if (r0 == 0) goto L15
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r2 = r2.drmInitData
            boolean r2 = supportsFormatDrm(r0, r2)
            if (r2 == 0) goto L13
            r2 = 4
            goto L14
        L13:
            r2 = 2
        L14:
            return r2
        L15:
            java.lang.String r2 = r2.sampleMimeType
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.isText(r2)
            if (r2 == 0) goto L1f
            r2 = 1
            return r2
        L1f:
            r2 = 0
            return r2
    }
}
