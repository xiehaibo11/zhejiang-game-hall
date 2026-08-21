package com.tkay.network.gdt;

import android.content.Context;

/* JADX INFO: loaded from: classes3.dex */
public class GDTTYNativeExpressPatchAd extends GDTTYNativeExpressAd {
    @Override // com.tkay.nativead.unitgroup.api.CustomNativeAd, com.tkay.core.api.IATThirdPartyMaterial
    public int getNativeType() {
        return 2;
    }

    protected GDTTYNativeExpressPatchAd(Context context, String str, int i, int i2, int i3, int i4, int i5, String str2) {
        super(context, str, i, i2, i3, i4, i5, str2);
    }
}
