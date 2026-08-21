package com.kwad.sdk.widget;

public class KSRatingBar extends android.widget.LinearLayout {
    private boolean aLT;
    private boolean aLU;
    private int aLV;
    private int aLW;
    private com.kwad.sdk.widget.KSRatingBar.a aLX;
    private float aLY;
    private float aLZ;
    private float aMa;
    private android.graphics.drawable.Drawable aMb;
    private android.graphics.drawable.Drawable aMc;
    private android.graphics.drawable.Drawable aMd;
    private boolean aMe;
    private int y;


    public interface a {
    }

    public KSRatingBar(android.content.Context r5, android.util.AttributeSet r6) {
            r4 = this;
            r4.<init>(r5, r6)
            r0 = 1
            r4.y = r0
            r1 = 0
            r4.aMe = r1
            r4.setOrientation(r1)
            android.content.res.Resources r2 = r4.getResources()
            int r3 = com.kwad.sdk.R.drawable.ksad_reward_apk_stars_divider
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r3)
            r4.setDividerDrawable(r2)
            r2 = 2
            r4.setShowDividers(r2)
            int[] r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar
            android.content.res.TypedArray r6 = r5.obtainStyledAttributes(r6, r2)
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_starHalf
            android.graphics.drawable.Drawable r2 = r6.getDrawable(r2)
            r4.aMd = r2
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_starEmpty
            android.graphics.drawable.Drawable r2 = r6.getDrawable(r2)
            r4.aMb = r2
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_starFill
            android.graphics.drawable.Drawable r2 = r6.getDrawable(r2)
            r4.aMc = r2
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_starImageWidth
            r3 = 1114636288(0x42700000, float:60.0)
            float r2 = r6.getDimension(r2, r3)
            r4.aLY = r2
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_starImageHeight
            r3 = 1123024896(0x42f00000, float:120.0)
            float r2 = r6.getDimension(r2, r3)
            r4.aLZ = r2
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_starImagePadding
            r3 = 1097859072(0x41700000, float:15.0)
            float r2 = r6.getDimension(r2, r3)
            r4.aMa = r2
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_totalStarCount
            r3 = 5
            int r2 = r6.getInteger(r2, r3)
            r4.aLV = r2
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_starCount
            int r2 = r6.getInteger(r2, r3)
            r4.aLW = r2
            int r2 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_clickable
            boolean r0 = r6.getBoolean(r2, r0)
            r4.aLT = r0
            int r0 = com.kwad.sdk.R.styleable.ksad_KSRatingBar_ksad_halfstart
            boolean r6 = r6.getBoolean(r0, r1)
            r4.aLU = r6
        L7a:
            int r6 = r4.aLV
            if (r1 >= r6) goto L92
            boolean r6 = r4.aMe
            android.widget.ImageView r6 = r4.w(r5, r6)
            com.kwad.sdk.widget.KSRatingBar$1 r0 = new com.kwad.sdk.widget.KSRatingBar$1
            r0.<init>(r4)
            r6.setOnClickListener(r0)
            r4.addView(r6)
            int r1 = r1 + 1
            goto L7a
        L92:
            int r5 = r4.aLW
            float r5 = (float) r5
            r4.setStar(r5)
            return
    }

    static boolean a(com.kwad.sdk.widget.KSRatingBar r0) {
            boolean r0 = r0.aLT
            return r0
    }

    static boolean b(com.kwad.sdk.widget.KSRatingBar r0) {
            boolean r0 = r0.aLU
            return r0
    }

    static int c(com.kwad.sdk.widget.KSRatingBar r0) {
            int r0 = r0.y
            return r0
    }

    static com.kwad.sdk.widget.KSRatingBar.a d(com.kwad.sdk.widget.KSRatingBar r0) {
            com.kwad.sdk.widget.KSRatingBar$a r0 = r0.aLX
            return r0
    }

    static int e(com.kwad.sdk.widget.KSRatingBar r2) {
            int r0 = r2.y
            int r1 = r0 + 1
            r2.y = r1
            return r0
    }

    private android.widget.ImageView w(android.content.Context r4, boolean r5) {
            r3 = this;
            android.widget.ImageView r0 = new android.widget.ImageView
            r0.<init>(r4)
            android.view.ViewGroup$LayoutParams r4 = new android.view.ViewGroup$LayoutParams
            float r1 = r3.aLY
            int r1 = java.lang.Math.round(r1)
            float r2 = r3.aLZ
            int r2 = java.lang.Math.round(r2)
            r4.<init>(r1, r2)
            r0.setLayoutParams(r4)
            float r4 = r3.aMa
            int r4 = java.lang.Math.round(r4)
            r1 = 0
            r0.setPadding(r1, r1, r4, r1)
            if (r5 == 0) goto L28
            android.graphics.drawable.Drawable r4 = r3.aMb
            goto L2a
        L28:
            android.graphics.drawable.Drawable r4 = r3.aMc
        L2a:
            r0.setImageDrawable(r4)
            return r0
    }

    public void setImagePadding(float r1) {
            r0 = this;
            r0.aMa = r1
            return
    }

    public void setOnRatingChangeListener(com.kwad.sdk.widget.KSRatingBar.a r1) {
            r0 = this;
            r0.aLX = r1
            return
    }

    public void setStar(float r7) {
            r6 = this;
            int r0 = (int) r7
            java.math.BigDecimal r1 = new java.math.BigDecimal
            java.lang.String r7 = java.lang.Float.toString(r7)
            r1.<init>(r7)
            java.math.BigDecimal r7 = new java.math.BigDecimal
            java.lang.String r2 = java.lang.Integer.toString(r0)
            r7.<init>(r2)
            java.math.BigDecimal r7 = r1.subtract(r7)
            float r7 = r7.floatValue()
            int r1 = r6.aLV
            if (r0 <= r1) goto L21
            float r1 = (float) r1
            goto L22
        L21:
            float r1 = (float) r0
        L22:
            r2 = 0
            int r3 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r3 >= 0) goto L28
            r1 = r2
        L28:
            r3 = 0
        L29:
            float r4 = (float) r3
            int r4 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r4 >= 0) goto L3c
            android.view.View r4 = r6.getChildAt(r3)
            android.widget.ImageView r4 = (android.widget.ImageView) r4
            android.graphics.drawable.Drawable r5 = r6.aMc
            r4.setImageDrawable(r5)
            int r3 = r3 + 1
            goto L29
        L3c:
            int r7 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r7 <= 0) goto L66
            android.view.View r7 = r6.getChildAt(r0)
            android.widget.ImageView r7 = (android.widget.ImageView) r7
            android.graphics.drawable.Drawable r0 = r6.aMd
            r7.setImageDrawable(r0)
            int r7 = r6.aLV
            int r7 = r7 + (-1)
        L4f:
            float r0 = (float) r7
            r2 = 1065353216(0x3f800000, float:1.0)
            float r2 = r2 + r1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L65
            android.view.View r0 = r6.getChildAt(r7)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            android.graphics.drawable.Drawable r2 = r6.aMb
            r0.setImageDrawable(r2)
            int r7 = r7 + (-1)
            goto L4f
        L65:
            return
        L66:
            int r7 = r6.aLV
            int r7 = r7 + (-1)
        L6a:
            float r0 = (float) r7
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 < 0) goto L7d
            android.view.View r0 = r6.getChildAt(r7)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            android.graphics.drawable.Drawable r2 = r6.aMb
            r0.setImageDrawable(r2)
            int r7 = r7 + (-1)
            goto L6a
        L7d:
            return
    }

    public void setStarEmptyDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.aMb = r1
            return
    }

    public void setStarFillDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.aMc = r1
            return
    }

    public void setStarHalfDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            r0.aMd = r1
            return
    }

    public void setStarImageHeight(float r1) {
            r0 = this;
            r0.aLZ = r1
            return
    }

    public void setStarImageWidth(float r1) {
            r0 = this;
            r0.aLY = r1
            return
    }

    public void setTotalStarCount(int r1) {
            r0 = this;
            r0.aLV = r1
            return
    }

    public void setmClickable(boolean r1) {
            r0 = this;
            r0.aLT = r1
            return
    }
}
