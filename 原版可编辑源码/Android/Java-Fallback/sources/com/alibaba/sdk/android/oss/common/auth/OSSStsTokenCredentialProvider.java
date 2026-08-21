package com.alibaba.sdk.android.oss.common.auth;

public class OSSStsTokenCredentialProvider implements com.alibaba.sdk.android.oss.common.auth.OSSCredentialProvider {
    private java.lang.String accessKeyId;
    private java.lang.String secretKeyId;
    private java.lang.String securityToken;

    public OSSStsTokenCredentialProvider(com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = r2.getTempAK()
            java.lang.String r0 = r0.trim()
            r1.setAccessKeyId(r0)
            java.lang.String r0 = r2.getTempSK()
            java.lang.String r0 = r0.trim()
            r1.setSecretKeyId(r0)
            java.lang.String r2 = r2.getSecurityToken()
            java.lang.String r2 = r2.trim()
            r1.setSecurityToken(r2)
            return
    }

    public OSSStsTokenCredentialProvider(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = r1.trim()
            r0.setAccessKeyId(r1)
            java.lang.String r1 = r2.trim()
            r0.setSecretKeyId(r1)
            java.lang.String r1 = r3.trim()
            r0.setSecurityToken(r1)
            return
    }

    public java.lang.String getAccessKeyId() {
            r1 = this;
            java.lang.String r0 = r1.accessKeyId
            return r0
    }

    @Override
    public com.alibaba.sdk.android.oss.common.auth.OSSFederationToken getFederationToken() {
            r7 = this;
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r6 = new com.alibaba.sdk.android.oss.common.auth.OSSFederationToken
            java.lang.String r1 = r7.accessKeyId
            java.lang.String r2 = r7.secretKeyId
            java.lang.String r3 = r7.securityToken
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r6
            r0.<init>(r1, r2, r3, r4)
            return r6
    }

    public java.lang.String getSecretKeyId() {
            r1 = this;
            java.lang.String r0 = r1.secretKeyId
            return r0
    }

    public java.lang.String getSecurityToken() {
            r1 = this;
            java.lang.String r0 = r1.securityToken
            return r0
    }

    public void setAccessKeyId(java.lang.String r1) {
            r0 = this;
            r0.accessKeyId = r1
            return
    }

    public void setSecretKeyId(java.lang.String r1) {
            r0 = this;
            r0.secretKeyId = r1
            return
    }

    public void setSecurityToken(java.lang.String r1) {
            r0 = this;
            r0.securityToken = r1
            return
    }
}
