package com.huawei.secure.android.common.webview;

public class UriUtil {
    private static final java.lang.String a = "UriUtil";

    public UriUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Lf
            java.lang.String r1 = "UriUtil"
            java.lang.String r0 = "whiteListUrl is null"
            com.huawei.secure.android.common.util.LogsUtil.i(r1, r0)
            r1 = 0
            return r1
        Lf:
            boolean r0 = android.webkit.URLUtil.isNetworkUrl(r1)
            if (r0 != 0) goto L16
            return r1
        L16:
            java.lang.String r1 = getHostByURI(r1)
            return r1
    }

    public static java.lang.String getHostByURI(java.lang.String r4) {
            java.lang.String r0 = ""
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            java.lang.String r2 = "UriUtil"
            if (r1 == 0) goto L10
            java.lang.String r0 = "url is null"
            com.huawei.secure.android.common.util.LogsUtil.i(r2, r0)
            return r4
        L10:
            boolean r1 = android.webkit.URLUtil.isNetworkUrl(r4)     // Catch: java.net.MalformedURLException -> L2e
            if (r1 != 0) goto L1c
            java.lang.String r4 = "url don't starts with http or https"
            com.huawei.secure.android.common.util.LogsUtil.e(r2, r4)     // Catch: java.net.MalformedURLException -> L2e
            return r0
        L1c:
            java.lang.String r1 = "[\\\\#]"
            java.lang.String r3 = "/"
            java.lang.String r4 = r4.replaceAll(r1, r3)     // Catch: java.net.MalformedURLException -> L2e
            java.net.URL r1 = new java.net.URL     // Catch: java.net.MalformedURLException -> L2e
            r1.<init>(r4)     // Catch: java.net.MalformedURLException -> L2e
            java.lang.String r4 = r1.getHost()     // Catch: java.net.MalformedURLException -> L2e
            return r4
        L2e:
            r4 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "getHostByURI error  MalformedURLException : "
            r1.append(r3)
            java.lang.String r4 = r4.getMessage()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            com.huawei.secure.android.common.util.LogsUtil.e(r2, r4)
            return r0
    }

    public static boolean isUrlHostAndPathInWhitelist(java.lang.String r4, java.lang.String[] r5) {
            r0 = 0
            if (r5 == 0) goto L19
            int r1 = r5.length
            if (r1 != 0) goto L7
            goto L19
        L7:
            int r1 = r5.length
            r2 = r0
        L9:
            if (r2 >= r1) goto L18
            r3 = r5[r2]
            boolean r3 = isUrlHostAndPathMatchWhitelist(r4, r3)
            if (r3 == 0) goto L15
            r4 = 1
            return r4
        L15:
            int r2 = r2 + 1
            goto L9
        L18:
            return r0
        L19:
            java.lang.String r4 = "UriUtil"
            java.lang.String r5 = "whitelist is null"
            com.huawei.secure.android.common.util.LogsUtil.e(r4, r5)
            return r0
    }

    public static boolean isUrlHostAndPathMatchWhitelist(java.lang.String r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 != 0) goto L88
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto Lf
            goto L88
        Lf:
            java.lang.String r0 = ".."
            boolean r0 = r4.contains(r0)
            if (r0 != 0) goto L81
            java.lang.String r0 = "@"
            boolean r0 = r4.contains(r0)
            if (r0 == 0) goto L20
            goto L81
        L20:
            boolean r0 = r5.equals(r4)
            r2 = 1
            if (r0 != 0) goto L80
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r3 = "?"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            boolean r0 = r4.startsWith(r0)
            if (r0 != 0) goto L80
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r5)
            java.lang.String r3 = "#"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            boolean r0 = r4.startsWith(r0)
            if (r0 == 0) goto L56
            goto L80
        L56:
            java.lang.String r0 = "/"
            boolean r0 = r5.endsWith(r0)
            if (r0 != 0) goto L5f
            return r1
        L5f:
            android.net.Uri r0 = android.net.Uri.parse(r5)
            java.util.List r0 = r0.getPathSegments()
            android.net.Uri r3 = android.net.Uri.parse(r4)
            java.util.List r3 = r3.getPathSegments()
            int r3 = r3.size()
            int r0 = r0.size()
            int r3 = r3 - r0
            if (r3 == r2) goto L7b
            return r1
        L7b:
            boolean r4 = r4.startsWith(r5)
            return r4
        L80:
            return r2
        L81:
            java.lang.String r4 = "UriUtil"
            java.lang.String r5 = "url contains unsafe char"
            android.util.Log.e(r4, r5)
        L88:
            return r1
    }

    public static boolean isUrlHostInWhitelist(java.lang.String r4, java.lang.String[] r5) {
            r0 = 0
            if (r5 == 0) goto L19
            int r1 = r5.length
            if (r1 != 0) goto L7
            goto L19
        L7:
            int r1 = r5.length
            r2 = r0
        L9:
            if (r2 >= r1) goto L18
            r3 = r5[r2]
            boolean r3 = isUrlHostMatchWhitelist(r4, r3)
            if (r3 == 0) goto L15
            r4 = 1
            return r4
        L15:
            int r2 = r2 + 1
            goto L9
        L18:
            return r0
        L19:
            java.lang.String r4 = "UriUtil"
            java.lang.String r5 = "whitelist is null"
            com.huawei.secure.android.common.util.LogsUtil.e(r4, r5)
            return r0
    }

    public static boolean isUrlHostMatchWhitelist(java.lang.String r3, java.lang.String r4) {
            java.lang.String r3 = getHostByURI(r3)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = "UriUtil"
            r2 = 0
            if (r0 != 0) goto L83
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L14
            goto L83
        L14:
            java.lang.String r4 = a(r4)
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L24
            java.lang.String r3 = "whitelist host is null"
            android.util.Log.e(r1, r3)
            return r2
        L24:
            boolean r0 = r4.equals(r3)
            if (r0 == 0) goto L2c
            r3 = 1
            return r3
        L2c:
            boolean r0 = r3.endsWith(r4)
            if (r0 == 0) goto L82
            int r0 = r3.length()     // Catch: java.lang.Exception -> L4f java.lang.IndexOutOfBoundsException -> L69
            int r4 = r4.length()     // Catch: java.lang.Exception -> L4f java.lang.IndexOutOfBoundsException -> L69
            int r0 = r0 - r4
            java.lang.String r3 = r3.substring(r2, r0)     // Catch: java.lang.Exception -> L4f java.lang.IndexOutOfBoundsException -> L69
            java.lang.String r4 = "."
            boolean r4 = r3.endsWith(r4)     // Catch: java.lang.Exception -> L4f java.lang.IndexOutOfBoundsException -> L69
            if (r4 != 0) goto L48
            return r2
        L48:
            java.lang.String r4 = "^[A-Za-z0-9.-]+$"
            boolean r3 = r3.matches(r4)     // Catch: java.lang.Exception -> L4f java.lang.IndexOutOfBoundsException -> L69
            return r3
        L4f:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Exception : "
            r4.append(r0)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r3)
            return r2
        L69:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "IndexOutOfBoundsException"
            r4.append(r0)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r3)
        L82:
            return r2
        L83:
            java.lang.String r3 = "url or whitelist is null"
            com.huawei.secure.android.common.util.LogsUtil.e(r1, r3)
            return r2
    }

    public static boolean isUrlHostSameWhitelist(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L1a
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L1a
        Ld:
            java.lang.String r1 = getHostByURI(r1)
            java.lang.String r2 = a(r2)
            boolean r1 = android.text.TextUtils.equals(r1, r2)
            return r1
        L1a:
            java.lang.String r1 = "UriUtil"
            java.lang.String r2 = "isUrlHostSameWhitelist: url or host is null"
            android.util.Log.e(r1, r2)
            r1 = 0
            return r1
    }

    public static boolean isUrlHostSameWhitelist(java.lang.String r4, java.lang.String[] r5) {
            r0 = 0
            if (r5 == 0) goto L19
            int r1 = r5.length
            if (r1 != 0) goto L7
            goto L19
        L7:
            int r1 = r5.length
            r2 = r0
        L9:
            if (r2 >= r1) goto L18
            r3 = r5[r2]
            boolean r3 = isUrlHostSameWhitelist(r4, r3)
            if (r3 == 0) goto L15
            r4 = 1
            return r4
        L15:
            int r2 = r2 + 1
            goto L9
        L18:
            return r0
        L19:
            java.lang.String r4 = "UriUtil"
            java.lang.String r5 = "whitelist is null"
            com.huawei.secure.android.common.util.LogsUtil.e(r4, r5)
            return r0
    }
}
