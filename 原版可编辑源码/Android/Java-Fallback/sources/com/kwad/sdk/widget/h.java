package com.kwad.sdk.widget;

public final class h {
    private boolean mClipBackground;
    private com.kwad.sdk.widget.h.a mCornerConf;
    private android.graphics.Paint mPaint;
    private android.graphics.Path mPath;
    private float mRadius;
    private android.graphics.RectF mRectF;
    public float[] radiusArray;

    public static class a {
        private boolean bottomLeft;
        private boolean leftTop;
        private boolean rightBottom;
        private boolean topRight;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.leftTop = r0
                r1.topRight = r0
                r1.rightBottom = r0
                r1.bottomLeft = r0
                return
        }

        public final com.kwad.sdk.widget.h.a bS(boolean r1) {
                r0 = this;
                r0.leftTop = r1
                return r0
        }

        public final com.kwad.sdk.widget.h.a bT(boolean r1) {
                r0 = this;
                r0.topRight = r1
                return r0
        }

        public final com.kwad.sdk.widget.h.a bU(boolean r1) {
                r0 = this;
                r0.rightBottom = r1
                return r0
        }

        public final com.kwad.sdk.widget.h.a bV(boolean r1) {
                r0 = this;
                r0.bottomLeft = r1
                return r0
        }

        public final boolean isBottomLeft() {
                r1 = this;
                boolean r0 = r1.bottomLeft
                return r0
        }

        public final boolean isLeftTop() {
                r1 = this;
                boolean r0 = r1.leftTop
                return r0
        }

        public final boolean isRightBottom() {
                r1 = this;
                boolean r0 = r1.rightBottom
                return r0
        }

        public final boolean isTopRight() {
                r1 = this;
                boolean r0 = r1.topRight
                return r0
        }

        public final void setAllCorner(boolean r1) {
                r0 = this;
                r0.leftTop = r1
                r0.topRight = r1
                r0.rightBottom = r1
                r0.bottomLeft = r1
                return
        }
    }

    public h() {
            r1 = this;
            r1.<init>()
            r0 = 8
            float[] r0 = new float[r0]
            r1.radiusArray = r0
            com.kwad.sdk.widget.h$a r0 = new com.kwad.sdk.widget.h$a
            r0.<init>()
            r1.mCornerConf = r0
            return
    }

    public h(com.kwad.sdk.widget.h.a r2) {
            r1 = this;
            r1.<init>()
            r0 = 8
            float[] r0 = new float[r0]
            r1.radiusArray = r0
            r1.mCornerConf = r2
            return
    }

    private android.graphics.Path getPath() {
            r4 = this;
            android.graphics.Path r0 = r4.mPath     // Catch: java.lang.Exception -> L5
            r0.reset()     // Catch: java.lang.Exception -> L5
        L5:
            float r0 = r4.mRadius
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto Lf
            float[] r0 = r4.radiusArray
            goto L13
        Lf:
            float[] r0 = r4.getRadius()
        L13:
            android.graphics.Path r1 = r4.mPath
            android.graphics.RectF r2 = r4.mRectF
            android.graphics.Path$Direction r3 = android.graphics.Path.Direction.CW
            r1.addRoundRect(r2, r0, r3)
            android.graphics.Path r0 = r4.mPath
            return r0
    }

    private float[] getRadius() {
            r4 = this;
            float[] r0 = r4.radiusArray
            com.kwad.sdk.widget.h$a r1 = r4.mCornerConf
            boolean r1 = r1.isLeftTop()
            r2 = 0
            if (r1 == 0) goto Le
            float r1 = r4.mRadius
            goto Lf
        Le:
            r1 = r2
        Lf:
            r3 = 0
            r0[r3] = r1
            float[] r0 = r4.radiusArray
            r1 = 1
            com.kwad.sdk.widget.h$a r3 = r4.mCornerConf
            boolean r3 = r3.isLeftTop()
            if (r3 == 0) goto L20
            float r3 = r4.mRadius
            goto L21
        L20:
            r3 = r2
        L21:
            r0[r1] = r3
            float[] r0 = r4.radiusArray
            r1 = 2
            com.kwad.sdk.widget.h$a r3 = r4.mCornerConf
            boolean r3 = r3.isTopRight()
            if (r3 == 0) goto L31
            float r3 = r4.mRadius
            goto L32
        L31:
            r3 = r2
        L32:
            r0[r1] = r3
            float[] r0 = r4.radiusArray
            r1 = 3
            com.kwad.sdk.widget.h$a r3 = r4.mCornerConf
            boolean r3 = r3.isTopRight()
            if (r3 == 0) goto L42
            float r3 = r4.mRadius
            goto L43
        L42:
            r3 = r2
        L43:
            r0[r1] = r3
            float[] r0 = r4.radiusArray
            r1 = 4
            com.kwad.sdk.widget.h$a r3 = r4.mCornerConf
            boolean r3 = r3.isRightBottom()
            if (r3 == 0) goto L53
            float r3 = r4.mRadius
            goto L54
        L53:
            r3 = r2
        L54:
            r0[r1] = r3
            float[] r0 = r4.radiusArray
            r1 = 5
            com.kwad.sdk.widget.h$a r3 = r4.mCornerConf
            boolean r3 = r3.isRightBottom()
            if (r3 == 0) goto L64
            float r3 = r4.mRadius
            goto L65
        L64:
            r3 = r2
        L65:
            r0[r1] = r3
            float[] r0 = r4.radiusArray
            r1 = 6
            com.kwad.sdk.widget.h$a r3 = r4.mCornerConf
            boolean r3 = r3.isBottomLeft()
            if (r3 == 0) goto L75
            float r3 = r4.mRadius
            goto L76
        L75:
            r3 = r2
        L76:
            r0[r1] = r3
            float[] r0 = r4.radiusArray
            r1 = 7
            com.kwad.sdk.widget.h$a r3 = r4.mCornerConf
            boolean r3 = r3.isBottomLeft()
            if (r3 == 0) goto L85
            float r2 = r4.mRadius
        L85:
            r0[r1] = r2
            float[] r0 = r4.radiusArray
            return r0
    }

    public final void afterDispatchDraw(android.graphics.Canvas r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto Lf
            android.graphics.Path r0 = r2.getPath()
            android.graphics.Paint r1 = r2.mPaint
            r3.drawPath(r0, r1)
        Lf:
            r3.restore()
            return
    }

    public final void afterDraw(android.graphics.Canvas r3) {
            r2 = this;
            boolean r0 = r2.mClipBackground
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L14
            android.graphics.Path r0 = r2.getPath()
            android.graphics.Paint r1 = r2.mPaint
            r3.drawPath(r0, r1)
        L14:
            r3.restore()
            return
    }

    public final void beforeDispatchDraw(android.graphics.Canvas r4) {
            r3 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L11
            r4.save()
            android.graphics.Path r0 = r3.getPath()
            r4.clipPath(r0)
            return
        L11:
            android.graphics.RectF r0 = r3.mRectF
            r1 = 0
            r2 = 31
            r4.saveLayer(r0, r1, r2)
            return
    }

    public final void beforeDraw(android.graphics.Canvas r4) {
            r3 = this;
            boolean r0 = r3.mClipBackground
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L14
            android.graphics.RectF r0 = r3.mRectF
            r1 = 0
            r2 = 31
            r4.saveLayer(r0, r1, r2)
            return
        L14:
            r4.save()
            android.graphics.Path r0 = r3.getPath()
            r4.clipPath(r0)
            return
    }

    public final com.kwad.sdk.widget.h.a getCornerConf() {
            r1 = this;
            com.kwad.sdk.widget.h$a r0 = r1.mCornerConf
            return r0
    }

    public final void initAttrs(android.content.Context r6, android.util.AttributeSet r7) {
            r5 = this;
            r0 = 1
            if (r7 == 0) goto L2e
            int r1 = com.kwad.sdk.R.attr.ksad_radius
            int r2 = com.kwad.sdk.R.attr.ksad_clipBackground
            r3 = 2
            int[] r3 = new int[r3]
            r4 = 0
            r3[r4] = r1
            r3[r0] = r2
            java.util.Arrays.sort(r3)
            android.content.res.TypedArray r6 = r6.obtainStyledAttributes(r7, r3)
            int r7 = java.util.Arrays.binarySearch(r3, r1)
            int r7 = r6.getDimensionPixelOffset(r7, r4)
            float r7 = (float) r7
            r5.mRadius = r7
            int r7 = java.util.Arrays.binarySearch(r3, r2)
            boolean r7 = r6.getBoolean(r7, r0)
            r5.mClipBackground = r7
            r6.recycle()
        L2e:
            android.graphics.Path r6 = new android.graphics.Path
            r6.<init>()
            r5.mPath = r6
            android.graphics.Paint r6 = new android.graphics.Paint
            r6.<init>(r0)
            r5.mPaint = r6
            android.graphics.RectF r6 = new android.graphics.RectF
            r6.<init>()
            r5.mRectF = r6
            android.graphics.Paint r6 = r5.mPaint
            android.graphics.PorterDuffXfermode r7 = new android.graphics.PorterDuffXfermode
            android.graphics.PorterDuff$Mode r0 = android.graphics.PorterDuff.Mode.DST_IN
            r7.<init>(r0)
            r6.setXfermode(r7)
            return
    }

    public final void onSizeChanged(int r3, int r4) {
            r2 = this;
            android.graphics.RectF r0 = r2.mRectF
            float r3 = (float) r3
            float r4 = (float) r4
            r1 = 0
            r0.set(r1, r1, r3, r4)
            return
    }

    public final void setRadius(float r1) {
            r0 = this;
            r0.mRadius = r1
            return
    }

    public final void setRadius(float[] r1) {
            r0 = this;
            r0.radiusArray = r1
            return
    }
}
