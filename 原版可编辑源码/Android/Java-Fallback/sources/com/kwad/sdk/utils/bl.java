package com.kwad.sdk.utils;

public final class bl {
    public android.graphics.Rect aKq;
    public android.graphics.Rect aKr;
    public android.graphics.Point aKs;
    private android.view.View aKt;

    public bl(android.view.View r2) {
            r1 = this;
            r1.<init>()
            android.graphics.Point r0 = new android.graphics.Point
            r0.<init>()
            r1.aKs = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.aKq = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.aKr = r0
            r1.aKt = r2
            return
    }

    public final boolean Ke() {
            r3 = this;
            android.view.View r0 = r3.aKt
            android.graphics.Rect r1 = r3.aKq
            android.graphics.Point r2 = r3.aKs
            boolean r0 = r0.getGlobalVisibleRect(r1, r2)
            android.graphics.Point r1 = r3.aKs
            int r1 = r1.x
            if (r1 != 0) goto L4a
            android.graphics.Point r1 = r3.aKs
            int r1 = r1.y
            if (r1 != 0) goto L4a
            android.graphics.Rect r1 = r3.aKq
            int r1 = r1.height()
            android.view.View r2 = r3.aKt
            int r2 = r2.getHeight()
            if (r1 != r2) goto L4a
            android.graphics.Rect r1 = r3.aKr
            int r1 = r1.height()
            if (r1 == 0) goto L4a
            android.graphics.Rect r1 = r3.aKq
            int r1 = r1.top
            android.graphics.Rect r2 = r3.aKr
            int r2 = r2.top
            int r1 = r1 - r2
            int r1 = java.lang.Math.abs(r1)
            android.view.View r2 = r3.aKt
            int r2 = r2.getHeight()
            int r2 = r2 / 2
            if (r1 <= r2) goto L4a
            android.graphics.Rect r1 = r3.aKq
            android.graphics.Rect r2 = r3.aKr
            r1.set(r2)
        L4a:
            android.graphics.Rect r1 = r3.aKr
            android.graphics.Rect r2 = r3.aKq
            r1.set(r2)
            return r0
    }
}
