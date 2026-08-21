package com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg;

abstract class StreamReader {
    private static final int STATE_END_OF_INPUT = 3;
    private static final int STATE_READ_HEADERS = 0;
    private static final int STATE_READ_PAYLOAD = 2;
    private static final int STATE_SKIP_HEADERS = 1;
    private long currentGranule;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput extractorOutput;
    private boolean formatSet;
    private long lengthOfReadPacket;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket oggPacket;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker oggSeeker;
    private long payloadStartPosition;
    private int sampleRate;
    private boolean seekMapSet;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader.SetupData setupData;
    private int state;
    private long targetGranule;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput trackOutput;

    static class 1 {
    }

    static class SetupData {
        com.mbridge.msdk.playercommon.exoplayer2.Format format;
        com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker oggSeeker;

        SetupData() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    private static final class UnseekableOggSeeker implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker {
        private UnseekableOggSeeker() {
                r0 = this;
                r0.<init>()
                return
        }

        UnseekableOggSeeker(com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap createSeekMap() {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$Unseekable
                r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r0.<init>(r1)
                return r0
        }

        @Override
        public final long read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r3) throws java.io.IOException, java.lang.InterruptedException {
                r2 = this;
                r0 = -1
                return r0
        }

        @Override
        public final long startSeek(long r1) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    public StreamReader() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket
            r0.<init>()
            r1.oggPacket = r0
            return
    }

    private int readHeaders(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r13) throws java.io.IOException, java.lang.InterruptedException {
            r12 = this;
            r0 = 1
            r1 = r0
        L2:
            if (r1 == 0) goto L31
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket r1 = r12.oggPacket
            boolean r1 = r1.populate(r13)
            if (r1 != 0) goto L11
            r13 = 3
            r12.state = r13
            r13 = -1
            return r13
        L11:
            long r1 = r13.getPosition()
            long r3 = r12.payloadStartPosition
            long r1 = r1 - r3
            r12.lengthOfReadPacket = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket r1 = r12.oggPacket
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r1.getPayload()
            long r2 = r12.payloadStartPosition
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$SetupData r4 = r12.setupData
            boolean r1 = r12.readHeaders(r1, r2, r4)
            if (r1 == 0) goto L2
            long r2 = r13.getPosition()
            r12.payloadStartPosition = r2
            goto L2
        L31:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$SetupData r1 = r12.setupData
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r1.format
            int r1 = r1.sampleRate
            r12.sampleRate = r1
            boolean r1 = r12.formatSet
            if (r1 != 0) goto L48
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r1 = r12.trackOutput
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$SetupData r2 = r12.setupData
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r2.format
            r1.format(r2)
            r12.formatSet = r0
        L48:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$SetupData r0 = r12.setupData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker r0 = r0.oggSeeker
            r1 = 0
            if (r0 == 0) goto L56
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$SetupData r13 = r12.setupData
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker r13 = r13.oggSeeker
            r12.oggSeeker = r13
            goto L85
        L56:
            long r2 = r13.getLength()
            r4 = -1
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L68
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$UnseekableOggSeeker r13 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$UnseekableOggSeeker
            r13.<init>(r1)
            r12.oggSeeker = r13
            goto L85
        L68:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket r0 = r12.oggPacket
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPageHeader r0 = r0.getPageHeader()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker r11 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.DefaultOggSeeker
            long r3 = r12.payloadStartPosition
            long r5 = r13.getLength()
            int r13 = r0.headerSize
            int r2 = r0.bodySize
            int r8 = r13 + r2
            long r9 = r0.granulePosition
            r2 = r11
            r7 = r12
            r2.<init>(r3, r5, r7, r8, r9)
            r12.oggSeeker = r11
        L85:
            r12.setupData = r1
            r13 = 2
            r12.state = r13
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket r13 = r12.oggPacket
            r13.trimPayload()
            r13 = 0
            return r13
    }

    private int readPayload(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r18, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r19) throws java.io.IOException, java.lang.InterruptedException {
            r17 = this;
            r0 = r17
            r1 = r18
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker r2 = r0.oggSeeker
            long r2 = r2.read(r1)
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r7 = 1
            if (r6 < 0) goto L16
            r6 = r19
            r6.position = r2
            return r7
        L16:
            r8 = -1
            int r6 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r6 >= 0) goto L23
            r10 = 2
            long r2 = r2 + r10
            long r2 = -r2
            r0.onSeekEnd(r2)
        L23:
            boolean r2 = r0.seekMapSet
            if (r2 != 0) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker r2 = r0.oggSeeker
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r2 = r2.createSeekMap()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r3 = r0.extractorOutput
            r3.seekMap(r2)
            r0.seekMapSet = r7
        L34:
            long r2 = r0.lengthOfReadPacket
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 > 0) goto L48
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket r2 = r0.oggPacket
            boolean r1 = r2.populate(r1)
            if (r1 == 0) goto L43
            goto L48
        L43:
            r1 = 3
            r0.state = r1
            r1 = -1
            return r1
        L48:
            r0.lengthOfReadPacket = r4
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket r1 = r0.oggPacket
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r1.getPayload()
            long r2 = r0.preparePayload(r1)
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 < 0) goto L7e
            long r4 = r0.currentGranule
            long r6 = r4 + r2
            long r10 = r0.targetGranule
            int r6 = (r6 > r10 ? 1 : (r6 == r10 ? 0 : -1))
            if (r6 < 0) goto L7e
            long r11 = r0.convertGranuleToTime(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r4 = r0.trackOutput
            int r5 = r1.limit()
            r4.sampleData(r1, r5)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r10 = r0.trackOutput
            r13 = 1
            int r14 = r1.limit()
            r15 = 0
            r16 = 0
            r10.sampleMetadata(r11, r13, r14, r15, r16)
            r0.targetGranule = r8
        L7e:
            long r4 = r0.currentGranule
            long r4 = r4 + r2
            r0.currentGranule = r4
            r1 = 0
            return r1
    }

    protected long convertGranuleToTime(long r3) {
            r2 = this;
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 * r0
            int r0 = r2.sampleRate
            long r0 = (long) r0
            long r3 = r3 / r0
            return r3
    }

    protected long convertTimeToGranule(long r3) {
            r2 = this;
            int r0 = r2.sampleRate
            long r0 = (long) r0
            long r0 = r0 * r3
            r3 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r0 / r3
            return r0
    }

    void init(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput r2) {
            r0 = this;
            r0.extractorOutput = r1
            r0.trackOutput = r2
            r1 = 1
            r0.reset(r1)
            return
    }

    protected void onSeekEnd(long r1) {
            r0 = this;
            r0.currentGranule = r1
            return
    }

    protected abstract long preparePayload(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1);

    final int read(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r4, com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r5) throws java.io.IOException, java.lang.InterruptedException {
            r3 = this;
            int r0 = r3.state
            if (r0 == 0) goto L1f
            r1 = 1
            r2 = 2
            if (r0 == r1) goto L15
            if (r0 != r2) goto Lf
            int r4 = r3.readPayload(r4, r5)
            return r4
        Lf:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            r4.<init>()
            throw r4
        L15:
            long r0 = r3.payloadStartPosition
            int r5 = (int) r0
            r4.skipFully(r5)
            r3.state = r2
            r4 = 0
            return r4
        L1f:
            int r4 = r3.readHeaders(r4)
            return r4
    }

    protected abstract boolean readHeaders(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, long r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader.SetupData r4) throws java.io.IOException, java.lang.InterruptedException;

    protected void reset(boolean r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L11
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$SetupData r5 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.StreamReader$SetupData
            r5.<init>()
            r4.setupData = r5
            r4.payloadStartPosition = r0
            r5 = 0
            r4.state = r5
            goto L14
        L11:
            r5 = 1
            r4.state = r5
        L14:
            r2 = -1
            r4.targetGranule = r2
            r4.currentGranule = r0
            return
    }

    final void seek(long r3, long r5) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggPacket r0 = r2.oggPacket
            r0.reset()
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 != 0) goto L13
            boolean r3 = r2.seekMapSet
            r3 = r3 ^ 1
            r2.reset(r3)
            goto L22
        L13:
            int r3 = r2.state
            if (r3 == 0) goto L22
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ogg.OggSeeker r3 = r2.oggSeeker
            long r3 = r3.startSeek(r5)
            r2.targetGranule = r3
            r3 = 2
            r2.state = r3
        L22:
            return
    }
}
