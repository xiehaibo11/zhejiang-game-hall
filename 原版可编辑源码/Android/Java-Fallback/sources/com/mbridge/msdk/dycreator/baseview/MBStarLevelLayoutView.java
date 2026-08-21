package com.mbridge.msdk.dycreator.baseview;

public class MBStarLevelLayoutView extends com.mbridge.msdk.dycreator.baseview.MBLinearLayout {
    public MBStarLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public void setRating(int r8) {
            r7 = this;
            r7.removeAllViews()     // Catch: java.lang.Exception -> L52
            r0 = 5
            if (r8 != 0) goto L7
            r8 = r0
        L7:
            r1 = 0
        L8:
            if (r1 >= r0) goto L5c
            android.widget.ImageView r2 = new android.widget.ImageView     // Catch: java.lang.Exception -> L52
            android.content.Context r3 = r7.getContext()     // Catch: java.lang.Exception -> L52
            r2.<init>(r3)     // Catch: java.lang.Exception -> L52
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Exception -> L52
            r4 = -2
            r3.<init>(r4, r4)     // Catch: java.lang.Exception -> L52
            java.lang.String r4 = "drawable"
            if (r1 >= r8) goto L2f
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L52
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L52
            java.lang.String r6 = "mbridge_download_message_dialog_star_sel"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r5, r6, r4)     // Catch: java.lang.Exception -> L52
            r2.setImageResource(r4)     // Catch: java.lang.Exception -> L52
            goto L40
        L2f:
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L52
            android.content.Context r5 = r5.j()     // Catch: java.lang.Exception -> L52
            java.lang.String r6 = "mbridge_download_message_dilaog_star_nor"
            int r4 = com.mbridge.msdk.foundation.tools.s.a(r5, r6, r4)     // Catch: java.lang.Exception -> L52
            r2.setImageResource(r4)     // Catch: java.lang.Exception -> L52
        L40:
            android.content.Context r4 = r7.getContext()     // Catch: java.lang.Exception -> L52
            r5 = 1084227584(0x40a00000, float:5.0)
            int r4 = com.mbridge.msdk.dycreator.e.c.a(r4, r5)     // Catch: java.lang.Exception -> L52
            r3.leftMargin = r4     // Catch: java.lang.Exception -> L52
            r7.addView(r2, r3)     // Catch: java.lang.Exception -> L52
            int r1 = r1 + 1
            goto L8
        L52:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r0 = "MBStarLevelLayoutView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r8)
        L5c:
            return
    }
}
