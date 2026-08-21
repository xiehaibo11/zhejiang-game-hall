package android.support.design.card;

class MaterialCardViewHelper {
    private static final int DEFAULT_STROKE_VALUE = -1;
    private final android.support.design.card.MaterialCardView materialCardView;
    private int strokeColor;
    private int strokeWidth;

    public MaterialCardViewHelper(android.support.design.card.MaterialCardView r1) {
            r0 = this;
            r0.<init>()
            r0.materialCardView = r1
            return
    }

    private void adjustContentPadding() {
            r5 = this;
            android.support.design.card.MaterialCardView r0 = r5.materialCardView
            int r0 = r0.getContentPaddingLeft()
            int r1 = r5.strokeWidth
            int r0 = r0 + r1
            android.support.design.card.MaterialCardView r1 = r5.materialCardView
            int r1 = r1.getContentPaddingTop()
            int r2 = r5.strokeWidth
            int r1 = r1 + r2
            android.support.design.card.MaterialCardView r2 = r5.materialCardView
            int r2 = r2.getContentPaddingRight()
            int r3 = r5.strokeWidth
            int r2 = r2 + r3
            android.support.design.card.MaterialCardView r3 = r5.materialCardView
            int r3 = r3.getContentPaddingBottom()
            int r4 = r5.strokeWidth
            int r3 = r3 + r4
            android.support.design.card.MaterialCardView r4 = r5.materialCardView
            r4.setContentPadding(r0, r1, r2, r3)
            return
    }

    private android.graphics.drawable.Drawable createForegroundDrawable() {
            r3 = this;
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            android.support.design.card.MaterialCardView r1 = r3.materialCardView
            float r1 = r1.getRadius()
            r0.setCornerRadius(r1)
            int r1 = r3.strokeColor
            r2 = -1
            if (r1 == r2) goto L18
            int r2 = r3.strokeWidth
            r0.setStroke(r2, r1)
        L18:
            return r0
    }

    int getStrokeColor() {
            r1 = this;
            int r0 = r1.strokeColor
            return r0
    }

    int getStrokeWidth() {
            r1 = this;
            int r0 = r1.strokeWidth
            return r0
    }

    public void loadFromAttributes(android.content.res.TypedArray r3) {
            r2 = this;
            int r0 = android.support.design.R.styleable.MaterialCardView_strokeColor
            r1 = -1
            int r0 = r3.getColor(r0, r1)
            r2.strokeColor = r0
            int r0 = android.support.design.R.styleable.MaterialCardView_strokeWidth
            r1 = 0
            int r3 = r3.getDimensionPixelSize(r0, r1)
            r2.strokeWidth = r3
            r2.updateForeground()
            r2.adjustContentPadding()
            return
    }

    void setStrokeColor(int r1) {
            r0 = this;
            r0.strokeColor = r1
            r0.updateForeground()
            return
    }

    void setStrokeWidth(int r1) {
            r0 = this;
            r0.strokeWidth = r1
            r0.updateForeground()
            r0.adjustContentPadding()
            return
    }

    void updateForeground() {
            r2 = this;
            android.support.design.card.MaterialCardView r0 = r2.materialCardView
            android.graphics.drawable.Drawable r1 = r2.createForegroundDrawable()
            r0.setForeground(r1)
            return
    }
}
