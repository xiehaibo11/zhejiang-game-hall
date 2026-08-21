package com.tencent.open.c;

public class a extends android.widget.RelativeLayout {
    private static final java.lang.String a = null;
    private android.graphics.Rect b;
    private boolean c;
    private com.tencent.open.c.a.a d;

    public interface a {
        void a();

        void a(int r1);
    }

    static {
            java.lang.Class<com.tencent.open.c.a> r0 = com.tencent.open.c.a.class
            java.lang.String r0 = r0.getName()
            com.tencent.open.c.a.a = r0
            return
    }

    public a(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            r2 = 0
            r1.b = r2
            r0 = 0
            r1.c = r0
            r1.d = r2
            if (r2 != 0) goto L14
            android.graphics.Rect r2 = new android.graphics.Rect
            r2.<init>()
            r1.b = r2
        L14:
            return
    }

    public void a(com.tencent.open.c.a.a r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    protected void onMeasure(int r5, int r6) {
            r4 = this;
            int r0 = android.view.View.MeasureSpec.getSize(r6)
            android.content.Context r1 = r4.getContext()
            android.app.Activity r1 = (android.app.Activity) r1
            android.view.Window r2 = r1.getWindow()
            android.view.View r2 = r2.getDecorView()
            android.graphics.Rect r3 = r4.b
            r2.getWindowVisibleDisplayFrame(r3)
            android.graphics.Rect r2 = r4.b
            int r2 = r2.top
            android.view.WindowManager r1 = r1.getWindowManager()
            android.view.Display r1 = r1.getDefaultDisplay()
            int r1 = r1.getHeight()
            int r1 = r1 - r2
            int r1 = r1 - r0
            com.tencent.open.c.a$a r2 = r4.d
            if (r2 == 0) goto L4e
            if (r0 == 0) goto L4e
            r0 = 100
            if (r1 <= r0) goto L4b
            android.graphics.Rect r0 = r4.b
            int r0 = r0.height()
            int r0 = java.lang.Math.abs(r0)
            int r1 = r4.getPaddingBottom()
            int r0 = r0 - r1
            int r1 = r4.getPaddingTop()
            int r0 = r0 - r1
            r2.a(r0)
            goto L4e
        L4b:
            r2.a()
        L4e:
            super.onMeasure(r5, r6)
            return
    }
}
