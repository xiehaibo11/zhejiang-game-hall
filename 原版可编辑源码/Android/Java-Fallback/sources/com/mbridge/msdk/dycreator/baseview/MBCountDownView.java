package com.mbridge.msdk.dycreator.baseview;

public class MBCountDownView extends com.mbridge.msdk.dycreator.baseview.MBTextView {
    private com.mbridge.msdk.f.a.b a;
    private com.mbridge.msdk.dycreator.baseview.MBCountDownView b;


    public MBCountDownView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.b = r0
            return
    }

    public MBCountDownView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.b = r0
            return
    }

    public MBCountDownView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.b = r0
            return
    }

    static com.mbridge.msdk.dycreator.baseview.MBCountDownView a(com.mbridge.msdk.dycreator.baseview.MBCountDownView r0) {
            com.mbridge.msdk.dycreator.baseview.MBCountDownView r0 = r0.b
            return r0
    }

    static com.mbridge.msdk.f.a.b b(com.mbridge.msdk.dycreator.baseview.MBCountDownView r0) {
            com.mbridge.msdk.f.a.b r0 = r0.a
            return r0
    }

    public void initView(java.lang.String r4, java.lang.String r5, int r6) {
            r3 = this;
            com.mbridge.msdk.f.a.b r0 = new com.mbridge.msdk.f.a.b
            r0.<init>()
            int r6 = r6 * 1000
            long r1 = (long) r6
            com.mbridge.msdk.f.a.b r6 = r0.b(r1)
            r0 = 1000(0x3e8, double:4.94E-321)
            com.mbridge.msdk.f.a.b r6 = r6.a(r0)
            com.mbridge.msdk.dycreator.baseview.MBCountDownView$1 r0 = new com.mbridge.msdk.dycreator.baseview.MBCountDownView$1
            r0.<init>(r3, r5, r4)
            com.mbridge.msdk.f.a.b r4 = r6.a(r0)
            r3.a = r4
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            com.mbridge.msdk.f.a.b r0 = r1.a
            if (r0 == 0) goto La
            r0.a()
        La:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            com.mbridge.msdk.f.a.b r0 = r1.a
            if (r0 == 0) goto La
            r0.b()
        La:
            return
    }
}
