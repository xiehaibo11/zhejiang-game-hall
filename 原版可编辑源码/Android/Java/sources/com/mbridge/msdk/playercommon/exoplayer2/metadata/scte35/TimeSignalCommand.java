package com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35;

import android.os.Parcel;
import android.os.Parcelable;
import com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray;
import com.mbridge.msdk.playercommon.exoplayer2.util.TimestampAdjuster;
import com.sigmob.sdk.archives.tar.e;

public final class TimeSignalCommand extends SpliceCommand {
    public static final Parcelable.Creator<TimeSignalCommand> CREATOR = new Parcelable.Creator<TimeSignalCommand>() {
        @Override
        public final TimeSignalCommand createFromParcel(Parcel parcel) {
            return new TimeSignalCommand(parcel.readLong(), parcel.readLong());
        }

        @Override
        public final TimeSignalCommand[] newArray(int i) {
            return new TimeSignalCommand[i];
        }
    };
    public final long playbackPositionUs;
    public final long ptsTime;

    private TimeSignalCommand(long j, long j2) {
        this.ptsTime = j;
        this.playbackPositionUs = j2;
    }

    static TimeSignalCommand parseFromSection(ParsableByteArray parsableByteArray, long j, TimestampAdjuster timestampAdjuster) {
        long spliceTime = parseSpliceTime(parsableByteArray, j);
        return new TimeSignalCommand(spliceTime, timestampAdjuster.adjustTsTimestamp(spliceTime));
    }

    static long parseSpliceTime(ParsableByteArray parsableByteArray, long j) {
        long unsignedByte = parsableByteArray.readUnsignedByte();
        if ((128 & unsignedByte) != 0) {
            return e.m & ((((unsignedByte & 1) << 32) | parsableByteArray.readUnsignedInt()) + j);
        }
        return -9223372036854775807L;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeLong(this.ptsTime);
        parcel.writeLong(this.playbackPositionUs);
    }
}
