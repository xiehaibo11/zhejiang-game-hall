package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class DvbSubtitleReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private int bytesToCheck;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] outputs;
    private int sampleBytesWritten;
    private long sampleTimeUs;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.DvbSubtitleInfo> subtitleInfos;
    private boolean writingSample;

    public DvbSubtitleReader(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.DvbSubtitleInfo> r1) {
            r0 = this;
            r0.<init>()
            r0.subtitleInfos = r1
            int r1 = r1.size()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[r1]
            r0.outputs = r1
            return
    }

    private boolean checkNextByte(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3, int r4) {
            r2 = this;
            int r0 = r3.bytesLeft()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            int r3 = r3.readUnsignedByte()
            if (r3 == r4) goto L10
            r2.writingSample = r1
        L10:
            int r3 = r2.bytesToCheck
            int r3 = r3 + (-1)
            r2.bytesToCheck = r3
            boolean r3 = r2.writingSample
            return r3
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7) {
            r6 = this;
            boolean r0 = r6.writingSample
            if (r0 == 0) goto L3c
            int r0 = r6.bytesToCheck
            r1 = 2
            if (r0 != r1) goto L12
            r0 = 32
            boolean r0 = r6.checkNextByte(r7, r0)
            if (r0 != 0) goto L12
            return
        L12:
            int r0 = r6.bytesToCheck
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L1f
            boolean r0 = r6.checkNextByte(r7, r1)
            if (r0 != 0) goto L1f
            return
        L1f:
            int r0 = r7.getPosition()
            int r2 = r7.bytesLeft()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r3 = r6.outputs
            int r4 = r3.length
        L2a:
            if (r1 >= r4) goto L37
            r5 = r3[r1]
            r7.setPosition(r0)
            r5.sampleData(r7, r2)
            int r1 = r1 + 1
            goto L2a
        L37:
            int r7 = r6.sampleBytesWritten
            int r7 = r7 + r2
            r6.sampleBytesWritten = r7
        L3c:
            return
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r12, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r13) {
            r11 = this;
            r0 = 0
        L1:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r1 = r11.outputs
            int r1 = r1.length
            if (r0 >= r1) goto L3a
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$DvbSubtitleInfo> r1 = r11.subtitleInfos
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader$DvbSubtitleInfo r1 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.DvbSubtitleInfo) r1
            r13.generateNewId()
            int r2 = r13.getTrackId()
            r3 = 3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r12.track(r2, r3)
            java.lang.String r3 = r13.getFormatId()
            r5 = 0
            r6 = -1
            r7 = 0
            byte[] r4 = r1.initializationData
            java.util.List r8 = java.util.Collections.singletonList(r4)
            java.lang.String r9 = r1.language
            r10 = 0
            java.lang.String r4 = "application/dvbsubs"
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = com.mbridge.msdk.playercommon.exoplayer2.Format.createImageSampleFormat(r3, r4, r5, r6, r7, r8, r9, r10)
            r2.format(r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r1 = r11.outputs
            r1[r0] = r2
            int r0 = r0 + 1
            goto L1
        L3a:
            return
    }

    @Override
    public final void packetFinished() {
            r11 = this;
            boolean r0 = r11.writingSample
            if (r0 == 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = r11.outputs
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L9:
            if (r3 >= r1) goto L1a
            r4 = r0[r3]
            long r5 = r11.sampleTimeUs
            r7 = 1
            int r8 = r11.sampleBytesWritten
            r9 = 0
            r10 = 0
            r4.sampleMetadata(r5, r7, r8, r9, r10)
            int r3 = r3 + 1
            goto L9
        L1a:
            r11.writingSample = r2
        L1c:
            return
    }

    @Override
    public final void packetStarted(long r1, boolean r3) {
            r0 = this;
            if (r3 != 0) goto L3
            return
        L3:
            r3 = 1
            r0.writingSample = r3
            r0.sampleTimeUs = r1
            r1 = 0
            r0.sampleBytesWritten = r1
            r1 = 2
            r0.bytesToCheck = r1
            return
    }

    @Override
    public final void seek() {
            r1 = this;
            r0 = 0
            r1.writingSample = r0
            return
    }
}
