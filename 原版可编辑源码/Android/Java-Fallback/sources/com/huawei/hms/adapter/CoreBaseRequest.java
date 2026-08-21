package com.huawei.hms.adapter;

class CoreBaseRequest implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String jsonHeader;

    @com.huawei.hms.core.aidl.annotation.Packed
    private java.lang.String jsonObject;

    @com.huawei.hms.core.aidl.annotation.Packed
    private android.os.Parcelable parcelable;

    public CoreBaseRequest() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getJsonHeader() {
            r1 = this;
            java.lang.String r0 = r1.jsonHeader
            return r0
    }

    public java.lang.String getJsonObject() {
            r1 = this;
            java.lang.String r0 = r1.jsonObject
            return r0
    }

    public android.os.Parcelable getParcelable() {
            r1 = this;
            android.os.Parcelable r0 = r1.parcelable
            return r0
    }

    public void setJsonHeader(java.lang.String r1) {
            r0 = this;
            r0.jsonHeader = r1
            return
    }

    public void setJsonObject(java.lang.String r1) {
            r0 = this;
            r0.jsonObject = r1
            return
    }

    public void setParcelable(android.os.Parcelable r1) {
            r0 = this;
            r0.parcelable = r1
            return
    }
}
