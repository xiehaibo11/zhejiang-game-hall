package com.alibaba.sdk.android.oss.common.auth;

public abstract class OSSCustomSignerCredentialProvider implements com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider {
    public OSSCustomSignerCredentialProvider() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.alibaba.sdk.android.oss.common.auth.OSSFederationToken getFederationToken() {
            r1 = this;
            r0 = 0
            return r0
    }

    public abstract java.lang.String signContent(java.lang.String r1);
}
