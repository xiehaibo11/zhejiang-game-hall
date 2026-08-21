package com.huawei.hms.support.api.entity.core;

public class JosGetNoticeResp extends com.huawei.hms.support.api.entity.core.JosBaseResp {

    @com.huawei.hms.core.aidl.annotation.Packed
    private android.content.Intent noticeIntent;

    public JosGetNoticeResp() {
            r0 = this;
            r0.<init>()
            return
    }

    private static <T> T get(T r0) {
            return r0
    }

    public android.content.Intent getNoticeIntent() {
            r1 = this;
            android.content.Intent r0 = r1.noticeIntent
            java.lang.Object r0 = get(r0)
            android.content.Intent r0 = (android.content.Intent) r0
            return r0
    }

    public void setNoticeIntent(android.content.Intent r1) {
            r0 = this;
            r0.noticeIntent = r1
            return
    }
}
