package com.huawei.hms.support.api.entity.core;

public class JosGetNoticeReq extends com.huawei.hms.support.api.entity.core.JosBaseReq {
    public static final int NOTICE_TYPE_CONN = 0;
    public static final int NOTICE_TYPE_SIGN = 1;

    @com.huawei.hms.core.aidl.annotation.Packed
    private int noticeType;

    public JosGetNoticeReq() {
            r0 = this;
            r0.<init>()
            return
    }

    private static <T> T get(T r0) {
            return r0
    }

    public int getNoticeType() {
            r1 = this;
            int r0 = r1.noticeType
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.Object r0 = get(r0)
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            return r0
    }

    public void setNoticeType(int r1) {
            r0 = this;
            r0.noticeType = r1
            return
    }
}
