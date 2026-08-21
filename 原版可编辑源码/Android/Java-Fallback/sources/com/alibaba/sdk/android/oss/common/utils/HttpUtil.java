package com.alibaba.sdk.android.oss.common.utils;

public class HttpUtil {
    public HttpUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String paramToQueryString(java.util.Map<java.lang.String, java.lang.String> r4, java.lang.String r5) {
            if (r4 == 0) goto L52
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L9
            goto L52
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L17:
            boolean r2 = r4.hasNext()
            if (r2 == 0) goto L4d
            java.lang.Object r2 = r4.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            if (r1 != 0) goto L36
            java.lang.String r1 = "&"
            r0.append(r1)
        L36:
            java.lang.String r1 = urlEncode(r3, r5)
            r0.append(r1)
            if (r2 == 0) goto L4b
            java.lang.String r1 = "="
            r0.append(r1)
            java.lang.String r1 = urlEncode(r2, r5)
            r0.append(r1)
        L4b:
            r1 = 0
            goto L17
        L4d:
            java.lang.String r4 = r0.toString()
            return r4
        L52:
            r4 = 0
            return r4
    }

    public static java.lang.String urlEncode(java.lang.String r1, java.lang.String r2) {
            if (r1 != 0) goto L5
            java.lang.String r1 = ""
            return r1
        L5:
            java.lang.String r1 = java.net.URLEncoder.encode(r1, r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "+"
            java.lang.String r0 = "%20"
            java.lang.String r1 = r1.replace(r2, r0)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "*"
            java.lang.String r0 = "%2A"
            java.lang.String r1 = r1.replace(r2, r0)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "%7E"
            java.lang.String r0 = "~"
            java.lang.String r1 = r1.replace(r2, r0)     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = "%2F"
            java.lang.String r0 = "/"
            java.lang.String r1 = r1.replace(r2, r0)     // Catch: java.lang.Exception -> L2a
            return r1
        L2a:
            r1 = move-exception
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "failed to encode url!"
            r2.<init>(r0, r1)
            throw r2
    }
}
