package com.alipay.sdk.widget;

import android.view.View;
import com.alipay.sdk.widget.WebViewWindow;

/* JADX INFO: loaded from: classes.dex */
class q implements View.OnClickListener {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ WebViewWindow f1344a;

    q(WebViewWindow webViewWindow) {
        this.f1344a = webViewWindow;
    }

    @Override // android.view.View.OnClickListener
    public void onClick(View view) {
        WebViewWindow.c cVar = this.f1344a.i;
        if (cVar != null) {
            view.setEnabled(false);
            WebViewWindow.f.postDelayed(new r(this, view), 256L);
            if (view != this.f1344a.f1329a) {
                if (view == this.f1344a.c) {
                    cVar.b(this.f1344a);
                    return;
                }
                return;
            }
            cVar.a(this.f1344a);
        }
    }
}
