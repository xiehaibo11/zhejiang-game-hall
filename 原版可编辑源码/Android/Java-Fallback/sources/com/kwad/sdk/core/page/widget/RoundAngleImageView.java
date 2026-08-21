package com.kwad.sdk.core.page.widget;

public class RoundAngleImageView extends android.widget.ImageView {
    private float[] aqv;
    private android.graphics.Path mPath;
    private android.graphics.RectF mRectF;

    public RoundAngleImageView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RoundAngleImageView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public RoundAngleImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.graphics.Path r1 = new android.graphics.Path
            r1.<init>()
            r0.mPath = r1
            android.graphics.RectF r1 = new android.graphics.RectF
            r1.<init>()
            r0.mRectF = r1
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r7) {
            r6 = this;
            float[] r0 = r6.aqv
            if (r0 == 0) goto L55
            int r0 = r0.length
            r1 = 8
            if (r0 == r1) goto La
            goto L55
        La:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            r2 = 1
            if (r0 >= r1) goto L15
            r0 = 0
            r6.setLayerType(r2, r0)
        L15:
            int r0 = r6.getMeasuredWidth()
            int r1 = r6.getMeasuredHeight()
            float[] r3 = r6.aqv
            r4 = 0
            r4 = r3[r4]
            r5 = 3
            r5 = r3[r5]
            float r4 = r4 + r5
            r2 = r3[r2]
            r5 = 7
            r3 = r3[r5]
            float r2 = r2 + r3
            android.graphics.Path r3 = r6.mPath
            r3.rewind()
            float r0 = (float) r0
            int r3 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r3 < 0) goto L51
            float r1 = (float) r1
            int r2 = (r1 > r2 ? 1 : (r1 == r2 ? 0 : -1))
            if (r2 <= 0) goto L51
            android.graphics.RectF r2 = r6.mRectF
            r3 = 0
            r2.set(r3, r3, r0, r1)
            android.graphics.Path r0 = r6.mPath
            android.graphics.RectF r1 = r6.mRectF
            float[] r2 = r6.aqv
            android.graphics.Path$Direction r3 = android.graphics.Path.Direction.CW
            r0.addRoundRect(r1, r2, r3)
            android.graphics.Path r0 = r6.mPath
            r7.clipPath(r0)
        L51:
            super.onDraw(r7)
            return
        L55:
            super.onDraw(r7)
            return
    }

    public void setRadius(float r4) {
            r3 = this;
            r0 = 8
            float[] r0 = new float[r0]
            r3.aqv = r0
            r0 = 0
        L7:
            float[] r1 = r3.aqv
            int r2 = r1.length
            if (r0 >= r2) goto L11
            r1[r0] = r4
            int r0 = r0 + 1
            goto L7
        L11:
            return
    }

    public void setRadius(float[] r4) {
            r3 = this;
            r0 = 8
            float[] r0 = new float[r0]
            r3.aqv = r0
            r0 = 0
        L7:
            float[] r1 = r3.aqv
            int r2 = r1.length
            if (r0 >= r2) goto L13
            r2 = r4[r0]
            r1[r0] = r2
            int r0 = r0 + 1
            goto L7
        L13:
            return
    }
}
