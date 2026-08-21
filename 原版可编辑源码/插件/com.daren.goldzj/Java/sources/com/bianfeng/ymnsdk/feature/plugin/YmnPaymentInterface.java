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

    public void checkOrder() {
        if (TextUtils.isEmpty(this.ymnOrderId)) {
            PaymentFeatureWrapper.a(this, this.cpOrderId, 0);
        } else {
            PaymentFeatureWrapper.a(this, this.ymnOrderId, 1);
        }
    }

    public String getOrdeCallbackMessage(Map<String, String> map) {
        String str = map.get(IPaymentFeature.ARG_THIRDPARTY_CALLBACK);
        return TextUtils.isEmpty(str) ? new Gson().toJson(map) : str;
    }

    public String getOrderExtArg(Map<String, String> map) {
        String str = map.get(IPaymentFeature.ARG_THIRDPARTY_CALLBACK);
        return TextUtils.isEmpty(str) ? map.get("ext") : str;
    }

    @Override
    public String getOrderId() {
        return !TextUtils.isEmpty(this.ymnOrderId) ? this.ymnOrderId : this.cpOrderId;
    }

    public String getOrderNotifyUrl(Map<String, String> map) {
        String str = map.get(IPaymentFeature.ARG_PLATFORM_NOTIFY_URL);
        return TextUtils.isEmpty(str) ? map.get(IPaymentFeature.ARG_NOTIFY_URL) : str;
    }

    public float getOrderTotalPrice(Map<String, String> map) {
        try {
            float total_fee = ((PlatformCallbackEntity) YmnGsonUtil.fromJson(map.get(IPaymentFeature.ARG_THIRDPARTY_CALLBACK), PlatformCallbackEntity.class)).getTotal_fee();
            if (total_fee != 0.0f) {
                return total_fee / 100.0f;
            }
        } catch (YmnsdkException e) {
            e.printStackTrace();
        }
        try {
            return YmnsdkTypeUtils.isNewTrade() ? (Float.parseFloat(map.get(IPaymentFeature.ARG_PRODUCT_PRICE)) * Float.parseFloat(map.get(IPaymentFeature.ARG_PRODUCT_QTY_V2))) / 100.0f : Float.parseFloat(map.get(IPaymentFeature.ARG_PRODUCT_PRICE)) * Float.parseFloat(map.get(IPaymentFeature.ARG_PRODUCT_COUNT));
        } catch (Exception e2) {
            e2.printStackTrace();
            return 1.0E9f;
        }
    }

    @Override
    public void onInit(Context context) {
        super.onInit(context);
        setIniting(true);
    }

    @Override
    public void pay(Map<String, String> map) {
        this.cpOrderId = map.get(IPaymentFeature.ARG_CP_ORDER_ID);
        this.ymnOrderId = map.get(IPaymentFeature.ARG_TRADE_CODE);
    }

    @Override
    public void prePay(LinkedHashMap<String, String> linkedHashMap) {
    }

    public void requestFeedcodes(ActionObserver actionObserver) {
        com.bianfeng.ymnsdk.action.a aVar = new com.bianfeng.ymnsdk.action.a(getContext());
        aVar.putReqData(this, new Object[0]);
        aVar.addObserver(actionObserver);
        aVar.actionStart();
    }

    public void requestProducts(ActionObserver actionObserver) {
        g gVar = new g(getContext());
        gVar.putReqData(this, new Object[0]);
        gVar.addObserver(actionObserver);
        gVar.actionStart();
    }

    @Override
    public void sendResult(int i, String str) {
        setInitFlagsByReturnCode(i);
        super.sendResult(i, str);
    }

    @Override
    public void sendResultWithoutInterceptors(int i, String str) {
        setInitFlagsByReturnCode(i);
        super.sendResultWithoutInterceptors(i, str);
    }

    protected void setInitFlagsByReturnCode(int i) {
        if (i == 205) {
            setIniting(false);
            setInited(true);
        }
        if (i == 205) {
            setIniting(false);
            setInited(false);
        }
    }
}
