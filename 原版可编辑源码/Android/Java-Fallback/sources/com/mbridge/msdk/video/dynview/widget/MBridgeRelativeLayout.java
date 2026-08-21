package com.mbridge.msdk.video.dynview.widget;

public class MBridgeRelativeLayout extends android.widget.RelativeLayout {
    private com.mbridge.msdk.video.dynview.moffer.d a;
    private boolean b;
    private android.animation.AnimatorSet c;
    private boolean d;
    private com.mbridge.msdk.video.dynview.moffer.b e;

    public MBridgeRelativeLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeRelativeLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MBridgeRelativeLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            android.animation.AnimatorSet r0 = r1.c
            if (r0 == 0) goto Lf
            r0.start()     // Catch: java.lang.Exception -> Lb
            goto Lf
        Lb:
            r0 = move-exception
            r0.printStackTrace()
        Lf:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            boolean r0 = r2.b
            if (r0 != 0) goto L11
            com.mbridge.msdk.video.dynview.moffer.d r0 = r2.a
            if (r0 == 0) goto L11
            r1 = 1
            r2.b = r1
            r0.a()
        L11:
            android.animation.AnimatorSet r0 = r2.c
            if (r0 == 0) goto L1d
            r0.cancel()     // Catch: java.lang.Exception -> L19
            goto L1d
        L19:
            r0 = move-exception
            r0.printStackTrace()
        L1d:
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            boolean r1 = r1 instanceof com.mbridge.msdk.video.dynview.widget.MBridgeRelativeLayout
            if (r1 == 0) goto L17
            if (r2 != 0) goto L17
            com.mbridge.msdk.video.dynview.moffer.b r1 = r0.e
            if (r1 == 0) goto L17
            boolean r2 = r0.d
            if (r2 != 0) goto L17
            r2 = 1
            r0.d = r2
            r1.a()
        L17:
            return
    }

    public void setAnimatorSet(android.animation.AnimatorSet r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setMoreOfferCacheReportCallBack(com.mbridge.msdk.video.dynview.moffer.b r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setMoreOfferShowFailedCallBack(com.mbridge.msdk.video.dynview.moffer.d r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
