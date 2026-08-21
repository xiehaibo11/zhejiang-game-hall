package com.alipay.sdk.widget;

import com.alipay.sdk.widget.a.AlertDialogC0031a;
import com.mbridge.msdk.interstitial.view.MBInterstitialActivity;

/* JADX INFO: loaded from: classes.dex */
class b implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ a f1332a;

    b(a aVar) {
        this.f1332a = aVar;
    }

    @Override // java.lang.Runnable
    public void run() {
        if (this.f1332a.e == null) {
            a aVar = this.f1332a;
            aVar.e = aVar.new AlertDialogC0031a(aVar.f);
            this.f1332a.e.setCancelable(this.f1332a.k);
        }
        try {
            if (this.f1332a.e.isShowing()) {
                return;
            }
            this.f1332a.e.show();
            this.f1332a.l.sendEmptyMessageDelayed(1, MBInterstitialActivity.WEB_LOAD_TIME);
        } catch (Exception e) {
            com.alipay.sdk.util.c.a(e);
        }
    }
}
