package com.tencent.mm.opensdk.openapi;

public interface IWXAPI {
    void detach();

    int getWXAppSupportAPI();

    boolean handleIntent(android.content.Intent r1, com.tencent.mm.opensdk.openapi.IWXAPIEventHandler r2);

    boolean isWXAppInstalled();

    boolean openWXApp();

    boolean registerApp(java.lang.String r1);

    boolean registerApp(java.lang.String r1, long r2);

    boolean sendReq(com.tencent.mm.opensdk.modelbase.BaseReq r1);

    boolean sendResp(com.tencent.mm.opensdk.modelbase.BaseResp r1);

    void setLogImpl(com.tencent.mm.opensdk.utils.ILog r1);

    void unregisterApp();
}
