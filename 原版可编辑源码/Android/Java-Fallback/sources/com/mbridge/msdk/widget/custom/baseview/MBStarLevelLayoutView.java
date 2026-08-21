package com.mbridge.msdk.widget.custom.baseview;

public class MBStarLevelLayoutView extends com.mbridge.msdk.widget.custom.baseview.MBLinearLayout {
    public MBStarLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static int dip2px(android.content.Context r1, float r2) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.res.Resources r1 = r1.getResources()
            if (r1 != 0) goto Lb
            return r0
        Lb:
            android.util.DisplayMetrics r1 = r1.getDisplayMetrics()
            float r1 = r1.density
            float r2 = r2 * r1
            r1 = 1056964608(0x3f000000, float:0.5)
            float r2 = r2 + r1
            int r1 = (int) r2
            return r1
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
            if (r1 >= r0) goto L63
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r7.getContext()
            r2.<init>(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r4 = r7.getContext()
            r5 = 10
            int r4 = com.mbridge.msdk.widget.custom.b.a.a(r4, r5)
            android.content.Context r6 = r7.getContext()
            int r5 = com.mbridge.msdk.widget.custom.b.a.a(r6, r5)
            r3.<init>(r4, r5)
            java.lang.String r4 = "drawable"
            if (r1 >= r8) goto L3c
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "mbridge_download_message_dialog_star_sel"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r5, r6, r4)
            r2.setImageResource(r4)
            goto L49
        L3c:
            android.content.Context r5 = r7.getContext()
            java.lang.String r6 = "mbridge_download_message_dilaog_star_nor"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r5, r6, r4)
            r2.setImageResource(r4)
        L49:
            android.content.Context r4 = r7.getContext()
            android.content.Context r5 = r7.getContext()
            r6 = 1
            int r5 = com.mbridge.msdk.widget.custom.b.a.a(r5, r6)
            float r5 = (float) r5
            int r4 = dip2px(r4, r5)
            r3.leftMargin = r4
            r7.addView(r2, r3)
            int r1 = r1 + 1
            goto L8
        L63:
            return
    }
}
