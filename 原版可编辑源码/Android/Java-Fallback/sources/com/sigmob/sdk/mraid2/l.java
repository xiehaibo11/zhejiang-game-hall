package com.sigmob.sdk.mraid2;

public class l extends android.widget.ScrollView implements com.sigmob.sdk.mraid2.i {
    public static final float c = 1000.0f;
    private static final java.lang.String d = "PageScrollView";
    private static final int e = 1000;
    public final int a;
    public final int b;
    private int f;
    private long g;
    private com.sigmob.sdk.mraid2.b.c h;
    private int i;



    public l(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public l(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public l(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.content.res.Resources r1 = r0.getResources()
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            int r1 = r1.heightPixels
            r0.a = r1
            int r1 = r1 / 2
            r0.b = r1
            r1 = 0
            r0.i = r1
            return
    }

    static int a(com.sigmob.sdk.mraid2.l r0) {
            int r0 = r0.i
            return r0
    }

    static int a(com.sigmob.sdk.mraid2.l r0, int r1) {
            r0.i = r1
            return r1
    }

    private boolean a(int r9) {
            r8 = this;
            int r0 = r8.a
            int r1 = r9 % r0
            int r0 = r9 / r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r1)
            java.lang.String r3 = ":-----goPage------:"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            java.lang.String r2 = "PageScrollView"
            android.util.Log.d(r2, r0)
            int r9 = r9 * 1000
            long r2 = (long) r9
            long r4 = java.lang.System.currentTimeMillis()
            long r6 = r8.g
            long r4 = r4 - r6
            long r2 = r2 / r4
            float r9 = (float) r2
            r0 = 1148846080(0x447a0000, float:1000.0)
            int r0 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            r2 = 1
            if (r0 >= 0) goto L43
            r0 = -998637568(0xffffffffc47a0000, float:-1000.0)
            int r9 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r9 <= 0) goto L43
            int r9 = r8.b
            if (r1 >= r9) goto L3e
            r9 = 0
            return r9
        L3e:
            int r0 = r8.a
            int r0 = r0 - r9
            if (r1 <= r0) goto L43
        L43:
            return r2
    }

    static com.sigmob.sdk.mraid2.b.c b(com.sigmob.sdk.mraid2.l r0) {
            com.sigmob.sdk.mraid2.b$c r0 = r0.h
            return r0
    }

    @Override
    public void a(int r1, int r2) {
            r0 = this;
            r0.f = r2
            long r1 = java.lang.System.currentTimeMillis()
            r0.g = r1
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            int r2 = r0.i
            r1.append(r2)
            java.lang.String r2 = "--------onTouchStart--------"
            r1.append(r2)
            int r2 = r0.f
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "PageScrollView"
            android.util.Log.d(r2, r1)
            return
    }

    @Override
    public void a(com.sigmob.sdk.mraid2.e r7, int r8, int r9) {
            r6 = this;
            int r8 = r6.f
            int r3 = r8 - r9
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            int r9 = r6.i
            r8.append(r9)
            java.lang.String r9 = "-----------onTouchEnd--------:"
            r8.append(r9)
            r8.append(r3)
            java.lang.String r8 = r8.toString()
            java.lang.String r9 = "PageScrollView"
            android.util.Log.d(r9, r8)
            boolean r2 = r6.a(r3)
            r8 = 0
            android.view.View r8 = r6.getChildAt(r8)
            int r4 = r8.getHeight()
            com.sigmob.sdk.mraid2.l$2 r8 = new com.sigmob.sdk.mraid2.l$2
            r0 = r8
            r1 = r6
            r5 = r7
            r0.<init>(r1, r2, r3, r4, r5)
            r6.post(r8)
            return
    }

    @Override
    public void b(int r2, int r3) {
            r1 = this;
            int r2 = r1.f
            int r2 = r2 - r3
            r3 = 0
            android.view.View r3 = r1.getChildAt(r3)
            int r3 = r3.getHeight()
            com.sigmob.sdk.mraid2.l$1 r0 = new com.sigmob.sdk.mraid2.l$1
            r0.<init>(r1, r2, r3)
            r1.post(r0)
            return
    }

    @Override
    public void fling(int r1) {
            r0 = this;
            r1 = 0
            super.fling(r1)
            return
    }

    @Override
    public android.view.ViewGroup getView() {
            r0 = this;
            return r0
    }

    @Override
    public void setPageChangedListener(com.sigmob.sdk.mraid2.b.c r1) {
            r0 = this;
            r0.h = r1
            return
    }
}
