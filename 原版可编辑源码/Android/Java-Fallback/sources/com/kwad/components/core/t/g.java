package com.kwad.components.core.t;

public final class g {
    public static void a(com.kwad.components.core.widget.e r4, android.view.ViewGroup r5) {
            if (r4 == 0) goto L26
            if (r5 != 0) goto L5
            goto L26
        L5:
            int r0 = r5.getChildCount()
            r1 = 0
        La:
            if (r1 >= r0) goto L26
            android.view.View r2 = r5.getChildAt(r1)
            boolean r3 = r2 instanceof com.kwad.components.core.widget.d
            if (r3 == 0) goto L1a
            com.kwad.components.core.widget.d r2 = (com.kwad.components.core.widget.d) r2
            r2.a(r4)
            goto L23
        L1a:
            boolean r3 = r2 instanceof android.view.ViewGroup
            if (r3 == 0) goto L23
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            a(r4, r2)
        L23:
            int r1 = r1 + 1
            goto La
        L26:
            return
    }

    public static void b(com.kwad.components.core.widget.e r1, android.graphics.drawable.Drawable r2) {
            boolean r0 = r2 instanceof android.graphics.drawable.ShapeDrawable
            if (r0 == 0) goto L12
            android.graphics.drawable.ShapeDrawable r2 = (android.graphics.drawable.ShapeDrawable) r2
            android.graphics.Paint r2 = r2.getPaint()
            int r1 = r1.sv()
            r2.setColor(r1)
            return
        L12:
            boolean r0 = r2 instanceof android.graphics.drawable.ColorDrawable
            if (r0 == 0) goto L20
            android.graphics.drawable.ColorDrawable r2 = (android.graphics.drawable.ColorDrawable) r2
            int r1 = r1.sv()
            r2.setColor(r1)
            return
        L20:
            boolean r0 = r2 instanceof android.graphics.drawable.GradientDrawable
            if (r0 == 0) goto L2d
            android.graphics.drawable.GradientDrawable r2 = (android.graphics.drawable.GradientDrawable) r2
            int r1 = r1.sv()
            r2.setColor(r1)
        L2d:
            return
    }
}
