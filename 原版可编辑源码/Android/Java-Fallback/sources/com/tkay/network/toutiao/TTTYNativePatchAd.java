package com.tkay.network.toutiao;

public class TTTYNativePatchAd extends com.tkay.network.toutiao.TTTYNativeAd {
    public TTTYNativePatchAd(android.content.Context r1, java.lang.String r2, com.bykv.vk.openvk.TTNtObject r3, boolean r4, android.graphics.Bitmap r5, int r6) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    @Override
    public int getNativeType() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    public void setAdData(boolean r1, android.graphics.Bitmap r2, int r3) {
            r0 = this;
            super.setAdData(r1, r2, r3)
            return
    }
}
