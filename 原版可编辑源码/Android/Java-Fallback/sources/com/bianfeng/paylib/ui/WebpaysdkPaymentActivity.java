package com.bianfeng.paylib.ui;

public class WebpaysdkPaymentActivity extends com.bianfeng.baselib.BaseActivity implements android.view.View.OnClickListener {
    private android.widget.TextView alipay_tv;
    private java.lang.String plugin_id;
    private android.widget.TextView wxpay_tv;

    public WebpaysdkPaymentActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    private void setPayType(java.lang.String r1) {
            r0 = this;
            r0.plugin_id = r1
            return
    }

    public static void start(android.content.Context r2) {
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.bianfeng.paylib.ui.WebpaysdkPaymentActivity> r1 = com.bianfeng.paylib.ui.WebpaysdkPaymentActivity.class
            r0.<init>(r2, r1)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            r2.startActivity(r0)
            return
    }

    public java.lang.String getPlugin_id() {
            r4 = this;
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "支付方式："
            r1.append(r2)
            java.lang.String r3 = r4.plugin_id
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.String r0 = r4.plugin_id
            java.lang.String r1 = "wx"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L2d
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r0 = r0.getYmnsdkWxPayChannelId()
            return r0
        L2d:
            java.lang.String r0 = r4.plugin_id
            java.lang.String r1 = "aliPay"
            boolean r0 = r1.equalsIgnoreCase(r0)
            if (r0 == 0) goto L5e
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            com.bianfeng.utilslib.AppConfigUtils r2 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r2 = r2.getYmnsdkAliPayChannelId()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r0 = r0.getYmnsdkAliPayChannelId()
            return r0
        L5e:
            com.bianfeng.utilslib.AppConfigUtils r0 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r0 = r0.getYmnsdkWxPayChannelId()
            return r0
    }

    @Override
    public void onClick(android.view.View r6) {
            r5 = this;
            int r0 = r6.getId()
            com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r2 = " R.id.webpaypay_btnLeft"
            int r1 = r1.getId(r5, r2)
            if (r0 != r1) goto L29
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r0 = "取消支付"
            r6.e(r0)
            com.bianfeng.paylib.ui.WebpaysdkApi r6 = com.bianfeng.paylib.ui.WebpaysdkApi.getInstance()
            com.bianfeng.paylib.ui.WebpaysdkCallback r6 = r6.getCallback()
            r6.onCancel()
            r5.finish()
            goto La9
        L29:
            int r0 = r6.getId()
            com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r2 = "R.id.webpaypay_paytype_wx"
            int r1 = r1.getId(r5, r2)
            r2 = 8
            r3 = 0
            if (r0 != r1) goto L55
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r0 = "微信支付"
            r6.e(r0)
            android.widget.TextView r6 = r5.wxpay_tv
            r6.setVisibility(r3)
            android.widget.TextView r6 = r5.alipay_tv
            r6.setVisibility(r2)
            java.lang.String r6 = "wx"
            r5.setPayType(r6)
            goto La9
        L55:
            int r0 = r6.getId()
            com.bianfeng.utilslib.ResourceManger r1 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r4 = " R.id.webpaypay_paytype_alipay"
            int r1 = r1.getId(r5, r4)
            if (r0 != r1) goto L7e
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r0 = "支付宝支付"
            r6.e(r0)
            android.widget.TextView r6 = r5.alipay_tv
            r6.setVisibility(r3)
            android.widget.TextView r6 = r5.wxpay_tv
            r6.setVisibility(r2)
            java.lang.String r6 = "aliPay"
            r5.setPayType(r6)
            goto La9
        L7e:
            int r6 = r6.getId()
            com.bianfeng.utilslib.ResourceManger r0 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.webpaypay_next_stepbtn"
            int r0 = r0.getId(r5, r1)
            if (r6 != r0) goto La9
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r0 = "确认支付"
            r6.e(r0)
            com.bianfeng.paylib.ui.WebpaysdkApi r6 = com.bianfeng.paylib.ui.WebpaysdkApi.getInstance()
            com.bianfeng.paylib.ui.WebpaysdkCallback r6 = r6.getCallback()
            java.lang.String r0 = r5.getPlugin_id()
            r6.buyNext(r0)
            r5.finish()
        La9:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.layout.activity_webpaysdk_payment"
            int r3 = r3.getId(r2, r0)
            r2.setContentView(r3)
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.id.webpaypay_paytype_alipay_ok"
            int r3 = r3.getId(r2, r0)
            android.view.View r3 = r2.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r2.alipay_tv = r3
            com.bianfeng.utilslib.AppConfigUtils r3 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            boolean r3 = r3.isGetIpSuccess()
            java.lang.String r0 = "R.id.webpaypay_paytype_wx"
            if (r3 == 0) goto L3e
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            int r3 = r3.getId(r2, r0)
            android.view.View r3 = r2.findViewById(r3)
            r1 = 0
            r3.setVisibility(r1)
        L3e:
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.webpaypay_paytype_wx_ok"
            int r3 = r3.getId(r2, r1)
            android.view.View r3 = r2.findViewById(r3)
            android.widget.TextView r3 = (android.widget.TextView) r3
            r2.wxpay_tv = r3
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r1 = "R.id.webpaypay_btnLeft"
            int r3 = r3.getId(r2, r1)
            android.view.View r3 = r2.findViewById(r3)
            r3.setOnClickListener(r2)
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            int r3 = r3.getId(r2, r0)
            android.view.View r3 = r2.findViewById(r3)
            r3.setOnClickListener(r2)
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.id.webpaypay_paytype_alipay"
            int r3 = r3.getId(r2, r0)
            android.view.View r3 = r2.findViewById(r3)
            r3.setOnClickListener(r2)
            com.bianfeng.utilslib.ResourceManger r3 = com.bianfeng.utilslib.UtilsSdk.getResourceManger()
            java.lang.String r0 = "R.id.webpaypay_next_stepbtn"
            int r3 = r3.getId(r2, r0)
            android.view.View r3 = r2.findViewById(r3)
            r3.setOnClickListener(r2)
            return
    }

    @Override
    protected void onUserLeaveHint() {
            r0 = this;
            super.onUserLeaveHint()
            r0.finish()
            return
    }
}
