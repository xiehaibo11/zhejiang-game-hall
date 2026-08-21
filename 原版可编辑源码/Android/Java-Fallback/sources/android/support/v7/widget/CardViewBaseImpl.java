package android.support.v7.widget;

class CardViewBaseImpl implements android.support.v7.widget.CardViewImpl {
    final android.graphics.RectF mCornerRect;


    CardViewBaseImpl() {
            r1 = this;
            r1.<init>()
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r1.mCornerRect = r0
            return
    }

    private android.support.v7.widget.RoundRectDrawableWithShadow createBackground(android.content.Context r8, android.content.res.ColorStateList r9, float r10, float r11, float r12) {
            r7 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r6 = new android.support.v7.widget.RoundRectDrawableWithShadow
            android.content.res.Resources r1 = r8.getResources()
            r0 = r6
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    private android.support.v7.widget.RoundRectDrawableWithShadow getShadowBackground(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = r1.getCardBackground()
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = (android.support.v7.widget.RoundRectDrawableWithShadow) r1
            return r1
    }

    @Override
    public android.content.res.ColorStateList getBackgroundColor(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r0.getShadowBackground(r1)
            android.content.res.ColorStateList r1 = r1.getColor()
            return r1
    }

    @Override
    public float getElevation(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r0.getShadowBackground(r1)
            float r1 = r1.getShadowSize()
            return r1
    }

    @Override
    public float getMaxElevation(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r0.getShadowBackground(r1)
            float r1 = r1.getMaxShadowSize()
            return r1
    }

    @Override
    public float getMinHeight(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r0.getShadowBackground(r1)
            float r1 = r1.getMinHeight()
            return r1
    }

    @Override
    public float getMinWidth(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r0.getShadowBackground(r1)
            float r1 = r1.getMinWidth()
            return r1
    }

    @Override
    public float getRadius(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r0.getShadowBackground(r1)
            float r1 = r1.getCornerRadius()
            return r1
    }

    @Override
    public void initStatic() {
            r1 = this;
            android.support.v7.widget.CardViewBaseImpl$1 r0 = new android.support.v7.widget.CardViewBaseImpl$1
            r0.<init>(r1)
            android.support.v7.widget.RoundRectDrawableWithShadow.sRoundRectHelper = r0
            return
    }

    @Override
    public void initialize(android.support.v7.widget.CardViewDelegate r7, android.content.Context r8, android.content.res.ColorStateList r9, float r10, float r11, float r12) {
            r6 = this;
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            android.support.v7.widget.RoundRectDrawableWithShadow r8 = r0.createBackground(r1, r2, r3, r4, r5)
            boolean r9 = r7.getPreventCornerOverlap()
            r8.setAddPaddingForCorners(r9)
            r7.setCardBackground(r8)
            r6.updatePadding(r7)
            return
    }

    @Override
    public void onCompatPaddingChanged(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            return
    }

    @Override
    public void onPreventCornerOverlapChanged(android.support.v7.widget.CardViewDelegate r3) {
            r2 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r0 = r2.getShadowBackground(r3)
            boolean r1 = r3.getPreventCornerOverlap()
            r0.setAddPaddingForCorners(r1)
            r2.updatePadding(r3)
            return
    }

    @Override
    public void setBackgroundColor(android.support.v7.widget.CardViewDelegate r1, android.content.res.ColorStateList r2) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r0.getShadowBackground(r1)
            r1.setColor(r2)
            return
    }

    @Override
    public void setElevation(android.support.v7.widget.CardViewDelegate r1, float r2) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r0.getShadowBackground(r1)
            r1.setShadowSize(r2)
            return
    }

    @Override
    public void setMaxElevation(android.support.v7.widget.CardViewDelegate r2, float r3) {
            r1 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r0 = r1.getShadowBackground(r2)
            r0.setMaxShadowSize(r3)
            r1.updatePadding(r2)
            return
    }

    @Override
    public void setRadius(android.support.v7.widget.CardViewDelegate r2, float r3) {
            r1 = this;
            android.support.v7.widget.RoundRectDrawableWithShadow r0 = r1.getShadowBackground(r2)
            r0.setCornerRadius(r3)
            r1.updatePadding(r2)
            return
    }

    @Override
    public void updatePadding(android.support.v7.widget.CardViewDelegate r5) {
            r4 = this;
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            android.support.v7.widget.RoundRectDrawableWithShadow r1 = r4.getShadowBackground(r5)
            r1.getMaxShadowAndCornerPadding(r0)
            float r1 = r4.getMinWidth(r5)
            double r1 = (double) r1
            double r1 = java.lang.Math.ceil(r1)
            int r1 = (int) r1
            float r2 = r4.getMinHeight(r5)
            double r2 = (double) r2
            double r2 = java.lang.Math.ceil(r2)
            int r2 = (int) r2
            r5.setMinWidthHeightInternal(r1, r2)
            int r1 = r0.left
            int r2 = r0.top
            int r3 = r0.right
            int r0 = r0.bottom
            r5.setShadowPadding(r1, r2, r3, r0)
            return
    }
}
