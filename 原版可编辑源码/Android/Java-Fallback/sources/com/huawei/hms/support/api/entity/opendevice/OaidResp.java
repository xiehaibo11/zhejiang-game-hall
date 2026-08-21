package com.huawei.hms.support.api.entity.opendevice;

public class OaidResp extends com.huawei.hms.core.aidl.AbstractMessageEntity {

    @com.huawei.hms.core.aidl.annotation.Packed
    public java.lang.String id;

    @com.huawei.hms.core.aidl.annotation.Packed
    public boolean isTrackLimited;

    @com.huawei.hms.core.aidl.annotation.Packed
    public android.app.PendingIntent settingIntent;

    public OaidResp() {
            r0 = this;
            r0.<init>()
            return
    }

    public java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
    }

    public android.app.PendingIntent getSettingIntent() {
            r1 = this;
            android.app.PendingIntent r0 = r1.settingIntent
            return r0
    }

    public boolean isTrackLimited() {
            r1 = this;
            boolean r0 = r1.isTrackLimited
            return r0
    }

    public void setId(java.lang.String r1) {
            r0 = this;
            r0.id = r1
            return
    }

    public void setSettingIntent(android.app.PendingIntent r1) {
            r0 = this;
            r0.settingIntent = r1
            return
    }

    public void setTrackLimited(boolean r1) {
            r0 = this;
            r0.isTrackLimited = r1
            return
    }
}
