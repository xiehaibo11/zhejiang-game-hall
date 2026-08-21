package com.mbridge.msdk.activity;

import com.mbridge.msdk.foundation.webview.BrowserView;
import com.mbridge.msdk.foundation.webview.b;

/* JADX INFO: loaded from: classes2.dex */
public class MBCommonActivity extends DomainMBCommonActivity {
    private boolean b = false;

    @Override // android.app.Activity
    public void finish() {
        if (this.browserView != null) {
            this.browserView.setListener(null);
            this.browserView.destroy();
        }
        BrowserView browserViewRemove = b.f3568a.remove(this.f3047a);
        if (browserViewRemove != null) {
            browserViewRemove.setListener(null);
            browserViewRemove.destroy();
        }
        this.b = true;
        super.finish();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        if (this.b) {
            return;
        }
        if (this.browserView != null) {
            this.browserView.setListener(null);
            this.browserView.destroy();
        }
        BrowserView browserViewRemove = b.f3568a.remove(this.f3047a);
        if (browserViewRemove != null) {
            browserViewRemove.setListener(null);
            browserViewRemove.destroy();
        }
    }
}
