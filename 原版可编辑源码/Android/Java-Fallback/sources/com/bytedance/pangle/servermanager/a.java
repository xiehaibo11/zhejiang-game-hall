package com.bytedance.pangle.servermanager;

public final class a implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.bytedance.pangle.servermanager.a> CREATOR = null;
    final android.os.IBinder a;


    static {
            com.bytedance.pangle.servermanager.a$1 r0 = new com.bytedance.pangle.servermanager.a$1
            r0.<init>()
            com.bytedance.pangle.servermanager.a.CREATOR = r0
            return
    }

    a(android.os.IBinder r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    a(android.os.Parcel r1) {
            r0 = this;
            r0.<init>()
            android.os.IBinder r1 = r1.readStrongBinder()
            r0.a = r1
            return
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            android.os.IBinder r2 = r0.a
            r1.writeStrongBinder(r2)
            return
    }
}
