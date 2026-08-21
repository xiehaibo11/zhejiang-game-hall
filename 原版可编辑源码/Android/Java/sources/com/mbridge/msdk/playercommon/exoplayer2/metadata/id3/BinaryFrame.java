package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

import android.os.Parcel;
import android.os.Parcelable;
import java.util.Arrays;

public final class BinaryFrame extends Id3Frame {
    public static final Parcelable.Creator<BinaryFrame> CREATOR = new Parcelable.Creator<BinaryFrame>() {
        @Override
        public final BinaryFrame createFromParcel(Parcel parcel) {
            return new BinaryFrame(parcel);
        }

        @Override
        public final BinaryFrame[] newArray(int i) {
            return new BinaryFrame[i];
        }
    };
    public final byte[] data;

    public BinaryFrame(String str, byte[] bArr) {
        super(str);
        this.data = bArr;
    }

    BinaryFrame(Parcel parcel) {
        super(parcel.readString());
        this.data = parcel.createByteArray();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        BinaryFrame binaryFrame = (BinaryFrame) obj;
        return this.id.equals(binaryFrame.id) && Arrays.equals(this.data, binaryFrame.data);
    }

    public final int hashCode() {
        return ((527 + this.id.hashCode()) * 31) + Arrays.hashCode(this.data);
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.id);
        parcel.writeByteArray(this.data);
    }
}
