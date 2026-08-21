package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

final class SeiReader {
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> closedCaptionFormats;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] outputs;

    public SeiReader(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r1) {
            r0 = this;
            r0.<init>()
            r0.closedCaptionFormats = r1
            int r1 = r1.size()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[r1]
            r0.outputs = r1
            return
    }

    public final void consume(long r2, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r0 = r1.outputs
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaUtil.consume(r2, r4, r0)
            return
    }

    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r13, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r14) {
            r12 = this;
            r0 = 0
            r1 = r0
        L2:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r2 = r12.outputs
            int r2 = r2.length
            if (r1 >= r2) goto L67
            r14.generateNewId()
            int r2 = r14.getTrackId()
            r3 = 3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2 = r13.track(r2, r3)
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.Format> r3 = r12.closedCaptionFormats
            java.lang.Object r3 = r3.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = (com.mbridge.msdk.playercommon.exoplayer2.Format) r3
            java.lang.String r5 = r3.sampleMimeType
            java.lang.String r4 = "application/cea-608"
            boolean r4 = r4.equals(r5)
            if (r4 != 0) goto L30
            java.lang.String r4 = "application/cea-708"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L2e
            goto L30
        L2e:
            r4 = r0
            goto L31
        L30:
            r4 = 1
        L31:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Invalid closed caption mime type provided: "
            r6.append(r7)
            r6.append(r5)
            java.lang.String r6 = r6.toString()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r4, r6)
            java.lang.String r4 = r3.id
            if (r4 == 0) goto L4c
            java.lang.String r4 = r3.id
            goto L50
        L4c:
            java.lang.String r4 = r14.getFormatId()
        L50:
            r6 = 0
            r7 = -1
            int r8 = r3.selectionFlags
            java.lang.String r9 = r3.language
            int r10 = r3.accessibilityChannel
            r11 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = com.mbridge.msdk.playercommon.exoplayer2.Format.createTextSampleFormat(r4, r5, r6, r7, r8, r9, r10, r11)
            r2.format(r3)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput[] r3 = r12.outputs
            r3[r1] = r2
            int r1 = r1 + 1
            goto L2
        L67:
            return
    }
}
