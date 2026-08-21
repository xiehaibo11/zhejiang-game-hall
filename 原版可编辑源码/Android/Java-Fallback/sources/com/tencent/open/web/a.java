package com.tencent.open.web;

public class a {
    private static void a(android.webkit.WebSettings r3) {
            r0 = 0
            r3.setSavePassword(r0)     // Catch: java.lang.Exception -> L14
            r3.setAllowFileAccess(r0)     // Catch: java.lang.Exception -> L14
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L14
            r2 = 16
            if (r1 < r2) goto L1c
            r3.setAllowFileAccessFromFileURLs(r0)     // Catch: java.lang.Exception -> L14
            r3.setAllowUniversalAccessFromFileURLs(r0)     // Catch: java.lang.Exception -> L14
            goto L1c
        L14:
            r3 = move-exception
            java.lang.String r0 = "WebViewUtils"
            java.lang.String r1 = "Exception"
            com.tencent.open.log.SLog.e(r0, r1, r3)
        L1c:
            return
    }

    public static void a(android.webkit.WebView r0) {
            if (r0 != 0) goto L3
            return
        L3:
            b(r0)
            android.webkit.WebSettings r0 = r0.getSettings()
            if (r0 == 0) goto L12
            a(r0)
            b(r0)
        L12:
            return
    }

    private static void b(android.webkit.WebSettings r1) {
            r0 = 1
            r1.setJavaScriptEnabled(r0)
            return
    }

    private static void b(android.webkit.WebView r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L15
            java.lang.String r0 = "searchBoxJavaBridge_"
            r2.removeJavascriptInterface(r0)
            java.lang.String r0 = "accessibility"
            r2.removeJavascriptInterface(r0)
            java.lang.String r0 = "accessibilityTraversal"
            r2.removeJavascriptInterface(r0)
        L15:
            return
    }
}
