package com.qq.e.ads.nativ;

public final class MediaView extends android.widget.FrameLayout {
    public MediaView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MediaView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MediaView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r2 = this;
            java.lang.String r0 = "onAttachedToWindow"
            com.qq.e.comm.util.GDTLogger.d(r0)
            super.onAttachedToWindow()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L19
            boolean r0 = r2.isHardwareAccelerated()
            if (r0 != 0) goto L19
            java.lang.String r0 = "硬件加速未开启"
            com.qq.e.comm.util.GDTLogger.w(r0)
        L19:
            return
    }
}
