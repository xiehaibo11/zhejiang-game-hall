package com.bianfeng.ymnsdk.entity;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class PlatformCallbackEntity {
    private String bfOrderId;
    private double par_value;
    private double total_fee;

    public PlatformCallbackEntity(String str, double d, double d2) {
        this.par_value = 0.0d;
        this.total_fee = 0.0d;
        str = TextUtils.isEmpty(str) ? "" : str;
        this.par_value = d;
        this.total_fee = d2;
        this.bfOrderId = str;
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
