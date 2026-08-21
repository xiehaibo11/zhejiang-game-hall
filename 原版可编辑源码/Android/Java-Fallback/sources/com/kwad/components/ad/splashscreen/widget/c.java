package com.kwad.components.ad.splashscreen.widget;

public final class c extends android.graphics.drawable.AnimationDrawable {
    private android.graphics.Bitmap FF;
    private android.graphics.Bitmap FG;
    private android.graphics.Bitmap FH;
    private android.graphics.Bitmap FI;
    private android.graphics.Bitmap FJ;
    private android.graphics.Bitmap FK;
    private int FL;
    private android.graphics.RectF FM;
    private android.graphics.Paint FN;
    private android.graphics.Paint FO;
    private android.graphics.PorterDuffXfermode FP;
    private final int FQ;
    private final int FR;
    private float FS;
    private float FT;
    private android.graphics.RectF FU;
    private android.graphics.Paint FV;
    private int FW;
    private int FX;
    private android.animation.ValueAnimator FY;
    private final float FZ;
    private final float Ga;
    private float Gb;
    private float Gc;
    private int Gd;
    private android.content.Context mContext;


    public c(android.content.Context r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 1086324736(0x40c00000, float:6.0)
            r1.FZ = r0
            r0 = 1093664768(0x41300000, float:11.0)
            r1.Ga = r0
            r1.mContext = r2
            r0 = 1112276992(0x424c0000, float:51.0)
            int r0 = com.kwad.sdk.d.a.a.a(r2, r0)
            r1.FQ = r0
            r0 = 1114898432(0x42740000, float:61.0)
            int r2 = com.kwad.sdk.d.a.a.a(r2, r0)
            r1.FR = r2
            r1.Gd = r3
            r1.init()
            return
    }

    static float a(com.kwad.components.ad.splashscreen.widget.c r0) {
            float r0 = r0.Gb
            return r0
    }

    static float a(com.kwad.components.ad.splashscreen.widget.c r0, float r1) {
            r0.Gb = r1
            return r1
    }

    static void b(com.kwad.components.ad.splashscreen.widget.c r0, float r1) {
            r0.c(r1)
            return
    }

    private void c(float r6) {
            r5 = this;
            r0 = 1086324736(0x40c00000, float:6.0)
            int r1 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r1 > 0) goto L7a
            float r6 = r6 / r0
            int r0 = r5.Gd
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 1106247680(0x41f00000, float:30.0)
            if (r0 == 0) goto L58
            r3 = 1
            if (r0 == r3) goto L38
            r1 = 2
            if (r0 == r1) goto L16
            goto L7a
        L16:
            android.graphics.RectF r0 = r5.FU
            int r1 = r5.FW
            float r1 = (float) r1
            float r1 = r1 * r6
            r0.right = r1
            android.graphics.RectF r0 = r5.FM
            android.graphics.RectF r1 = r5.FU
            float r1 = r1.right
            float r3 = r5.FT
            float r1 = r1 + r3
            android.graphics.RectF r3 = r5.FU
            float r3 = r3.top
            float r4 = r5.FS
            float r3 = r3 + r4
            r0.offsetTo(r1, r3)
            r0 = 1134886912(0x43a50000, float:330.0)
            float r6 = r6 * r2
            float r6 = r6 + r0
            r5.Gc = r6
            return
        L38:
            android.graphics.RectF r0 = r5.FU
            int r3 = r5.FW
            float r3 = (float) r3
            float r1 = r1 - r6
            float r3 = r3 * r1
            r0.left = r3
            android.graphics.RectF r6 = r5.FM
            android.graphics.RectF r0 = r5.FU
            float r0 = r0.left
            float r3 = r5.FT
            float r0 = r0 + r3
            android.graphics.RectF r3 = r5.FU
            float r3 = r3.top
            float r4 = r5.FS
            float r3 = r3 + r4
            r6.offsetTo(r0, r3)
            float r1 = r1 * r2
            r5.Gc = r1
            return
        L58:
            android.graphics.RectF r0 = r5.FU
            int r3 = r5.FX
            float r3 = (float) r3
            float r1 = r1 - r6
            float r3 = r3 * r1
            r0.top = r3
            android.graphics.RectF r0 = r5.FM
            android.graphics.RectF r1 = r5.FU
            float r1 = r1.left
            float r3 = r5.FT
            float r1 = r1 + r3
            android.graphics.RectF r3 = r5.FU
            float r3 = r3.top
            float r4 = r5.FS
            float r3 = r3 + r4
            r0.offsetTo(r1, r3)
            r0 = 1133576192(0x43910000, float:290.0)
            float r6 = r6 * r2
            float r6 = r6 + r0
            r5.Gc = r6
        L7a:
            return
    }

    private void init() {
            r10 = this;
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.drawable.ksad_splash_hand
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r1)
            r10.FF = r0
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.drawable.ksad_splash_hand_lt
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r1)
            r10.FG = r0
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.drawable.ksad_splash_hand_lb
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r1)
            r10.FH = r0
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.drawable.ksad_splash_hand_rt
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r1)
            r10.FI = r0
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.drawable.ksad_splash_hand_rb
            android.graphics.Bitmap r0 = android.graphics.BitmapFactory.decodeResource(r0, r1)
            r10.FJ = r0
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.drawable.ksad_splash_side_bg
            android.graphics.Bitmap r2 = android.graphics.BitmapFactory.decodeResource(r0, r1)
            int r0 = r10.Gd
            r1 = 2
            r9 = 1
            if (r0 == 0) goto L81
            if (r0 == r9) goto L65
            if (r0 == r1) goto L5d
            goto L83
        L5d:
            android.graphics.Matrix r7 = new android.graphics.Matrix
            r7.<init>()
            r0 = 1119092736(0x42b40000, float:90.0)
            goto L6c
        L65:
            android.graphics.Matrix r7 = new android.graphics.Matrix
            r7.<init>()
            r0 = 1132920832(0x43870000, float:270.0)
        L6c:
            r7.postRotate(r0)
            r3 = 0
            r4 = 0
            int r5 = r2.getWidth()
            int r6 = r2.getHeight()
            r8 = 1
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r2, r3, r4, r5, r6, r7, r8)
            r10.FK = r0
            goto L83
        L81:
            r10.FK = r2
        L83:
            android.content.Context r0 = r10.mContext
            r2 = 1092616192(0x41200000, float:10.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r2)
            r10.FL = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>(r9)
            r10.FV = r0
            int r0 = r10.Gd
            if (r0 == 0) goto Lf8
            r2 = 1035489772(0x3db851ec, float:0.09)
            if (r0 == r9) goto Lcc
            if (r0 == r1) goto La1
            goto L127
        La1:
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_splash_hand_bgw
            float r0 = r0.getDimension(r1)
            int r0 = (int) r0
            r10.FX = r0
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_splash_hand_bgh
            float r0 = r0.getDimension(r1)
            int r0 = (int) r0
            r10.FW = r0
            int r0 = r10.FX
            float r0 = (float) r0
            float r0 = r0 * r2
            r10.FS = r0
            int r0 = r10.FQ
            int r0 = -r0
            float r0 = (float) r0
            r1 = 1056964608(0x3f000000, float:0.5)
            goto L124
        Lcc:
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_splash_hand_bgw
            float r0 = r0.getDimension(r1)
            int r0 = (int) r0
            r10.FX = r0
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_splash_hand_bgh
            float r0 = r0.getDimension(r1)
            int r0 = (int) r0
            r10.FW = r0
            int r0 = r10.FX
            float r0 = (float) r0
            float r0 = r0 * r2
            r10.FS = r0
            int r0 = r10.FQ
            int r0 = -r0
            float r0 = (float) r0
            r1 = 1045220557(0x3e4ccccd, float:0.2)
            goto L124
        Lf8:
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_splash_hand_bgh
            float r0 = r0.getDimension(r1)
            int r0 = (int) r0
            r10.FX = r0
            android.content.Context r0 = r10.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_splash_hand_bgw
            float r0 = r0.getDimension(r1)
            int r0 = (int) r0
            r10.FW = r0
            int r1 = r10.FR
            int r1 = -r1
            float r1 = (float) r1
            r2 = 1046562734(0x3e6147ae, float:0.22)
            float r1 = r1 * r2
            r10.FS = r1
            float r0 = (float) r0
            r1 = 1034147594(0x3da3d70a, float:0.08)
        L124:
            float r0 = r0 * r1
            r10.FT = r0
        L127:
            android.graphics.RectF r0 = new android.graphics.RectF
            int r1 = r10.FW
            float r1 = (float) r1
            int r2 = r10.FX
            float r2 = (float) r2
            r3 = 0
            r0.<init>(r3, r3, r1, r2)
            r10.FU = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r1 = 3
            r0.<init>(r1)
            r10.FN = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>(r1)
            r10.FO = r0
            r0.setDither(r9)
            android.graphics.RectF r0 = new android.graphics.RectF
            android.graphics.RectF r2 = r10.FU
            float r2 = r2.right
            int r4 = r10.FQ
            float r4 = (float) r4
            float r2 = r2 - r4
            android.graphics.RectF r4 = r10.FU
            float r4 = r4.right
            int r5 = r10.FR
            float r5 = (float) r5
            r0.<init>(r2, r3, r4, r5)
            r10.FM = r0
            android.graphics.PorterDuffXfermode r0 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.DST_OUT
            r0.<init>(r2)
            r10.FP = r0
            float[] r0 = new float[r1]
            r0 = {x0188: FILL_ARRAY_DATA , data: [0, 1086324736, 1093664768} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            r10.FY = r0
            r1 = 1100(0x44c, double:5.435E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r10.FY
            com.kwad.components.ad.splashscreen.widget.c$1 r1 = new com.kwad.components.ad.splashscreen.widget.c$1
            r1.<init>(r10)
            r0.addUpdateListener(r1)
            android.animation.ValueAnimator r0 = r10.FY
            r1 = -1
            r0.setRepeatCount(r1)
            return
    }

    @Override
    public final void draw(android.graphics.Canvas r7) {
            r6 = this;
            android.graphics.RectF r0 = r6.FU
            if (r0 != 0) goto L5
            return
        L5:
            r7.save()
            int r0 = r6.getIntrinsicWidth()
            int r1 = r6.FW
            int r0 = r0 - r1
            int r0 = r0 / 2
            float r0 = (float) r0
            int r1 = r6.getIntrinsicHeight()
            int r2 = r6.FX
            int r1 = r1 - r2
            int r1 = r1 / 2
            float r1 = (float) r1
            r7.translate(r0, r1)
            float r0 = r6.Gb
            r1 = 1086324736(0x40c00000, float:6.0)
            int r2 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            r3 = 1132396544(0x437f0000, float:255.0)
            if (r2 > 0) goto L39
            android.graphics.Paint r2 = r6.FV
            float r0 = r0 * r3
            float r0 = r0 / r1
            int r0 = (int) r0
            r2.setAlpha(r0)
            android.graphics.Paint r0 = r6.FO
            r1 = 255(0xff, float:3.57E-43)
            r0.setAlpha(r1)
            goto L4c
        L39:
            r2 = 1065353216(0x3f800000, float:1.0)
            float r0 = r0 - r1
            r1 = 1084227584(0x40a00000, float:5.0)
            float r0 = r0 / r1
            float r2 = r2 - r0
            float r2 = r2 * r3
            int r0 = (int) r2
            android.graphics.Paint r1 = r6.FV
            r1.setAlpha(r0)
            android.graphics.Paint r1 = r6.FO
            r1.setAlpha(r0)
        L4c:
            int r0 = r7.save()
            android.graphics.RectF r1 = r6.FU
            android.graphics.Paint r2 = r6.FV
            r3 = 31
            int r1 = r7.saveLayer(r1, r2, r3)
            android.graphics.Bitmap r2 = r6.FK
            android.graphics.RectF r3 = r6.FU
            android.graphics.Paint r4 = r6.FV
            r5 = 0
            r7.drawBitmap(r2, r5, r3, r4)
            float r2 = r6.Gc
            android.graphics.RectF r3 = r6.FM
            float r3 = r3.centerX()
            android.graphics.RectF r4 = r6.FM
            float r4 = r4.centerY()
            r7.rotate(r2, r3, r4)
            android.graphics.Paint r2 = r6.FN
            android.graphics.PorterDuffXfermode r3 = r6.FP
            r2.setXfermode(r3)
            int r2 = r6.Gd
            if (r2 == 0) goto L90
            r3 = 1
            if (r2 == r3) goto L84
            goto La2
        L84:
            android.graphics.Bitmap r2 = r6.FG
            android.graphics.RectF r3 = r6.FM
            android.graphics.Paint r4 = r6.FN
            r7.drawBitmap(r2, r5, r3, r4)
            android.graphics.Bitmap r2 = r6.FH
            goto L9b
        L90:
            android.graphics.Bitmap r2 = r6.FI
            android.graphics.RectF r3 = r6.FM
            android.graphics.Paint r4 = r6.FN
            r7.drawBitmap(r2, r5, r3, r4)
            android.graphics.Bitmap r2 = r6.FJ
        L9b:
            android.graphics.RectF r3 = r6.FM
            android.graphics.Paint r4 = r6.FN
            r7.drawBitmap(r2, r5, r3, r4)
        La2:
            android.graphics.Bitmap r2 = r6.FF
            android.graphics.RectF r3 = r6.FM
            android.graphics.Paint r4 = r6.FN
            r7.drawBitmap(r2, r5, r3, r4)
            r7.restoreToCount(r1)
            float r1 = r6.Gc
            android.graphics.RectF r2 = r6.FM
            float r2 = r2.centerX()
            android.graphics.RectF r3 = r6.FM
            float r3 = r3.centerY()
            r7.rotate(r1, r2, r3)
            android.graphics.Bitmap r1 = r6.FF
            android.graphics.RectF r2 = r6.FM
            android.graphics.Paint r3 = r6.FO
            r7.drawBitmap(r1, r5, r2, r3)
            r7.restoreToCount(r0)
            r7.restore()
            return
    }

    @Override
    public final int getIntrinsicHeight() {
            r2 = this;
            int r0 = r2.FX
            int r1 = r2.FR
            int r0 = r0 + r1
            int r1 = r2.FL
            int r0 = r0 + r1
            return r0
    }

    @Override
    public final int getIntrinsicWidth() {
            r2 = this;
            int r0 = r2.FW
            int r1 = r2.FQ
            int r0 = r0 + r1
            return r0
    }

    @Override
    public final int getOpacity() {
            r1 = this;
            r0 = -2
            return r0
    }

    @Override
    public final boolean isRunning() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.FY
            if (r0 == 0) goto L9
            boolean r0 = r0.isRunning()
            return r0
        L9:
            r0 = 0
            return r0
    }

    @Override
    public final void start() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.FY
            if (r0 == 0) goto L7
            r0.start()
        L7:
            return
    }

    @Override
    public final void stop() {
            r1 = this;
            android.animation.ValueAnimator r0 = r1.FY
            if (r0 == 0) goto L7
            r0.cancel()
        L7:
            return
    }
}
