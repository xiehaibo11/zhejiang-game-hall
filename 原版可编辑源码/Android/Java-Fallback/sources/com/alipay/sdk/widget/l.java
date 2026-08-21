package com.alipay.sdk.widget;

class l extends com.alipay.sdk.widget.j.a {
    final com.alipay.sdk.widget.WebViewWindow a;
    final com.alipay.sdk.widget.j b;

    l(com.alipay.sdk.widget.j r1, com.alipay.sdk.widget.WebViewWindow r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r2 = 0
            r0.<init>(r1, r2)
            return
    }

    @Override
    public void onAnimationEnd(android.view.animation.Animation r2) {
            r1 = this;
            com.alipay.sdk.widget.WebViewWindow r2 = r1.a
            r2.a()
            com.alipay.sdk.widget.j r2 = r1.b
            r0 = 0
            com.alipay.sdk.widget.j.a(r2, r0)
            return
    }
}
