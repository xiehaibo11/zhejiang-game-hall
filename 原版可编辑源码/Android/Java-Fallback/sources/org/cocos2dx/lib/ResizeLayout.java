package org.cocos2dx.lib;

public class ResizeLayout extends android.widget.FrameLayout {
    private boolean mEnableForceDoLayout;


    public ResizeLayout(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.mEnableForceDoLayout = r1
            return
    }

    public ResizeLayout(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.mEnableForceDoLayout = r1
            return
    }

    @Override
    protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
            r0 = this;
            super.onLayout(r1, r2, r3, r4, r5)
            boolean r1 = r0.mEnableForceDoLayout
            if (r1 == 0) goto L16
            android.os.Handler r1 = new android.os.Handler
            r1.<init>()
            org.cocos2dx.lib.ResizeLayout$1 r2 = new org.cocos2dx.lib.ResizeLayout$1
            r2.<init>(r0)
            r3 = 41
            r1.postDelayed(r2, r3)
        L16:
            return
    }

    public void setEnableForceDoLayout(boolean r1) {
            r0 = this;
            r0.mEnableForceDoLayout = r1
            return
    }
}
