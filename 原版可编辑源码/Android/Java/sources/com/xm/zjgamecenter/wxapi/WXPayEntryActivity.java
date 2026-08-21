package com.xm.zjgamecenter.wxapi;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import com.bianfeng.ymnsdk.wechat.WechatInterface;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import com.tencent.mm.opensdk.openapi.IWXAPI;
import com.tencent.mm.opensdk.openapi.IWXAPIEventHandler;
import com.tencent.mm.opensdk.openapi.WXAPIFactory;

public class WXPayEntryActivity extends Activity implements IWXAPIEventHandler {
    private static final String TAG = "ymnsdk";
    private IWXAPI api;

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Log.d("WXPayEntryActivity", "WXPayEntryActivity onCreate");
        this.api = WXAPIFactory.createWXAPI(this, null);
        this.api.handleIntent(getIntent(), this);
    }

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        setIntent(intent);
        this.api.handleIntent(getIntent(), this);
    }

    @Override
    public void onReq(BaseReq req) {
        Log.d("WXPayEntryActivity", "onReq, req = " + req + "");
    }

    @Override
    public void onResp(BaseResp resp) {
        Log.d("WXPayEntryActivity", "onPayFinish, errCode = " + resp.errCode);
        switch (resp.errCode) {
            case -2:
                WechatInterface.sendLoginResult(202, "取消支付");
                break;
            case -1:
            default:
                WechatInterface.sendLoginResult(201, "支付失败");
                break;
            case 0:
                WechatInterface.sendLoginResult(200, "支付成功");
                break;
        }
        finish();
    }
}
