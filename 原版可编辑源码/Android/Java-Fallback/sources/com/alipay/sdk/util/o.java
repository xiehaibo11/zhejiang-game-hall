package com.alipay.sdk.util;

final class o implements android.webkit.DownloadListener {
    final android.content.Context a;

    o(android.content.Context r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onDownloadStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5) {
            r0 = this;
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L15
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Throwable -> L15
            java.lang.String r3 = "android.intent.action.VIEW"
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> L15
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r1)     // Catch: java.lang.Throwable -> L15
            android.content.Context r1 = r0.a     // Catch: java.lang.Throwable -> L15
            r1.startActivity(r2)     // Catch: java.lang.Throwable -> L15
        L15:
            return
    }
}
