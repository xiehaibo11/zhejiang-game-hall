package com.tkay.network.toutiao;

import android.content.Context;
import android.graphics.Bitmap;
import com.bykv.vk.openvk.TTNtObject;

public class TTTYNativePatchAd extends TTTYNativeAd {
    @Override
    public int getNativeType() {
        return 2;
    }

    public TTTYNativePatchAd(Context context, String str, TTNtObject tTNtObject, boolean z, Bitmap bitmap, int i) {
        super(context, str, tTNtObject, z, bitmap, i);
    }

    @Override
    public void setAdData(boolean z, Bitmap bitmap, int i) {
        super.setAdData(z, bitmap, i);
    }
}
