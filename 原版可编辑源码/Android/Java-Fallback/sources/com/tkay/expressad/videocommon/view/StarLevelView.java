package com.tkay.expressad.videocommon.view;

public class StarLevelView extends android.widget.LinearLayout {
    public StarLevelView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.setOrientation(r1)
            return
    }

    public StarLevelView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.setOrientation(r1)
            return
    }

    public StarLevelView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.setOrientation(r1)
            return
    }

    public void initScore(double r10) {
            r9 = this;
            r0 = 0
            r1 = r0
        L2:
            int r2 = (int) r10
            java.lang.String r3 = "tkay_video_common_full_star"
            java.lang.String r4 = "drawable"
            r5 = -2
            r6 = 5
            if (r1 >= r2) goto L2f
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r7 = r9.getContext()
            r2.<init>(r7)
            android.content.Context r7 = r9.getContext()
            int r3 = com.tkay.expressad.foundation.h.i.a(r7, r3, r4)
            r2.setImageResource(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r5, r5)
            if (r1 == 0) goto L29
            r3.setMargins(r6, r0, r6, r0)
        L29:
            r9.addView(r2, r3)
            int r1 = r1 + 1
            goto L2
        L2f:
            r1 = 4632233691727265792(0x4049000000000000, double:50.0)
            r7 = 4621819117588971520(0x4024000000000000, double:10.0)
            double r10 = r10 * r7
            double r1 = r1 - r10
            int r10 = (int) r1
            if (r10 > 0) goto L39
            return
        L39:
            r11 = 1
            if (r10 <= r11) goto L83
            r11 = 10
            if (r10 >= r11) goto L83
            if (r10 <= 0) goto L64
            if (r10 >= r6) goto L64
            android.widget.ImageView r11 = new android.widget.ImageView
            android.content.Context r1 = r9.getContext()
            r11.<init>(r1)
            android.content.Context r1 = r9.getContext()
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r4)
            r11.setImageResource(r1)
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r1.<init>(r5, r5)
            r1.setMargins(r6, r0, r6, r0)
            r9.addView(r11, r1)
            goto L83
        L64:
            android.widget.ImageView r11 = new android.widget.ImageView
            android.content.Context r1 = r9.getContext()
            r11.<init>(r1)
            android.content.Context r1 = r9.getContext()
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r3, r4)
            r11.setImageResource(r1)
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r1.<init>(r5, r5)
            r1.setMargins(r6, r0, r6, r0)
            r9.addView(r11, r1)
        L83:
            int r11 = r10 / 10
            if (r11 <= 0) goto Lfc
            int r1 = r11 * 10
            int r10 = r10 % r1
            java.lang.String r1 = "tkay_video_common_full_while_star"
            if (r10 <= 0) goto Lb0
            if (r10 >= r6) goto Lb0
            android.widget.ImageView r10 = new android.widget.ImageView
            android.content.Context r2 = r9.getContext()
            r10.<init>(r2)
            android.content.Context r2 = r9.getContext()
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r1, r4)
            r10.setImageResource(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r2.<init>(r5, r5)
            r2.setMargins(r6, r0, r6, r0)
            r9.addView(r10, r2)
            goto Ld7
        Lb0:
            if (r10 < r6) goto Ld7
            r2 = 9
            if (r10 > r2) goto Ld7
            android.widget.ImageView r10 = new android.widget.ImageView
            android.content.Context r2 = r9.getContext()
            r10.<init>(r2)
            android.content.Context r2 = r9.getContext()
            java.lang.String r3 = "tkay_video_common_half_star"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r4)
            r10.setImageResource(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r2.<init>(r5, r5)
            r2.setMargins(r6, r0, r6, r0)
            r9.addView(r10, r2)
        Ld7:
            r10 = r0
        Ld8:
            if (r10 >= r11) goto Lfc
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r9.getContext()
            r2.<init>(r3)
            android.content.Context r3 = r9.getContext()
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r1, r4)
            r2.setImageResource(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r5, r5)
            r3.setMargins(r6, r0, r6, r0)
            r9.addView(r2, r3)
            int r10 = r10 + 1
            goto Ld8
        Lfc:
            return
    }
}
