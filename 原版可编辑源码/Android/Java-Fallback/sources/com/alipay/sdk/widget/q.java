package com.alipay.sdk.widget;

class q implements android.view.View.OnClickListener {
    final com.alipay.sdk.widget.WebViewWindow a;

    q(com.alipay.sdk.widget.WebViewWindow r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void onClick(android.view.View r6) {
            r5 = this;
            com.alipay.sdk.widget.WebViewWindow r0 = r5.a
            com.alipay.sdk.widget.WebViewWindow$c r0 = com.alipay.sdk.widget.WebViewWindow.a(r0)
            if (r0 == 0) goto L35
            r1 = 0
            r6.setEnabled(r1)
            android.os.Handler r1 = com.alipay.sdk.widget.WebViewWindow.b()
            com.alipay.sdk.widget.r r2 = new com.alipay.sdk.widget.r
            r2.<init>(r5, r6)
            r3 = 256(0x100, double:1.265E-321)
            r1.postDelayed(r2, r3)
            com.alipay.sdk.widget.WebViewWindow r1 = r5.a
            android.widget.ImageView r1 = com.alipay.sdk.widget.WebViewWindow.b(r1)
            if (r6 != r1) goto L28
            com.alipay.sdk.widget.WebViewWindow r6 = r5.a
            r0.a(r6)
            goto L35
        L28:
            com.alipay.sdk.widget.WebViewWindow r1 = r5.a
            android.widget.ImageView r1 = com.alipay.sdk.widget.WebViewWindow.c(r1)
            if (r6 != r1) goto L35
            com.alipay.sdk.widget.WebViewWindow r6 = r5.a
            r0.b(r6)
        L35:
            return
    }
}
