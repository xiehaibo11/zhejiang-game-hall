package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

public class OggExtractor implements com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor {
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory FACTORY = null;
    private static final int MAX_VERIFICATION_BYTES = 8;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput output;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader streamReader;
    private boolean streamReaderInitialized;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggExtractor$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggExtractor$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggExtractor.FACTORY = r0
            return
    }

    public OggExtractor() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray resetPosition(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) {
            r0 = 0
            r1.setPosition(r0)
            return r1
    }

    private boolean sniffInternal(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r6) throws java.io.IOException, java.lang.InterruptedException {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader
            r0.<init>()
            r1 = 1
            boolean r2 = r0.populate(r6, r1)
            r3 = 0
            if (r2 == 0) goto L5c
            int r2 = r0.type
            r4 = 2
            r2 = r2 & r4
            if (r2 == r4) goto L14
            goto L5c
        L14:
            int r0 = r0.bodySize
            r2 = 8
            int r0 = java.lang.Math.min(r0, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r2.<init>(r0)
            byte[] r4 = r2.data
            r6.peekFully(r4, r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = resetPosition(r2)
            boolean r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader.verifyBitstreamType(r6)
            if (r6 == 0) goto L38
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.FlacReader
            r6.<init>()
            r5.streamReader = r6
            goto L5b
        L38:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = resetPosition(r2)
            boolean r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader.verifyBitstreamType(r6)
            if (r6 == 0) goto L4a
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.VorbisReader
            r6.<init>()
            r5.streamReader = r6
            goto L5b
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = resetPosition(r2)
            boolean r6 = com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OpusReader.verifyBitstreamType(r6)
            if (r6 == 0) goto L5c
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OpusReader r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OpusReader
            r6.<init>()
            r5.streamReader = r6
        L5b:
            return r1
        L5c:
            return r3
    }

    @Override
    public void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1) {
            r0 = this;
            r0.output = r1
            return
    }

    @Override
    public int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r6) throws java.io.IOException, java.lang.InterruptedException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r0 = r4.streamReader
            if (r0 != 0) goto L16
            boolean r0 = r4.sniffInternal(r5)
            if (r0 == 0) goto Le
            r5.resetPeekPosition()
            goto L16
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.ParserException r5 = new com.mbridge.msdk.playercommon.exoplayer2.ParserException
            java.lang.String r6 = "Failed to determine bitstream type"
            r5.<init>(r6)
            throw r5
        L16:
            boolean r0 = r4.streamReaderInitialized
            if (r0 != 0) goto L30
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r0 = r4.output
            r1 = 0
            r2 = 1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r0 = r0.track(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1 = r4.output
            r1.endTracks()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r1 = r4.streamReader
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r3 = r4.output
            r1.init(r3, r0)
            r4.streamReaderInitialized = r2
        L30:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r0 = r4.streamReader
            int r5 = r0.read(r5, r6)
            return r5
    }

    @Override
    public void release() {
            r0 = this;
            return
    }

    @Override
    public void seek(long r2, long r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader r0 = r1.streamReader
            if (r0 == 0) goto L7
            r0.seek(r2, r4)
        L7:
            return
    }

    @Override
    public boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r1) throws java.io.IOException, java.lang.InterruptedException {
            r0 = this;
            boolean r1 = r0.sniffInternal(r1)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.ParserException -> L5
            return r1
        L5:
            r1 = 0
            return r1
    }
}
