package com.mbridge.msdk.playercommon.exoplayer2.metadata.scte35;

import android.os.Parcel;
import android.os.Parcelable;

public final class SpliceNullCommand extends SpliceCommand {
    public static final Parcelable.Creator<SpliceNullCommand> CREATOR = new Parcelable.Creator<SpliceNullCommand>() {
        @Override
        public final SpliceNullCommand createFromParcel(Parcel parcel) {
            return new SpliceNullCommand();
        }

        @Override
        public final SpliceNullCommand[] newArray(int i) {
            return new SpliceNullCommand[i];
        }
    };

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
    }
}
