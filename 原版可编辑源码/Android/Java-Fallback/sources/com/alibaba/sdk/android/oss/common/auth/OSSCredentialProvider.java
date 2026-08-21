package com.alibaba.sdk.android.oss.common.auth;

public interface OSSCredentialProvider {
    com.alibaba.sdk.android.oss.common.auth.OSSFederationToken getFederationToken() throws com.alibaba.sdk.android.oss.ClientException;
}
