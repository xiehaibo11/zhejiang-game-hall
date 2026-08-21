package com.alipay.sdk.widget;

import android.view.animation.Animation;
import com.alipay.sdk.widget.j;

class l extends j.a {
    final WebViewWindow a;
    final j b;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    l(j jVar, WebViewWindow webViewWindow) {
        super(jVar, null);
        this.b = jVar;
        this.a = webViewWindow;
    }

    @Override
    public void onAnimationEnd(Animation animation) {
        this.a.a();
        this.b.v = false;
    }
}
