package com.mbridge.msdk.video.dynview.i.b;

public final class a {
    public static void a(android.view.View r3, float r4, float r5, java.lang.String r6, java.lang.String[] r7, android.graphics.drawable.GradientDrawable.Orientation r8) {
            if (r3 == 0) goto L39
            if (r7 == 0) goto L39
            int r0 = r7.length
            int[] r0 = new int[r0]
            r1 = 0
        L8:
            int r2 = r7.length
            if (r1 >= r2) goto L16
            r2 = r7[r1]
            int r2 = android.graphics.Color.parseColor(r2)
            r0[r1] = r2
            int r1 = r1 + 1
            goto L8
        L16:
            android.graphics.drawable.GradientDrawable r7 = new android.graphics.drawable.GradientDrawable
            r7.<init>(r8, r0)
            android.content.Context r8 = r3.getContext()
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r8, r5)
            float r5 = (float) r5
            r7.setCornerRadius(r5)
            android.content.Context r5 = r3.getContext()
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r5, r4)
            int r5 = android.graphics.Color.parseColor(r6)
            r7.setStroke(r4, r5)
            r3.setBackground(r7)
        L39:
            return
    }
}
