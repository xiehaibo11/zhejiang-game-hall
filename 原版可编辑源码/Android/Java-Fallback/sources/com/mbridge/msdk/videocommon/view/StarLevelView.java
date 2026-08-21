package com.mbridge.msdk.videocommon.view;

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
            java.lang.String r3 = "mbridge_video_common_full_star"
            java.lang.String r4 = "drawable"
            r5 = -2
            r6 = 5
            if (r1 >= r2) goto L30
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r7 = r9.getContext()
            r2.<init>(r7)
            android.content.Context r7 = r9.getContext()
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r7, r3, r4)
            r2.setImageResource(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r5, r5)
            if (r1 != 0) goto L27
            goto L2a
        L27:
            r3.setMargins(r6, r0, r6, r0)
        L2a:
            r9.addView(r2, r3)
            int r1 = r1 + 1
            goto L2
        L30:
            r1 = 4632233691727265792(0x4049000000000000, double:50.0)
            r7 = 4621819117588971520(0x4024000000000000, double:10.0)
            double r10 = r10 * r7
            double r1 = r1 - r10
            int r10 = (int) r1
            if (r10 > 0) goto L3a
            return
        L3a:
            r11 = 1
            if (r10 <= r11) goto L84
            r1 = 10
            if (r10 >= r1) goto L84
            if (r10 <= 0) goto L65
            if (r10 >= r6) goto L65
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r9.getContext()
            r1.<init>(r2)
            android.content.Context r2 = r9.getContext()
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r4)
            r1.setImageResource(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r2.<init>(r5, r5)
            r2.setMargins(r6, r0, r6, r0)
            r9.addView(r1, r2)
            goto L84
        L65:
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r9.getContext()
            r1.<init>(r2)
            android.content.Context r2 = r9.getContext()
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r4)
            r1.setImageResource(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r2.<init>(r5, r5)
            r2.setMargins(r6, r0, r6, r0)
            r9.addView(r1, r2)
        L84:
            int r1 = r10 / 10
            if (r1 < r11) goto Lfd
            int r11 = r1 * 10
            int r10 = r10 % r11
            java.lang.String r11 = "mbridge_video_common_full_while_star"
            if (r10 <= 0) goto Lb1
            if (r10 >= r6) goto Lb1
            android.widget.ImageView r10 = new android.widget.ImageView
            android.content.Context r2 = r9.getContext()
            r10.<init>(r2)
            android.content.Context r2 = r9.getContext()
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r11, r4)
            r10.setImageResource(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r2.<init>(r5, r5)
            r2.setMargins(r6, r0, r6, r0)
            r9.addView(r10, r2)
            goto Ld8
        Lb1:
            if (r10 < r6) goto Ld8
            r2 = 9
            if (r10 > r2) goto Ld8
            android.widget.ImageView r10 = new android.widget.ImageView
            android.content.Context r2 = r9.getContext()
            r10.<init>(r2)
            android.content.Context r2 = r9.getContext()
            java.lang.String r3 = "mbridge_video_common_half_star"
            int r2 = com.mbridge.msdk.foundation.tools.s.a(r2, r3, r4)
            r10.setImageResource(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r2.<init>(r5, r5)
            r2.setMargins(r6, r0, r6, r0)
            r9.addView(r10, r2)
        Ld8:
            r10 = r0
        Ld9:
            if (r10 >= r1) goto Lfd
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r9.getContext()
            r2.<init>(r3)
            android.content.Context r3 = r9.getContext()
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r3, r11, r4)
            r2.setImageResource(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r5, r5)
            r3.setMargins(r6, r0, r6, r0)
            r9.addView(r2, r3)
            int r10 = r10 + 1
            goto Ld9
        Lfd:
            return
    }
}
