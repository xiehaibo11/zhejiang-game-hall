package com.tencent.open.c;

public class c extends android.widget.FrameLayout {
    public c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void a(android.view.WindowInsets r5) {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 >= r1) goto L7
            return
        L7:
            if (r5 != 0) goto La
            return
        La:
            android.view.DisplayCutout r5 = r5.getDisplayCutout()
            if (r5 != 0) goto L11
            return
        L11:
            java.util.List r0 = r5.getBoundingRects()
            if (r0 == 0) goto L42
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L1e
            goto L42
        L1e:
            int r0 = r5.getSafeInsetLeft()
            r1 = 0
            int r0 = java.lang.Math.max(r0, r1)
            int r2 = r5.getSafeInsetTop()
            int r2 = java.lang.Math.max(r2, r1)
            int r3 = r5.getSafeInsetRight()
            int r3 = java.lang.Math.max(r3, r1)
            int r5 = r5.getSafeInsetBottom()
            int r5 = java.lang.Math.max(r5, r1)
            r4.setPadding(r0, r2, r3, r5)
        L42:
            return
    }

    @Override
    public android.view.WindowInsets onApplyWindowInsets(android.view.WindowInsets r1) {
            r0 = this;
            r0.a(r1)
            android.view.WindowInsets r1 = super.onApplyWindowInsets(r1)
            return r1
    }
}
