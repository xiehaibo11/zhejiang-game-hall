package com.bianfeng.paylib.ui;

public class WebpaysdkApi {
    private static com.bianfeng.paylib.ui.WebpaysdkApi webpaysdkApi;
    private com.bianfeng.paylib.ui.WebpaysdkCallback callback;

    static {
            com.bianfeng.paylib.ui.WebpaysdkApi r0 = new com.bianfeng.paylib.ui.WebpaysdkApi
            r0.<init>()
            com.bianfeng.paylib.ui.WebpaysdkApi.webpaysdkApi = r0
            return
    }

    private WebpaysdkApi() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.paylib.ui.WebpaysdkApi getInstance() {
            com.bianfeng.paylib.ui.WebpaysdkApi r0 = com.bianfeng.paylib.ui.WebpaysdkApi.webpaysdkApi
            return r0
    }

    public com.bianfeng.paylib.ui.WebpaysdkCallback getCallback() {
            r1 = this;
            com.bianfeng.paylib.ui.WebpaysdkCallback r0 = r1.callback
            return r0
    }

    public void setCallback(com.bianfeng.paylib.ui.WebpaysdkCallback r1) {
            r0 = this;
            r0.callback = r1
            return
    }

    public void startAliWebpay(android.content.Context r1, com.bianfeng.paylib.entity.YmnAliWebpayEntity r2) {
            r0 = this;
            com.bianfeng.paylib.ui.AliWebPayActivty.start(r1, r2)
            return
    }

    public void startAliWebpay(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            com.bianfeng.paylib.ui.AliWebPayActivty.start(r1, r2)
            return
    }

    public void startPayment(android.content.Context r1) {
            r0 = this;
            com.bianfeng.paylib.ui.WebpaysdkPaymentActivity.start(r1)
            return
    }

    public void startPaymentWeb(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            com.bianfeng.paylib.ui.PaymentWebActivity.start(r1, r2)
            return
    }

    public void startWxWebpay(android.content.Context r1, com.bianfeng.paylib.entity.YmnWxWebpayEntity r2) {
            r0 = this;
            com.bianfeng.paylib.ui.WxWebPayActivty.start(r1, r2)
            return
    }

    public void startWxWebpay(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            com.bianfeng.paylib.ui.WxWebPayActivty.start(r1, r2)
            return
    }
}
