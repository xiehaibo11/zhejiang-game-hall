package com.tkay.banner.unitgroup.api;

public abstract class CustomBannerAdapter extends com.tkay.core.api.TYBaseAdAdapter {
    protected com.tkay.banner.unitgroup.api.CustomBannerEventListener mImpressionEventListener;

    public CustomBannerAdapter() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract android.view.View getBannerView();

    @Override
    public boolean isAdReady() {
            r1 = this;
            android.view.View r0 = r1.getBannerView()
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    @Override
    public final void releaseLoadResource() {
            r0 = this;
            super.releaseLoadResource()
            return
    }

    public final void setAdEventListener(com.tkay.banner.unitgroup.api.CustomBannerEventListener r1) {
            r0 = this;
            r0.mImpressionEventListener = r1
            return
    }
}
