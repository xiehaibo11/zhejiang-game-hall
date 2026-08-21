package com.bianfeng.paylib.ui;

import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;
import com.bianfeng.baselib.BaseActivity;
import com.bianfeng.utilslib.UtilsSdk;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;

public class WebpaysdkPaymentActivity extends BaseActivity implements View.OnClickListener {
    private TextView alipay_tv;
    private String plugin_id;
    private TextView wxpay_tv;

    public static void start(Context context) {
        Intent intent = new Intent(context, (Class<?>) WebpaysdkPaymentActivity.class);
        intent.addFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
        context.startActivity(intent);
    }

    @Override
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        setContentView(UtilsSdk.getResourceManger().getId(this, "R.layout.activity_webpaysdk_payment"));
        this.alipay_tv = (TextView) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_paytype_alipay_ok"));
        if (UtilsSdk.getAppConfig().isGetIpSuccess()) {
            findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_paytype_wx")).setVisibility(0);
        }
        this.wxpay_tv = (TextView) findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_paytype_wx_ok"));
        findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_btnLeft")).setOnClickListener(this);
        findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_paytype_wx")).setOnClickListener(this);
        findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_paytype_alipay")).setOnClickListener(this);
        findViewById(UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_next_stepbtn")).setOnClickListener(this);
    }

    @Override
    public void onClick(View view) {
        if (view.getId() == UtilsSdk.getResourceManger().getId(this, " R.id.webpaypay_btnLeft")) {
            UtilsSdk.getLogger().e("取消支付");
            WebpaysdkApi.getInstance().getCallback().onCancel();
            finish();
            return;
        }
        if (view.getId() == UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_paytype_wx")) {
            UtilsSdk.getLogger().e("微信支付");
            this.wxpay_tv.setVisibility(0);
            this.alipay_tv.setVisibility(8);
            setPayType(WebpaysdkCallback.WXPAYTYPE);
            return;
        }
        if (view.getId() == UtilsSdk.getResourceManger().getId(this, " R.id.webpaypay_paytype_alipay")) {
            UtilsSdk.getLogger().e("支付宝支付");
            this.alipay_tv.setVisibility(0);
            this.wxpay_tv.setVisibility(8);
            setPayType(WebpaysdkCallback.ALIPAYTYPE);
            return;
        }
        if (view.getId() == UtilsSdk.getResourceManger().getId(this, "R.id.webpaypay_next_stepbtn")) {
            UtilsSdk.getLogger().e("确认支付");
            WebpaysdkApi.getInstance().getCallback().buyNext(getPlugin_id());
            finish();
        }
    }

    private void setPayType(String str) {
        this.plugin_id = str;
    }

    public String getPlugin_id() {
        UtilsSdk.getLogger().i("支付方式：" + this.plugin_id);
        if (WebpaysdkCallback.WXPAYTYPE.equalsIgnoreCase(this.plugin_id)) {
            return UtilsSdk.getAppConfig().getYmnsdkWxPayChannelId();
        }
        if (WebpaysdkCallback.ALIPAYTYPE.equalsIgnoreCase(this.plugin_id)) {
            UtilsSdk.getLogger().i("支付方式：" + UtilsSdk.getAppConfig().getYmnsdkAliPayChannelId());
            return UtilsSdk.getAppConfig().getYmnsdkAliPayChannelId();
        }
        return UtilsSdk.getAppConfig().getYmnsdkWxPayChannelId();
    }

    @Override
    protected void onUserLeaveHint() {
        super.onUserLeaveHint();
        finish();
    }
}
