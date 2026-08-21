package com.bianfeng.ymnsdk.wechat;

import android.app.Activity;
import android.content.Intent;
import android.os.Bundle;
import android.util.Log;
import com.tencent.mm.opensdk.modelbase.BaseReq;
import com.tencent.mm.opensdk.modelbase.BaseResp;
import com.tencent.mm.opensdk.openapi.IWXAPI;
import com.tencent.mm.opensdk.openapi.IWXAPIEventHandler;
import com.tencent.mm.opensdk.openapi.WXAPIFactory;

public class WXPayEntryActivity extends Activity implements IWXAPIEventHandler {
    private static final String TAG = "ymnsdk";
    private IWXAPI api;

    @Override
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        Log.d(TAG, "WXPayEntryActivity onCreate");
        IWXAPI iwxapiCreateWXAPI = WXAPIFactory.createWXAPI(this, null);
        this.api = iwxapiCreateWXAPI;
        iwxapiCreateWXAPI.handleIntent(getIntent(), this);
    }

    @Override
    protected void onNewIntent(Intent intent) {
        super.onNewIntent(intent);
        setIntent(intent);
        this.api.handleIntent(getIntent(), this);
    }

    @Override
    public void onReq(BaseReq baseReq) {
        Log.d(TAG, "onReq, req = " + baseReq + "");
    }

    @Override
    public void onResp(BaseResp baseResp) {
        Log.d(TAG, "onPayFinish, errCode = " + baseResp.errCode);
        finish();
    }
}
