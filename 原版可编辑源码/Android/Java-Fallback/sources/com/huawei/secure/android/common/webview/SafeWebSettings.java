package com.huawei.secure.android.common.webview;

public class SafeWebSettings {
    public SafeWebSettings() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void disableContentAccess(android.webkit.WebSettings r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto La
            r0 = 0
            r2.setAllowContentAccess(r0)
        La:
            return
    }

    public static void disableFileCrossAccess(android.webkit.WebSettings r3) {
            r0 = 0
            r3.setAllowFileAccess(r0)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 < r2) goto L10
            r3.setAllowFileAccessFromFileURLs(r0)
            r3.setAllowUniversalAccessFromFileURLs(r0)
        L10:
            return
    }

    public static void disableGeolocation(android.webkit.WebSettings r1) {
            r0 = 0
            r1.setGeolocationEnabled(r0)
            return
    }

    public static void disableMixedContentMode(android.webkit.WebSettings r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto La
            r0 = 1
            r2.setMixedContentMode(r0)
        La:
            return
    }

    public static void disablePasswordStorage(android.webkit.WebSettings r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 > r1) goto La
            r0 = 0
            r2.setSavePassword(r0)
        La:
            return
    }

    public static void initWebviewAndSettings(android.webkit.WebView r1) {
            android.webkit.WebSettings r0 = r1.getSettings()
            disableFileCrossAccess(r0)
            removeUnSafeJavascriptImpl(r1)
            disablePasswordStorage(r0)
            disableGeolocation(r0)
            disableMixedContentMode(r0)
            disableContentAccess(r0)
            return
    }

    public static void removeUnSafeJavascriptImpl(android.webkit.WebView r2) {
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
