package com.bianfeng.ymnsdk.entity;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

/* JADX INFO: loaded from: classes.dex */
public class PlatformCallbackEntity {
    private String bfOrderId;
    private double par_value;
    private double total_fee;

    public PlatformCallbackEntity(String bfOrderId, double par_value, double total_fee) {
        this.par_value = 0.0d;
        this.total_fee = 0.0d;
        bfOrderId = TextUtils.isEmpty(bfOrderId) ? "" : bfOrderId;
        this.par_value = par_value;
        this.total_fee = total_fee;
        this.bfOrderId = bfOrderId;
    }

    public PlatformCallbackEntity() {
        this.par_value = 0.0d;
        this.total_fee = 0.0d;
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
}
