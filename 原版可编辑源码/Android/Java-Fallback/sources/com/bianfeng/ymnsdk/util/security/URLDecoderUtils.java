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

    public java.lang.String decode(java.lang.String r4) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r3 = this;
            java.lang.String r0 = "%(?![0-9a-fA-F]{2})"
            java.lang.String r1 = "%25"
            java.lang.String r4 = r4.replaceAll(r0, r1)
            java.lang.String r0 = "UTF-8"
            java.lang.String r0 = java.net.URLDecoder.decode(r4, r0)     // Catch: java.io.UnsupportedEncodingException -> Lf
            return r0
        Lf:
            r0 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r1 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }

    public java.lang.String encode(java.lang.String r4) throws com.bianfeng.ymnsdk.util.exception.YmnsdkException {
            r3 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r0 = java.net.URLEncoder.encode(r4, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r0
        L7:
            r0 = move-exception
            com.bianfeng.ymnsdk.util.exception.YmnsdkException r1 = new com.bianfeng.ymnsdk.util.exception.YmnsdkException
            java.lang.String r2 = r3.TAG
            r1.<init>(r2, r0)
            throw r1
    }
}
