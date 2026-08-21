package com.bianfeng.paylib.ui;

import android.content.Context;
import com.bianfeng.paylib.entity.YmnAliWebpayEntity;
import com.bianfeng.paylib.entity.YmnWxWebpayEntity;

public class WebpaysdkApi {
    private static WebpaysdkApi webpaysdkApi = new WebpaysdkApi();
    private WebpaysdkCallback callback;

    private WebpaysdkApi() {
    }

    public static WebpaysdkApi getInstance() {
        return webpaysdkApi;
    }

    public void setCallback(WebpaysdkCallback webpaysdkCallback) {
        this.callback = webpaysdkCallback;
    }

    public WebpaysdkCallback getCallback() {
        return this.callback;
    }

    public void startPayment(Context context) {
        WebpaysdkPaymentActivity.start(context);
    }

    public void startPaymentWeb(Context context, String str) {
        PaymentWebActivity.start(context, str);
    }

    public void startWxWebpay(Context context, String str) {
        WxWebPayActivty.start(context, str);
    }

    public void startWxWebpay(Context context, YmnWxWebpayEntity ymnWxWebpayEntity) {
        WxWebPayActivty.start(context, ymnWxWebpayEntity);
    }

    public void startAliWebpay(Context context, String str) {
        AliWebPayActivty.start(context, str);
    }

    public void startAliWebpay(Context context, YmnAliWebpayEntity ymnAliWebpayEntity) {
        AliWebPayActivty.start(context, ymnAliWebpayEntity);
    }
}
