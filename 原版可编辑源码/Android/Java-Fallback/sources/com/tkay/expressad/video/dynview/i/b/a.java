package com.tkay.expressad.video.dynview.i.b;

public final class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.view.View r4, float r5, float r6, java.lang.String r7, java.lang.String[] r8, android.graphics.drawable.GradientDrawable.Orientation r9) {
            if (r4 == 0) goto L36
            r0 = 2
            int[] r1 = new int[r0]
            r2 = 0
        L6:
            if (r2 >= r0) goto L13
            r3 = r8[r2]
            int r3 = android.graphics.Color.parseColor(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L6
        L13:
            android.graphics.drawable.GradientDrawable r8 = new android.graphics.drawable.GradientDrawable
            r8.<init>(r9, r1)
            android.content.Context r9 = r4.getContext()
            int r6 = com.tkay.expressad.foundation.h.t.b(r9, r6)
            float r6 = (float) r6
            r8.setCornerRadius(r6)
            android.content.Context r6 = r4.getContext()
            int r5 = com.tkay.expressad.foundation.h.t.b(r6, r5)
            int r6 = android.graphics.Color.parseColor(r7)
            r8.setStroke(r5, r6)
            r4.setBackgroundDrawable(r8)
        L36:
            return
    }

    private static void a(android.view.View r2, java.lang.String r3, java.lang.String r4) {
            if (r2 == 0) goto L30
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            int r4 = android.graphics.Color.parseColor(r4)
            r0.setColor(r4)
            android.content.Context r4 = r2.getContext()
            r1 = 1094713344(0x41400000, float:12.0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r1)
            float r4 = (float) r4
            r0.setCornerRadius(r4)
            android.content.Context r4 = r2.getContext()
            r1 = 1065353216(0x3f800000, float:1.0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r1)
            int r3 = android.graphics.Color.parseColor(r3)
            r0.setStroke(r4, r3)
            r2.setBackgroundDrawable(r0)
        L30:
            return
    }
}
