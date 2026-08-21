package com.bianfeng.ymnsdk.feature.plugin;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.YmnCode;
import com.bianfeng.ymnsdk.action.ActionObserver;
import com.bianfeng.ymnsdk.action.g;
import com.bianfeng.ymnsdk.entity.PlatformCallbackEntity;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.util.YmnsdkTypeUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.google.gson.Gson;
import java.util.LinkedHashMap;
import java.util.Map;

public abstract class YmnPaymentInterface extends YmnPluginWrapper implements IPaymentFeature, YmnCode {
    private String cpOrderId;
    private String ymnOrderId;

    public YmnPaymentInterface() {
    }

    public void checkOrder() {
        if (TextUtils.isEmpty(this.ymnOrderId) == true) goto L5;
        PaymentFeatureWrapper.a(this, this.ymnOrderId, 1);
        return;
    L5:
        PaymentFeatureWrapper.a(this, this.cpOrderId, 0);
    }

    public String getOrdeCallbackMessage(Map<String, String> r3) {
        String r0 = r3.get(IPaymentFeature.ARG_THIRDPARTY_CALLBACK);
        if (TextUtils.isEmpty(r0) == true) goto L5;
        return r0;
    L5:
        return new Gson().toJson(r3);
    }

    public String getOrderExtArg(Map<String, String> r3) {
        String r0 = r3.get(IPaymentFeature.ARG_THIRDPARTY_CALLBACK);
        if (TextUtils.isEmpty(r0) == true) goto L5;
        return r0;
    L5:
        return r3.get("ext");
    }

    @Override
    public String getOrderId() {
        if (TextUtils.isEmpty(this.ymnOrderId) == true) goto L7;
        return this.ymnOrderId;
    L7:
        return this.cpOrderId;
    }

    public String getOrderNotifyUrl(Map<String, String> r3) {
        String r0 = r3.get(IPaymentFeature.ARG_PLATFORM_NOTIFY_URL);
        if (TextUtils.isEmpty(r0) == true) goto L5;
        return r0;
    L5:
        return r3.get(IPaymentFeature.ARG_NOTIFY_URL);
    }

    public float getOrderTotalPrice(Map<String, String> r4) {
        float r0 = ((PlatformCallbackEntity) YmnGsonUtil.fromJson(r4.get(IPaymentFeature.ARG_THIRDPARTY_CALLBACK), PlatformCallbackEntity.class)).getTotal_fee();     // Catch: YmnsdkException -> L8
        if (r0 != 0.0f) goto L7;
    L21:
    L18:
        e = move-exception;
        e.printStackTrace();
        return 1.0E9f;
    L12:
        if (YmnsdkTypeUtils.isNewTrade() == false) goto L17;
        return (Float.parseFloat(r4.get(IPaymentFeature.ARG_PRODUCT_PRICE)) * Float.parseFloat(r4.get(IPaymentFeature.ARG_PRODUCT_QTY_V2))) / 100.0f;
    L17:
        return Float.parseFloat(r4.get(IPaymentFeature.ARG_PRODUCT_PRICE)) * Float.parseFloat(r4.get(IPaymentFeature.ARG_PRODUCT_COUNT));
    L7:
        return r0 / 100.0f;
    L8:
        e = move-exception;
        e.printStackTrace();
        goto L21
    }

    @Override
    public void onInit(Context r1) {
        super.onInit(r1);
        setIniting(true);
    }

    @Override
    public void pay(Map<String, String> r2) {
        this.cpOrderId = r2.get(IPaymentFeature.ARG_CP_ORDER_ID);
        this.ymnOrderId = r2.get(IPaymentFeature.ARG_TRADE_CODE);
    }

    @Override
    public void prePay(LinkedHashMap<String, String> r1) {
    }

    public void requestFeedcodes(ActionObserver r3) {
        com.bianfeng.ymnsdk.action.a r0 = new com.bianfeng.ymnsdk.action.a(getContext());
        r0.putReqData(this, new Object[0]);
        r0.addObserver(r3);
        r0.actionStart();
    }

    public void requestProducts(ActionObserver r3) {
        g r0 = new g(getContext());
        r0.putReqData(this, new Object[0]);
        r0.addObserver(r3);
        r0.actionStart();
    }

    @Override
    public void sendResult(int r1, String r2) {
        setInitFlagsByReturnCode(r1);
        super.sendResult(r1, r2);
    }

    @Override
    public void sendResultWithoutInterceptors(int r1, String r2) {
        setInitFlagsByReturnCode(r1);
        super.sendResultWithoutInterceptors(r1, r2);
    }

    protected void setInitFlagsByReturnCode(int r4) {
        if (r4 != 205) goto L5;
        setIniting(false);
        setInited(true);
    L5:
        if (r4 != 205) goto L8;
        setIniting(false);
        setInited(false);
        return;
    }
}
