package com.kwad.sdk.utils;

public final class bp {


    private static void a(android.webkit.WebView r1, java.lang.String r2, android.webkit.ValueCallback<java.lang.String> r3) {
            int r3 = android.os.Build.VERSION.SDK_INT
            r0 = 19
            if (r3 < r0) goto L10
            com.kwad.sdk.utils.bp$1 r3 = new com.kwad.sdk.utils.bp$1
            r0 = 0
            r3.<init>(r1, r2, r0)
            runOnUiThread(r3)
            return
        L10:
            r1.loadUrl(r2)
            return
    }

    public static void a(android.webkit.WebView r2, java.lang.String r3, java.lang.String r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "javascript:"
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = "("
            r0.append(r3)
            java.lang.String r3 = org.json.JSONObject.quote(r4)
            r0.append(r3)
            java.lang.String r3 = ")"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4 = 0
            a(r2, r3, r4)
            return
    }

    private static void runOnUiThread(java.lang.Runnable r2) {
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Le
            r2.run()
            return
        Le:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r0.post(r2)
            return
    }
}
