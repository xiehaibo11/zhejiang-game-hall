package com.bianfeng.ymnsdk.feature.plugin;

import com.bianfeng.ymnsdk.action.ActionObserver;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.action.e;
import com.bianfeng.ymnsdk.actionv2.ActionObserverV2;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.feature.YmnPluginWrapper;
import com.bianfeng.ymnsdk.feature.c;
import com.bianfeng.ymnsdk.feature.d;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.util.Logger;
import com.bianfeng.ymnsdk.util.RequestRetryUtils;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.YmnsdkTypeUtils;
import java.util.Map;

public class a {
    private static volatile boolean a = false;
    private static volatile com.bianfeng.ymnsdk.actionv2.b b = null;
    private static volatile e c = null;

    public static void a(Map<String, String> order, YmnPluginWrapper pluginWrapper, IPaymentFeature paymentFeature) {
        if (YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo() && pluginWrapper.getLoginedData() == null) {
            YmnDataFunUtils.getInstance().payResponseOrder(212, "登录时的数据没有", "0");
            pluginWrapper.sendResult(201, "212");
            return;
        }
        if (a) {
            return;
        }
        a = true;
        c.a(order);
        if (YmnsdkTypeUtils.isNewTrade()) {
            try {
                Logger.i("PaymentFeatureFactory payAction new");
                RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
                com.bianfeng.ymnsdk.actionv2.b bVar = new com.bianfeng.ymnsdk.actionv2.b(pluginWrapper.getContext());
                d.a(bVar);
                b = bVar;
                b.putReqData(pluginWrapper, order, pluginWrapper.getLoginedData());
                b.addObserver(new a(paymentFeature, retryUtils, pluginWrapper));
                b.onStartAttachment();
                Logger.i("PaymentFeatureFactory pay");
                b.actionStart();
                return;
            } catch (Exception e) {
                a = false;
                f();
                pluginWrapper.sendResult(201, e.getMessage());
                return;
            }
        }
        try {
            Logger.i("PaymentFeatureFactory payAction old");
            RequestRetryUtils retryUtils2 = RequestRetryUtils.getInstance();
            e eVar = new e(pluginWrapper.getContext());
            d.a(eVar);
            c = eVar;
            c.putReqData(pluginWrapper, order, pluginWrapper.getLoginedData());
            c.addObserver(new b(paymentFeature, retryUtils2, pluginWrapper));
            c.onStartAttachment();
            c.actionStart();
        } catch (Exception e2) {
            a = false;
            e();
            pluginWrapper.sendResult(201, e2.getMessage());
        }
    }

    static class a extends ActionObserverV2 {
        final IPaymentFeature a;
        final RequestRetryUtils b;
        final YmnPluginWrapper c;

        a(IPaymentFeature iPaymentFeature, RequestRetryUtils requestRetryUtils, YmnPluginWrapper ymnPluginWrapper) {
            this.a = iPaymentFeature;
            this.b = requestRetryUtils;
            this.c = ymnPluginWrapper;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult result) {
            boolean unused = a.a = false;
            if (result.isOk()) {
                a.f();
                YmnDataFunUtils.getInstance().payCallSdk();
                this.a.pay((Map) result.getProcessedResult());
            } else {
                boolean isNotRetry = this.b.retryRequest(a.b);
                if (isNotRetry) {
                    a.f();
                    YmnDataFunUtils.getInstance().payResponseOrder(201, result.messageFail(), "0");
                    this.c.sendResult(201, result.messageFail());
                }
            }
        }
    }

    static class b extends ActionObserver {
        final IPaymentFeature a;
        final RequestRetryUtils b;
        final YmnPluginWrapper c;

        b(IPaymentFeature iPaymentFeature, RequestRetryUtils requestRetryUtils, YmnPluginWrapper ymnPluginWrapper) {
            this.a = iPaymentFeature;
            this.b = requestRetryUtils;
            this.c = ymnPluginWrapper;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult result) {
            boolean unused = a.a = false;
            if (!result.isOk()) {
                boolean isNotNeedRetry = this.b.retryRequest(a.c);
                if (isNotNeedRetry) {
                    a.e();
                    YmnDataFunUtils.getInstance().payResponseOrder(201, result.messageFail(), "0");
                    this.c.sendResult(201, result.messageFail());
                    return;
                }
                return;
            }
            Logger.i("PaymentFeatureFactory payAction 成功");
            a.e();
            YmnDataFunUtils.getInstance().payCallSdk();
            this.a.pay((Map) result.processedResult);
        }
    }

    private static void f() {
        if (b != null) {
            b.onEndAttachment();
            b = null;
        }
    }

    private static void e() {
        if (c != null) {
            c.onEndAttachment();
            c = null;
        }
    }
}
