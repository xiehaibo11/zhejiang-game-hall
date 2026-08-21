package com.tencent.mm.opensdk.openapi;

public interface IWXAPIEventHandler {
    void onReq(com.tencent.mm.opensdk.modelbase.BaseReq r1);

    void onResp(com.tencent.mm.opensdk.modelbase.BaseResp r1);
}
