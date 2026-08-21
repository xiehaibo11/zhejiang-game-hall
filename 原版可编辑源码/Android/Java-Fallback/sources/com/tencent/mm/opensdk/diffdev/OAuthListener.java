package com.tencent.mm.opensdk.diffdev;

public interface OAuthListener {
    void onAuthFinish(com.tencent.mm.opensdk.diffdev.OAuthErrCode r1, java.lang.String r2);

    void onAuthGotQrcode(java.lang.String r1, byte[] r2);

    void onQrcodeScanned();
}
