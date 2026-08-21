package com.bianfeng.ymnsdk.entity;

public class PlatformCallbackEntity {
    private java.lang.String bfOrderId;
    private double par_value;
    private double total_fee;

    public PlatformCallbackEntity() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.par_value = r0
            r2.total_fee = r0
            return
    }

    public PlatformCallbackEntity(java.lang.String r3, double r4, double r6) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.par_value = r0
            r2.total_fee = r0
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L11
            java.lang.String r3 = ""
        L11:
            r2.par_value = r4
            r2.total_fee = r6
            r2.bfOrderId = r3
            return
    }

    public java.lang.String getBfOrderId() {
            r1 = this;
            java.lang.String r0 = r1.bfOrderId
            return r0
    }

    public float getPar_value() {
            r2 = this;
            double r0 = r2.par_value
            float r0 = (float) r0
            return r0
    }

    public float getTotal_fee() {
            r2 = this;
            double r0 = r2.total_fee
            float r0 = (float) r0
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
            return r0
    }
}
