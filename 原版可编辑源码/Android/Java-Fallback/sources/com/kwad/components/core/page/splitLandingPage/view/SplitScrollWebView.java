package com.kwad.components.core.page.splitLandingPage.view;

public class SplitScrollWebView extends com.kwad.sdk.core.webview.KsAdWebView {
    private boolean OE;
    private com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView.a OF;
    private float OG;
    private boolean OH;
    private int Oh;

    public interface a {
        void d(float r1);

        boolean pq();
    }

    public SplitScrollWebView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.OE = r1
            r0.pk()
            return
    }

    public SplitScrollWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.OE = r1
            r0.pk()
            return
    }

    public SplitScrollWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.OE = r1
            r0.pk()
            return
    }

    private void pk() {
            r1 = this;
            r0 = 0
            r1.Oh = r0
            return
    }

    @Override
    protected void onMeasure(int r2, int r3) {
            r1 = this;
            int r0 = r1.Oh
            if (r0 == 0) goto L39
            boolean r3 = com.kwad.components.core.t.d.qn()
            if (r3 == 0) goto L13
            android.content.Context r3 = r1.getContext()
            int r3 = com.kwad.sdk.d.a.a.getStatusBarHeight(r3)
            goto L14
        L13:
            r3 = 0
        L14:
            android.content.Context r0 = r1.getContext()
            boolean r0 = r0 instanceof android.app.Activity
            if (r0 == 0) goto L27
            android.content.Context r0 = r1.getContext()
            android.app.Activity r0 = (android.app.Activity) r0
            int r0 = com.kwad.sdk.d.a.a.e(r0)
            goto L2f
        L27:
            android.content.Context r0 = r1.getContext()
            int r0 = com.kwad.sdk.d.a.a.getScreenHeight(r0)
        L2f:
            int r0 = r0 - r3
            int r3 = r1.Oh
            int r0 = r0 - r3
            r3 = 1073741824(0x40000000, float:2.0)
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r3)
        L39:
            super.onMeasure(r2, r3)
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r6) {
            r5 = this;
            android.view.MotionEvent r0 = android.view.MotionEvent.obtain(r6)
            boolean r1 = r5.OE
            if (r1 == 0) goto Ld
            boolean r6 = super.onTouchEvent(r0)
            return r6
        Ld:
            int r1 = android.support.v4.view.MotionEventCompat.getActionMasked(r6)
            float r2 = r6.getY()
            r3 = 0
            if (r1 == 0) goto L53
            r6 = 1
            if (r1 == r6) goto L38
            r4 = 2
            if (r1 == r4) goto L22
            r0 = 3
            if (r1 == r0) goto L38
            goto L5b
        L22:
            float r1 = r5.OG
            float r3 = r1 - r2
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView$a r4 = r5.OF
            if (r4 == 0) goto L33
            int r1 = (r2 > r1 ? 1 : (r2 == r1 ? 0 : -1))
            if (r1 > 0) goto L33
            r5.OH = r6
            r4.d(r3)
        L33:
            boolean r3 = super.onTouchEvent(r0)
            goto L5b
        L38:
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView$a r0 = r5.OF
            if (r0 == 0) goto L5b
            float r0 = r5.OG
            float r0 = r0 - r2
            r1 = 0
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 >= 0) goto L48
            boolean r0 = r5.OH
            if (r0 == 0) goto L5b
        L48:
            com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView$a r0 = r5.OF
            boolean r0 = r0.pq()
            if (r0 == 0) goto L5b
            r5.OE = r6
            goto L5b
        L53:
            r5.OG = r2
            r5.OH = r3
            boolean r3 = super.onTouchEvent(r6)
        L5b:
            return r3
    }

    public void setDisableAnimation(boolean r1) {
            r0 = this;
            r0.OE = r1
            return
    }

    public void setSplitScrollWebViewListener(com.kwad.components.core.page.splitLandingPage.view.SplitScrollWebView.a r1) {
            r0 = this;
            r0.OF = r1
            return
    }
}
