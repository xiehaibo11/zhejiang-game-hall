package com.alipay.sdk.widget;

class m extends com.alipay.sdk.widget.j.a {
    final com.alipay.sdk.widget.WebViewWindow a;
    final java.lang.String b;
    final com.alipay.sdk.widget.j c;

    m(com.alipay.sdk.widget.j r1, com.alipay.sdk.widget.WebViewWindow r2, java.lang.String r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r2 = 0
            r0.<init>(r1, r2)
            return
    }

    @Override
    public void onAnimationEnd(android.view.animation.Animation r2) {
            r1 = this;
            com.alipay.sdk.widget.j r2 = r1.c
            com.alipay.sdk.widget.WebViewWindow r0 = r1.a
            r2.removeView(r0)
            com.alipay.sdk.widget.j r2 = r1.c
            com.alipay.sdk.widget.WebViewWindow r2 = com.alipay.sdk.widget.j.a(r2)
            java.lang.String r0 = r1.b
            r2.a(r0)
            com.alipay.sdk.widget.j r2 = r1.c
            r0 = 0
            com.alipay.sdk.widget.j.a(r2, r0)
            return
    }
}
