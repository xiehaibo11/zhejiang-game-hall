package com.mbridge.msdk.nativex.adapter;

public class RollingAdapter extends android.support.v4.view.PagerAdapter {
    private java.util.List<com.mbridge.msdk.out.Frame> a;
    private java.util.List<android.view.View> b;
    private com.mbridge.msdk.nativex.view.MBNativeRollView.a c;

    public RollingAdapter(java.util.List<com.mbridge.msdk.out.Frame> r2) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.a = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.b = r0
            r1.a = r2
            return
    }

    public final void a(com.mbridge.msdk.nativex.view.MBNativeRollView.a r1) {
            r0 = this;
            r0.c = r1
            return
    }

    @Override
    public void destroyItem(android.view.ViewGroup r1, int r2, java.lang.Object r3) {
            r0 = this;
            java.util.List<android.view.View> r3 = r0.b
            java.lang.Object r2 = r3.get(r2)
            android.view.View r2 = (android.view.View) r2
            r1.removeView(r2)
            return
    }

    @Override
    public int getCount() {
            r1 = this;
            java.util.List<com.mbridge.msdk.out.Frame> r0 = r1.a
            int r0 = r0.size()
            return r0
    }

    @Override
    public java.lang.Object instantiateItem(android.view.ViewGroup r3, int r4) {
            r2 = this;
            com.mbridge.msdk.nativex.view.MBNativeRollView$a r0 = r2.c
            if (r0 == 0) goto L27
            java.util.List<com.mbridge.msdk.out.Frame> r0 = r2.a
            if (r0 == 0) goto L27
            int r0 = r0.size()
            if (r0 <= 0) goto L27
            com.mbridge.msdk.nativex.view.MBNativeRollView$a r0 = r2.c
            java.util.List<com.mbridge.msdk.out.Frame> r1 = r2.a
            java.lang.Object r1 = r1.get(r4)
            com.mbridge.msdk.out.Frame r1 = (com.mbridge.msdk.out.Frame) r1
            android.view.View r4 = r0.a(r1, r4)
            if (r4 == 0) goto L27
            java.util.List<android.view.View> r0 = r2.b
            r0.add(r4)
            r3.addView(r4)
            return r4
        L27:
            r3 = 0
            return r3
    }

    @Override
    public boolean isViewFromObject(android.view.View r1, java.lang.Object r2) {
            r0 = this;
            if (r1 != r2) goto L4
            r1 = 1
            goto L5
        L4:
            r1 = 0
        L5:
            return r1
    }
}
