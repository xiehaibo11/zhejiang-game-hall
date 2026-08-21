package com.qihoo360.loader2;

import android.os.Parcel;
import android.os.Parcelable;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class PluginBinderInfo implements Parcelable {
    public static final int ACTIVITY_REQUEST = 1;
    public static final int BINDER_REQUEST = 4;
    public static final Parcelable.Creator<PluginBinderInfo> CREATOR = new Parcelable.Creator<PluginBinderInfo>() {
        @Override
        public PluginBinderInfo createFromParcel(Parcel parcel) {
            return new PluginBinderInfo(parcel);
        }

        @Override
        public PluginBinderInfo[] newArray(int i) {
            return new PluginBinderInfo[i];
        }
    };
    public static final int NONE_REQUEST = 0;
    public static final int PROVIDER_REQUEST = 3;
    public static final int SERVICE_REQUEST = 2;
    public int index;
    public int pid;
    public int request;

    @Override
    public int describeContents() {
        return 0;
    }

    PluginBinderInfo() {
        this.request = 0;
        this.pid = -1;
        this.index = -1;
    }

    public PluginBinderInfo(int i) {
        this.request = i;
        this.pid = -1;
        this.index = -1;
    }

    PluginBinderInfo(Parcel parcel) {
        readFromParcel(parcel);
    }

    final void readFromParcel(Parcel parcel) {
        this.request = parcel.readInt();
        this.pid = parcel.readInt();
        this.index = parcel.readInt();
    }

    @Override
    public void writeToParcel(Parcel parcel, int i) {
        parcel.writeInt(this.request);
        parcel.writeInt(this.pid);
        parcel.writeInt(this.index);
    }
}
