package com.sigmob.sdk.base.views;

public class x extends android.widget.RelativeLayout {
    private android.widget.ImageView a;
    private int b;


    public x(android.content.Context r3, int r4) {
            r2 = this;
            r2.<init>(r3)
            r4 = 1106247680(0x41f00000, float:30.0)
            int r3 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r4, r3)
            r2.b = r3
            int r3 = r3 / 2
            r2.a(r3)
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams
            int r4 = r2.b
            r3.<init>(r4, r4)
            int r4 = r2.b
            int r4 = r4 / 2
            java.lang.String r0 = "#ffffff"
            int r0 = android.graphics.Color.parseColor(r0)
            android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
            r1.<init>()
            r1.setColor(r0)
            float r4 = (float) r4
            r1.setCornerRadius(r4)
            r4 = 102(0x66, float:1.43E-43)
            r1.setAlpha(r4)
            r2.setBackground(r1)
            r2.setLayoutParams(r3)
            return
    }

    static android.widget.ImageView a(com.sigmob.sdk.base.views.x r0) {
            android.widget.ImageView r0 = r0.a
            return r0
    }

    private void a(int r3) {
            r2 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            r2.a = r0
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r3, r3)
            r3 = 13
            r0.addRule(r3)
            android.widget.ImageView r3 = r2.a
            com.sigmob.sdk.base.views.o r1 = com.sigmob.sdk.base.views.o.e
            android.graphics.Bitmap r1 = r1.a()
            r3.setImageBitmap(r1)
            android.widget.ImageView r3 = r2.a
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.CENTER_CROP
            r3.setScaleType(r1)
            android.widget.ImageView r3 = r2.a
            r1 = 204(0xcc, float:2.86E-43)
            r3.setImageAlpha(r1)
            android.widget.ImageView r3 = r2.a
            r2.addView(r3, r0)
            return
    }

    private void b(java.lang.String r3) {
            r2 = this;
            com.czhj.volley.toolbox.ImageLoader r0 = com.czhj.sdk.common.network.Networking.getImageLoader()
            if (r0 == 0) goto Le
            com.sigmob.sdk.base.views.x$1 r1 = new com.sigmob.sdk.base.views.x$1
            r1.<init>(r2, r3)
            r0.get(r3, r1)
        Le:
            return
    }

    public void a(android.graphics.Bitmap r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.a
            r0.setImageBitmap(r2)
            return
    }

    public void a(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            if (r2 == 0) goto Le
            int r2 = r2.getEndcardCloseImage()
            r0 = 1
            if (r2 != r0) goto Le
            android.widget.ImageView r2 = r1.a
            com.sigmob.sdk.base.views.o r0 = com.sigmob.sdk.base.views.o.e
            goto L2f
        Le:
            android.graphics.drawable.GradientDrawable r2 = new android.graphics.drawable.GradientDrawable
            r2.<init>()
            r0 = 0
            r2.setColor(r0)
            r1.setBackground(r2)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            int r0 = r1.b
            r2.<init>(r0, r0)
            r0 = 13
            r2.addRule(r0)
            android.widget.ImageView r0 = r1.a
            r0.setLayoutParams(r2)
            android.widget.ImageView r2 = r1.a
            com.sigmob.sdk.base.views.o r0 = com.sigmob.sdk.base.views.o.d
        L2f:
            android.graphics.Bitmap r0 = r0.a()
            r2.setImageBitmap(r0)
            return
    }

    public void a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r3.toLowerCase()
            java.lang.String r1 = "http://"
            boolean r1 = r0.startsWith(r1)
            if (r1 != 0) goto L35
            java.lang.String r1 = "https://"
            boolean r1 = r0.startsWith(r1)
            if (r1 == 0) goto L15
            goto L35
        L15:
            java.lang.String r1 = "file://"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L38
            android.widget.ImageView r0 = r2.a     // Catch: java.lang.Throwable -> L2c
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2c
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L2c
            android.net.Uri r3 = android.net.Uri.fromFile(r1)     // Catch: java.lang.Throwable -> L2c
            r0.setImageURI(r3)     // Catch: java.lang.Throwable -> L2c
            goto L38
        L2c:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r3)
            goto L38
        L35:
            r2.b(r3)
        L38:
            return
    }
}
