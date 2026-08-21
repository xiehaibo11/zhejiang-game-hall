package com.bianfeng.customwidgetlib;

public class SuspendIconView extends android.widget.Button {
    private boolean isDrug;
    private float mLastRawX;
    private float mLastRawY;
    private int mRootMeasuredHeight;
    private int mRootMeasuredWidth;
    private int mRootTopY;

    public SuspendIconView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.isDrug = r1
            r0.mRootMeasuredWidth = r1
            r0.mRootMeasuredHeight = r1
            r0.mRootTopY = r1
            return
    }

    public SuspendIconView(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            r3 = 0
            r2.isDrug = r3
            r2.mRootMeasuredWidth = r3
            r2.mRootMeasuredHeight = r3
            r2.mRootTopY = r3
            com.bianfeng.utilslib.ConfigurationUtils r3 = com.bianfeng.utilslib.UtilsSdk.getConfiguration()
            boolean r3 = r3.isLand()
            if (r3 == 0) goto L32
            android.view.ViewPropertyAnimator r3 = r2.animate()
            android.view.animation.BounceInterpolator r4 = new android.view.animation.BounceInterpolator
            r4.<init>()
            android.view.ViewPropertyAnimator r3 = r3.setInterpolator(r4)
            r0 = 500(0x1f4, double:2.47E-321)
            android.view.ViewPropertyAnimator r3 = r3.setDuration(r0)
            r4 = -1028390912(0xffffffffc2b40000, float:-90.0)
            android.view.ViewPropertyAnimator r3 = r3.rotation(r4)
            r3.start()
        L32:
            return
    }

    public SuspendIconView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.isDrug = r1
            r0.mRootMeasuredWidth = r1
            r0.mRootMeasuredHeight = r1
            r0.mRootTopY = r1
            return
    }

    private void getMeasured() {
            r3 = this;
            android.view.ViewParent r0 = r3.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            if (r0 == 0) goto L1f
            r1 = 2
            int[] r1 = new int[r1]
            r0.getLocationInWindow(r1)
            int r2 = r0.getMeasuredHeight()
            r3.mRootMeasuredHeight = r2
            int r0 = r0.getMeasuredWidth()
            r3.mRootMeasuredWidth = r0
            r0 = 1
            r0 = r1[r0]
            r3.mRootTopY = r0
        L1f:
            return
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r1) {
            r0 = this;
            super.dispatchTouchEvent(r1)
            r1 = 1
            return r1
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r13) {
            r12 = this;
            float r0 = r13.getRawX()
            float r1 = r13.getRawY()
            int r2 = r13.getAction()
            r3 = 0
            if (r2 == 0) goto L9d
            r4 = 1
            if (r2 == r4) goto L8f
            r5 = 2
            if (r2 == r5) goto L17
            goto La6
        L17:
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 < 0) goto La6
            int r5 = r12.mRootMeasuredWidth
            float r5 = (float) r5
            int r5 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r5 > 0) goto La6
            int r5 = r12.mRootTopY
            float r6 = (float) r5
            int r6 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r6 < 0) goto La6
            int r6 = r12.mRootMeasuredHeight
            int r6 = r6 + r5
            float r5 = (float) r6
            int r5 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r5 > 0) goto La6
            float r5 = r12.mLastRawX
            float r5 = r0 - r5
            float r6 = r12.mLastRawY
            float r6 = r1 - r6
            boolean r7 = r12.isDrug
            if (r7 != 0) goto L53
            float r7 = r5 * r5
            float r8 = r6 * r6
            float r7 = r7 + r8
            double r7 = (double) r7
            double r7 = java.lang.Math.sqrt(r7)
            r9 = 4611686018427387904(0x4000000000000000, double:2.0)
            int r11 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r11 >= 0) goto L51
            r12.isDrug = r3
            goto L53
        L51:
            r12.isDrug = r4
        L53:
            float r3 = r12.getX()
            float r4 = r12.getY()
            float r3 = r3 + r5
            float r4 = r4 + r6
            int r5 = r12.mRootMeasuredWidth
            int r6 = r12.getWidth()
            int r5 = r5 - r6
            float r5 = (float) r5
            int r6 = r12.mRootMeasuredHeight
            int r7 = r12.getHeight()
            int r6 = r6 - r7
            float r6 = (float) r6
            int r7 = (r3 > r2 ? 1 : (r3 == r2 ? 0 : -1))
            if (r7 >= 0) goto L73
            r3 = 0
            goto L78
        L73:
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L78
            r3 = r5
        L78:
            int r5 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r5 >= 0) goto L7d
            goto L84
        L7d:
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 <= 0) goto L83
            r2 = r6
            goto L84
        L83:
            r2 = r4
        L84:
            r12.setX(r3)
            r12.setY(r2)
            r12.mLastRawX = r0
            r12.mLastRawY = r1
            goto La6
        L8f:
            boolean r0 = r12.isDrug
            if (r0 == 0) goto L94
            goto La6
        L94:
            r0 = 1120403456(0x42c80000, float:100.0)
            r12.setX(r0)
            r12.setY(r0)
            goto La6
        L9d:
            r12.isDrug = r3
            r12.mLastRawX = r0
            r12.mLastRawY = r1
            r12.getMeasured()
        La6:
            boolean r0 = r12.isDrug
            if (r0 == 0) goto Lab
            goto Laf
        Lab:
            boolean r0 = super.onTouchEvent(r13)
        Laf:
            return r0
    }

    public void setRotation(int r4) {
            r3 = this;
            android.view.ViewPropertyAnimator r0 = r3.animate()
            android.view.animation.BounceInterpolator r1 = new android.view.animation.BounceInterpolator
            r1.<init>()
            android.view.ViewPropertyAnimator r0 = r0.setInterpolator(r1)
            r1 = 500(0x1f4, double:2.47E-321)
            android.view.ViewPropertyAnimator r0 = r0.setDuration(r1)
            float r4 = (float) r4
            android.view.ViewPropertyAnimator r4 = r0.rotation(r4)
            r4.start()
            return
    }
}
