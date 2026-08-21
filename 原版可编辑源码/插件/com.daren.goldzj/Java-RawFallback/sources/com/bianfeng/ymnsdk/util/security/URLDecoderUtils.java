package com.bianfeng.ymnsdk.util.security;

public class URLDecoderUtils {
    private java.lang.String TAG;

    public URLDecoderUtils() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.bianfeng.ymnsdk.util.security.URLDecoderUtils> r0 = com.bianfeng.ymnsdk.util.security.URLDecoderUtils.class
            java.lang.String r0 = r0.getSimpleName()
            r1.TAG = r0
            return
    }

    public java.lang.String decode(java.lang.String r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r2 = this;
            java.lang.String r0 = "%(?![0-9a-fA-F]{2})"
            java.lang.String r1 = "%25"
            java.lang.String r3 = r3.replaceAll(r0, r1)
            java.lang.String r0 = "UTF-8"
            java.lang.String r3 = java.net.URLDecoder.decode(r3, r0)     // Catch: java.io.UnsupportedEncodingException -> Lf
            return r3
        Lf:
            r3 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }

    public java.lang.String encode(java.lang.String r3) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r2 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r3 = java.net.URLEncoder.encode(r3, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r3
        L7:
            r3 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r0 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            java.lang.String r1 = r2.TAG
            r0.<init>(r1, r3)
            throw r0
    }
}
