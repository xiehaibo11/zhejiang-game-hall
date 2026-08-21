package com.xm.zjgamecenter.wxapi;

public class WXPayEntryActivity extends android.app.Activity implements com.tencent.mm.opensdk.openapi.IWXAPIEventHandler {
    private static final java.lang.String TAG = "ymnsdk";
    private com.tencent.mm.opensdk.openapi.IWXAPI api;

    public WXPayEntryActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onCreate(android.os.Bundle r3) {
            r2 = this;
            super.onCreate(r3)
            java.lang.String r0 = "WXPayEntryActivity"
            java.lang.String r1 = "WXPayEntryActivity onCreate"
            android.util.Log.d(r0, r1)
            r0 = 0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = com.tencent.mm.opensdk.openapi.WXAPIFactory.createWXAPI(r2, r0)
            r2.api = r0
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = r2.api
            android.content.Intent r1 = r2.getIntent()
            r0.handleIntent(r1, r2)
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r3) {
            r2 = this;
            super.onNewIntent(r3)
            r2.setIntent(r3)
            com.tencent.mm.opensdk.openapi.IWXAPI r0 = r2.api
            android.content.Intent r1 = r2.getIntent()
            r0.handleIntent(r1, r2)
            return
    }

    @Override
    public void onReq(com.tencent.mm.opensdk.modelbase.BaseReq r4) {
            r3 = this;
            java.lang.String r0 = "WXPayEntryActivity"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onReq, req = "
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.StringBuilder r1 = r1.append(r4)
            java.lang.String r2 = ""
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            return
    }

    @Override
    public void onResp(com.tencent.mm.opensdk.modelbase.BaseResp r4) {
            r3 = this;
            java.lang.String r0 = "WXPayEntryActivity"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onPayFinish, errCode = "
            java.lang.StringBuilder r1 = r1.append(r2)
            int r2 = r4.errCode
            java.lang.StringBuilder r1 = r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.d(r0, r1)
            int r0 = r4.errCode
            switch(r0) {
                case -2: goto L32;
                case -1: goto L1f;
                case 0: goto L2a;
                default: goto L1f;
            }
        L1f:
            r0 = 201(0xc9, float:2.82E-43)
            java.lang.String r1 = "支付失败"
            com.bianfeng.ymnsdk.wechat.WechatInterface.sendLoginResult(r0, r1)
        L26:
            r3.finish()
            return
        L2a:
            r0 = 200(0xc8, float:2.8E-43)
            java.lang.String r1 = "支付成功"
            com.bianfeng.ymnsdk.wechat.WechatInterface.sendLoginResult(r0, r1)
            goto L26
        L32:
            r0 = 202(0xca, float:2.83E-43)
            java.lang.String r1 = "取消支付"
            com.bianfeng.ymnsdk.wechat.WechatInterface.sendLoginResult(r0, r1)
            goto L26
    }
}
