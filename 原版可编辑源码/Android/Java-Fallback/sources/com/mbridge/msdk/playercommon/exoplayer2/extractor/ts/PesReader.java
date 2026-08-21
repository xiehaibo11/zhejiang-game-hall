package com.mbridge.msdk.playercommon.exoplayer2.extractor.ts;

public final class PesReader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader {
    private static final int HEADER_SIZE = 9;
    private static final int MAX_HEADER_EXTENSION_SIZE = 10;
    private static final int PES_SCRATCH_SIZE = 10;
    private static final int STATE_FINDING_HEADER = 0;
    private static final int STATE_READING_BODY = 3;
    private static final int STATE_READING_HEADER = 1;
    private static final int STATE_READING_HEADER_EXTENSION = 2;
    private static final java.lang.String TAG = "PesReader";
    private int bytesRead;
    private boolean dataAlignmentIndicator;
    private boolean dtsFlag;
    private int extendedHeaderLength;
    private int payloadSize;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray pesScratch;
    private boolean ptsFlag;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader reader;
    private boolean seenFirstDts;
    private int state;
    private long timeUs;
    private com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster timestampAdjuster;

    public PesReader(com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r2) {
            r1 = this;
            r1.<init>()
            r1.reader = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r0 = 10
            byte[] r0 = new byte[r0]
            r2.<init>(r0)
            r1.pesScratch = r2
            r2 = 0
            r1.state = r2
            return
    }

    private boolean continueRead(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, byte[] r5, int r6) {
            r3 = this;
            int r0 = r4.bytesLeft()
            int r1 = r3.bytesRead
            int r1 = r6 - r1
            int r0 = java.lang.Math.min(r0, r1)
            r1 = 1
            if (r0 > 0) goto L10
            return r1
        L10:
            if (r5 != 0) goto L16
            r4.skipBytes(r0)
            goto L1b
        L16:
            int r2 = r3.bytesRead
            r4.readBytes(r5, r2, r0)
        L1b:
            int r4 = r3.bytesRead
            int r4 = r4 + r0
            r3.bytesRead = r4
            if (r4 != r6) goto L23
            goto L24
        L23:
            r1 = 0
        L24:
            return r1
    }

    private boolean parseHeader() {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.pesScratch
            r1 = 0
            r0.setPosition(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.pesScratch
            r2 = 24
            int r0 = r0.readBits(r2)
            r2 = -1
            r3 = 1
            if (r0 == r3) goto L2b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Unexpected start code prefix: "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            java.lang.String r3 = "PesReader"
            android.util.Log.w(r3, r0)
            r6.payloadSize = r2
            return r1
        L2b:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.pesScratch
            r1 = 8
            r0.skipBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.pesScratch
            r4 = 16
            int r0 = r0.readBits(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.pesScratch
            r5 = 5
            r4.skipBits(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.pesScratch
            boolean r4 = r4.readBit()
            r6.dataAlignmentIndicator = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.pesScratch
            r5 = 2
            r4.skipBits(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.pesScratch
            boolean r4 = r4.readBit()
            r6.ptsFlag = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.pesScratch
            boolean r4 = r4.readBit()
            r6.dtsFlag = r4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.pesScratch
            r5 = 6
            r4.skipBits(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.pesScratch
            int r1 = r4.readBits(r1)
            r6.extendedHeaderLength = r1
            if (r0 != 0) goto L71
            r6.payloadSize = r2
            goto L77
        L71:
            int r0 = r0 + r5
            int r0 = r0 + (-9)
            int r0 = r0 - r1
            r6.payloadSize = r0
        L77:
            return r3
    }

    private void parseHeaderExtension() {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.pesScratch
            r1 = 0
            r0.setPosition(r1)
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r10.timeUs = r0
            boolean r0 = r10.ptsFlag
            if (r0 == 0) goto L8a
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.pesScratch
            r1 = 4
            r0.skipBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.pesScratch
            r2 = 3
            int r0 = r0.readBits(r2)
            long r3 = (long) r0
            r0 = 30
            long r3 = r3 << r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
            r6 = 1
            r5.skipBits(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
            r7 = 15
            int r5 = r5.readBits(r7)
            int r5 = r5 << r7
            long r8 = (long) r5
            long r3 = r3 | r8
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
            r5.skipBits(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
            int r5 = r5.readBits(r7)
            long r8 = (long) r5
            long r3 = r3 | r8
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
            r5.skipBits(r6)
            boolean r5 = r10.seenFirstDts
            if (r5 != 0) goto L82
            boolean r5 = r10.dtsFlag
            if (r5 == 0) goto L82
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.pesScratch
            r5.skipBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r10.pesScratch
            int r1 = r1.readBits(r2)
            long r1 = (long) r1
            long r0 = r1 << r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
            r2.skipBits(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
            int r2 = r2.readBits(r7)
            int r2 = r2 << r7
            long r8 = (long) r2
            long r0 = r0 | r8
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
            r2.skipBits(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
            int r2 = r2.readBits(r7)
            long r7 = (long) r2
            long r0 = r0 | r7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.pesScratch
            r2.skipBits(r6)
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2 = r10.timestampAdjuster
            r2.adjustTsTimestamp(r0)
            r10.seenFirstDts = r6
        L82:
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r0 = r10.timestampAdjuster
            long r0 = r0.adjustTsTimestamp(r3)
            r10.timeUs = r0
        L8a:
            return
    }

    private void setState(int r1) {
            r0 = this;
            r0.state = r1
            r1 = 0
            r0.bytesRead = r1
            return
    }

    @Override
    public final void consume(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8, boolean r9) throws com.mbridge.msdk.playercommon.exoplayer2.ParserException {
            r7 = this;
            r0 = -1
            r1 = 1
            r2 = 3
            r3 = 2
            if (r9 == 0) goto L3c
            int r9 = r7.state
            java.lang.String r4 = "PesReader"
            if (r9 == r3) goto L34
            if (r9 == r2) goto Lf
            goto L39
        Lf:
            int r9 = r7.payloadSize
            if (r9 == r0) goto L2e
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r5 = "Unexpected start indicator: expected "
            r9.append(r5)
            int r5 = r7.payloadSize
            r9.append(r5)
            java.lang.String r5 = " more bytes"
            r9.append(r5)
            java.lang.String r9 = r9.toString()
            android.util.Log.w(r4, r9)
        L2e:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r9 = r7.reader
            r9.packetFinished()
            goto L39
        L34:
            java.lang.String r9 = "Unexpected start indicator reading extended header"
            android.util.Log.w(r4, r9)
        L39:
            r7.setState(r1)
        L3c:
            int r9 = r8.bytesLeft()
            if (r9 <= 0) goto Lc7
            int r9 = r7.state
            if (r9 == 0) goto Lbe
            r4 = 0
            if (r9 == r1) goto La6
            if (r9 == r3) goto L7b
            if (r9 == r2) goto L4e
            goto L3c
        L4e:
            int r9 = r8.bytesLeft()
            int r5 = r7.payloadSize
            if (r5 != r0) goto L57
            goto L59
        L57:
            int r4 = r9 - r5
        L59:
            if (r4 <= 0) goto L64
            int r9 = r9 - r4
            int r4 = r8.getPosition()
            int r4 = r4 + r9
            r8.setLimit(r4)
        L64:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r4 = r7.reader
            r4.consume(r8)
            int r4 = r7.payloadSize
            if (r4 == r0) goto L3c
            int r4 = r4 - r9
            r7.payloadSize = r4
            if (r4 != 0) goto L3c
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r9 = r7.reader
            r9.packetFinished()
            r7.setState(r1)
            goto L3c
        L7b:
            r9 = 10
            int r4 = r7.extendedHeaderLength
            int r9 = java.lang.Math.min(r9, r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r7.pesScratch
            byte[] r4 = r4.data
            boolean r9 = r7.continueRead(r8, r4, r9)
            if (r9 == 0) goto L3c
            r9 = 0
            int r4 = r7.extendedHeaderLength
            boolean r9 = r7.continueRead(r8, r9, r4)
            if (r9 == 0) goto L3c
            r7.parseHeaderExtension()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r9 = r7.reader
            long r4 = r7.timeUs
            boolean r6 = r7.dataAlignmentIndicator
            r9.packetStarted(r4, r6)
            r7.setState(r2)
            goto L3c
        La6:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r9 = r7.pesScratch
            byte[] r9 = r9.data
            r5 = 9
            boolean r9 = r7.continueRead(r8, r9, r5)
            if (r9 == 0) goto L3c
            boolean r9 = r7.parseHeader()
            if (r9 == 0) goto Lb9
            r4 = r3
        Lb9:
            r7.setState(r4)
            goto L3c
        Lbe:
            int r9 = r8.bytesLeft()
            r8.skipBytes(r9)
            goto L3c
        Lc7:
            return
    }

    @Override
    public final void init(com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.TsPayloadReader.TrackIdGenerator r3) {
            r0 = this;
            r0.timestampAdjuster = r1
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r1 = r0.reader
            r1.createTracks(r2, r3)
            return
    }

    @Override
    public final void seek() {
            r1 = this;
            r0 = 0
            r1.state = r0
            r1.bytesRead = r0
            r1.seenFirstDts = r0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ts.ElementaryStreamReader r0 = r1.reader
            r0.seek()
            return
    }
}
