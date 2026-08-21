package com.tkay.nativead.unitgroup.api;

import com.tkay.core.api.TYBaseAdAdapter;

/* JADX INFO: loaded from: classes3.dex */
public abstract class CustomNativeAdapter extends TYBaseAdAdapter {
    protected int mRequestNum = 1;

    @Override // com.tkay.core.api.TYBaseAdAdapter
    public final boolean isAdReady() {
        return false;
    }

    public void setRequestNum(int i) {
        if (i > 0) {
            this.mRequestNum = i;
        }
    }
}
