package com.huawei.hms.push;

class b implements android.os.Parcelable.Creator<com.huawei.hms.push.RemoteMessage> {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.huawei.hms.push.RemoteMessage createFromParcel(android.os.Parcel r2) {
            r1 = this;
            com.huawei.hms.push.RemoteMessage r0 = new com.huawei.hms.push.RemoteMessage
            r0.<init>(r2)
            return r0
    }

    @Override
    public com.huawei.hms.push.RemoteMessage createFromParcel(android.os.Parcel r1) {
            r0 = this;
            com.huawei.hms.push.RemoteMessage r1 = r0.createFromParcel(r1)
            return r1
    }

    @Override
    public com.huawei.hms.push.RemoteMessage[] newArray(int r1) {
            r0 = this;
            com.huawei.hms.push.RemoteMessage[] r1 = new com.huawei.hms.push.RemoteMessage[r1]
            return r1
    }

    @Override
    public com.huawei.hms.push.RemoteMessage[] newArray(int r1) {
            r0 = this;
            com.huawei.hms.push.RemoteMessage[] r1 = r0.newArray(r1)
            return r1
    }
}
