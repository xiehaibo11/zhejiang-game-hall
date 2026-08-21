package com.tkay.banner.unitgroup.api;

import android.view.View;
import com.tkay.core.api.TYBaseAdAdapter;

/* JADX INFO: loaded from: classes3.dex */
public abstract class CustomBannerAdapter extends TYBaseAdAdapter {
    protected CustomBannerEventListener mImpressionEventListener;

    public abstract View getBannerView();

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public boolean isAdReady() {
        return getBannerView() != null;
    }

    public final void setAdEventListener(CustomBannerEventListener customBannerEventListener) {
        this.mImpressionEventListener = customBannerEventListener;
    }

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public final void releaseLoadResource() {
        super.releaseLoadResource();
    }
}
