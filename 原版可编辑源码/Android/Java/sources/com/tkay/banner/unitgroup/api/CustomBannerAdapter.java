package com.tkay.banner.unitgroup.api;

import android.view.View;
import com.tkay.core.api.TYBaseAdAdapter;

public abstract class CustomBannerAdapter extends TYBaseAdAdapter {
    protected CustomBannerEventListener mImpressionEventListener;

    public abstract View getBannerView();

    @Override
    public boolean isAdReady() {
        return getBannerView() != null;
    }

    public final void setAdEventListener(CustomBannerEventListener customBannerEventListener) {
        this.mImpressionEventListener = customBannerEventListener;
    }

    @Override
    public final void releaseLoadResource() {
        super.releaseLoadResource();
    }
}
