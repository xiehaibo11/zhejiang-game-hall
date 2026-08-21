package com.huawei.hms.common.webserverpic;

public final class WebServerPicCreator implements android.os.Parcelable.Creator<com.huawei.hms.common.webserverpic.WebServerPic> {
    public WebServerPicCreator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.huawei.hms.common.webserverpic.WebServerPic createFromParcel(android.os.Parcel r4) {
            r3 = this;
            com.huawei.hms.common.webserverpic.WebServerPic r0 = new com.huawei.hms.common.webserverpic.WebServerPic
            java.lang.Class<android.net.Uri> r1 = android.net.Uri.class
            java.lang.ClassLoader r1 = r1.getClassLoader()
            android.os.Parcelable r1 = r4.readParcelable(r1)
            android.net.Uri r1 = (android.net.Uri) r1
            int r2 = r4.readInt()
            int r4 = r4.readInt()
            r0.<init>(r1, r2, r4)
            return r0
    }

    @Override
    public com.huawei.hms.common.webserverpic.WebServerPic createFromParcel(android.os.Parcel r1) {
            r0 = this;
            com.huawei.hms.common.webserverpic.WebServerPic r1 = r0.createFromParcel(r1)
            return r1
    }

    @Override
    public com.huawei.hms.common.webserverpic.WebServerPic[] newArray(int r1) {
            r0 = this;
            com.huawei.hms.common.webserverpic.WebServerPic[] r1 = new com.huawei.hms.common.webserverpic.WebServerPic[r1]
            return r1
    }

    @Override
    public com.huawei.hms.common.webserverpic.WebServerPic[] newArray(int r1) {
            r0 = this;
            com.huawei.hms.common.webserverpic.WebServerPic[] r1 = r0.newArray(r1)
            return r1
    }
}
