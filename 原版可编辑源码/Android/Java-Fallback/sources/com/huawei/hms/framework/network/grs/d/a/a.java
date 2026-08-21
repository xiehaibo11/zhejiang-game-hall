package com.huawei.hms.framework.network.grs.d.a;

public class a {
    public static javax.net.ssl.HttpsURLConnection a(java.lang.String r3, android.content.Context r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.net.URL r0 = new java.net.URL
            r0.<init>(r3)
            java.net.URLConnection r3 = r0.openConnection()
            boolean r0 = r3 instanceof javax.net.ssl.HttpsURLConnection
            java.lang.String r2 = "URLConnectionHelper"
            if (r0 == 0) goto L55
            javax.net.ssl.HttpsURLConnection r3 = (javax.net.ssl.HttpsURLConnection) r3
            javax.net.ssl.SSLSocketFactory r0 = com.huawei.hms.framework.network.grs.d.b.a.a(r4)     // Catch: java.lang.IllegalArgumentException -> L28
            r3.setSSLSocketFactory(r0)     // Catch: java.lang.IllegalArgumentException -> L28
            javax.net.ssl.HostnameVerifier r0 = com.huawei.hms.framework.network.grs.d.b.a.a()     // Catch: java.lang.IllegalArgumentException -> L28
            r3.setHostnameVerifier(r0)     // Catch: java.lang.IllegalArgumentException -> L28
            goto L2d
        L28:
            java.lang.String r0 = "init https ssl socket failed."
            com.huawei.hms.framework.common.Logger.w(r2, r0)
        L2d:
            r0 = 10000(0x2710, float:1.4013E-41)
            r3.setConnectTimeout(r0)
            r3.setReadTimeout(r0)
            java.lang.String r0 = "NetworkKit-grs"
            java.lang.String r4 = com.huawei.hms.framework.network.grs.d.a.b(r4, r0, r5)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "request to grs server with a User-Agent header is:"
            r5.append(r0)
            r5.append(r4)
            java.lang.String r5 = r5.toString()
            com.huawei.hms.framework.common.Logger.d(r2, r5)
            java.lang.String r5 = "User-Agent"
            r3.setRequestProperty(r5, r4)
            return r3
        L55:
            java.lang.String r3 = "urlConnection is not an instance of HttpsURLConnection"
            com.huawei.hms.framework.common.Logger.w(r2, r3)
            return r1
    }
}
