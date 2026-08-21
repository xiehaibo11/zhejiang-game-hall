package com.mbridge.msdk.playercommon.exoplayer2.metadata.id3;

import android.os.Parcel;
import android.os.Parcelable;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;

public final class CommentFrame extends Id3Frame {
    public static final Parcelable.Creator<CommentFrame> CREATOR = new Parcelable.Creator<CommentFrame>() {
        @Override
        public final CommentFrame createFromParcel(Parcel parcel) {
            return new CommentFrame(parcel);
        }

        @Override
        public final CommentFrame[] newArray(int i) {
            return new CommentFrame[i];
        }
    };
    public static final String ID = "COMM";
    public final String description;
    public final String language;
    public final String text;

    public CommentFrame(String str, String str2, String str3) {
        super("COMM");
        this.language = str;
        this.description = str2;
        this.text = str3;
    }

    CommentFrame(Parcel parcel) {
        super("COMM");
        this.language = parcel.readString();
        this.description = parcel.readString();
        this.text = parcel.readString();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || getClass() != obj.getClass()) {
            return false;
        }
        CommentFrame commentFrame = (CommentFrame) obj;
        return Util.areEqual(this.description, commentFrame.description) && Util.areEqual(this.language, commentFrame.language) && Util.areEqual(this.text, commentFrame.text);
    }

    public final int hashCode() {
        String str = this.language;
        int iHashCode = (527 + (str != null ? str.hashCode() : 0)) * 31;
        String str2 = this.description;
        int iHashCode2 = (iHashCode + (str2 != null ? str2.hashCode() : 0)) * 31;
        String str3 = this.text;
        return iHashCode2 + (str3 != null ? str3.hashCode() : 0);
    }

    @Override
    public final String toString() {
        return this.id + ": language=" + this.language + ", description=" + this.description;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeString(this.id);
        parcel.writeString(this.language);
        parcel.writeString(this.text);
    }
}
