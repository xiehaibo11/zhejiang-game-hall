package com.tkay.nativead.unitgroup.api;

import com.tkay.core.api.TYBaseAdAdapter;

public abstract class CustomNativeAdapter extends TYBaseAdAdapter {
    protected int mRequestNum = 1;

    @Override
    public final boolean isAdReady() {
        return false;
    }

    public void setRequestNum(int i) {
        if (i > 0) {
            this.mRequestNum = i;
        }
    }
}
