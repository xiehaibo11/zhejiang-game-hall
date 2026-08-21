package com.tkay.nativead.unitgroup.api;

public abstract class CustomNativeAdapter extends com.tkay.core.api.TYBaseAdAdapter {
    protected int mRequestNum;

    public CustomNativeAdapter() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.mRequestNum = r0
            return
    }

    @Override
    public final boolean isAdReady() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void setRequestNum(int r1) {
            r0 = this;
            if (r1 <= 0) goto L4
            r0.mRequestNum = r1
        L4:
            return
    }
}
