package com.alipay.sdk.widget;

import com.alipay.sdk.widget.a.a;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;

class b implements Runnable {
    final a a;

    b(a aVar) {
        this.a = aVar;
    }

    @Override
    public void run() {
        if (this.a.e == null) {
            a aVar = this.a;
            aVar.e = aVar.new a(aVar.f);
            this.a.e.setCancelable(this.a.k);
        }
        try {
            if (this.a.e.isShowing()) {
                return;
            }
            this.a.e.show();
            this.a.l.sendEmptyMessageDelayed(1, MBInterstitialActivity.WEB_LOAD_TIME);
        } catch (Exception e) {
            com.alipay.sdk.util.c.a(e);
        }
    }
}
