package com.alipay.sdk.auth;

class a implements android.webkit.DownloadListener {
    final com.alipay.sdk.auth.AuthActivity a;

    a(com.alipay.sdk.auth.AuthActivity r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onDownloadStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5) {
            r0 = this;
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L10
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L10
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L10
            com.alipay.sdk.auth.AuthActivity r1 = r0.a     // Catch: java.lang.Throwable -> L10
            r1.startActivity(r2)     // Catch: java.lang.Throwable -> L10
        L10:
            return
    }
}
