package com.bianfeng.ymnsdk.utilslib.security;

public class URLDecoderUtils {
    public URLDecoderUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String decode(java.lang.String r2) {
            java.lang.String r0 = "%(?![0-9a-fA-F]{2})"
            java.lang.String r1 = "%25"
            java.lang.String r2 = r2.replaceAll(r0, r1)
            java.lang.String r0 = "UTF-8"
            java.lang.String r0 = java.net.URLDecoder.decode(r2, r0)     // Catch: java.lang.Exception -> Lf
            return r0
        Lf:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String encode(java.lang.String r2) {
            java.lang.String r0 = "UTF-8"
            java.lang.String r0 = java.net.URLEncoder.encode(r2, r0)     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }
}
