package android.support.design.card;

public class MaterialCardView extends android.support.v7.widget.CardView {
    private final android.support.design.card.MaterialCardViewHelper cardViewHelper;

    public MaterialCardView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MaterialCardView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.materialCardViewStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public MaterialCardView(android.content.Context r7, android.util.AttributeSet r8, int r9) {
            r6 = this;
            r6.<init>(r7, r8, r9)
            int[] r2 = android.support.design.R.styleable.MaterialCardView
            int r4 = android.support.design.R.style.Widget_MaterialComponents_CardView
            r0 = 0
            int[] r5 = new int[r0]
            r0 = r7
            r1 = r8
            r3 = r9
            android.content.res.TypedArray r7 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r0, r1, r2, r3, r4, r5)
            android.support.design.card.MaterialCardViewHelper r8 = new android.support.design.card.MaterialCardViewHelper
            r8.<init>(r6)
            r6.cardViewHelper = r8
            r8.loadFromAttributes(r7)
            r7.recycle()
            return
    }

    public int getStrokeColor() {
            r1 = this;
            android.support.design.card.MaterialCardViewHelper r0 = r1.cardViewHelper
            int r0 = r0.getStrokeColor()
            return r0
    }

    public int getStrokeWidth() {
            r1 = this;
            android.support.design.card.MaterialCardViewHelper r0 = r1.cardViewHelper
            int r0 = r0.getStrokeWidth()
            return r0
    }

    @Override
    public void setRadius(float r1) {
            r0 = this;
            super.setRadius(r1)
            android.support.design.card.MaterialCardViewHelper r1 = r0.cardViewHelper
            r1.updateForeground()
            return
    }

    public void setStrokeColor(int r2) {
            r1 = this;
            android.support.design.card.MaterialCardViewHelper r0 = r1.cardViewHelper
            r0.setStrokeColor(r2)
            return
    }

    public void setStrokeWidth(int r2) {
            r1 = this;
            android.support.design.card.MaterialCardViewHelper r0 = r1.cardViewHelper
            r0.setStrokeWidth(r2)
            return
    }
}
