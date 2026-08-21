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

        a(IPaymentFeature r1, RequestRetryUtils r2, YmnPluginWrapper r3) {
            this.a = r1;
            this.b = r2;
            this.c = r3;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult r5) {
            a.a(false);
            if (r5.isOk() == false) goto L6;
            a.a();
            YmnDataFunUtils.getInstance().payCallSdk();
            this.a.pay((Map) r5.getProcessedResult());
            return;
        L6:
            if (this.b.retryRequest(a.b()) == false) goto L10;
            a.a();
            YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_FAIL, r5.messageFail(), "0");
            this.c.sendResult(PaymentWrapper.PAYRESULT_FAIL, r5.messageFail());
            return;
        }
    }

    class b extends ActionObserver {
        final IPaymentFeature a;
        final RequestRetryUtils b;
        final YmnPluginWrapper c;

        b(IPaymentFeature r1, RequestRetryUtils r2, YmnPluginWrapper r3) {
            this.a = r1;
            this.b = r2;
            this.c = r3;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult r5) {
            a.a(false);
            if (r5.isOk() == false) goto L6;
            Logger.i("PaymentFeatureFactory payAction 成功");
            a.c();
            YmnDataFunUtils.getInstance().payCallSdk();
            this.a.pay((Map) r5.processedResult);
            return;
        L6:
            if (this.b.retryRequest(a.d()) == false) goto L10;
            a.c();
            YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_FAIL, r5.messageFail(), "0");
            this.c.sendResult(PaymentWrapper.PAYRESULT_FAIL, r5.messageFail());
            return;
        }
    }

    static boolean a(boolean r0) {
        a = r0;
        return r0;
    }

    static com.bianfeng.ymnsdk.actionv2.b b() {
        return b;
    }

    static void c() {
        e();
    }

    static e d() {
        return c;
    }

    private static void e() {
        if (c == null) goto L6;
        c.onEndAttachment();
        c = null;
        return;
    }

    private static void f() {
        if (b == null) goto L6;
        b.onEndAttachment();
        b = null;
        return;
    }

    static void a() {
        f();
    }

    public static void a(Map<String, String> r7, YmnPluginWrapper r8, IPaymentFeature r9) {
        if (YmnsdkTypeUtils.getYmnsdkPayNeedLogininfo() == false) goto L9;
        if (r8.getLoginedData() != null) goto L9;
        YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_TOKEN_INVALID, "登录时的数据没有", "0");
        r8.sendResult(PaymentWrapper.PAYRESULT_FAIL, "212");
        return;
    L9:
        if (a == false) goto L11;
        return;
    L11:
        a = true;
        c.a(r7);
        if (YmnsdkTypeUtils.isNewTrade() == false) goto L24;
        Logger.i("PaymentFeatureFactory payAction new");     // Catch: Exception -> L15
        RequestRetryUtils r2 = RequestRetryUtils.getInstance();     // Catch: Exception -> L15
        b = (com.bianfeng.ymnsdk.actionv2.b) d.a(new com.bianfeng.ymnsdk.actionv2.b(r8.getContext()));     // Catch: Exception -> L15
        b.putReqData(r8, new Object[]{r7, r8.getLoginedData()});     // Catch: Exception -> L15
        b.addObserver(new a(r9, r2, r8));     // Catch: Exception -> L15
        b.onStartAttachment();     // Catch: Exception -> L15
        Logger.i("PaymentFeatureFactory pay");     // Catch: Exception -> L15
        b.actionStart();     // Catch: Exception -> L15
        return;
    L15:
        e = move-exception;
        a = false;
        f();
        r8.sendResult(PaymentWrapper.PAYRESULT_FAIL, e.getMessage());
        return;
    L24:
        Logger.i("PaymentFeatureFactory payAction old");     // Catch: Exception -> L19
        RequestRetryUtils r22 = RequestRetryUtils.getInstance();     // Catch: Exception -> L19
        c = (e) d.a(new e(r8.getContext()));     // Catch: Exception -> L19
        c.putReqData(r8, new Object[]{r7, r8.getLoginedData()});     // Catch: Exception -> L19
        c.addObserver(new b(r9, r22, r8));     // Catch: Exception -> L19
        c.onStartAttachment();     // Catch: Exception -> L19
        c.actionStart();     // Catch: Exception -> L19
        return;
    L19:
        e = move-exception;
        a = false;
        e();
        r8.sendResult(PaymentWrapper.PAYRESULT_FAIL, e.getMessage());
    }
}
