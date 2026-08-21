package com.huawei.hms.support.api.entity.auth;

public class PermissionInfo implements com.huawei.hms.core.aidl.IMessageEntity, android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.huawei.hms.support.api.entity.auth.PermissionInfo> CREATOR = null;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String appID;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String packageName;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String permission;

    static class a implements android.os.Parcelable.Creator<com.huawei.hms.support.api.entity.auth.PermissionInfo> {
        a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.huawei.hms.support.api.entity.auth.PermissionInfo createFromParcel(android.os.Parcel r2) {
                r1 = this;
                com.huawei.hms.support.api.entity.auth.PermissionInfo r0 = new com.huawei.hms.support.api.entity.auth.PermissionInfo
                r0.<init>(r2)
                return r0
        }

        @Override
        public com.huawei.hms.support.api.entity.auth.PermissionInfo createFromParcel(android.os.Parcel r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.auth.PermissionInfo r1 = r0.createFromParcel(r1)
                return r1
        }

        @Override
        public com.huawei.hms.support.api.entity.auth.PermissionInfo[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.auth.PermissionInfo[] r1 = new com.huawei.hms.support.api.entity.auth.PermissionInfo[r1]
                return r1
        }

        @Override
        public com.huawei.hms.support.api.entity.auth.PermissionInfo[] newArray(int r1) {
                r0 = this;
                com.huawei.hms.support.api.entity.auth.PermissionInfo[] r1 = r0.newArray(r1)
                return r1
        }
    }

    static {
            com.huawei.hms.support.api.entity.auth.PermissionInfo$a r0 = new com.huawei.hms.support.api.entity.auth.PermissionInfo$a
            r0.<init>()
            com.huawei.hms.support.api.entity.auth.PermissionInfo.CREATOR = r0
            return
    }

    public PermissionInfo() {
            r0 = this;
            r0.<init>()
            return
    }

    public PermissionInfo(android.os.Parcel r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.readString()
            r1.appID = r0
            java.lang.String r0 = r2.readString()
            r1.packageName = r0
            java.lang.String r2 = r2.readString()
            r1.permission = r2
            return
    }

    public PermissionInfo(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.appID = r1
            r0.packageName = r2
            r0.permission = r3
            return
    }

    @Override
    public int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public java.lang.String getAppID() {
            r1 = this;
            java.lang.String r0 = r1.appID
            return r0
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public java.lang.String getPermission() {
            r1 = this;
            java.lang.String r0 = r1.permission
            return r0
    }

    public void setAppID(java.lang.String r1) {
            r0 = this;
            r0.appID = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public void setPermission(java.lang.String r1) {
            r0 = this;
            r0.permission = r1
            return
    }

    public com.huawei.hms.support.api.entity.auth.PermissionInfo setPermissionUri(java.lang.String r1) {
            r0 = this;
            r0.permission = r1
            return r0
    }

    @Override
    public void writeToParcel(android.os.Parcel r1, int r2) {
            r0 = this;
            java.lang.String r2 = r0.appID
            r1.writeString(r2)
            java.lang.String r2 = r0.packageName
            r1.writeString(r2)
            java.lang.String r2 = r0.permission
            r1.writeString(r2)
            return
    }
}
