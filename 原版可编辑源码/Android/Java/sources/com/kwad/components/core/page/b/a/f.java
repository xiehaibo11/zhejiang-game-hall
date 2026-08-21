package com.kwad.components.core.page.b.a;

import android.text.TextUtils;
import android.view.View;
import android.view.ViewGroup;
import com.kwad.components.core.b.a;

public final class f extends com.kwad.components.core.page.b.a.a {
    private boolean Nt;
    private com.kwad.components.core.b.a mTitleBarHelper;

    public interface a {
        void ay(int i);
    }

    private String getTitle() {
        return !TextUtils.isEmpty(this.MW.mPageTitle) ? this.MW.mPageTitle : (this.MW.mAdTemplate.adInfoList == null || this.MW.mAdTemplate.adInfoList.size() <= 0 || this.MW.mAdTemplate.adInfoList.get(0) == null) ? "详情页面" : com.kwad.sdk.core.response.b.a.bO(com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate));
    }

    private boolean oT() {
        return TextUtils.isEmpty(this.MW.mPageTitle);
    }

    private void oU() {
        com.kwad.components.core.b.a aVar = new com.kwad.components.core.b.a(this.MW.gg);
        this.mTitleBarHelper = aVar;
        aVar.a(new com.kwad.components.core.b.b(getTitle()));
        this.mTitleBarHelper.aj(oT());
        this.mTitleBarHelper.a(new a.a() {
            @Override
            public final void t(View view) {
                f.this.w(view);
            }

            @Override
            public final void u(View view) {
                f.this.x(view);
            }
        });
        ViewGroup viewGroupGQ = this.mTitleBarHelper.gQ();
        int i = 0;
        if (!this.MW.mAdTemplate.mIsForceJumpLandingPage && !com.kwad.sdk.core.response.b.b.cO(com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate))) {
            i = 8;
        }
        viewGroupGQ.setVisibility(i);
        this.MW.a(new a() {
            @Override
            public final void ay(int i2) {
                f.this.mTitleBarHelper.gQ().setVisibility(i2 == 1 ? 0 : 8);
            }
        });
    }

    private void w(View view) {
        if (this.MW.mAdWebView == null || !this.MW.mAdWebView.canGoBack()) {
            if (this.MW.MX != null) {
                this.MW.MX.dE();
            }
        } else {
            this.MW.mAdWebView.goBack();
            if (this.Nt) {
                com.kwad.sdk.core.report.a.aB(this.MW.mAdTemplate);
            }
        }
    }

    private void x(View view) {
        if (this.MW.mAdWebView == null || !this.MW.mAdWebView.canGoBack()) {
            if (this.MW.MX != null) {
                this.MW.MX.dF();
            }
        } else {
            this.MW.mAdWebView.goBack();
            if (this.Nt) {
                com.kwad.sdk.core.report.a.aB(this.MW.mAdTemplate);
            }
        }
    }

    @Override
    public final void ah() {
        super.ah();
        this.Nt = TextUtils.equals(this.MW.mPageUrl, com.kwad.sdk.core.response.b.a.aK(com.kwad.sdk.core.response.b.d.cg(this.MW.mAdTemplate)));
        oU();
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }
}
