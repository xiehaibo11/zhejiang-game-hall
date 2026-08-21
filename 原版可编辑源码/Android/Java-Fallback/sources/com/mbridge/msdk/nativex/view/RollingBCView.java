package com.mbridge.msdk.nativex.view;

public class RollingBCView extends android.support.v4.view.ViewPager {
    private boolean a;
    private com.mbridge.msdk.nativex.listener.RollingPagerListenrt b;
    private com.mbridge.msdk.out.NativeListener.FilpListener c;

    public RollingBCView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 1
            r0.a = r1
            com.mbridge.msdk.nativex.listener.RollingPagerListenrt r1 = new com.mbridge.msdk.nativex.listener.RollingPagerListenrt
            r1.<init>()
            r0.b = r1
            return
    }

    @Override
    protected void onMeasure(int r5, int r6) {
            r4 = this;
            int r0 = android.view.View.MeasureSpec.getMode(r6)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 != r1) goto L3b
            r6 = 0
            r0 = r6
            r1 = r0
        Lb:
            int r2 = r4.getChildCount()
            if (r0 >= r2) goto L35
            android.view.View r2 = r4.getChildAt(r0)
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r6, r6)
            r2.measure(r5, r3)
            int r2 = r2.getMeasuredHeight()
            if (r2 <= r1) goto L23
            r1 = r2
        L23:
            r3 = 10
            if (r2 <= r3) goto L32
            boolean r2 = r4.a
            if (r2 == 0) goto L32
            com.mbridge.msdk.nativex.listener.RollingPagerListenrt r2 = r4.b
            r2.a(r6)
            r4.a = r6
        L32:
            int r0 = r0 + 1
            goto Lb
        L35:
            r6 = 1073741824(0x40000000, float:2.0)
            int r6 = android.view.View.MeasureSpec.makeMeasureSpec(r1, r6)
        L3b:
            super.onMeasure(r5, r6)
            return
    }

    @Override
    protected void onWindowVisibilityChanged(int r1) {
            r0 = this;
            super.onWindowVisibilityChanged(r1)
            return
    }

    public void setData(java.util.List<com.mbridge.msdk.out.Frame> r2, android.content.Context r3, java.lang.String r4, com.mbridge.msdk.nativex.view.MBNativeRollView.a r5) {
            r1 = this;
            if (r2 == 0) goto L35
            int r0 = r2.size()
            if (r0 == 0) goto L35
            com.mbridge.msdk.nativex.adapter.RollingAdapter r0 = new com.mbridge.msdk.nativex.adapter.RollingAdapter
            r0.<init>(r2)
            if (r5 == 0) goto L12
            r0.a(r5)
        L12:
            r1.setAdapter(r0)
            com.mbridge.msdk.nativex.listener.RollingPagerListenrt r5 = r1.b
            r5.a(r2, r3, r4)
            com.mbridge.msdk.out.NativeListener$FilpListener r2 = r1.c
            if (r2 == 0) goto L23
            com.mbridge.msdk.nativex.listener.RollingPagerListenrt r3 = r1.b
            r3.a(r2)
        L23:
            com.mbridge.msdk.nativex.listener.RollingPagerListenrt r2 = r1.b
            r1.setOnPageChangeListener(r2)
            boolean r2 = r1.a
            if (r2 == 0) goto L34
            com.mbridge.msdk.nativex.listener.RollingPagerListenrt r2 = r1.b
            r3 = 0
            r2.a(r3)
            r1.a = r3
        L34:
            return
        L35:
            java.lang.NegativeArraySizeException r2 = new java.lang.NegativeArraySizeException
            java.lang.String r3 = "ad date is null or size is 0"
            r2.<init>(r3)
            throw r2
    }

    public void setFilpListening(com.mbridge.msdk.out.NativeListener.FilpListener r1) {
            r0 = this;
            r0.c = r1
            return
    }
}
