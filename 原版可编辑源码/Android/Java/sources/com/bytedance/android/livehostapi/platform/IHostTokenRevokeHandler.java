package com.bytedance.android.livehostapi.platform;

public interface IHostTokenRevokeHandler {
    void revokeToken(TokenInfo tokenInfo);
}
