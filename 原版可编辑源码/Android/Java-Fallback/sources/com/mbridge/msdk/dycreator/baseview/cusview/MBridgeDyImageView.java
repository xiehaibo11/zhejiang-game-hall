package com.mbridge.msdk.dycreator.baseview.cusview;

public class MBridgeDyImageView extends android.widget.ImageView {
    public MBridgeDyImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeDyImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MBridgeDyImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r2) {
            r1 = this;
            super.onDraw(r2)     // Catch: java.lang.Throwable -> L4
            goto Le
        L4:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "MBridgeDyImageView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        Le:
            return
    }
}
