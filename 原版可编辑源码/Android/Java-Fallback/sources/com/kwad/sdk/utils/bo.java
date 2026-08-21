package com.kwad.sdk.utils;

public final class bo {
    public static android.webkit.WebSettings a(android.webkit.WebView r2) {
            android.webkit.WebSettings r0 = r2.getSettings()
            r1 = 0
            r0.setAllowFileAccess(r1)
            android.webkit.WebSettings r2 = b(r2)
            return r2
    }

    private static android.webkit.WebSettings b(android.webkit.WebView r6) {
            android.webkit.WebSettings r0 = r6.getSettings()
            r1 = 0
            r0.setAllowContentAccess(r1)
            r2 = 1
            r0.setJavaScriptEnabled(r2)
            r0.setSavePassword(r1)
            r3 = 100
            r0.setTextZoom(r3)
            r0.setAllowFileAccessFromFileURLs(r1)
            r0.setAllowUniversalAccessFromFileURLs(r1)
            int r3 = android.os.Build.VERSION.SDK_INT
            r4 = 21
            if (r3 < r4) goto L23
            r0.setMixedContentMode(r1)
        L23:
            int r3 = android.os.Build.VERSION.SDK_INT
            r5 = 19
            if (r3 >= r5) goto L38
            java.lang.String r3 = "searchBoxJavaBridge_"
            r6.removeJavascriptInterface(r3)
            java.lang.String r3 = "accessibility"
            r6.removeJavascriptInterface(r3)
            java.lang.String r3 = "accessibilityTraversal"
            r6.removeJavascriptInterface(r3)
        L38:
            int r3 = android.os.Build.VERSION.SDK_INT
            if (r3 < r4) goto L43
            android.webkit.CookieManager r3 = android.webkit.CookieManager.getInstance()
            r3.setAcceptThirdPartyCookies(r6, r2)
        L43:
            r6.setSaveEnabled(r1)
            return r0
    }
}
