package com.bianfeng.ymnsdk.feature.plugin;

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

/* JADX INFO: loaded from: classes.dex */
public class PaymentFeatureWrapper implements IPaymentFeature, PaymentWrapper {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    IPaymentFeature f1440a;
    YmnPluginWrapper b;
    YmnCallbackInterceptor c = new b(this);

    public YmnPluginWrapper a() {
        return this.b;
    }

    /* JADX WARN: Multi-variable type inference failed */
    public PaymentFeatureWrapper(IPaymentFeature iPaymentFeature) {
        this.f1440a = iPaymentFeature;
        this.b = (YmnPluginWrapper) iPaymentFeature;
        this.b.addCallbackInterceptor(this.c);
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public void prePay(LinkedHashMap<String, String> order) {
    }

    class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ Map f1441a;

        a(Map map) {
            this.f1441a = map;
        }

        @Override // java.lang.Runnable
        public void run() {
            YmnDataFunUtils.getInstance().payInit(PaymentFeatureWrapper.this.b);
            try {
                Logger.i("PaymentFeatureWrapper pay");
                com.bianfeng.ymnsdk.feature.plugin.a.a(this.f1441a, PaymentFeatureWrapper.this.b, PaymentFeatureWrapper.this.f1440a);
            } catch (Exception e) {
                PaymentFeatureWrapper.this.b.sendResult(201, "解析出错了");
                YmnDataFunUtils.getInstance().payResponseOrder(201, "解析出错了" + e.getMessage(), "0");
                e.printStackTrace();
            }
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public void pay(Map<String, String> order) {
        this.b.tryRunOnUiThreadOrJustRun(new a(order));
    }

    class b extends YmnCallbackInterceptor {
        b(PaymentFeatureWrapper this$0) {
        }

        @Override // com.bianfeng.ymnsdk.feature.YmnCallbackInterceptor, com.bianfeng.platform.PlatformSdkListener
        public void onCallBack(int code, String msg) {
            Logger.i("PaymentFeatureWrapper onCallBack : " + code);
            YmnDataFunUtils.getInstance().paySdkReturn(code, msg);
            super.onCallBack(code, msg);
        }
    }

    @Override // com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature
    public String getOrderId() {
        IPaymentFeature iPaymentFeature = this.f1440a;
        if (iPaymentFeature != null) {
            return iPaymentFeature.getOrderId();
        }
        return null;
    }

    public void a(String oderId, int orderType) {
        a(this.b, oderId, orderType);
    }

    private static void b(YmnPluginWrapper pluginWrapper, String oderId, int orderType) {
        try {
            Logger.i("checkOrderFromNew");
            RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
            com.bianfeng.ymnsdk.actionv2.c action = new com.bianfeng.ymnsdk.actionv2.c(pluginWrapper.getContext());
            action.putReqData(pluginWrapper, oderId);
            action.addObserver(new c(pluginWrapper, oderId, retryUtils, action));
            action.onStartAttachment();
            action.actionStart();
        } catch (Exception e) {
            pluginWrapper.sendResult(201, "201|" + e.getMessage());
        }
    }

    static class c extends ActionObserverV2 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ YmnPluginWrapper f1442a;
        final /* synthetic */ String b;
        final /* synthetic */ RequestRetryUtils c;
        final /* synthetic */ com.bianfeng.ymnsdk.actionv2.c d;

        c(YmnPluginWrapper ymnPluginWrapper, String str, RequestRetryUtils requestRetryUtils, com.bianfeng.ymnsdk.actionv2.c cVar) {
            this.f1442a = ymnPluginWrapper;
            this.b = str;
            this.c = requestRetryUtils;
            this.d = cVar;
        }

        @Override // com.bianfeng.ymnsdk.actionv2.ActionObserverV2
        public void onActionResult(ActionSupportV2.ResponseResult result) {
            Logger.i("checkOrderFromNew onActionResult");
            if (result.isOk()) {
                try {
                    CheckOrderEntity entity = (CheckOrderEntity) YmnGsonUtil.fromJson(result.getSrcRes(), CheckOrderEntity.class);
                    int status = entity.getPay_status();
                    if (status == 1) {
                        this.f1442a.sendResult(200, status + "|" + entity.toString());
                    } else {
                        this.f1442a.sendResult(201, status + "|" + this.b);
                    }
                    return;
                } catch (YmnsdkException e) {
                    this.f1442a.sendResult(201, "201| 查询数据解析出错");
                    return;
                }
            }
            boolean isNotNeedRetry = this.c.retryRequest(this.d);
            if (isNotNeedRetry) {
                this.f1442a.sendResult(201, "201|" + result.messageFail());
            }
        }
    }

    private static void c(YmnPluginWrapper pluginWrapper, String oderId, int orderType) {
        RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
        f action = new f(pluginWrapper.getContext());
        action.putReqData(pluginWrapper, oderId, Integer.valueOf(orderType));
        action.addObserver(new d(action, pluginWrapper, retryUtils));
        action.onStartAttachment();
        action.actionStart();
    }

    static class d extends ActionObserver {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ f f1443a;
        final /* synthetic */ YmnPluginWrapper b;
        final /* synthetic */ RequestRetryUtils c;

        d(f fVar, YmnPluginWrapper ymnPluginWrapper, RequestRetryUtils requestRetryUtils) {
            this.f1443a = fVar;
            this.b = ymnPluginWrapper;
            this.c = requestRetryUtils;
        }

        @Override // com.bianfeng.ymnsdk.action.ActionObserver
        public void onActionResult(ActionSupport.ResponseResult result) {
            if (result.isOk()) {
                this.f1443a.onEndAttachment();
                int status = result.data.optInt("status");
                if (2 == status || 3 == status) {
                    this.b.sendResult(200, status + "|" + result.dataAsString());
                    return;
                }
                this.b.sendResult(201, status + "|" + result.messageFail());
                return;
            }
            boolean isNotNeedRetry = this.c.retryRequest(this.f1443a);
            if (isNotNeedRetry) {
                this.b.sendResult(203, result.messageFail());
            }
        }
    }

    public static void a(YmnPluginWrapper pluginWrapper, String oderId, int orderType) {
        if (YmnsdkTypeUtils.isNewTrade()) {
            b(pluginWrapper, oderId, orderType);
        } else {
            c(pluginWrapper, oderId, orderType);
        }
    }
}
