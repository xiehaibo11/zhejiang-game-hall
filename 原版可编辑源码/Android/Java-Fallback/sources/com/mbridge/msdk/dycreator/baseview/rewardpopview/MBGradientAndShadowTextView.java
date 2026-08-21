package com.mbridge.msdk.dycreator.baseview.rewardpopview;

public class MBGradientAndShadowTextView extends android.widget.TextView {
    private int a;
    private int b;
    private int c;
    private int d;
    private android.graphics.LinearGradient e;
    public float mShadowDx;
    public float mShadowDy;
    public float mShadowRadius;

    public static class GradientAndShadowParameters {
        public int gradientEndColor;
        public int gradientStartColor;
        public int shadowColor;
        public float shadowDx;
        public float shadowDy;
        public float shadowRadius;
        public int textSize;

        public GradientAndShadowParameters() {
                r1 = this;
                r1.<init>()
                r0 = 40
                r1.textSize = r0
                r0 = 1077936128(0x40400000, float:3.0)
                r1.shadowRadius = r0
                r0 = 1069547520(0x3fc00000, float:1.5)
                r1.shadowDx = r0
                r0 = 1072064102(0x3fe66666, float:1.8)
                r1.shadowDy = r0
                return
        }
    }

    public MBGradientAndShadowTextView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = -1043(0xfffffffffffffbed, float:NaN)
            r0.a = r1
            r1 = -17041(0xffffffffffffbd6f, float:NaN)
            r0.b = r1
            r1 = -1280767(0xffffffffffec7501, float:NaN)
            r0.c = r1
            r1 = 40
            r0.d = r1
            r1 = 1077936128(0x40400000, float:3.0)
            r0.mShadowRadius = r1
            r1 = 1069547520(0x3fc00000, float:1.5)
            r0.mShadowDx = r1
            r1 = 1072064102(0x3fe66666, float:1.8)
            r0.mShadowDy = r1
            r0.a()
            return
    }

    public MBGradientAndShadowTextView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = -1043(0xfffffffffffffbed, float:NaN)
            r0.a = r1
            r1 = -17041(0xffffffffffffbd6f, float:NaN)
            r0.b = r1
            r1 = -1280767(0xffffffffffec7501, float:NaN)
            r0.c = r1
            r1 = 40
            r0.d = r1
            r1 = 1077936128(0x40400000, float:3.0)
            r0.mShadowRadius = r1
            r1 = 1069547520(0x3fc00000, float:1.5)
            r0.mShadowDx = r1
            r1 = 1072064102(0x3fe66666, float:1.8)
            r0.mShadowDy = r1
            return
    }

    public MBGradientAndShadowTextView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = -1043(0xfffffffffffffbed, float:NaN)
            r0.a = r1
            r1 = -17041(0xffffffffffffbd6f, float:NaN)
            r0.b = r1
            r1 = -1280767(0xffffffffffec7501, float:NaN)
            r0.c = r1
            r1 = 40
            r0.d = r1
            r1 = 1077936128(0x40400000, float:3.0)
            r0.mShadowRadius = r1
            r1 = 1069547520(0x3fc00000, float:1.5)
            r0.mShadowDx = r1
            r1 = 1072064102(0x3fe66666, float:1.8)
            r0.mShadowDy = r1
            return
    }

    public MBGradientAndShadowTextView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r1 = -1043(0xfffffffffffffbed, float:NaN)
            r0.a = r1
            r1 = -17041(0xffffffffffffbd6f, float:NaN)
            r0.b = r1
            r1 = -1280767(0xffffffffffec7501, float:NaN)
            r0.c = r1
            r1 = 40
            r0.d = r1
            r1 = 1077936128(0x40400000, float:3.0)
            r0.mShadowRadius = r1
            r1 = 1069547520(0x3fc00000, float:1.5)
            r0.mShadowDx = r1
            r1 = 1072064102(0x3fe66666, float:1.8)
            r0.mShadowDy = r1
            return
    }

    public MBGradientAndShadowTextView(android.content.Context r1, com.mbridge.msdk.dycreator.baseview.rewardpopview.MBGradientAndShadowTextView.GradientAndShadowParameters r2) {
            r0 = this;
            r0.<init>(r1)
            r1 = -1043(0xfffffffffffffbed, float:NaN)
            r0.a = r1
            r1 = -17041(0xffffffffffffbd6f, float:NaN)
            r0.b = r1
            r1 = -1280767(0xffffffffffec7501, float:NaN)
            r0.c = r1
            r1 = 40
            r0.d = r1
            r1 = 1077936128(0x40400000, float:3.0)
            r0.mShadowRadius = r1
            r1 = 1069547520(0x3fc00000, float:1.5)
            r0.mShadowDx = r1
            r1 = 1072064102(0x3fe66666, float:1.8)
            r0.mShadowDy = r1
            if (r2 == 0) goto L3f
            int r1 = r2.gradientStartColor
            r0.a = r1
            int r1 = r2.gradientEndColor
            r0.b = r1
            int r1 = r2.shadowColor
            r0.c = r1
            int r1 = r2.textSize
            r0.d = r1
            float r1 = r2.shadowRadius
            r0.mShadowRadius = r1
            float r1 = r2.shadowDx
            r0.mShadowDx = r1
            float r1 = r2.shadowDy
            r0.mShadowDy = r1
        L3f:
            r0.a()
            return
    }

    private void a() {
            r9 = this;
            int r0 = r9.d
            float r0 = (float) r0
            r9.setTextSize(r0)
            r0 = 3
            android.graphics.Typeface r0 = android.graphics.Typeface.defaultFromStyle(r0)
            r9.setTypeface(r0)
            android.graphics.LinearGradient r0 = new android.graphics.LinearGradient
            float r5 = r9.getTextSize()
            int r6 = r9.a
            int r7 = r9.b
            android.graphics.Shader$TileMode r8 = android.graphics.Shader.TileMode.CLAMP
            r2 = 0
            r3 = 0
            r4 = 0
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            r9.e = r0
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r6) {
            r5 = this;
            android.text.TextPaint r0 = r5.getPaint()
            r1 = 0
            r0.setShader(r1)
            android.text.TextPaint r0 = r5.getPaint()
            int r1 = r5.c
            r2 = 1077936128(0x40400000, float:3.0)
            r3 = 1069547520(0x3fc00000, float:1.5)
            r4 = 1072064102(0x3fe66666, float:1.8)
            r0.setShadowLayer(r2, r3, r4, r1)
            super.onDraw(r6)
            android.text.TextPaint r0 = r5.getPaint()
            r0.clearShadowLayer()
            android.text.TextPaint r0 = r5.getPaint()
            android.graphics.LinearGradient r1 = r5.e
            r0.setShader(r1)
            super.onDraw(r6)
            return
    }
}
