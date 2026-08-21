package com.bianfeng.ymnsdk.entity;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class PlatformCallbackEntity {
    private String bfOrderId;
    private double par_value;
    private double total_fee;

    public PlatformCallbackEntity(String r3, double r4, double r6) {
        this.par_value = 0.0d;
        this.total_fee = 0.0d;
        if (TextUtils.isEmpty(r3) == false) goto L5;
        r3 = "";
    L5:
        this.par_value = r4;
        this.total_fee = r6;
        this.bfOrderId = r3;
    }

    public String getBfOrderId() {
        return this.bfOrderId;
    }

    public float getPar_value() {
        return (float) this.par_value;
    }

    public float getTotal_fee() {
        return (float) this.total_fee;
    }

    public String toString() {
        return YmnGsonUtil.toJson(this);
    }

    public PlatformCallbackEntity() {
        this.par_value = 0.0d;
        this.total_fee = 0.0d;
    }
}
