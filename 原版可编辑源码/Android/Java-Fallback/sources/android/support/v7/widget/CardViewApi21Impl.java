package android.support.v7.widget;

class CardViewApi21Impl implements android.support.v7.widget.CardViewImpl {
    CardViewApi21Impl() {
            r0 = this;
            r0.<init>()
            return
    }

    private android.support.v7.widget.RoundRectDrawable getCardBackground(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.graphics.drawable.Drawable r1 = r1.getCardBackground()
            android.support.v7.widget.RoundRectDrawable r1 = (android.support.v7.widget.RoundRectDrawable) r1
            return r1
    }

    @Override
    public android.content.res.ColorStateList getBackgroundColor(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawable r1 = r0.getCardBackground(r1)
            android.content.res.ColorStateList r1 = r1.getColor()
            return r1
    }

    @Override
    public float getElevation(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.view.View r1 = r1.getCardView()
            float r1 = r1.getElevation()
            return r1
    }

    @Override
    public float getMaxElevation(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawable r1 = r0.getCardBackground(r1)
            float r1 = r1.getPadding()
            return r1
    }

    @Override
    public float getMinHeight(android.support.v7.widget.CardViewDelegate r2) {
            r1 = this;
            float r2 = r1.getRadius(r2)
            r0 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 * r0
            return r2
    }

    @Override
    public float getMinWidth(android.support.v7.widget.CardViewDelegate r2) {
            r1 = this;
            float r2 = r1.getRadius(r2)
            r0 = 1073741824(0x40000000, float:2.0)
            float r2 = r2 * r0
            return r2
    }

    @Override
    public float getRadius(android.support.v7.widget.CardViewDelegate r1) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawable r1 = r0.getCardBackground(r1)
            float r1 = r1.getRadius()
            return r1
    }

    @Override
    public void initStatic() {
            r0 = this;
            return
    }

    @Override
    public void initialize(android.support.v7.widget.CardViewDelegate r1, android.content.Context r2, android.content.res.ColorStateList r3, float r4, float r5, float r6) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawable r2 = new android.support.v7.widget.RoundRectDrawable
            r2.<init>(r3, r4)
            r1.setCardBackground(r2)
            android.view.View r2 = r1.getCardView()
            r3 = 1
            r2.setClipToOutline(r3)
            r2.setElevation(r5)
            r0.setMaxElevation(r1, r6)
            return
    }

    @Override
    public void onCompatPaddingChanged(android.support.v7.widget.CardViewDelegate r2) {
            r1 = this;
            float r0 = r1.getMaxElevation(r2)
            r1.setMaxElevation(r2, r0)
            return
    }

    @Override
    public void onPreventCornerOverlapChanged(android.support.v7.widget.CardViewDelegate r2) {
            r1 = this;
            float r0 = r1.getMaxElevation(r2)
            r1.setMaxElevation(r2, r0)
            return
    }

    @Override
    public void setBackgroundColor(android.support.v7.widget.CardViewDelegate r1, android.content.res.ColorStateList r2) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawable r1 = r0.getCardBackground(r1)
            r1.setColor(r2)
            return
    }

    @Override
    public void setElevation(android.support.v7.widget.CardViewDelegate r1, float r2) {
            r0 = this;
            android.view.View r1 = r1.getCardView()
            r1.setElevation(r2)
            return
    }

    @Override
    public void setMaxElevation(android.support.v7.widget.CardViewDelegate r4, float r5) {
            r3 = this;
            android.support.v7.widget.RoundRectDrawable r0 = r3.getCardBackground(r4)
            boolean r1 = r4.getUseCompatPadding()
            boolean r2 = r4.getPreventCornerOverlap()
            r0.setPadding(r5, r1, r2)
            r3.updatePadding(r4)
            return
    }

    @Override
    public void setRadius(android.support.v7.widget.CardViewDelegate r1, float r2) {
            r0 = this;
            android.support.v7.widget.RoundRectDrawable r1 = r0.getCardBackground(r1)
            r1.setRadius(r2)
            return
    }

    @Override
    public void updatePadding(android.support.v7.widget.CardViewDelegate r5) {
            r4 = this;
            boolean r0 = r5.getUseCompatPadding()
            if (r0 != 0) goto Lb
            r0 = 0
            r5.setShadowPadding(r0, r0, r0, r0)
            return
        Lb:
            float r0 = r4.getMaxElevation(r5)
            float r1 = r4.getRadius(r5)
            boolean r2 = r5.getPreventCornerOverlap()
            float r2 = android.support.v7.widget.RoundRectDrawableWithShadow.calculateHorizontalPadding(r0, r1, r2)
            double r2 = (double) r2
            double r2 = java.lang.Math.ceil(r2)
            int r2 = (int) r2
            boolean r3 = r5.getPreventCornerOverlap()
            float r0 = android.support.v7.widget.RoundRectDrawableWithShadow.calculateVerticalPadding(r0, r1, r3)
            double r0 = (double) r0
            double r0 = java.lang.Math.ceil(r0)
            int r0 = (int) r0
            r5.setShadowPadding(r2, r0, r2, r0)
            return
    }
}
