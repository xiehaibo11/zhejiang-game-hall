package com.mbridge.msdk.nativex.view.mbfullview;

public class StarLevelLayoutView extends android.widget.LinearLayout {
    public StarLevelLayoutView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public StarLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public StarLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public void setRating(int r8) {
            r7 = this;
            r7.removeAllViews()
            r0 = 5
            if (r8 != 0) goto L7
            r8 = r0
        L7:
            r1 = 0
        L8:
            if (r1 >= r0) goto L4a
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r7.getContext()
            r2.<init>(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r4 = -2
            r3.<init>(r4, r4)
            java.lang.String r4 = "drawable"
            if (r1 >= r8) goto L2b
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "mbridge_demo_star_sel"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r5, r6, r4)
            r2.setBackgroundResource(r4)
            goto L38
        L2b:
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "mbridge_demo_star_nor"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r5, r6, r4)
            r2.setBackgroundResource(r4)
        L38:
            android.content.Context r4 = r7.getContext()
            r5 = 1088421888(0x40e00000, float:7.0)
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r4, r5)
            r3.leftMargin = r4
            r7.addView(r2, r3)
            int r1 = r1 + 1
            goto L8
        L4a:
            return
    }
}
