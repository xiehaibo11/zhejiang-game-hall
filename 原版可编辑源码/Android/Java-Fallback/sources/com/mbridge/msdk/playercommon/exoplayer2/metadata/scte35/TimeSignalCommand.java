package com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35;

public final class TimeSignalCommand extends com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.SpliceCommand {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand> CREATOR = null;
    public final long playbackPositionUs;
    public final long ptsTime;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand.CREATOR = r0
            return
    }

    private TimeSignalCommand(long r1, long r3) {
            r0 = this;
            r0.<init>()
            r0.ptsTime = r1
            r0.playbackPositionUs = r3
            return
    }

    TimeSignalCommand(long r1, long r3, com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand.1 r5) {
            r0 = this;
            r0.<init>(r1, r3)
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand parseFromSection(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1, long r2, com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster r4) {
            long r1 = parseSpliceTime(r1, r2)
            long r3 = r4.adjustTsTimestamp(r1)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand r0 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35.TimeSignalCommand
            r0.<init>(r1, r3)
            return r0
    }

    static long parseSpliceTime(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6, long r7) {
            int r0 = r6.readUnsignedByte()
            long r0 = (long) r0
            r2 = 128(0x80, double:6.3E-322)
            long r2 = r2 & r0
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 == 0) goto L21
            r2 = 1
            long r0 = r0 & r2
            r2 = 32
            long r0 = r0 << r2
            long r2 = r6.readUnsignedInt()
            long r0 = r0 | r2
            long r0 = r0 + r7
            r6 = 8589934591(0x1ffffffff, double:4.2439915814E-314)
            long r6 = r6 & r0
            goto L26
        L21:
            r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L26:
            return r6
    }

    @Override
    public final void writeToParcel(android.os.Parcel r3, int r4) {
            r2 = this;
            long r0 = r2.ptsTime
            r3.writeLong(r0)
            long r0 = r2.playbackPositionUs
            r3.writeLong(r0)
            return
    }
}
