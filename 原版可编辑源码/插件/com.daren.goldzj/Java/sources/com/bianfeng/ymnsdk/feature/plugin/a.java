package com.bianfeng.ymnsdk.feature.plugin;

import com.bianfeng.platform.PaymentWrapper;
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
    private static volatile com.bianfeng.ymnsdk.actionv2.b b;
    private static volatile e c;

    class a extends ActionObserverV2 {
        final IPaymentFeature a;
        final RequestRetryUtils b;
        final YmnPluginWrapper c;

        a(IPaymentFeature iPaymentFeature, RequestRetryUtils requestRetryUtils, YmnPluginWrapper ymnPluginWrapper) {
            this.a = iPaymentFeature;
            this.b = requestRetryUtils;
            this.c = ymnPluginWrapper;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult responseResult) {
            boolean unused = a.a = false;
            if (responseResult.isOk()) {
                a.f();
                YmnDataFunUtils.getInstance().payCallSdk();
                this.a.pay((Map) responseResult.getProcessedResult());
            } else if (this.b.retryRequest(a.b)) {
                a.f();
                YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_FAIL, responseResult.messageFail(), "0");
                this.c.sendResult(PaymentWrapper.PAYRESULT_FAIL, responseResult.messageFail());
            }
        }
    }

    class b extends ActionObserver {
        final IPaymentFeature a;
        final RequestRetryUtils b;
        final YmnPluginWrapper c;

        b(IPaymentFeature iPaymentFeature, RequestRetryUtils requestRetryUtils, YmnPluginWrapper ymnPluginWrapper) {
            this.a = iPaymentFeature;
            this.b = requestRetryUtils;
            this.c = ymnPluginWrapper;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult responseResult) {
            boolean unused = a.a = false;
            if (responseResult.isOk()) {
                Logger.i("PaymentFeatureFactory payAction 成功");
                a.e();
                YmnDataFunUtils.getInstance().payCallSdk();
                this.a.pay((Map) responseResult.processedResult);
                return;
            }
            if (this.b.retryRequest(a.c)) {
                a.e();
                YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_FAIL, responseResult.messageFail(), "0");
                this.c.sendResult(PaymentWrapper.PAYRESULT_FAIL, responseResult.messageFail());
            }
        }
    }

    private static void e() {
        if (c != null) {
            c.onEndAttachment();
            c = null;
        }
    }

    private static void f() {
        if (b != null) {
            b.onEndAttachment();
            b = null;
        }
    }

    public static void a(Map<String, String> map, YmnPluginWrapper ymnPluginWrapper, IPaymentFeature iPaymentFeature) {
        if (YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo() && ymnPluginWrapper.getLoginedData() == null) {
            YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_TOKEN_INVALID, "登录时的数据没有", "0");
            ymnPluginWrapper.sendResult(PaymentWrapper.PAYRESULT_FAIL, "212");
            return;
        }
        if (a) {
            return;
        }
        a = true;
        c.a(map);
        if (YmnsdkTypeUtils.isNewTrade()) {
            try {
                Logger.i("PaymentFeatureFactory payAction new");
                RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
                b = (com.bianfeng.ymnsdk.actionv2.b) d.a(new com.bianfeng.ymnsdk.actionv2.b(ymnPluginWrapper.getContext()));
                b.putReqData(ymnPluginWrapper, map, ymnPluginWrapper.getLoginedData());
                b.addObserver(new a(iPaymentFeature, requestRetryUtils, ymnPluginWrapper));
                b.onStartAttachment();
                Logger.i("PaymentFeatureFactory pay");
                b.actionStart();
                return;
            } catch (Exception e) {
                a = false;
                f();
                ymnPluginWrapper.sendResult(PaymentWrapper.PAYRESULT_FAIL, e.getMessage());
                return;
            }
        }
        try {
            Logger.i("PaymentFeatureFactory payAction old");
            RequestRetryUtils requestRetryUtils2 = RequestRetryUtils.getInstance();
            c = (e) d.a(new e(ymnPluginWrapper.getContext()));
            c.putReqData(ymnPluginWrapper, map, ymnPluginWrapper.getLoginedData());
            c.addObserver(new b(iPaymentFeature, requestRetryUtils2, ymnPluginWrapper));
            c.onStartAttachment();
            c.actionStart();
        } catch (Exception e2) {
            a = false;
            e();
            ymnPluginWrapper.sendResult(PaymentWrapper.PAYRESULT_FAIL, e2.getMessage());
        }
    }
}
