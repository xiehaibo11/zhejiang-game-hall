package com.tkay.expressad.atsignalcommon.windvane;

public interface e {
    void loadingResourceStatus(android.webkit.WebView r1, int r2);

    void onPageFinished(android.webkit.WebView r1, java.lang.String r2);

    void onPageStarted(android.webkit.WebView r1, java.lang.String r2, android.graphics.Bitmap r3);

    void onProgressChanged(android.webkit.WebView r1, int r2);

    void onReceivedError(android.webkit.WebView r1, int r2, java.lang.String r3, java.lang.String r4);

    void onReceivedSslError(android.webkit.WebView r1, android.webkit.SslErrorHandler r2, android.net.http.SslError r3);

    void readyState(android.webkit.WebView r1, int r2);

    boolean shouldOverrideUrlLoading(android.webkit.WebView r1, java.lang.String r2);
}
