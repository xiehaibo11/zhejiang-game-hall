package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class Id3Reader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader {
    private static final int ID3_HEADER_SIZE = 10;
    private static final java.lang.String TAG = "Id3Reader";
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray id3Header;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput output;
    private int sampleBytesRead;
    private int sampleSize;
    private long sampleTimeUs;
    private boolean writingSample;

    public Id3Reader() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 10
            r0.<init>(r1)
            r2.id3Header = r0
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8) {
            r7 = this;
            boolean r0 = r7.writingSample
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = r8.bytesLeft()
            int r1 = r7.sampleBytesRead
            r2 = 10
            if (r1 >= r2) goto L68
            int r1 = 10 - r1
            int r1 = java.lang.Math.min(r0, r1)
            byte[] r3 = r8.data
            int r4 = r8.getPosition()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r7.id3Header
            byte[] r5 = r5.data
            int r6 = r7.sampleBytesRead
            java.lang.System.arraycopy(r3, r4, r5, r6, r1)
            int r3 = r7.sampleBytesRead
            int r3 = r3 + r1
            if (r3 != r2) goto L68
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.id3Header
            r3 = 0
            r1.setPosition(r3)
            r1 = 73
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.id3Header
            int r4 = r4.readUnsignedByte()
            if (r1 != r4) goto L5e
            r1 = 68
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.id3Header
            int r4 = r4.readUnsignedByte()
            if (r1 != r4) goto L5e
            r1 = 51
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r7.id3Header
            int r4 = r4.readUnsignedByte()
            if (r1 == r4) goto L4e
            goto L5e
        L4e:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.id3Header
            r3 = 3
            r1.skipBytes(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.id3Header
            int r1 = r1.readSynchSafeInt()
            int r1 = r1 + r2
            r7.sampleSize = r1
            goto L68
        L5e:
            java.lang.String r8 = "Id3Reader"
            java.lang.String r0 = "Discarding invalid ID3 tag"
            android.util.Log.w(r8, r0)
            r7.writingSample = r3
            return
        L68:
            int r1 = r7.sampleSize
            int r2 = r7.sampleBytesRead
            int r1 = r1 - r2
            int r0 = java.lang.Math.min(r0, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r7.output
            r1.sampleData(r8, r0)
            int r8 = r7.sampleBytesRead
            int r8 = r8 + r0
            r7.sampleBytesRead = r8
            return
    }

    @Override
    public final void createTracks(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r4, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r5) {
            r3 = this;
            r5.generateNewId()
            int r0 = r5.getTrackId()
            r1 = 4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r4.track(r0, r1)
            r3.output = r4
            java.lang.String r5 = r5.getFormatId()
            r0 = 0
            java.lang.String r1 = "application/id3"
            r2 = -1
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = com.mbridge.msdk.playercommon.exoplayer2.Format.createSampleFormat(r5, r1, r0, r2, r0)
            r4.format(r5)
            return
    }

    @Override
    public final void packetFinished() {
            r8 = this;
            boolean r0 = r8.writingSample
            if (r0 == 0) goto L1a
            int r5 = r8.sampleSize
            if (r5 == 0) goto L1a
            int r0 = r8.sampleBytesRead
            if (r0 == r5) goto Ld
            goto L1a
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r8.output
            long r2 = r8.sampleTimeUs
            r4 = 1
            r6 = 0
            r7 = 0
            r1.sampleMetadata(r2, r4, r5, r6, r7)
            r0 = 0
            r8.writingSample = r0
        L1a:
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
            r0.sampleSize = r1
            r0.sampleBytesRead = r1
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
