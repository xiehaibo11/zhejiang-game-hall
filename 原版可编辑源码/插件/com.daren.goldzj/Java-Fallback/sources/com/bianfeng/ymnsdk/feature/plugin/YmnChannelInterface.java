package com.bianfeng.ymnsdk.feature.plugin;

import android.content.Context;
import android.text.TextUtils;
import com.bianfeng.ymnsdk.YmnCode;
import com.bianfeng.ymnsdk.action.ActionObserver;
import com.bianfeng.ymnsdk.action.g;
import com.bianfeng.ymnsdk.entity.PlatformCallbackEntity;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IUserFeature;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.YmnsdkTypeUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import com.google.gson.Gson;
import java.util.LinkedHashMap;
import java.util.Map;

public abstract class YmnChannelInterface extends YmnPluginWrapper implements IUserFeature, IPaymentFeature, YmnCode {
    private String cpOrderId;
    private String ymnOrderId;

    public YmnChannelInterface() {
    }

    public void checkOrder() {
        if (TextUtils.isEmpty(this.ymnOrderId) == true) goto L6;
        PaymentFeatureWrapper.a(this, this.ymnOrderId, 1);
        return;
    L6:
        if (TextUtils.isEmpty(this.cpOrderId) == true) goto L8;
        PaymentFeatureWrapper.a(this, this.cpOrderId, 0);
        return;
    L8:
        Logger.i("checkOrder cpOrderId is null and ymnOrderId is null ");
    }

    @Override
    public void enterPlatform() {
    }

    @Override
    public void exit() {
        getActivity();
    }

    @Override
    public void getAndShowVerifyRealName() {
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
        if (TextUtils.isEmpty(this.ymnOrderId) == true) goto L6;
        Logger.i("YmnChannelInterface ymnOrderId : " + this.ymnOrderId);
        return this.ymnOrderId;
    L6:
        Logger.i("YmnChannelInterface cpOrderId : " + this.cpOrderId);
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
        String r1 = r4.get(IPaymentFeature.ARG_THIRDPARTY_CALLBACK);     // Catch: YmnsdkException -> L10
        if (YmnGsonUtil.isJsonObject(r1) == false) goto L23;
        float r12 = ((PlatformCallbackEntity) YmnGsonUtil.fromJson(r1, PlatformCallbackEntity.class)).getTotal_fee();     // Catch: YmnsdkException -> L10
        if (r12 == 0.0f) goto L23;
        return r12 / 100.0f;
    L23:
    L20:
        e = move-exception;
        e.printStackTrace();
        return 1.0E9f;
    L14:
        if (YmnsdkTypeUtils.isNewTrade() == false) goto L19;
        return (Float.parseFloat(r4.get(IPaymentFeature.ARG_PRODUCT_PRICE)) * Float.parseFloat(r4.get(IPaymentFeature.ARG_PRODUCT_QTY_V2))) / 100.0f;
    L19:
        return Float.parseFloat(r4.get(IPaymentFeature.ARG_PRODUCT_PRICE)) * Float.parseFloat(r4.get(IPaymentFeature.ARG_PRODUCT_COUNT));
    L10:
        e = move-exception;
        e.printStackTrace();
        goto L23
    }

    @Override
    public IUserFeature.UserInfo getUserInfo() {
        Gson r0 = new Gson();
        return (IUserFeature.UserInfo) r0.fromJson(r0.toJson(getLoginedData()), IUserFeature.UserInfo.class);
    }

    @Override
    public void getVerifyRealNameInfo() {
    }

    @Override
    public void hideToolBar() {
    }

    @Override
    public boolean isLogined() {
        return false;
    }

    @Override
    public void logout() {
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

    protected void setInitFlagsByReturnCode(int r3) {
        if (r3 != 100) goto L6;
        setIniting(false);
        setInited(true);
    L6:
        if (r3 != 101) goto L9;
        setIniting(false);
        setInited(false);
        return;
    }

    @Override
    public void showToolBar() {
    }

    @Override
    public void showVerifyRealName() {
    }

    @Override
    public void submitUserInfo(LinkedHashMap<String, String> r1) {
    }

    @Override
    public void switchAccount() {
    }
}
