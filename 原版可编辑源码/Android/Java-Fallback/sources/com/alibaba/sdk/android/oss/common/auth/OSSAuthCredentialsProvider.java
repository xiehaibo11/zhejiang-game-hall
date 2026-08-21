package com.alibaba.sdk.android.oss.common.auth;

public class OSSAuthCredentialsProvider extends com.alibaba.sdk.android.oss.common.auth.OSSFederationCredentialProvider {
    private java.lang.String mAuthServerUrl;
    private com.alibaba.sdk.android.oss.common.auth.OSSAuthCredentialsProvider.AuthDecoder mDecoder;

    public interface AuthDecoder {
        java.lang.String decode(java.lang.String r1);
    }

    public OSSAuthCredentialsProvider(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.mAuthServerUrl = r1
            return
    }

    @Override
    public com.alibaba.sdk.android.oss.common.auth.OSSFederationToken getFederationToken() throws com.alibaba.sdk.android.oss.ClientException {
            r5 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L7e
            java.lang.String r1 = r5.mAuthServerUrl     // Catch: java.lang.Exception -> L7e
            r0.<init>(r1)     // Catch: java.lang.Exception -> L7e
            java.net.URLConnection r0 = r0.openConnection()     // Catch: java.lang.Exception -> L7e
            java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0     // Catch: java.lang.Exception -> L7e
            r1 = 10000(0x2710, float:1.4013E-41)
            r0.setConnectTimeout(r1)     // Catch: java.lang.Exception -> L7e
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.Exception -> L7e
            java.lang.String r1 = "utf-8"
            java.lang.String r0 = com.alibaba.sdk.android.oss.common.utils.IOUtils.readStreamAsString(r0, r1)     // Catch: java.lang.Exception -> L7e
            com.alibaba.sdk.android.oss.common.auth.OSSAuthCredentialsProvider$AuthDecoder r1 = r5.mDecoder     // Catch: java.lang.Exception -> L7e
            if (r1 == 0) goto L26
            com.alibaba.sdk.android.oss.common.auth.OSSAuthCredentialsProvider$AuthDecoder r1 = r5.mDecoder     // Catch: java.lang.Exception -> L7e
            java.lang.String r0 = r1.decode(r0)     // Catch: java.lang.Exception -> L7e
        L26:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L7e
            r1.<init>(r0)     // Catch: java.lang.Exception -> L7e
            java.lang.String r0 = "StatusCode"
            int r0 = r1.getInt(r0)     // Catch: java.lang.Exception -> L7e
            r2 = 200(0xc8, float:2.8E-43)
            if (r0 != r2) goto L53
            java.lang.String r0 = "AccessKeyId"
            java.lang.String r0 = r1.getString(r0)     // Catch: java.lang.Exception -> L7e
            java.lang.String r2 = "AccessKeySecret"
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Exception -> L7e
            java.lang.String r3 = "SecurityToken"
            java.lang.String r3 = r1.getString(r3)     // Catch: java.lang.Exception -> L7e
            java.lang.String r4 = "Expiration"
            java.lang.String r1 = r1.getString(r4)     // Catch: java.lang.Exception -> L7e
            com.alibaba.sdk.android.oss.common.auth.OSSFederationToken r4 = new com.alibaba.sdk.android.oss.common.auth.OSSFederationToken     // Catch: java.lang.Exception -> L7e
            r4.<init>(r0, r2, r3, r1)     // Catch: java.lang.Exception -> L7e
            return r4
        L53:
            java.lang.String r0 = "ErrorCode"
            java.lang.String r0 = r1.getString(r0)     // Catch: java.lang.Exception -> L7e
            java.lang.String r2 = "ErrorMessage"
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Exception -> L7e
            com.alibaba.sdk.android.oss.ClientException r2 = new com.alibaba.sdk.android.oss.ClientException     // Catch: java.lang.Exception -> L7e
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7e
            r3.<init>()     // Catch: java.lang.Exception -> L7e
            java.lang.String r4 = "ErrorCode: "
            r3.append(r4)     // Catch: java.lang.Exception -> L7e
            r3.append(r0)     // Catch: java.lang.Exception -> L7e
            java.lang.String r0 = "| ErrorMessage: "
            r3.append(r0)     // Catch: java.lang.Exception -> L7e
            r3.append(r1)     // Catch: java.lang.Exception -> L7e
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L7e
            r2.<init>(r0)     // Catch: java.lang.Exception -> L7e
            throw r2     // Catch: java.lang.Exception -> L7e
        L7e:
            r0 = move-exception
            com.alibaba.sdk.android.oss.ClientException r1 = new com.alibaba.sdk.android.oss.ClientException
            r1.<init>(r0)
            throw r1
    }

    public void setAuthServerUrl(java.lang.String r1) {
            r0 = this;
            r0.mAuthServerUrl = r1
            return
    }

    public void setDecoder(com.alibaba.sdk.android.oss.common.auth.OSSAuthCredentialsProvider.AuthDecoder r1) {
            r0 = this;
            r0.mDecoder = r1
            return
    }
}
