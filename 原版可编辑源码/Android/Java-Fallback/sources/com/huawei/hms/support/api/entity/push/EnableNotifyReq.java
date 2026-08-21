package com.huawei.hms.support.api.entity.push;

public class EnableNotifyReq implements com.huawei.hms.core.aidl.IMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public boolean enable;

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String packageName;

    public EnableNotifyReq() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getPackageName() {
            r1 = this;
            java.lang.String r0 = r1.packageName
            return r0
    }

    public boolean isEnable() {
            r1 = this;
            boolean r0 = r1.enable
            return r0
    }

    public void setEnable(boolean r1) {
            r0 = this;
            r0.enable = r1
            return
    }

    public void setPackageName(java.lang.String r1) {
            r0 = this;
            r0.packageName = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "EnableNotifyReq{"
            r0.<init>(r1)
            java.lang.String r1 = "packageName='"
            r0.append(r1)
            java.lang.String r1 = r2.packageName
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r1 = ", enable="
            r0.append(r1)
            boolean r1 = r2.enable
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
