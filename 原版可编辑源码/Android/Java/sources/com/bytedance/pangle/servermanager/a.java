package com.bytedance.pangle.servermanager;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;

public final class a implements Parcelable {
    public static final Parcelable.Creator<a> CREATOR = new Parcelable.Creator<a>() {
        @Override
        public final a[] newArray(int i) {
            return new a[i];
        }

        @Override
        public final a createFromParcel(Parcel parcel) {
            return new a(parcel);
        }
    };
    final IBinder a;

    @Override
    public final int describeContents() {
        return 0;
    }

    a(Parcel parcel) {
        this.a = parcel.readStrongBinder();
    }

    a(IBinder iBinder) {
        this.a = iBinder;
    }

    @Override
    public final void writeToParcel(Parcel parcel, int i) {
        parcel.writeStrongBinder(this.a);
    }
}
