package com.tkay.expressad.advanced.view;

public class ATOutNativeAdvancedViewGroup extends android.widget.RelativeLayout {
    private com.tkay.expressad.advanced.d.c a;


    public ATOutNativeAdvancedViewGroup(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ATOutNativeAdvancedViewGroup(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public ATOutNativeAdvancedViewGroup(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    static com.tkay.expressad.advanced.d.c a(com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup r0) {
            com.tkay.expressad.advanced.d.c r0 = r0.a
            return r0
    }

    private void a(int r4) {
            r3 = this;
            com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup$1 r0 = new com.tkay.expressad.advanced.view.ATOutNativeAdvancedViewGroup$1
            r0.<init>(r3, r4)
            r1 = 200(0xc8, double:9.9E-322)
            r3.postDelayed(r0, r1)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            com.tkay.expressad.advanced.d.c r0 = r1.a
            if (r0 == 0) goto L15
            r0 = 1
            r1.a(r0)
            int r0 = r1.getVisibility()
            if (r0 != 0) goto L15
            r0 = 2
            r1.a(r0)
        L15:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r2 = this;
            super.onDetachedFromWindow()
            com.tkay.expressad.advanced.d.c r0 = r2.a
            if (r0 == 0) goto Lb
            r1 = 1
            r0.e(r1)
        Lb:
            return
    }

    @Override
    protected void onVisibilityChanged(android.view.View r1, int r2) {
            r0 = this;
            super.onVisibilityChanged(r1, r2)
            r1 = 2
            if (r2 != 0) goto L14
            r0.a(r1)
            android.view.ViewParent r1 = r0.getParent()
            if (r1 == 0) goto L1b
            r1 = 1
            r0.a(r1)
            return
        L14:
            com.tkay.expressad.advanced.d.c r2 = r0.a
            if (r2 == 0) goto L1b
            r2.e(r1)
        L1b:
            return
    }

    public void setProvider(com.tkay.expressad.advanced.d.c r1) {
            r0 = this;
            r0.a = r1
            return
    }
}
