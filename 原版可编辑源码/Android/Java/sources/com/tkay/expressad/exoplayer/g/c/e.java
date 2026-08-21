package com.tkay.expressad.exoplayer.g.c;

import android.os.Parcel;
import android.os.Parcelable;

public final class e extends b {
    public static final Parcelable.Creator<e> CREATOR = new Parcelable.Creator<e>() {
        private static e a() {
            return new e();
        }

        private static e[] a(int i) {
            return new e[i];
        }

        @Override
        public final e[] newArray(int i) {
            return new e[i];
        }

        @Override
        public final e createFromParcel(Parcel parcel) {
            return new e();
        }
    };

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
    }
}
