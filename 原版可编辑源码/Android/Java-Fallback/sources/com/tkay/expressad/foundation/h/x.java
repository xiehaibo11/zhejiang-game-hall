package com.tkay.expressad.foundation.h;

public final class x {
    public x() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L16
            if (r0 != 0) goto L15
            boolean r0 = android.webkit.URLUtil.isValidUrl(r1)     // Catch: java.lang.Exception -> L16
            if (r0 == 0) goto L15
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L16
            r0.<init>(r1)     // Catch: java.lang.Exception -> L16
            java.lang.String r1 = r0.getPath()     // Catch: java.lang.Exception -> L16
        L15:
            return r1
        L16:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String a(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L15
            if (r0 != 0) goto L14
            boolean r0 = android.webkit.URLUtil.isValidUrl(r1)     // Catch: java.lang.Exception -> L15
            if (r0 == 0) goto L14
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = r1.getQueryParameter(r2)     // Catch: java.lang.Exception -> L15
        L14:
            return r1
        L15:
            r1 = move-exception
            r1.printStackTrace()
            java.lang.String r1 = ""
            return r1
    }

    public static int b(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L19
            if (r0 != 0) goto L1d
            boolean r0 = android.webkit.URLUtil.isValidUrl(r1)     // Catch: java.lang.Exception -> L19
            if (r0 == 0) goto L1d
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Exception -> L19
            java.util.Set r1 = r1.getQueryParameterNames()     // Catch: java.lang.Exception -> L19
            int r1 = r1.size()     // Catch: java.lang.Exception -> L19
            return r1
        L19:
            r1 = move-exception
            r1.printStackTrace()
        L1d:
            r1 = 0
            return r1
    }

    public static java.lang.String c(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L43
            if (r0 != 0) goto L43
            java.lang.String r0 = "n_logo=0"
            boolean r0 = r2.contains(r0)     // Catch: java.lang.Exception -> L43
            if (r0 == 0) goto Lf
            return r2
        Lf:
            android.net.Uri r0 = android.net.Uri.parse(r2)     // Catch: java.lang.Exception -> L43
            java.util.Set r0 = r0.getQueryParameterNames()     // Catch: java.lang.Exception -> L43
            if (r0 == 0) goto L32
            int r0 = r0.size()     // Catch: java.lang.Exception -> L43
            if (r0 != 0) goto L20
            goto L32
        L20:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r0.<init>()     // Catch: java.lang.Exception -> L43
            r0.append(r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "&n_logo=0"
            r0.append(r1)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L43
            return r2
        L32:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L43
            r0.<init>()     // Catch: java.lang.Exception -> L43
            r0.append(r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r1 = "?n_logo=0"
            r0.append(r1)     // Catch: java.lang.Exception -> L43
            java.lang.String r2 = r0.toString()     // Catch: java.lang.Exception -> L43
        L43:
            return r2
    }
}
