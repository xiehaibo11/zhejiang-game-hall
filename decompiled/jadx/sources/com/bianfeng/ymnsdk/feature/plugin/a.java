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

/* JADX INFO: compiled from: PaymentFeatureFactory.java */
/* JADX INFO: loaded from: classes.dex */
public class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static volatile boolean f1462a = false;
    private static volatile com.bianfeng.ymnsdk.actionv2.b b = null;
    private static volatile e c = null;

    public static void a(Map<String, String> order, YmnPluginWrapper pluginWrapper, IPaymentFeature paymentFeature) {
        if (YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo() && pluginWrapper.getLoginedData() == null) {
            YmnDataFunUtils.getInstance().payResponseOrder(212, "登录时的数据没有", "0");
            pluginWrapper.sendResult(201, "212");
            return;
        }
        if (f1462a) {
            return;
        }
        f1462a = true;
        c.a(order);
        if (YmnsdkTypeUtils.isNewTrade()) {
            try {
                Logger.i("PaymentFeatureFactory payAction new");
                RequestRetryUtils retryUtils = RequestRetryUtils.getInstance();
                com.bianfeng.ymnsdk.actionv2.b bVar = new com.bianfeng.ymnsdk.actionv2.b(pluginWrapper.getContext());
                d.a(bVar);
                b = bVar;
                b.putReqData(pluginWrapper, order, pluginWrapper.getLoginedData());
                b.addObserver(new C0044a(paymentFeature, retryUtils, pluginWrapper));
                b.onStartAttachment();
                Logger.i("PaymentFeatureFactory pay");
                b.actionStart();
                return;
            } catch (Exception e) {
                f1462a = false;
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
            f1462a = false;
            e();
            pluginWrapper.sendResult(201, e2.getMessage());
        }
    }

    /* JADX INFO: renamed from: com.bianfeng.ymnsdk.feature.plugin.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: PaymentFeatureFactory.java */
    static class C0044a extends ActionObserverV2 {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ IPaymentFeature f1463a;
        final /* synthetic */ RequestRetryUtils b;
        final /* synthetic */ YmnPluginWrapper c;

        C0044a(IPaymentFeature iPaymentFeature, RequestRetryUtils requestRetryUtils, YmnPluginWrapper ymnPluginWrapper) {
            this.f1463a = iPaymentFeature;
            this.b = requestRetryUtils;
            this.c = ymnPluginWrapper;
        }

        @Override // com.bianfeng.ymnsdk.actionv2.ActionObserverV2
        public void onActionResult(ActionSupportV2.ResponseResult result) {
            boolean unused = a.f1462a = false;
            if (result.isOk()) {
                a.f();
                YmnDataFunUtils.getInstance().payCallSdk();
                this.f1463a.pay((Map) result.getProcessedResult());
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

    /* JADX INFO: compiled from: PaymentFeatureFactory.java */
    static class b extends ActionObserver {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        final /* synthetic */ IPaymentFeature f1464a;
        final /* synthetic */ RequestRetryUtils b;
        final /* synthetic */ YmnPluginWrapper c;

        b(IPaymentFeature iPaymentFeature, RequestRetryUtils requestRetryUtils, YmnPluginWrapper ymnPluginWrapper) {
            this.f1464a = iPaymentFeature;
            this.b = requestRetryUtils;
            this.c = ymnPluginWrapper;
        }

        @Override // com.bianfeng.ymnsdk.action.ActionObserver
        public void onActionResult(ActionSupport.ResponseResult result) {
            boolean unused = a.f1462a = false;
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
            this.f1464a.pay((Map) result.processedResult);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void f() {
        if (b != null) {
            b.onEndAttachment();
            b = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void e() {
        if (c != null) {
            c.onEndAttachment();
            c = null;
        }
    }
}
