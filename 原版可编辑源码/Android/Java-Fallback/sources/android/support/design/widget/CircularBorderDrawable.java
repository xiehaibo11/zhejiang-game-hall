package android.support.design.widget;

public class CircularBorderDrawable extends android.graphics.drawable.Drawable {
    private static final float DRAW_STROKE_WIDTH_MULTIPLE = 1.3333f;
    private android.content.res.ColorStateList borderTint;
    float borderWidth;
    private int bottomInnerStrokeColor;
    private int bottomOuterStrokeColor;
    private int currentBorderTintColor;
    private boolean invalidateShader;
    final android.graphics.Paint paint;
    final android.graphics.Rect rect;
    final android.graphics.RectF rectF;
    private float rotation;
    final android.support.design.widget.CircularBorderDrawable.CircularBorderState state;
    private int topInnerStrokeColor;
    private int topOuterStrokeColor;

    static class 1 {
    }

    private class CircularBorderState extends android.graphics.drawable.Drawable.ConstantState {
        final android.support.design.widget.CircularBorderDrawable this$0;

        private CircularBorderState(android.support.design.widget.CircularBorderDrawable r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        CircularBorderState(android.support.design.widget.CircularBorderDrawable r1, android.support.design.widget.CircularBorderDrawable.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public int getChangingConfigurations() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public android.graphics.drawable.Drawable newDrawable() {
                r1 = this;
                android.support.design.widget.CircularBorderDrawable r0 = r1.this$0
                return r0
        }
    }

    public CircularBorderDrawable() {
            r2 = this;
            r2.<init>()
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r2.rect = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r2.rectF = r0
            android.support.design.widget.CircularBorderDrawable$CircularBorderState r0 = new android.support.design.widget.CircularBorderDrawable$CircularBorderState
            r1 = 0
            r0.<init>(r2, r1)
            r2.state = r0
            r0 = 1
            r2.invalidateShader = r0
            android.graphics.Paint r1 = new android.graphics.Paint
            r1.<init>(r0)
            r2.paint = r1
            android.graphics.Paint$Style r0 = android.graphics.Paint.Style.STROKE
            r1.setStyle(r0)
            return
    }

    private android.graphics.Shader createGradientShader() {
            r11 = this;
            android.graphics.Rect r0 = r11.rect
            r11.copyBounds(r0)
            float r1 = r11.borderWidth
            int r2 = r0.height()
            float r2 = (float) r2
            float r1 = r1 / r2
            r2 = 6
            int[] r8 = new int[r2]
            int r3 = r11.topOuterStrokeColor
            int r4 = r11.currentBorderTintColor
            int r3 = android.support.v4.graphics.ColorUtils.compositeColors(r3, r4)
            r4 = 0
            r8[r4] = r3
            int r3 = r11.topInnerStrokeColor
            int r5 = r11.currentBorderTintColor
            int r3 = android.support.v4.graphics.ColorUtils.compositeColors(r3, r5)
            r5 = 1
            r8[r5] = r3
            int r3 = r11.topInnerStrokeColor
            int r3 = android.support.v4.graphics.ColorUtils.setAlphaComponent(r3, r4)
            int r6 = r11.currentBorderTintColor
            int r3 = android.support.v4.graphics.ColorUtils.compositeColors(r3, r6)
            r6 = 2
            r8[r6] = r3
            int r3 = r11.bottomInnerStrokeColor
            int r3 = android.support.v4.graphics.ColorUtils.setAlphaComponent(r3, r4)
            int r7 = r11.currentBorderTintColor
            int r3 = android.support.v4.graphics.ColorUtils.compositeColors(r3, r7)
            r7 = 3
            r8[r7] = r3
            int r3 = r11.bottomInnerStrokeColor
            int r9 = r11.currentBorderTintColor
            int r3 = android.support.v4.graphics.ColorUtils.compositeColors(r3, r9)
            r9 = 4
            r8[r9] = r3
            int r3 = r11.bottomOuterStrokeColor
            int r10 = r11.currentBorderTintColor
            int r3 = android.support.v4.graphics.ColorUtils.compositeColors(r3, r10)
            r10 = 5
            r8[r10] = r3
            float[] r2 = new float[r2]
            r3 = 0
            r2[r4] = r3
            r2[r5] = r1
            r3 = 1056964608(0x3f000000, float:0.5)
            r2[r6] = r3
            r2[r7] = r3
            r3 = 1065353216(0x3f800000, float:1.0)
            float r1 = r3 - r1
            r2[r9] = r1
            r2[r10] = r3
            android.graphics.LinearGradient r1 = new android.graphics.LinearGradient
            int r3 = r0.top
            float r5 = (float) r3
            int r0 = r0.bottom
            float r7 = (float) r0
            android.graphics.Shader$TileMode r10 = android.graphics.Shader.TileMode.CLAMP
            r4 = 0
            r6 = 0
            r3 = r1
            r9 = r2
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            return r1
    }

    @Override
    public void draw(android.graphics.Canvas r5) {
            r4 = this;
            boolean r0 = r4.invalidateShader
            if (r0 == 0) goto L10
            android.graphics.Paint r0 = r4.paint
            android.graphics.Shader r1 = r4.createGradientShader()
            r0.setShader(r1)
            r0 = 0
            r4.invalidateShader = r0
        L10:
            android.graphics.Paint r0 = r4.paint
            float r0 = r0.getStrokeWidth()
            r1 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r1
            android.graphics.RectF r1 = r4.rectF
            android.graphics.Rect r2 = r4.rect
            r4.copyBounds(r2)
            android.graphics.Rect r2 = r4.rect
            r1.set(r2)
            float r2 = r1.left
            float r2 = r2 + r0
            r1.left = r2
            float r2 = r1.top
            float r2 = r2 + r0
            r1.top = r2
            float r2 = r1.right
            float r2 = r2 - r0
            r1.right = r2
            float r2 = r1.bottom
            float r2 = r2 - r0
            r1.bottom = r2
            r5.save()
            float r0 = r4.rotation
            float r2 = r1.centerX()
            float r3 = r1.centerY()
            r5.rotate(r0, r2, r3)
            android.graphics.Paint r0 = r4.paint
            r5.drawOval(r1, r0)
            r5.restore()
            return
    }

    @Override
    public android.graphics.drawable.Drawable.ConstantState getConstantState() {
            r1 = this;
            android.support.design.widget.CircularBorderDrawable$CircularBorderState r0 = r1.state
            return r0
    }

    @Override
    public int getOpacity() {
            r2 = this;
            float r0 = r2.borderWidth
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L9
            r0 = -3
            goto La
        L9:
            r0 = -2
        La:
            return r0
    }

    @Override
    public boolean getPadding(android.graphics.Rect r2) {
            r1 = this;
            float r0 = r1.borderWidth
            int r0 = java.lang.Math.round(r0)
            r2.set(r0, r0, r0, r0)
            r2 = 1
            return r2
    }

    @Override
    public boolean isStateful() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.borderTint
            if (r0 == 0) goto La
            boolean r0 = r0.isStateful()
            if (r0 != 0) goto L10
        La:
            boolean r0 = super.isStateful()
            if (r0 == 0) goto L12
        L10:
            r0 = 1
            goto L13
        L12:
            r0 = 0
        L13:
            return r0
    }

    @Override
    protected void onBoundsChange(android.graphics.Rect r1) {
            r0 = this;
            r1 = 1
            r0.invalidateShader = r1
            return
    }

    @Override
    protected boolean onStateChange(int[] r3) {
            r2 = this;
            android.content.res.ColorStateList r0 = r2.borderTint
            if (r0 == 0) goto L13
            int r1 = r2.currentBorderTintColor
            int r3 = r0.getColorForState(r3, r1)
            int r0 = r2.currentBorderTintColor
            if (r3 == r0) goto L13
            r0 = 1
            r2.invalidateShader = r0
            r2.currentBorderTintColor = r3
        L13:
            boolean r3 = r2.invalidateShader
            if (r3 == 0) goto L1a
            r2.invalidateSelf()
        L1a:
            boolean r3 = r2.invalidateShader
            return r3
    }

    @Override
    public void setAlpha(int r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.paint
            r0.setAlpha(r2)
            r1.invalidateSelf()
            return
    }

    public void setBorderTint(android.content.res.ColorStateList r3) {
            r2 = this;
            if (r3 == 0) goto Le
            int[] r0 = r2.getState()
            int r1 = r2.currentBorderTintColor
            int r0 = r3.getColorForState(r0, r1)
            r2.currentBorderTintColor = r0
        Le:
            r2.borderTint = r3
            r3 = 1
            r2.invalidateShader = r3
            r2.invalidateSelf()
            return
    }

    public void setBorderWidth(float r3) {
            r2 = this;
            float r0 = r2.borderWidth
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 == 0) goto L17
            r2.borderWidth = r3
            android.graphics.Paint r0 = r2.paint
            r1 = 1068149139(0x3faaa993, float:1.3333)
            float r3 = r3 * r1
            r0.setStrokeWidth(r3)
            r3 = 1
            r2.invalidateShader = r3
            r2.invalidateSelf()
        L17:
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            android.graphics.Paint r0 = r1.paint
            r0.setColorFilter(r2)
            r1.invalidateSelf()
            return
    }

    public void setGradientColors(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.topOuterStrokeColor = r1
            r0.topInnerStrokeColor = r2
            r0.bottomOuterStrokeColor = r3
            r0.bottomInnerStrokeColor = r4
            return
    }

    public final void setRotation(float r2) {
            r1 = this;
            float r0 = r1.rotation
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto Lb
            r1.rotation = r2
            r1.invalidateSelf()
        Lb:
            return
    }
}
