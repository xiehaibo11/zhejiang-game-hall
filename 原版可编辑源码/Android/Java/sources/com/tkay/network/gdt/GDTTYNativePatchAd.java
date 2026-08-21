package com.tkay.network.gdt;

import android.content.Context;
import com.qq.e.ads.nativ.NativeUnifiedADData;

public class GDTTYNativePatchAd extends GDTTYNativeAd {
    @Override
    public int getNativeType() {
        return 2;
    }

    protected GDTTYNativePatchAd(Context context, NativeUnifiedADData nativeUnifiedADData, int i, int i2, int i3) {
        super(context, nativeUnifiedADData, i, i2, i3);
    }
}
