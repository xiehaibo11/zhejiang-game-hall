package com.alipay.sdk.widget;

import android.view.animation.Animation;
import com.alipay.sdk.widget.j;

/* JADX INFO: loaded from: classes.dex */
class m extends j.a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ WebViewWindow f1340a;
    final /* synthetic */ String b;
    final /* synthetic */ j c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    m(j jVar, WebViewWindow webViewWindow, String str) {
        super(jVar, null);
        this.c = jVar;
        this.f1340a = webViewWindow;
        this.b = str;
    }

    @Override // com.alipay.sdk.widget.j.a, android.view.animation.Animation.AnimationListener
    public void onAnimationEnd(Animation animation) {
        this.c.removeView(this.f1340a);
        this.c.x.a(this.b);
        this.c.v = false;
    }
}
