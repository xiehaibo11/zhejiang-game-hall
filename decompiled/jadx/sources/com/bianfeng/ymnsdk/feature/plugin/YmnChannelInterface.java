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

/* JADX INFO: loaded from: classes.dex */
public abstract class YmnChannelInterface extends YmnPluginWrapper implements IUserFeature, IPaymentFeature, YmnCode {
    private String cpOrderId;
    private String ymnOrderId;

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper, com.bianfeng.ymnsdk.feature.protocol.IPlugin
    public void onInit(Context context) {
        super.onInit(context);
        setIniting(true);
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper
    public void sendResult(int code, String msg) {
        setInitFlagsByReturnCode(code);
        super.sendResult(code, msg);
    }

    @Override // com.bianfeng.ymnsdk.feature.YmnPluginWrapper
    public void sendResultWithoutInterceptors(int code, String msg) {
        setInitFlagsByReturnCode(code);
        super.sendResultWithoutInterceptors(code, msg);
    }

    protected void setInitFlagsByReturnCode(int code) {
        if (code == 100) {
            setIniting(false);
            setInited(true);
        }
        if (code == 101) {
            setIniting(false);
            setInited(false);
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public boolean isLogined() {
        return false;
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void logout() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void showToolBar() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void hideToolBar() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void showVerifyRealName() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void getVerifyRealNameInfo() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void getAndShowVerifyRealName() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void switchAccount() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void exit() {
        getActivity();
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void submitUserInfo(LinkedHashMap<String, String> data) {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public IUserFeature.UserInfo getUserInfo() {
        Gson gson = new Gson();
        return (IUserFeature.UserInfo) gson.fromJson(gson.toJson(getLoginedData()), IUserFeature.UserInfo.class);
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IUserFeature
    public void enterPlatform() {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public void prePay(LinkedHashMap<String, String> order) {
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public void pay(Map<String, String> order) {
        this.cpOrderId = order.get(IPaymentFeature.ARG_CP_ORDER_ID);
        this.ymnOrderId = order.get("trade_code");
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public String getOrderId() {
        if (!TextUtils.isEmpty(this.ymnOrderId)) {
            Logger.i("YmnChannelInterface ymnOrderId : " + this.ymnOrderId);
            return this.ymnOrderId;
        }
        Logger.i("YmnChannelInterface cpOrderId : " + this.cpOrderId);
        return this.cpOrderId;
    }

    public float getOrderTotalPrice(Map<String, String> order) {
        try {
            String platform_callback = order.get("platform_callback");
            if (YmnGsonUtil.isJsonObject(platform_callback)) {
                PlatformCallbackEntity callbackEntity = (PlatformCallbackEntity) YmnGsonUtil.fromJson(platform_callback, PlatformCallbackEntity.class);
                float total_fee = callbackEntity.getTotal_fee();
                if (total_fee != 0.0f) {
                    return total_fee / 100.0f;
                }
            }
        } catch (YmnsdkException e) {
            e.printStackTrace();
        }
        try {
            if (YmnsdkTypeUtils.isNewTrade()) {
                float price = Float.parseFloat(order.get("product_price"));
                float count = Float.parseFloat(order.get(IPaymentFeature.ARG_PRODUCT_QTY_V2));
                float total_fee2 = price * count;
                return total_fee2 / 100.0f;
            }
            float price2 = Float.parseFloat(order.get("product_price"));
            float count2 = Float.parseFloat(order.get("product_count"));
            float total_fee3 = price2 * count2;
            return total_fee3;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 1.0E9f;
        }
    }

    public String getOrderNotifyUrl(Map<String, String> order) {
        String notifyUrl = order.get("platform_notify_url");
        if (TextUtils.isEmpty(notifyUrl)) {
            return order.get("notify_url");
        }
        return notifyUrl;
    }

    public String getOrderExtArg(Map<String, String> order) {
        String extArg = order.get("platform_callback");
        if (TextUtils.isEmpty(extArg)) {
            return order.get("ext");
        }
        return extArg;
    }

    public String getOrdeCallbackMessage(Map<String, String> order) {
        String message = order.get("platform_callback");
        if (TextUtils.isEmpty(message)) {
            Gson gson = new Gson();
            return gson.toJson(order);
        }
        return message;
    }

    public void checkOrder() {
        if (!TextUtils.isEmpty(this.ymnOrderId)) {
            PaymentFeatureWrapper.a(this, this.ymnOrderId, 1);
        } else if (!TextUtils.isEmpty(this.cpOrderId)) {
            PaymentFeatureWrapper.a(this, this.cpOrderId, 0);
        } else {
            Logger.i("checkOrder cpOrderId is null and ymnOrderId is null ");
        }
    }

    public void requestProducts(ActionObserver observer) {
        g action = new g(getContext());
        action.putReqData(this, new Object[0]);
        action.addObserver(observer);
        action.actionStart();
    }

    public void requestFeedcodes(ActionObserver observer) {
        com.bianfeng.ymnsdk.action.a action = new com.bianfeng.ymnsdk.action.a(getContext());
        action.putReqData(this, new Object[0]);
        action.addObserver(observer);
        action.actionStart();
    }
}
