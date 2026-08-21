package com.mbridge.msdk.videocommon.view;

public class MyImageView extends com.mbridge.msdk.widget.MBImageView {
    public MyImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MyImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MyImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r2) {
            r1 = this;
            super.onDraw(r2)     // Catch: java.lang.Exception -> L4
            goto Lb
        L4:
            java.lang.String r2 = ""
            java.lang.String r0 = "MyImageView  -> onDraw() Canvas: trying to use a recycled bitmap"
            android.util.Log.e(r2, r0)
        Lb:
            return
    }
}
