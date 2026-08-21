package com.alipay.sdk.app.statistic;

final class b implements java.lang.Runnable {
    final android.content.Context a;
    final java.lang.String b;

    b(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.a = r1
            r0.b = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r4 = this;
            java.lang.String r0 = "alipay_cashier_statistic_record"
            com.alipay.sdk.packet.impl.d r1 = new com.alipay.sdk.packet.impl.d
            r1.<init>()
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L21
            r3 = 0
            java.lang.String r2 = com.alipay.sdk.util.j.b(r2, r0, r3)     // Catch: java.lang.Throwable -> L21
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L21
            if (r3 != 0) goto L21
            android.content.Context r3 = r4.a     // Catch: java.lang.Throwable -> L21
            com.alipay.sdk.packet.b r2 = r1.a(r3, r2)     // Catch: java.lang.Throwable -> L21
            if (r2 == 0) goto L21
            android.content.Context r2 = r4.a     // Catch: java.lang.Throwable -> L21
            com.alipay.sdk.util.j.b(r2, r0)     // Catch: java.lang.Throwable -> L21
        L21:
            java.lang.String r2 = r4.b     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L38
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L38
            if (r2 != 0) goto L38
            android.content.Context r2 = r4.a     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L38
            java.lang.String r3 = r4.b     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L38
            r1.a(r2, r3)     // Catch: java.io.IOException -> L31 java.lang.Throwable -> L38
            goto L38
        L31:
            android.content.Context r1 = r4.a
            java.lang.String r2 = r4.b
            com.alipay.sdk.util.j.a(r1, r0, r2)
        L38:
            return
    }
}
