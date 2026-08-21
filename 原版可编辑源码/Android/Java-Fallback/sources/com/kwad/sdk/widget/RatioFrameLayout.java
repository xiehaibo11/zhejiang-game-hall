package com.kwad.sdk.widget;

public class RatioFrameLayout extends android.widget.FrameLayout {
    private double aqQ;

    public RatioFrameLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RatioFrameLayout(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public RatioFrameLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.aqQ = r1
            return
    }

    public double getRatio() {
            r2 = this;
            double r0 = r2.aqQ
            return r0
    }

    @Override
    protected void onMeasure(int r5, int r6) {
            r4 = this;
            double r0 = r4.aqQ
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2a
            int r6 = android.view.View.MeasureSpec.getSize(r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "widthSize:"
            r0.<init>(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "RatioFrameLayout"
            android.util.Log.d(r1, r0)
            double r0 = (double) r6
            double r2 = r4.aqQ
            double r0 = r0 * r2
            int r6 = (int) r0
            r0 = 1073741824(0x40000000, float:2.0)
            int r6 = android.view.View.MeasureSpec.makeMeasureSpec(r6, r0)
        L2a:
            super.onMeasure(r5, r6)
            return
    }

    public void setRatio(double r1) {
            r0 = this;
            r0.aqQ = r1
            return
    }
}
