package com.bianfeng.ymnsdk.feature.plugin;

import android.support.v4.app.NotificationCompat;
import com.bianfeng.platform.PaymentWrapper;
import com.bianfeng.ymnsdk.action.ActionObserver;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.action.f;
import com.bianfeng.ymnsdk.actionv2.ActionObserverV2;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.entity.CheckOrderEntity;
import com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.RequestRetryUtils;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.YmnsdkTypeUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.LinkedHashMap;
import java.util.Map;

public class PaymentFeatureWrapper implements IPaymentFeature, PaymentWrapper {
    IPaymentFeature a;
    YmnPluginWrapper b;
    YmnCallbackInterceptor c = new b(this);

    class a implements Runnable {
        final Map a;

        a(Map map) {
            this.a = map;
        }

        @Override
        public void run() {
            YmnDataFunUtils.getInstance().payInit(PaymentFeatureWrapper.this.b);
            try {
                Logger.i("PaymentFeatureWrapper pay");
                com.bianfeng.ymnsdk.feature.plugin.a.a(this.a, PaymentFeatureWrapper.this.b, PaymentFeatureWrapper.this.a);
            } catch (Exception e) {
                PaymentFeatureWrapper.this.b.sendResult(PaymentWrapper.PAYRESULT_FAIL, "解析出错了");
                YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_FAIL, "解析出错了" + e.getMessage(), "0");
                e.printStackTrace();
            }
        }
    }

    class b extends YmnCallbackInterceptor {
        b(PaymentFeatureWrapper paymentFeatureWrapper) {
        }

        @Override
        public void onCallBack(int i, String str) {
            Logger.i("PaymentFeatureWrapper onCallBack : " + i);
            YmnDataFunUtils.getInstance().paySdkReturn(i, str);
            super.onCallBack(i, str);
        }
    }

    class c extends ActionObserverV2 {
        final YmnPluginWrapper a;
        final String b;
        final RequestRetryUtils c;
        final com.bianfeng.ymnsdk.actionv2.c d;

        c(YmnPluginWrapper ymnPluginWrapper, String str, RequestRetryUtils requestRetryUtils, com.bianfeng.ymnsdk.actionv2.c cVar) {
            this.a = ymnPluginWrapper;
            this.b = str;
            this.c = requestRetryUtils;
            this.d = cVar;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult responseResult) {
            Logger.i("checkOrderFromNew onActionResult");
            if (!responseResult.isOk()) {
                if (this.c.retryRequest(this.d)) {
                    this.a.sendResult(PaymentWrapper.PAYRESULT_FAIL, "201|" + responseResult.messageFail());
                    return;
                }
                return;
            }
            try {
                CheckOrderEntity checkOrderEntity = (CheckOrderEntity) YmnGsonUtil.fromJson(responseResult.getSrcRes(), CheckOrderEntity.class);
                int pay_status = checkOrderEntity.getPay_status();
                if (pay_status == 1) {
                    this.a.sendResult(PaymentWrapper.PAYRESULT_SUCCESS, pay_status + "|" + checkOrderEntity.toString());
                } else {
                    this.a.sendResult(PaymentWrapper.PAYRESULT_FAIL, pay_status + "|" + this.b);
                }
            } catch (YmnsdkException unused) {
                this.a.sendResult(PaymentWrapper.PAYRESULT_FAIL, "201| 查询数据解析出错");
            }
        }
    }

    class d extends ActionObserver {
        final f a;
        final YmnPluginWrapper b;
        final RequestRetryUtils c;

        d(f fVar, YmnPluginWrapper ymnPluginWrapper, RequestRetryUtils requestRetryUtils) {
            this.a = fVar;
            this.b = ymnPluginWrapper;
            this.c = requestRetryUtils;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult responseResult) {
            if (!responseResult.isOk()) {
                if (this.c.retryRequest(this.a)) {
                    this.b.sendResult(PaymentWrapper.PAYRESULT_NETWORK_ERROR, responseResult.messageFail());
                    return;
                }
                return;
            }
            this.a.onEndAttachment();
            int iOptInt = responseResult.data.optInt(NotificationCompat.CATEGORY_STATUS);
            if (2 == iOptInt || 3 == iOptInt) {
                this.b.sendResult(PaymentWrapper.PAYRESULT_SUCCESS, iOptInt + "|" + responseResult.dataAsString());
                return;
            }
            this.b.sendResult(PaymentWrapper.PAYRESULT_FAIL, iOptInt + "|" + responseResult.messageFail());
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public PaymentFeatureWrapper(IPaymentFeature iPaymentFeature) {
        this.a = iPaymentFeature;
        this.b = (YmnPluginWrapper) iPaymentFeature;
        this.b.addCallbackInterceptor(this.c);
    }

    private static void b(YmnPluginWrapper ymnPluginWrapper, String str, int i) {
        try {
            Logger.i("checkOrderFromNew");
            RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
            com.bianfeng.ymnsdk.actionv2.c cVar = new com.bianfeng.ymnsdk.actionv2.c(ymnPluginWrapper.getContext());
            cVar.putReqData(ymnPluginWrapper, str);
            cVar.addObserver(new c(ymnPluginWrapper, str, requestRetryUtils, cVar));
            cVar.onStartAttachment();
            cVar.actionStart();
        } catch (Exception e) {
            ymnPluginWrapper.sendResult(PaymentWrapper.PAYRESULT_FAIL, "201|" + e.getMessage());
        }
    }

    private static void c(YmnPluginWrapper ymnPluginWrapper, String str, int i) {
        RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
        f fVar = new f(ymnPluginWrapper.getContext());
        fVar.putReqData(ymnPluginWrapper, str, Integer.valueOf(i));
        fVar.addObserver(new d(fVar, ymnPluginWrapper, requestRetryUtils));
        fVar.onStartAttachment();
        fVar.actionStart();
    }

    public YmnPluginWrapper a() {
        return this.b;
    }

    @Override
    public String getOrderId() {
        IPaymentFeature iPaymentFeature = this.a;
        if (iPaymentFeature != null) {
            return iPaymentFeature.getOrderId();
        }
        return null;
    }

    @Override
    public void pay(Map<String, String> map) {
        this.b.tryRunOnUiThreadOrJustRun(new a(map));
    }

    @Override
    public void prePay(LinkedHashMap<String, String> linkedHashMap) {
    }

    public void a(String str, int i) {
        a(this.b, str, i);
    }

    public static void a(YmnPluginWrapper ymnPluginWrapper, String str, int i) {
        if (YmnsdkTypeUtils.isNewTrade()) {
            b(ymnPluginWrapper, str, i);
        } else {
            c(ymnPluginWrapper, str, i);
        }
    }
}
