package android.support.design.widget;

class CutoutDrawable extends android.graphics.drawable.GradientDrawable {
    private final android.graphics.RectF cutoutBounds;
    private final android.graphics.Paint cutoutPaint;
    private int savedLayer;

    CutoutDrawable() {
            r2 = this;
            r2.<init>()
            android.graphics.Paint r0 = new android.graphics.Paint
            r1 = 1
            r0.<init>(r1)
            r2.cutoutPaint = r0
            r2.setPaintStyles()
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r2.cutoutBounds = r0
            return
    }

    private void postDraw(android.graphics.Canvas r2) {
            r1 = this;
            android.graphics.drawable.Drawable$Callback r0 = r1.getCallback()
            boolean r0 = r1.useHardwareLayer(r0)
            if (r0 != 0) goto Lf
            int r0 = r1.savedLayer
            r2.restoreToCount(r0)
        Lf:
            return
    }

    private void preDraw(android.graphics.Canvas r3) {
            r2 = this;
            android.graphics.drawable.Drawable$Callback r0 = r2.getCallback()
            boolean r1 = r2.useHardwareLayer(r0)
            if (r1 == 0) goto L12
            android.view.View r0 = (android.view.View) r0
            r3 = 2
            r1 = 0
            r0.setLayerType(r3, r1)
            goto L15
        L12:
            r2.saveCanvasLayer(r3)
        L15:
            return
    }

    private void saveCanvasLayer(android.graphics.Canvas r9) {
            r8 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L1b
            r3 = 0
            r4 = 0
            int r0 = r9.getWidth()
            float r5 = (float) r0
            int r0 = r9.getHeight()
            float r6 = (float) r0
            r7 = 0
            r2 = r9
            int r9 = r2.saveLayer(r3, r4, r5, r6, r7)
            r8.savedLayer = r9
            goto L31
        L1b:
            r1 = 0
            r2 = 0
            int r0 = r9.getWidth()
            float r3 = (float) r0
            int r0 = r9.getHeight()
            float r4 = (float) r0
            r5 = 0
            r6 = 31
            r0 = r9
            int r9 = r0.saveLayer(r1, r2, r3, r4, r5, r6)
            r8.savedLayer = r9
        L31:
            return
    }

    private void setPaintStyles() {
            r3 = this;
            android.graphics.Paint r0 = r3.cutoutPaint
            android.graphics.Paint$Style r1 = android.graphics.Paint.Style.FILL_AND_STROKE
            r0.setStyle(r1)
            android.graphics.Paint r0 = r3.cutoutPaint
            r1 = -1
            r0.setColor(r1)
            android.graphics.Paint r0 = r3.cutoutPaint
            android.graphics.PorterDuffXfermode r1 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.DST_OUT
            r1.<init>(r2)
            r0.setXfermode(r1)
            return
    }

    private boolean useHardwareLayer(android.graphics.drawable.Drawable.Callback r1) {
            r0 = this;
            boolean r1 = r1 instanceof android.view.View
            return r1
    }

    @Override
    public void draw(android.graphics.Canvas r3) {
            r2 = this;
            r2.preDraw(r3)
            super.draw(r3)
            android.graphics.RectF r0 = r2.cutoutBounds
            android.graphics.Paint r1 = r2.cutoutPaint
            r3.drawRect(r0, r1)
            r2.postDraw(r3)
            return
    }

    boolean hasCutout() {
            r1 = this;
            android.graphics.RectF r0 = r1.cutoutBounds
            boolean r0 = r0.isEmpty()
            r0 = r0 ^ 1
            return r0
    }

    void removeCutout() {
            r1 = this;
            r0 = 0
            r1.setCutout(r0, r0, r0, r0)
            return
    }

    void setCutout(float r2, float r3, float r4, float r5) {
            r1 = this;
            android.graphics.RectF r0 = r1.cutoutBounds
            float r0 = r0.left
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L20
            android.graphics.RectF r0 = r1.cutoutBounds
            float r0 = r0.top
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L20
            android.graphics.RectF r0 = r1.cutoutBounds
            float r0 = r0.right
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 != 0) goto L20
            android.graphics.RectF r0 = r1.cutoutBounds
            float r0 = r0.bottom
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 == 0) goto L28
        L20:
            android.graphics.RectF r0 = r1.cutoutBounds
            r0.set(r2, r3, r4, r5)
            r1.invalidateSelf()
        L28:
            return
    }

    void setCutout(android.graphics.RectF r4) {
            r3 = this;
            float r0 = r4.left
            float r1 = r4.top
            float r2 = r4.right
            float r4 = r4.bottom
            r3.setCutout(r0, r1, r2, r4)
            return
    }
}
