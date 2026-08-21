package com.qihoo360.loader2;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class PluginBinderInfo implements android.os.Parcelable {
    public static final int ACTIVITY_REQUEST = 1;
    public static final int BINDER_REQUEST = 4;
    public static final android.os.Parcelable.Creator<com.qihoo360.loader2.PluginBinderInfo> CREATOR = null;
    public static final int NONE_REQUEST = 0;
    public static final int PROVIDER_REQUEST = 3;
    public static final int SERVICE_REQUEST = 2;
    public int index;
    public int pid;
    public int request;


    static {
            com.qihoo360.loader2.PluginBinderInfo$1 r0 = new com.qihoo360.loader2.PluginBinderInfo$1
            r0.<init>()
            com.qihoo360.loader2.PluginBinderInfo.CREATOR = r0
            return
    }

    PluginBinderInfo() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.request = r0
            r0 = -1
            r1.pid = r0
            r1.index = r0
            return
    }

    public PluginBinderInfo(int r1) {
            r0 = this;
            r0.<init>()
            r0.request = r1
            r1 = -1
            r0.pid = r1
            r0.index = r1
            return
    }

    PluginBinderInfo(android.os.Parcel r1) {
            r0 = this;
            r0.<init>()
            r0.readFromParcel(r1)
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    final void readFromParcel(android.os.Parcel r2) {
            r1 = this;
            int r0 = r2.readInt()
            r1.request = r0
            int r0 = r2.readInt()
            r1.pid = r0
            int r2 = r2.readInt()
            r1.index = r2
            return
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            int r2 = r0.request
            r1.writeInt(r2)
            int r2 = r0.pid
            r1.writeInt(r2)
            int r2 = r0.index
            r1.writeInt(r2)
            return
    }
}
