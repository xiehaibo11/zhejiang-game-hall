package com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35;

public final class SpliceInfoDecoder implements com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoder {
    private static final int TYPE_PRIVATE_COMMAND = 255;
    private static final int TYPE_SPLICE_INSERT = 5;
    private static final int TYPE_SPLICE_NULL = 0;
    private static final int TYPE_SPLICE_SCHEDULE = 4;
    private static final int TYPE_TIME_SIGNAL = 6;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray sectionData;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray sectionHeader;
    private com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster timestampAdjuster;

    public SpliceInfoDecoder() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r1.sectionData = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r0.<init>()
            r1.sectionHeader = r0
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata decode(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataInputBuffer r8) throws com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataDecoderException {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r0 = r7.timestampAdjuster
            if (r0 == 0) goto L10
            long r0 = r8.subsampleOffsetUs
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r2 = r7.timestampAdjuster
            long r2 = r2.getTimestampOffsetUs()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L21
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster
            long r1 = r8.timeUs
            r0.<init>(r1)
            r7.timestampAdjuster = r0
            long r1 = r8.timeUs
            long r3 = r8.subsampleOffsetUs
            long r1 = r1 - r3
            r0.adjustSampleTimestamp(r1)
        L21:
            java.nio.ByteBuffer r8 = r8.data
            byte[] r0 = r8.array()
            int r8 = r8.limit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.sectionData
            r1.reset(r0, r8)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r7.sectionHeader
            r1.reset(r0, r8)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = r7.sectionHeader
            r0 = 39
            r8.skipBits(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = r7.sectionHeader
            r0 = 1
            int r8 = r8.readBits(r0)
            long r1 = (long) r8
            r8 = 32
            long r1 = r1 << r8
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3 = r7.sectionHeader
            int r8 = r3.readBits(r8)
            long r3 = (long) r8
            long r1 = r1 | r3
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = r7.sectionHeader
            r3 = 20
            r8.skipBits(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = r7.sectionHeader
            r3 = 12
            int r8 = r8.readBits(r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3 = r7.sectionHeader
            r4 = 8
            int r3 = r3.readBits(r4)
            r4 = 0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r7.sectionData
            r6 = 14
            r5.skipBytes(r6)
            if (r3 == 0) goto L9e
            r5 = 255(0xff, float:3.57E-43)
            if (r3 == r5) goto L97
            r8 = 4
            if (r3 == r8) goto L90
            r8 = 5
            if (r3 == r8) goto L87
            r8 = 6
            if (r3 == r8) goto L7e
            goto La3
        L7e:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r7.sectionData
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r3 = r7.timestampAdjuster
            com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand r4 = com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand.parseFromSection(r8, r1, r3)
            goto La3
        L87:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r7.sectionData
            com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r3 = r7.timestampAdjuster
            com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceInsertCommand r4 = com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceInsertCommand.parseFromSection(r8, r1, r3)
            goto La3
        L90:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r7.sectionData
            com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceScheduleCommand r4 = com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceScheduleCommand.parseFromSection(r8)
            goto La3
        L97:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r7.sectionData
            com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.PrivateCommand r4 = com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.PrivateCommand.parseFromSection(r3, r8, r1)
            goto La3
        L9e:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceNullCommand r4 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceNullCommand
            r4.<init>()
        La3:
            r8 = 0
            if (r4 != 0) goto Lae
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r8 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry[r8]
            r0.<init>(r8)
            goto Lb8
        Lae:
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata$Entry[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.Entry[r0]
            r0[r8] = r4
            r1.<init>(r0)
            r0 = r1
        Lb8:
            return r0
    }
}
