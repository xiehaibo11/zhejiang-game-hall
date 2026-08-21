package com.alipay.sdk.widget;

import android.view.animation.Animation;
import com.alipay.sdk.widget.j;

class m extends j.a {
    final WebViewWindow a;
    final String b;
    final j c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    m(j jVar, WebViewWindow webViewWindow, String str) {
        super(jVar, null);
        this.c = jVar;
        this.a = webViewWindow;
        this.b = str;
    }

    @Override
    public void onAnimationEnd(Animation animation) {
        this.c.removeView(this.a);
        this.c.x.a(this.b);
        this.c.v = false;
    }
}
