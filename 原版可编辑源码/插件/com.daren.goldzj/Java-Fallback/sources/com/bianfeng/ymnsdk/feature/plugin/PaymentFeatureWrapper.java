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
    YmnCallbackInterceptor c;

    class a implements Runnable {
        final Map a;
        final PaymentFeatureWrapper b;

        a(PaymentFeatureWrapper r1, Map r2) {
            this.b = r1;
            this.a = r2;
        }

        @Override
        public void run() {
            YmnDataFunUtils.getInstance().payInit(this.b.b);
            Logger.i("PaymentFeatureWrapper pay");     // Catch: Exception -> L5
            com.bianfeng.ymnsdk.feature.plugin.a.a(this.a, this.b.b, this.b.a);     // Catch: Exception -> L5
            return;
        L5:
            e = move-exception;
            this.b.b.sendResult(PaymentWrapper.PAYRESULT_FAIL, "解析出错了");
            YmnDataFunUtils.getInstance().payResponseOrder(PaymentWrapper.PAYRESULT_FAIL, "解析出错了" + e.getMessage(), "0");
            e.printStackTrace();
        }
    }

    class b extends YmnCallbackInterceptor {
        b(PaymentFeatureWrapper r1) {
        }

        @Override
        public void onCallBack(int r3, String r4) {
            Logger.i("PaymentFeatureWrapper onCallBack : " + r3);
            YmnDataFunUtils.getInstance().paySdkReturn(r3, r4);
            super.onCallBack(r3, r4);
        }
    }

    class c extends ActionObserverV2 {
        final YmnPluginWrapper a;
        final String b;
        final RequestRetryUtils c;
        final com.bianfeng.ymnsdk.actionv2.c d;

        c(YmnPluginWrapper r1, String r2, RequestRetryUtils r3, com.bianfeng.ymnsdk.actionv2.c r4) {
            this.a = r1;
            this.b = r2;
            this.c = r3;
            this.d = r4;
        }

        @Override
        public void onActionResult(ActionSupportV2.ResponseResult r7) {
            Logger.i("checkOrderFromNew onActionResult");
            if (r7.isOk() == false) goto L12;
            CheckOrderEntity r72 = (CheckOrderEntity) YmnGsonUtil.fromJson(r7.getSrcRes(), CheckOrderEntity.class);     // Catch: YmnsdkException -> L10
            int r0 = r72.getPay_status();     // Catch: YmnsdkException -> L10
            if (r0 != 1) goto L8;
            this.a.sendResult(PaymentWrapper.PAYRESULT_SUCCESS, r0 + "|" + r72.toString());     // Catch: YmnsdkException -> L10
        L15:
            return;
        L8:
            this.a.sendResult(PaymentWrapper.PAYRESULT_FAIL, r0 + "|" + this.b);     // Catch: YmnsdkException -> L10
        L10:
            this.a.sendResult(PaymentWrapper.PAYRESULT_FAIL, "201| 查询数据解析出错");
            return;
        L12:
            if (this.c.retryRequest(this.d) == false) goto L20;
            this.a.sendResult(PaymentWrapper.PAYRESULT_FAIL, "201|" + r7.messageFail());
            return;
        }
    }

    class d extends ActionObserver {
        final f a;
        final YmnPluginWrapper b;
        final RequestRetryUtils c;

        d(f r1, YmnPluginWrapper r2, RequestRetryUtils r3) {
            this.a = r1;
            this.b = r2;
            this.c = r3;
        }

        @Override
        public void onActionResult(ActionSupport.ResponseResult r5) {
            if (r5.isOk() == false) goto L12;
            this.a.onEndAttachment();
            int r0 = r5.data.optInt(NotificationCompat.CATEGORY_STATUS);
            if (2 != r0) goto L7;
        L10:
            this.b.sendResult(PaymentWrapper.PAYRESULT_SUCCESS, r0 + "|" + r5.dataAsString());
            return;
        L7:
            if (3 == r0) goto L10;
            this.b.sendResult(PaymentWrapper.PAYRESULT_FAIL, r0 + "|" + r5.messageFail());
            return;
        L12:
            if (this.c.retryRequest(this.a) == false) goto L17;
            this.b.sendResult(PaymentWrapper.PAYRESULT_NETWORK_ERROR, r5.messageFail());
            return;
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    public PaymentFeatureWrapper(IPaymentFeature r2) {
        this.c = new b(this);
        this.a = r2;
        this.b = (YmnPluginWrapper) r2;
        this.b.addCallbackInterceptor(this.c);
    }

    private static void b(YmnPluginWrapper r3, String r4, int r5) {
        Logger.i("checkOrderFromNew");     // Catch: Exception -> L4
        RequestRetryUtils r52 = RequestRetryUtils.getInstance();     // Catch: Exception -> L4
        com.bianfeng.ymnsdk.actionv2.c r0 = new com.bianfeng.ymnsdk.actionv2.c(r3.getContext());     // Catch: Exception -> L4
        r0.putReqData(r3, new Object[]{r4});     // Catch: Exception -> L4
        r0.addObserver(new c(r3, r4, r52, r0));     // Catch: Exception -> L4
        r0.onStartAttachment();     // Catch: Exception -> L4
        r0.actionStart();     // Catch: Exception -> L4
        return;
    L4:
        e = move-exception;
        r3.sendResult(PaymentWrapper.PAYRESULT_FAIL, "201|" + e.getMessage());
    }

    private static void c(YmnPluginWrapper r4, String r5, int r6) {
        RequestRetryUtils r0 = RequestRetryUtils.getInstance();
        f r1 = new f(r4.getContext());
        r1.putReqData(r4, new Object[]{r5, Integer.valueOf(r6)});
        r1.addObserver(new d(r1, r4, r0));
        r1.onStartAttachment();
        r1.actionStart();
    }

    public YmnPluginWrapper a() {
        return this.b;
    }

    @Override
    public String getOrderId() {
        IPaymentFeature r0 = this.a;
        if (r0 != null) goto L5;
        return null;
    L5:
        return r0.getOrderId();
    }

    @Override
    public void pay(Map<String, String> r3) {
        this.b.tryRunOnUiThreadOrJustRun(new a(this, r3));
    }

    @Override
    public void prePay(LinkedHashMap<String, String> r1) {
    }

    public void a(String r2, int r3) {
        a(this.b, r2, r3);
    }

    public static void a(YmnPluginWrapper r1, String r2, int r3) {
        if (YmnsdkTypeUtils.isNewTrade() == false) goto L5;
        b(r1, r2, r3);
        return;
    L5:
        c(r1, r2, r3);
    }
}
