package com.bianfeng.ymnsdk.wechat;

public class WXPayEntryActivity extends android.app.Activity implements com.tencent.mm.opensdk.openapi.IWXAPIEventHandler {
    private static final java.lang.String TAG = "ymnsdk";
    private com.tencent.mm.opensdk.openapi.IWXAPI api;

    public WXPayEntryActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            java.lang.String r2 = "ymnsdk"
            java.lang.String r0 = "WXPayEntryActivity onCreate"
            android.util.Log.d(r2, r0)
            r2 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r2 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r1, r2)
            r1.api = r2
            android.content.Intent r0 = r1.getIntent()
            r2.handleIntent(r0, r1)
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r2) {
            r1 = this;
            super.onNewIntent(r2)
            r1.setIntent(r2)
            com.tencent.mm.opensdk.openapi.IWXAPI r2 = r1.api
            android.content.Intent r0 = r1.getIntent()
            r2.handleIntent(r0, r1)
            return
    }

    @Override
    public void onReq(com.tencent.mm.opensdk.modelbase.BaseReq r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onReq, req = "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = ""
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ymnsdk"
            android.util.Log.d(r0, r3)
            return
    }

    @Override
    public void onResp(com.tencent.mm.opensdk.modelbase.BaseResp r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onPayFinish, errCode = "
            r0.append(r1)
            int r3 = r3.errCode
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "ymnsdk"
            android.util.Log.d(r0, r3)
            r2.finish()
            return
    }
}
