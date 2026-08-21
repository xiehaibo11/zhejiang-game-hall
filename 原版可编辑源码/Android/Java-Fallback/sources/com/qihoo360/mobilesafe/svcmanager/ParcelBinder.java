package com.qihoo360.mobilesafe.svcmanager;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
class ParcelBinder implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.qihoo360.mobilesafe.svcmanager.ParcelBinder> CREATOR = null;
    private final android.os.IBinder mBinder;


    static {
            com.qihoo360.mobilesafe.svcmanager.ParcelBinder$1 r0 = new com.qihoo360.mobilesafe.svcmanager.ParcelBinder$1
            r0.<init>()
            com.qihoo360.mobilesafe.svcmanager.ParcelBinder.CREATOR = r0
            return
    }

    public ParcelBinder(android.os.IBinder r1) {
            r0 = this;
            r0.<init>()
            r0.mBinder = r1
            return
    }

    private ParcelBinder(android.os.Parcel r1) {
            r0 = this;
            r0.<init>()
            android.os.IBinder r1 = r1.readStrongBinder()
            r0.mBinder = r1
            return
    }

    ParcelBinder(android.os.Parcel r1, com.qihoo360.mobilesafe.svcmanager.ParcelBinder.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public android.os.IBinder getIbinder() {
            r1 = this;
            android.os.IBinder r0 = r1.mBinder
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            android.os.IBinder r2 = r0.mBinder
            r1.writeStrongBinder(r2)
            return
    }
}
