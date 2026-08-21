package com.mbridge.msdk.widget;

public class MBImageView extends android.widget.ImageView {
    private android.graphics.Bitmap a;
    private java.lang.String b;


    public MBImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.a = r1
            return
    }

    public MBImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.a = r1
            return
    }

    public MBImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.a = r1
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r3) {
            r2 = this;
            android.graphics.Bitmap r0 = r2.a
            if (r0 == 0) goto L2a
            boolean r0 = r0.isRecycled()
            if (r0 == 0) goto L2a
            java.lang.String r3 = "mb-widget-imageview"
            java.lang.String r0 = "onDraw bitmap recycled"
            com.mbridge.msdk.foundation.tools.z.d(r3, r0)
            android.content.Context r3 = r2.getContext()
            if (r3 == 0) goto L2d
            android.content.Context r3 = r2.getContext()
            com.mbridge.msdk.foundation.same.c.b r3 = com.mbridge.msdk.foundation.same.c.b.a(r3)
            java.lang.String r0 = r2.b
            com.mbridge.msdk.widget.MBImageView$1 r1 = new com.mbridge.msdk.widget.MBImageView$1
            r1.<init>(r2)
            r3.a(r0, r1)
            goto L2d
        L2a:
            super.onDraw(r3)
        L2d:
            return
    }

    @Override
    public void setImageBitmap(android.graphics.Bitmap r2) {
            r1 = this;
            r1.a = r2
            if (r2 == 0) goto L19
            boolean r0 = r2.isRecycled()
            if (r0 != 0) goto Lb
            goto L19
        Lb:
            r2 = 0
            r1.a = r2
            super.setImageBitmap(r2)
            java.lang.String r2 = "mb-widget-imageview"
            java.lang.String r0 = "setImageBitmap recycled"
            com.mbridge.msdk.foundation.tools.z.d(r2, r0)
            goto L1c
        L19:
            super.setImageBitmap(r2)
        L1c:
            return
    }

    public void setImageUrl(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
