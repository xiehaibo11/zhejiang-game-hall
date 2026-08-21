package com.huawei.hms.push;

import android.os.Parcel;
import android.os.Parcelable;

class b implements Parcelable.Creator<RemoteMessage> {
    @Override
    public RemoteMessage createFromParcel(Parcel parcel) {
        return new RemoteMessage(parcel);
    }

    @Override
    public RemoteMessage[] newArray(int i) {
        return new RemoteMessage[i];
    }
}
