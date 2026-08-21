package com.tkay.basead.ui;

public class CloseImageView extends android.widget.ImageView implements com.tkay.basead.ui.a {
    private static final java.lang.String a = null;
    private float b;
    private android.graphics.Rect c;


    static {
            java.lang.Class<com.tkay.basead.ui.CloseImageView> r0 = com.tkay.basead.ui.CloseImageView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.ui.CloseImageView.a = r0
            return
    }

    public CloseImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 1065353216(0x3f800000, float:1.0)
            r0.b = r1
            return
    }

    static android.graphics.Rect a(com.tkay.basead.ui.CloseImageView r0) {
            android.graphics.Rect r0 = r0.c
            return r0
    }

    static android.graphics.Rect a(com.tkay.basead.ui.CloseImageView r0, android.graphics.Rect r1) {
            r0.c = r1
            return r1
    }

    static float b(com.tkay.basead.ui.CloseImageView r0) {
            float r0 = r0.b
            return r0
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            float r1 = r0.b
            r2 = 1065353216(0x3f800000, float:1.0)
            int r2 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r2 <= 0) goto Le
            com.tkay.core.common.l.u.a(r0, r1)
        Le:
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r5) {
            r4 = this;
            float r0 = r4.b
            r1 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto L30
            int r0 = r5.getAction()
            if (r0 == 0) goto L12
            r1 = 5
            if (r0 == r1) goto L12
            goto L30
        L12:
            android.graphics.Rect r0 = r4.c
            int r1 = r4.getLeft()
            float r2 = r5.getX()
            int r2 = (int) r2
            int r1 = r1 + r2
            int r2 = r4.getTop()
            float r3 = r5.getY()
            int r3 = (int) r3
            int r2 = r2 + r3
            boolean r0 = r0.contains(r1, r2)
            if (r0 != 0) goto L30
            r5 = 0
            return r5
        L30:
            boolean r5 = super.onTouchEvent(r5)
            return r5
    }

    @Override
    public void setClickAreaScaleFactor(float r3) {
            r2 = this;
            r2.b = r3
            r0 = 0
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            r0 = 1065353216(0x3f800000, float:1.0)
            if (r3 > 0) goto Lb
            r2.b = r0
        Lb:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r1 = "setClickAreaScaleFactor: "
            r3.<init>(r1)
            float r1 = r2.b
            r3.append(r1)
            float r3 = r2.b
            int r1 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r1 >= 0) goto L26
            com.tkay.basead.ui.CloseImageView$1 r3 = new com.tkay.basead.ui.CloseImageView$1
            r3.<init>(r2)
            r2.post(r3)
            return
        L26:
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto L2d
            com.tkay.core.common.l.u.a(r2, r3)
        L2d:
            return
    }
}
