package com.tkay.network.gdt;

import android.content.Context;

public class GDTTYNativeExpressPatchAd extends GDTTYNativeExpressAd {
    @Override
    public int getNativeType() {
        return 2;
    }

    protected GDTTYNativeExpressPatchAd(Context context, String str, int i, int i2, int i3, int i4, int i5, String str2) {
        super(context, str, i, i2, i3, i4, i5, str2);
    }
}
