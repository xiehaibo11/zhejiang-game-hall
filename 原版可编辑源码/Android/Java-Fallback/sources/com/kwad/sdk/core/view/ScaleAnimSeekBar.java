package com.kwad.sdk.core.view;

public class ScaleAnimSeekBar extends android.view.View {
    private int axA;
    private int axB;
    private int axC;
    private android.graphics.drawable.GradientDrawable axD;
    private android.graphics.drawable.GradientDrawable axE;
    private android.graphics.drawable.GradientDrawable axF;
    private android.graphics.Rect axG;
    private android.graphics.Rect axH;
    private android.graphics.Rect axI;
    private android.graphics.Rect axJ;
    private android.graphics.drawable.Drawable axK;
    private boolean axL;
    private boolean axM;
    private boolean axN;
    private boolean axO;
    private boolean axP;
    private java.lang.ref.WeakReference<com.kwad.sdk.core.view.ScaleAnimSeekBar.a> axQ;
    private boolean axR;
    private boolean axS;
    private android.animation.ValueAnimator axT;
    private android.animation.ValueAnimator axU;
    private android.animation.ValueAnimator axV;
    private float axW;
    private float axX;
    private float axY;
    private float axZ;
    private android.graphics.Paint axm;
    private int axn;
    private int axo;
    private int axp;
    private int axq;
    private int axr;
    private int axs;
    private int axt;
    private int axu;
    private boolean axv;
    private int axw;
    private int axx;
    private int axy;
    private int axz;
    private int aya;
    private boolean ayb;





    public interface a {
        void a(com.kwad.sdk.core.view.ScaleAnimSeekBar r1);

        void a(com.kwad.sdk.core.view.ScaleAnimSeekBar r1, boolean r2);

        void st();
    }

    public ScaleAnimSeekBar(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ScaleAnimSeekBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ScaleAnimSeekBar(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            r4 = 100
            r1.axs = r4
            r4 = 0
            r1.axv = r4
            r0 = 0
            r1.axK = r0
            r1.axL = r4
            r1.axM = r4
            r1.axN = r4
            r0 = 1
            r1.axO = r0
            r1.axR = r0
            r1.axS = r4
            r4 = 1065353216(0x3f800000, float:1.0)
            r1.axW = r4
            r0 = 1068205343(0x3fab851f, float:1.34)
            r1.axX = r0
            r1.axY = r4
            r4 = 1073741824(0x40000000, float:2.0)
            r1.axZ = r4
            r1.init(r2, r3)
            return
    }

    static int a(com.kwad.sdk.core.view.ScaleAnimSeekBar r0, int r1) {
            r0.axy = r1
            return r1
    }

    private void a(int r2, boolean r3, boolean r4) {
            r1 = this;
            int r0 = r1.axr
            if (r2 > r0) goto L6
        L4:
            r2 = r0
            goto Lb
        L6:
            int r0 = r1.axs
            if (r2 < r0) goto Lb
            goto L4
        Lb:
            r1.h(r3, r2)
            com.kwad.sdk.core.view.ScaleAnimSeekBar$a r2 = r1.getOnSeekBarChangedListener()
            if (r2 == 0) goto L22
            int r3 = r1.axz
            int r0 = r1.axy
            if (r3 == r0) goto L22
            r1.axN = r4
            r2.a(r1, r4)
            r2 = 0
            r1.axN = r2
        L22:
            int r2 = r1.axy
            r1.axz = r2
            return
    }

    private void a(android.graphics.Canvas r4, android.graphics.Rect r5, android.graphics.drawable.GradientDrawable r6) {
            r3 = this;
            r4.save()
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            int r1 = r5.top
            float r1 = (float) r1
            float r2 = r3.axY
            float r1 = r1 * r2
            int r1 = (int) r1
            r0.top = r1
            int r1 = r5.bottom
            float r1 = (float) r1
            float r2 = r3.axY
            float r1 = r1 * r2
            int r1 = (int) r1
            r0.bottom = r1
            int r1 = r5.left
            r0.left = r1
            int r5 = r5.right
            r0.right = r5
            r6.setBounds(r0)
            int r5 = r3.axt
            float r5 = (float) r5
            float r0 = r3.axY
            float r5 = r5 * r0
            r6.setCornerRadius(r5)
            r6.draw(r4)
            r4.restore()
            return
    }

    static void a(com.kwad.sdk.core.view.ScaleAnimSeekBar r0, float r1) {
            r0.g(r1)
            return
    }

    static float b(com.kwad.sdk.core.view.ScaleAnimSeekBar r0, float r1) {
            r0.axW = r1
            return r1
    }

    static int b(com.kwad.sdk.core.view.ScaleAnimSeekBar r0, int r1) {
            int r0 = r0.cB(r1)
            return r0
    }

    private void bh(boolean r2) {
            r1 = this;
            boolean r0 = r1.axR
            if (r0 != 0) goto L5
            return
        L5:
            if (r2 == 0) goto Lf
            r2 = 1
        L8:
            r1.bi(r2)
            r1.bj(r2)
            return
        Lf:
            r2 = 0
            goto L8
    }

    private void bi(boolean r5) {
            r4 = this;
            float r0 = r4.axW
            if (r5 == 0) goto L7
            float r5 = r4.axX
            goto L9
        L7:
            r5 = 1065353216(0x3f800000, float:1.0)
        L9:
            android.animation.ValueAnimator r1 = r4.axT
            if (r1 != 0) goto L2e
            android.animation.ValueAnimator r1 = new android.animation.ValueAnimator
            r1.<init>()
            r4.axT = r1
            r2 = 250(0xfa, double:1.235E-321)
            r1.setDuration(r2)
            android.animation.ValueAnimator r1 = r4.axT
            android.view.animation.LinearInterpolator r2 = new android.view.animation.LinearInterpolator
            r2.<init>()
            r1.setInterpolator(r2)
            android.animation.ValueAnimator r1 = r4.axT
            com.kwad.sdk.core.view.ScaleAnimSeekBar$3 r2 = new com.kwad.sdk.core.view.ScaleAnimSeekBar$3
            r2.<init>(r4)
            r1.addUpdateListener(r2)
            goto L31
        L2e:
            r1.cancel()
        L31:
            android.animation.ValueAnimator r1 = r4.axT
            r2 = 2
            float[] r2 = new float[r2]
            r3 = 0
            r2[r3] = r0
            r0 = 1
            r2[r0] = r5
            r1.setFloatValues(r2)
            android.animation.ValueAnimator r5 = r4.axT
            r5.start()
            return
    }

    private void bj(boolean r5) {
            r4 = this;
            float r0 = r4.axY
            if (r5 == 0) goto L7
            float r5 = r4.axZ
            goto L9
        L7:
            r5 = 1065353216(0x3f800000, float:1.0)
        L9:
            android.animation.ValueAnimator r1 = r4.axU
            if (r1 != 0) goto L2e
            android.animation.ValueAnimator r1 = new android.animation.ValueAnimator
            r1.<init>()
            r4.axU = r1
            r2 = 250(0xfa, double:1.235E-321)
            r1.setDuration(r2)
            android.animation.ValueAnimator r1 = r4.axU
            android.view.animation.LinearInterpolator r2 = new android.view.animation.LinearInterpolator
            r2.<init>()
            r1.setInterpolator(r2)
            android.animation.ValueAnimator r1 = r4.axU
            com.kwad.sdk.core.view.ScaleAnimSeekBar$4 r2 = new com.kwad.sdk.core.view.ScaleAnimSeekBar$4
            r2.<init>(r4)
            r1.addUpdateListener(r2)
            goto L31
        L2e:
            r1.cancel()
        L31:
            android.animation.ValueAnimator r1 = r4.axU
            r2 = 2
            float[] r2 = new float[r2]
            r3 = 0
            r2[r3] = r0
            r0 = 1
            r2[r0] = r5
            r1.setFloatValues(r2)
            android.animation.ValueAnimator r5 = r4.axU
            r5.start()
            return
    }

    private void bm(android.content.Context r3) {
            r2 = this;
            r0 = 1
            r2.axR = r0
            r0 = 1092616192(0x41200000, float:10.0)
            int r0 = com.kwad.sdk.d.a.a.a(r3, r0)
            r2.aya = r0
            r0 = 1077936128(0x40400000, float:3.0)
            int r0 = com.kwad.sdk.d.a.a.a(r3, r0)
            r2.axq = r0
            r0 = 1101004800(0x41a00000, float:20.0)
            int r0 = com.kwad.sdk.d.a.a.a(r3, r0)
            r2.axx = r0
            r0 = 0
            r2.axK = r0
            r0 = 0
            r2.axS = r0
            r1 = 1050253722(0x3e99999a, float:0.3)
            int r1 = com.kwad.sdk.d.a.a.a(r3, r1)
            r2.axu = r1
            r1 = 1065353216(0x3f800000, float:1.0)
            int r3 = com.kwad.sdk.d.a.a.a(r3, r1)
            r2.axt = r3
            r3 = 654311423(0x26ffffff, float:1.7763567E-15)
            r2.axn = r3
            r3 = -1
            r2.axo = r3
            r3 = 1090519039(0x40ffffff, float:7.9999995)
            r2.axp = r3
            r2.axr = r0
            r3 = 100
            r2.axs = r3
            r2.axv = r0
            return
    }

    static float c(com.kwad.sdk.core.view.ScaleAnimSeekBar r0, float r1) {
            r0.axY = r1
            return r1
    }

    private void c(android.graphics.Canvas r5) {
            r4 = this;
            r5.save()
            android.graphics.drawable.Drawable r0 = r4.axK
            if (r0 == 0) goto L12
            android.graphics.Rect r1 = r4.axJ
            r0.setBounds(r1)
            android.graphics.drawable.Drawable r0 = r4.axK
            r0.draw(r5)
            goto L39
        L12:
            android.graphics.Paint r0 = r4.axm
            int r1 = r4.axo
            r0.setColor(r1)
            android.graphics.Rect r0 = r4.axJ
            int r0 = r0.centerX()
            float r0 = (float) r0
            android.graphics.Rect r1 = r4.axJ
            int r1 = r1.centerY()
            float r1 = (float) r1
            android.graphics.Rect r2 = r4.axJ
            int r2 = r2.width()
            float r2 = (float) r2
            float r3 = r4.axW
            float r2 = r2 * r3
            r3 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 / r3
            android.graphics.Paint r3 = r4.axm
            r5.drawCircle(r0, r1, r2, r3)
        L39:
            r5.restore()
            return
    }

    private float cA(int r4) {
            r3 = this;
            int r0 = r3.axw
            float r1 = (float) r0
            int r2 = r3.axr
            int r4 = r4 - r2
            float r4 = (float) r4
            float r1 = r1 * r4
            int r4 = r3.axs
            int r4 = r4 - r2
            float r4 = (float) r4
            float r1 = r1 / r4
            float r4 = (float) r0
            r0 = 1073741824(0x40000000, float:2.0)
            float r4 = r4 / r0
            float r1 = r1 - r4
            return r1
    }

    private int cB(int r4) {
            r3 = this;
            int r0 = r3.axw
            int r1 = r0 / 2
            if (r4 <= r1) goto L9
            int r4 = r3.axs
            return r4
        L9:
            int r1 = -r0
            int r1 = r1 / 2
            if (r4 >= r1) goto L11
            int r4 = r3.axr
            return r4
        L11:
            float r4 = (float) r4
            float r1 = (float) r0
            r2 = 1073741824(0x40000000, float:2.0)
            float r1 = r1 / r2
            float r4 = r4 + r1
            int r1 = r3.axs
            int r2 = r3.axr
            int r1 = r1 - r2
            float r1 = (float) r1
            float r4 = r4 * r1
            float r0 = (float) r0
            float r4 = r4 / r0
            int r4 = java.lang.Math.round(r4)
            int r0 = r3.axr
            int r4 = r4 + r0
            return r4
    }

    private boolean d(float r3, float r4) {
            r2 = this;
            android.graphics.Rect r0 = r2.axJ
            int r0 = r0.left
            android.graphics.Rect r1 = r2.axJ
            int r1 = r1.right
            if (r0 >= r1) goto L56
            android.graphics.Rect r0 = r2.axJ
            int r0 = r0.top
            android.graphics.Rect r1 = r2.axJ
            int r1 = r1.bottom
            if (r0 >= r1) goto L56
            android.graphics.Rect r0 = r2.axJ
            int r0 = r0.left
            float r0 = (float) r0
            float r1 = r2.axW
            float r0 = r0 * r1
            int r1 = r2.axx
            float r1 = (float) r1
            float r0 = r0 - r1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L56
            android.graphics.Rect r0 = r2.axJ
            int r0 = r0.right
            float r0 = (float) r0
            float r1 = r2.axW
            float r0 = r0 * r1
            int r1 = r2.axx
            float r1 = (float) r1
            float r0 = r0 + r1
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L56
            android.graphics.Rect r3 = r2.axJ
            int r3 = r3.top
            float r3 = (float) r3
            float r0 = r2.axW
            float r3 = r3 * r0
            int r0 = r2.axx
            float r0 = (float) r0
            float r3 = r3 - r0
            int r3 = (r4 > r3 ? 1 : (r4 == r3 ? 0 : -1))
            if (r3 < 0) goto L56
            android.graphics.Rect r3 = r2.axJ
            int r3 = r3.bottom
            float r3 = (float) r3
            float r0 = r2.axW
            float r3 = r3 * r0
            int r0 = r2.axx
            float r0 = (float) r0
            float r3 = r3 + r0
            int r3 = (r4 > r3 ? 1 : (r4 == r3 ? 0 : -1))
            if (r3 > 0) goto L56
            r3 = 1
            return r3
        L56:
            r3 = 0
            return r3
    }

    private boolean e(float r3, float r4) {
            r2 = this;
            android.graphics.Rect r0 = r2.axG
            int r0 = r0.left
            android.graphics.Rect r1 = r2.axG
            int r1 = r1.right
            if (r0 >= r1) goto L56
            android.graphics.Rect r0 = r2.axG
            int r0 = r0.top
            android.graphics.Rect r1 = r2.axG
            int r1 = r1.bottom
            if (r0 >= r1) goto L56
            android.graphics.Rect r0 = r2.axG
            int r0 = r0.left
            float r0 = (float) r0
            float r1 = r2.axY
            float r0 = r0 * r1
            int r1 = r2.axx
            float r1 = (float) r1
            float r0 = r0 - r1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto L56
            android.graphics.Rect r0 = r2.axG
            int r0 = r0.right
            float r0 = (float) r0
            float r1 = r2.axY
            float r0 = r0 * r1
            int r1 = r2.axx
            float r1 = (float) r1
            float r0 = r0 + r1
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L56
            android.graphics.Rect r3 = r2.axG
            int r3 = r3.top
            float r3 = (float) r3
            float r0 = r2.axY
            float r3 = r3 * r0
            int r0 = r2.axx
            float r0 = (float) r0
            float r3 = r3 - r0
            int r3 = (r4 > r3 ? 1 : (r4 == r3 ? 0 : -1))
            if (r3 < 0) goto L56
            android.graphics.Rect r3 = r2.axG
            int r3 = r3.bottom
            float r3 = (float) r3
            float r0 = r2.axY
            float r3 = r3 * r0
            int r0 = r2.axx
            float r0 = (float) r0
            float r3 = r3 + r0
            int r3 = (r4 > r3 ? 1 : (r4 == r3 ? 0 : -1))
            if (r3 > 0) goto L56
            r3 = 1
            return r3
        L56:
            r3 = 0
            return r3
    }

    private void g(float r3) {
            r2 = this;
            android.graphics.Rect r0 = r2.axJ
            int r1 = r2.axq
            float r1 = (float) r1
            float r1 = r3 - r1
            int r1 = (int) r1
            r0.left = r1
            android.graphics.Rect r0 = r2.axJ
            int r1 = r2.axq
            float r1 = (float) r1
            float r1 = r1 + r3
            int r1 = (int) r1
            r0.right = r1
            android.graphics.Rect r0 = r2.axH
            int r3 = (int) r3
            r0.right = r3
            r2.invalidate()
            return
    }

    private com.kwad.sdk.core.view.ScaleAnimSeekBar.a getOnSeekBarChangedListener() {
            r1 = this;
            java.lang.ref.WeakReference<com.kwad.sdk.core.view.ScaleAnimSeekBar$a> r0 = r1.axQ
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            com.kwad.sdk.core.view.ScaleAnimSeekBar$a r0 = (com.kwad.sdk.core.view.ScaleAnimSeekBar.a) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    private float h(float r3) {
            r2 = this;
            int r0 = r2.axw
            int r0 = r0 / 2
            float r0 = (float) r0
            int r1 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r1 <= 0) goto La
            return r0
        La:
            float r0 = -r0
            int r1 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r1 >= 0) goto L10
            return r0
        L10:
            return r3
    }

    private void h(boolean r4, int r5) {
            r3 = this;
            if (r4 == 0) goto L50
            int r4 = r3.axy
            float r4 = r3.cA(r4)
            float r4 = r3.h(r4)
            float r5 = r3.cA(r5)
            float r5 = r3.h(r5)
            android.animation.ValueAnimator r0 = r3.axV
            if (r0 != 0) goto L39
            android.animation.ValueAnimator r0 = new android.animation.ValueAnimator
            r0.<init>()
            r3.axV = r0
            r1 = 300(0x12c, double:1.48E-321)
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r3.axV
            com.kwad.sdk.core.view.ScaleAnimSeekBar$1 r1 = new com.kwad.sdk.core.view.ScaleAnimSeekBar$1
            r1.<init>(r3)
            r0.setInterpolator(r1)
            android.animation.ValueAnimator r0 = r3.axV
            com.kwad.sdk.core.view.ScaleAnimSeekBar$2 r1 = new com.kwad.sdk.core.view.ScaleAnimSeekBar$2
            r1.<init>(r3)
            r0.addUpdateListener(r1)
            goto L3c
        L39:
            r0.cancel()
        L3c:
            android.animation.ValueAnimator r0 = r3.axV
            r1 = 2
            float[] r1 = new float[r1]
            r2 = 0
            r1[r2] = r4
            r4 = 1
            r1[r4] = r5
            r0.setFloatValues(r1)
            android.animation.ValueAnimator r4 = r3.axV
            r4.start()
            return
        L50:
            r3.axy = r5
            float r4 = r3.cA(r5)
            float r4 = r3.h(r4)
            r3.g(r4)
            return
    }

    private void init(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            if (r3 == 0) goto L5
            r1.bm(r2)
        L5:
            android.graphics.Paint r2 = new android.graphics.Paint
            r2.<init>()
            r1.axm = r2
            android.graphics.Paint$Style r3 = android.graphics.Paint.Style.FILL
            r2.setStyle(r3)
            android.graphics.Paint r2 = r1.axm
            r3 = 1
            r2.setAntiAlias(r3)
            android.graphics.drawable.GradientDrawable r2 = new android.graphics.drawable.GradientDrawable
            r2.<init>()
            r1.axD = r2
            r3 = 0
            r2.setShape(r3)
            android.graphics.drawable.GradientDrawable r2 = r1.axD
            int r0 = r1.axn
            r2.setColor(r0)
            android.graphics.drawable.GradientDrawable r2 = new android.graphics.drawable.GradientDrawable
            r2.<init>()
            r1.axE = r2
            r2.setShape(r3)
            android.graphics.drawable.GradientDrawable r2 = r1.axE
            int r0 = r1.axo
            r2.setColor(r0)
            android.graphics.drawable.GradientDrawable r2 = new android.graphics.drawable.GradientDrawable
            r2.<init>()
            r1.axF = r2
            r2.setShape(r3)
            android.graphics.drawable.GradientDrawable r2 = r1.axF
            int r3 = r1.axp
            r2.setColor(r3)
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.axG = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.axH = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.axJ = r2
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.axI = r2
            int r2 = r1.axr
            r1.axy = r2
            return
    }

    private void v(int r4, int r5) {
            r3 = this;
            if (r4 <= 0) goto Lce
            if (r5 > 0) goto L6
            goto Lce
        L6:
            boolean r5 = r3.axR
            if (r5 == 0) goto L19
            float r5 = (float) r4
            int r0 = r3.aya
            int r0 = r0 * 2
            float r0 = (float) r0
            float r1 = r3.axX
            float r2 = r3.axW
            float r1 = r1 - r2
            float r0 = r0 * r1
            float r5 = r5 - r0
            int r5 = (int) r5
            goto L1f
        L19:
            int r5 = r3.aya
            int r5 = r5 * 2
            int r5 = r4 - r5
        L1f:
            r3.axw = r5
            android.graphics.Rect r5 = r3.axG
            int r0 = r3.axu
            int r0 = -r0
            r5.top = r0
            android.graphics.Rect r5 = r3.axG
            int r0 = r5.top
            int r0 = -r0
            r5.bottom = r0
            android.graphics.Rect r5 = r3.axG
            boolean r0 = r3.axv
            if (r0 == 0) goto L37
            int r0 = -r4
            goto L3a
        L37:
            int r0 = r3.axw
            int r0 = -r0
        L3a:
            int r0 = r0 / 2
            r5.left = r0
            android.graphics.Rect r5 = r3.axG
            boolean r0 = r3.axv
            if (r0 == 0) goto L47
            int r0 = r4 / 2
            goto L4b
        L47:
            int r0 = r3.axw
            int r0 = r0 / 2
        L4b:
            r5.right = r0
            android.graphics.Rect r5 = r3.axH
            int r0 = r3.axu
            int r0 = -r0
            r5.top = r0
            android.graphics.Rect r5 = r3.axH
            int r0 = r5.top
            int r0 = -r0
            r5.bottom = r0
            android.graphics.Rect r5 = r3.axH
            boolean r0 = r3.axv
            if (r0 == 0) goto L63
            int r0 = -r4
            goto L66
        L63:
            int r0 = r3.axw
            int r0 = -r0
        L66:
            int r0 = r0 / 2
            r5.left = r0
            android.graphics.Rect r5 = r3.axH
            int r0 = r3.axw
            int r0 = -r0
            int r0 = r0 / 2
            r5.right = r0
            android.graphics.Rect r5 = r3.axI
            int r0 = r3.axu
            int r0 = -r0
            r5.top = r0
            android.graphics.Rect r5 = r3.axI
            android.graphics.Rect r0 = r3.axH
            int r0 = r0.top
            int r0 = -r0
            r5.bottom = r0
            android.graphics.Rect r5 = r3.axI
            boolean r0 = r3.axv
            if (r0 == 0) goto L8a
            goto L8c
        L8a:
            int r4 = r3.axw
        L8c:
            int r4 = -r4
            int r4 = r4 / 2
            r5.left = r4
            android.graphics.Rect r4 = r3.axI
            int r5 = r3.axw
            int r5 = -r5
            int r5 = r5 / 2
            r4.right = r5
            android.graphics.Rect r4 = r3.axJ
            int r5 = r3.axq
            int r5 = -r5
            r4.top = r5
            android.graphics.Rect r4 = r3.axJ
            int r5 = r3.axq
            r4.bottom = r5
            android.graphics.Rect r4 = r3.axJ
            int r5 = r3.axw
            int r5 = -r5
            int r5 = r5 / 2
            int r0 = r3.axq
            int r5 = r5 - r0
            r4.left = r5
            android.graphics.Rect r4 = r3.axJ
            int r5 = r3.axw
            int r5 = -r5
            int r5 = r5 / 2
            int r0 = r3.axq
            int r5 = r5 + r0
            r4.right = r5
            android.graphics.drawable.Drawable r4 = r3.axK
            r3.setThumbDrawable(r4)
            int r4 = r3.axy
            r3.setProgress(r4)
            int r4 = r3.axA
            r3.setSecondaryProgress(r4)
        Lce:
            return
    }

    public final void bg(boolean r1) {
            r0 = this;
            r0.ayb = r1
            r0.bh(r1)
            return
    }

    public int getMaxProgress() {
            r1 = this;
            int r0 = r1.axs
            return r0
    }

    public int getProgress() {
            r1 = this;
            int r0 = r1.axy
            return r0
    }

    public int getProgressLength() {
            r1 = this;
            int r0 = r1.axw
            return r0
    }

    public int getProgressX() {
            r3 = this;
            float r0 = r3.getX()
            int r1 = r3.axq
            float r1 = (float) r1
            float r2 = r3.axX
            float r1 = r1 * r2
            float r0 = r0 + r1
            int r0 = (int) r0
            return r0
    }

    public int getSecondaryProgress() {
            r1 = this;
            int r0 = r1.axA
            return r0
    }

    @Override
    protected void onDraw(android.graphics.Canvas r3) {
            r2 = this;
            super.onDraw(r3)
            r3.save()
            int r0 = r2.axC
            int r0 = r0 / 2
            float r0 = (float) r0
            int r1 = r2.axB
            int r1 = r1 / 2
            float r1 = (float) r1
            r3.translate(r0, r1)
            android.graphics.Rect r0 = r2.axG
            android.graphics.drawable.GradientDrawable r1 = r2.axD
            r2.a(r3, r0, r1)
            android.graphics.Rect r0 = r2.axI
            android.graphics.drawable.GradientDrawable r1 = r2.axF
            r2.a(r3, r0, r1)
            android.graphics.Rect r0 = r2.axH
            android.graphics.drawable.GradientDrawable r1 = r2.axE
            r2.a(r3, r0, r1)
            boolean r0 = r2.ayb
            if (r0 == 0) goto L2f
            r2.c(r3)
        L2f:
            r3.restore()
            return
    }

    @Override
    protected void onMeasure(int r4, int r5) {
            r3 = this;
            int r0 = android.view.View.MeasureSpec.getMode(r4)
            int r4 = android.view.View.MeasureSpec.getSize(r4)
            int r1 = android.view.View.MeasureSpec.getMode(r5)
            int r5 = android.view.View.MeasureSpec.getSize(r5)
            r2 = 1073741824(0x40000000, float:2.0)
            if (r0 != r2) goto L15
            goto L19
        L15:
            int r4 = r3.getWidth()
        L19:
            r3.axC = r4
            if (r1 != r2) goto L20
            r3.axB = r5
            goto L26
        L20:
            int r4 = r3.getHeight()
            r3.axB = r4
        L26:
            int r4 = r3.axC
            int r5 = r3.axB
            r3.v(r4, r5)
            int r4 = r3.axC
            int r5 = r3.axB
            r3.setMeasuredDimension(r4, r5)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r8) {
            r7 = this;
            float r0 = r8.getX()
            int r1 = r7.axC
            r2 = 2
            int r1 = r1 / r2
            float r1 = (float) r1
            float r0 = r0 - r1
            float r1 = r8.getY()
            int r3 = r7.axB
            int r3 = r3 / r2
            float r3 = (float) r3
            float r1 = r1 - r3
            android.view.ViewParent r3 = r7.getParent()
            com.kwad.sdk.core.view.ScaleAnimSeekBar$a r4 = r7.getOnSeekBarChangedListener()
            int r5 = r8.getAction()
            r6 = 1
            if (r5 == 0) goto L5d
            r8 = 0
            if (r5 == r6) goto L3a
            if (r5 == r2) goto L29
            goto L91
        L29:
            boolean r1 = r7.axL
            if (r1 != 0) goto L31
            boolean r1 = r7.axM
            if (r1 == 0) goto L91
        L31:
            int r0 = (int) r0
            int r0 = r7.cB(r0)
            r7.a(r0, r8, r6)
            goto L91
        L3a:
            r7.axP = r8
            boolean r1 = r7.axM
            if (r1 != 0) goto L44
            boolean r1 = r7.axL
            if (r1 == 0) goto L57
        L44:
            r7.axM = r8
            r7.axL = r8
            int r0 = (int) r0
            int r0 = r7.cB(r0)
            boolean r1 = r7.axS
            r7.a(r0, r1, r6)
            if (r4 == 0) goto L57
            r4.a(r7)
        L57:
            if (r3 == 0) goto L91
            r3.requestDisallowInterceptTouchEvent(r8)
            goto L91
        L5d:
            boolean r2 = r7.axO
            if (r2 != 0) goto L66
            boolean r8 = super.onTouchEvent(r8)
            return r8
        L66:
            boolean r8 = r7.d(r0, r1)
            if (r8 == 0) goto L7e
            r7.bh(r6)
            r7.axL = r6
            r7.axP = r6
            if (r4 == 0) goto L78
            r4.st()
        L78:
            if (r3 == 0) goto L91
        L7a:
            r3.requestDisallowInterceptTouchEvent(r6)
            goto L91
        L7e:
            boolean r8 = r7.e(r0, r1)
            if (r8 == 0) goto L91
            r7.bh(r6)
            r7.axM = r6
            if (r4 == 0) goto L8e
            r4.st()
        L8e:
            if (r3 == 0) goto L91
            goto L7a
        L91:
            return r6
    }

    public void setMaxProgress(int r1) {
            r0 = this;
            r0.axs = r1
            return
    }

    public void setMinProgress(int r2) {
            r1 = this;
            r1.axr = r2
            int r0 = r1.axy
            if (r0 >= r2) goto L8
            r1.axy = r2
        L8:
            return
    }

    public void setOnSeekBarChangeListener(com.kwad.sdk.core.view.ScaleAnimSeekBar.a r2) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.axQ = r0
            return
    }

    public void setProgress(int r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0, r0)
            return
    }

    public void setProgressBackgroundColor(int r2) {
            r1 = this;
            r1.axn = r2
            android.graphics.drawable.GradientDrawable r0 = r1.axD
            r0.setColor(r2)
            return
    }

    public void setProgressColor(int r2) {
            r1 = this;
            r1.axo = r2
            android.graphics.drawable.GradientDrawable r0 = r1.axE
            r0.setColor(r2)
            return
    }

    public void setSecondaryProgress(int r2) {
            r1 = this;
            int r0 = r1.axr
            if (r2 > r0) goto L6
        L4:
            r2 = r0
            goto Lb
        L6:
            int r0 = r1.axs
            if (r2 < r0) goto Lb
            goto L4
        Lb:
            r1.axA = r2
            float r2 = r1.cA(r2)
            float r2 = r1.h(r2)
            android.graphics.Rect r0 = r1.axI
            int r2 = (int) r2
            r0.right = r2
            r1.invalidate()
            return
    }

    public void setSecondaryProgressColor(int r2) {
            r1 = this;
            r1.axp = r2
            android.graphics.drawable.GradientDrawable r0 = r1.axF
            r0.setColor(r2)
            return
    }

    public void setThumbDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.axK = r1
            return
    }

    public void setThumbEnable(boolean r1) {
            r0 = this;
            r0.axO = r1
            return
    }

    public void setThumbScale(float r1) {
            r0 = this;
            r0.axW = r1
            return
    }

    public void setThumbTouchOffset(int r1) {
            r0 = this;
            r0.axx = r1
            r0.invalidate()
            return
    }
}
