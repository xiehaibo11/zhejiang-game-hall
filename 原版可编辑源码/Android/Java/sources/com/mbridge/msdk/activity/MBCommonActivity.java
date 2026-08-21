package com.mbridge.msdk.activity;

import com.mbridge.msdk.foundation.webview.BrowserView;
import com.mbridge.msdk.foundation.webview.b;

public class MBCommonActivity extends DomainMBCommonActivity {
    private boolean b = false;

    @Override
    public void finish() {
        if (this.browserView != null) {
            this.browserView.setListener(null);
            this.browserView.destroy();
        }
        BrowserView browserViewRemove = b.a.remove(this.a);
        if (browserViewRemove != null) {
            browserViewRemove.setListener(null);
            browserViewRemove.destroy();
        }
        this.b = true;
        super.finish();
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        if (this.b) {
            return;
        }
        if (this.browserView != null) {
            this.browserView.setListener(null);
            this.browserView.destroy();
        }
        BrowserView browserViewRemove = b.a.remove(this.a);
        if (browserViewRemove != null) {
            browserViewRemove.setListener(null);
            browserViewRemove.destroy();
        }
    }
}
