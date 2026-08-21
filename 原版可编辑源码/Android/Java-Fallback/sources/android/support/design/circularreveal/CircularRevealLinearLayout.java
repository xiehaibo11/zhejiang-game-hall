package android.support.design.circularreveal;

public class CircularRevealLinearLayout extends android.widget.LinearLayout implements android.support.design.circularreveal.CircularRevealWidget {
    private final android.support.design.circularreveal.CircularRevealHelper helper;

    public CircularRevealLinearLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public CircularRevealLinearLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            android.support.design.circularreveal.CircularRevealHelper r1 = new android.support.design.circularreveal.CircularRevealHelper
            r1.<init>(r0)
            r0.helper = r1
            return
    }

    @Override
    public void actualDraw(android.graphics.Canvas r1) {
            r0 = this;
            super.draw(r1)
            return
    }

    @Override
    public boolean actualIsOpaque() {
            r1 = this;
            boolean r0 = super.isOpaque()
            return r0
    }

    @Override
    public void buildCircularRevealCache() {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            r0.buildCircularRevealCache()
            return
    }

    @Override
    public void destroyCircularRevealCache() {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            r0.destroyCircularRevealCache()
            return
    }

    @Override
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            if (r0 == 0) goto L8
            r0.draw(r2)
            goto Lb
        L8:
            super.draw(r2)
        Lb:
            return
    }

    @Override
    public android.graphics.drawable.Drawable getCircularRevealOverlayDrawable() {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            android.graphics.drawable.Drawable r0 = r0.getCircularRevealOverlayDrawable()
            return r0
    }

    @Override
    public int getCircularRevealScrimColor() {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            int r0 = r0.getCircularRevealScrimColor()
            return r0
    }

    @Override
    public android.support.design.circularreveal.CircularRevealWidget.RevealInfo getRevealInfo() {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            android.support.design.circularreveal.CircularRevealWidget$RevealInfo r0 = r0.getRevealInfo()
            return r0
    }

    @Override
    public boolean isOpaque() {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            if (r0 == 0) goto L9
            boolean r0 = r0.isOpaque()
            return r0
        L9:
            boolean r0 = super.isOpaque()
            return r0
    }

    @Override
    public void setCircularRevealOverlayDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            r0.setCircularRevealOverlayDrawable(r2)
            return
    }

    @Override
    public void setCircularRevealScrimColor(int r2) {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            r0.setCircularRevealScrimColor(r2)
            return
    }

    @Override
    public void setRevealInfo(android.support.design.circularreveal.CircularRevealWidget.RevealInfo r2) {
            r1 = this;
            android.support.design.circularreveal.CircularRevealHelper r0 = r1.helper
            r0.setRevealInfo(r2)
            return
    }
}
