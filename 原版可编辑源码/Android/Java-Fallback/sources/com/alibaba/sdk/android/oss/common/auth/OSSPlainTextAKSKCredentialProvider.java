package com.alibaba.sdk.android.oss.common.auth;

@java.lang.Deprecated
public class OSSPlainTextAKSKCredentialProvider implements com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider {
    private java.lang.String accessKeyId;
    private java.lang.String accessKeySecret;

    public OSSPlainTextAKSKCredentialProvider(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = r1.trim()
            r0.setAccessKeyId(r1)
            java.lang.String r1 = r2.trim()
            r0.setAccessKeySecret(r1)
            return
    }

    public java.lang.String getAccessKeyId() {
            r1 = this;
            java.lang.String r0 = r1.accessKeyId
            return r0
    }

    public java.lang.String getAccessKeySecret() {
            r1 = this;
            java.lang.String r0 = r1.accessKeySecret
            return r0
    }

    @Override
    public com.alibaba.sdk.android.oss.common.auth.OSSFederationToken getFederationToken() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void setAccessKeyId(java.lang.String r1) {
            r0 = this;
            r0.accessKeyId = r1
            return
    }

    public void setAccessKeySecret(java.lang.String r1) {
            r0 = this;
            r0.accessKeySecret = r1
            return
    }
}
