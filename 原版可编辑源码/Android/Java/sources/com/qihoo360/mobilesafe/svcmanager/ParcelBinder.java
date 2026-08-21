package com.qihoo360.mobilesafe.svcmanager;

import android.os.IBinder;
import android.os.Parcel;
import android.os.Parcelable;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ParcelBinder implements Parcelable {
    public static final Parcelable.Creator<ParcelBinder> CREATOR = new Parcelable.Creator<ParcelBinder>() {
        @Override
        public ParcelBinder createFromParcel(Parcel parcel) {
            return new ParcelBinder(parcel);
        }

        @Override
        public ParcelBinder[] newArray(int i) {
            return new ParcelBinder[i];
        }
    };
    private final IBinder mBinder;

    @Override
    public int describeContents() {
        return 0;
    }

    private ParcelBinder(Parcel parcel) {
        this.mBinder = parcel.readStrongBinder();
    }

    public ParcelBinder(IBinder iBinder) {
        this.mBinder = iBinder;
    }

    public IBinder getIbinder() {
        return this.mBinder;
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeStrongBinder(this.mBinder);
    }
}
