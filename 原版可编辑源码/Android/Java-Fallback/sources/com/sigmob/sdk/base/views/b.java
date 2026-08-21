package com.sigmob.sdk.base.views;

public class b extends android.widget.RelativeLayout {
    private static float d = 8.0f;
    private static final float e = 1.0f;
    private final int a;
    private android.widget.ImageView b;
    private android.widget.TextView c;
    private com.czhj.volley.toolbox.ImageLoader.ImageContainer f;


    static {
            return
    }

    public b(android.content.Context r7, int r8) {
            r6 = this;
            r6.<init>(r7)
            r6.a = r8
            android.widget.ImageView r0 = new android.widget.ImageView
            r0.<init>(r7)
            r6.b = r0
            int r1 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r1)
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r7)
            r6.c = r0
            java.lang.String r1 = "#B9B9B9"
            int r1 = android.graphics.Color.parseColor(r1)
            r0.setTextColor(r1)
            android.widget.TextView r0 = r6.c
            r1 = 1
            r2 = 1094713344(0x41400000, float:12.0)
            r0.setTextSize(r1, r2)
            android.content.Context r0 = r6.getContext()
            r2 = 1084227584(0x40a00000, float:5.0)
            int r0 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r2, r0)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r3 = 1098907648(0x41800000, float:16.0)
            int r4 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r7)
            r5 = -2
            r2.<init>(r5, r4)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            int r7 = com.czhj.sdk.common.utils.Dips.dipsToIntPixels(r3, r7)
            r4.<init>(r5, r7)
            android.widget.TextView r7 = r6.c
            r3 = 17
            r7.setGravity(r3)
            android.widget.ImageView r7 = r6.b
            android.widget.ImageView$ScaleType r3 = android.widget.ImageView.ScaleType.FIT_XY
            r7.setScaleType(r3)
            r7 = 9
            r3 = 12
            r5 = 0
            if (r8 != r1) goto L76
            r4.addRule(r7)
            r4.addRule(r3)
            int r7 = r0 * 2
            r4.setMargins(r0, r5, r5, r7)
            r8 = 11
            r2.addRule(r8)
            r2.addRule(r3)
            r2.setMargins(r5, r5, r0, r7)
            goto L96
        L76:
            r2.setMargins(r0, r5, r5, r5)
            r2.addRule(r7)
            r2.addRule(r3)
            r4.setMargins(r5, r5, r5, r5)
            android.widget.ImageView r7 = r6.b
            int r7 = r7.getId()
            r4.addRule(r1, r7)
            r7 = 8
            android.widget.ImageView r8 = r6.b
            int r8 = r8.getId()
            r4.addRule(r7, r8)
        L96:
            android.widget.ImageView r7 = r6.b
            int r8 = android.graphics.Color.alpha(r5)
            r7.setBackgroundColor(r8)
            android.widget.ImageView r7 = r6.b
            r6.addView(r7, r2)
            android.widget.TextView r7 = r6.c
            r6.addView(r7, r4)
            return
    }

    static int a(com.sigmob.sdk.base.views.b r0) {
            int r0 = r0.a
            return r0
    }

    static android.widget.ImageView b(com.sigmob.sdk.base.views.b r0) {
            android.widget.ImageView r0 = r0.b
            return r0
    }

    public void a(android.graphics.Bitmap r2) {
            r1 = this;
            if (r2 == 0) goto L7
            android.widget.ImageView r0 = r1.b
            r0.setImageBitmap(r2)
        L7:
            return
    }

    public void a(java.lang.String r3) {
            r2 = this;
            com.czhj.volley.toolbox.ImageLoader r0 = com.czhj.sdk.common.network.Networking.getImageLoader()
            if (r0 == 0) goto L11
            com.sigmob.sdk.base.views.b$1 r1 = new com.sigmob.sdk.base.views.b$1
            r1.<init>(r2)
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r3 = r0.get(r3, r1)
            r2.f = r3
        L11:
            return
    }

    public void b(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.c     // Catch: java.lang.Throwable -> L6
            r0.setText(r2)     // Catch: java.lang.Throwable -> L6
            goto Lc
        L6:
            r2 = move-exception
            java.lang.String r0 = "showAdText error"
            com.czhj.sdk.logger.SigmobLog.e(r0, r2)
        Lc:
            return
    }

    @Override
    public void setOnClickListener(android.view.View.OnClickListener r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.b
            if (r0 == 0) goto L7
            r0.setOnClickListener(r2)
        L7:
            return
    }
}
