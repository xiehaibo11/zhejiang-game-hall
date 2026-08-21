package com.mbridge.msdk.dycreator.baseview;

public class MBHeatLevelLayoutView extends com.mbridge.msdk.dycreator.baseview.MBLinearLayout {
    public MBHeatLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public void setHeatCount(int r9) {
            r8 = this;
            r8.removeAllViews()     // Catch: java.lang.Exception -> L9f
            double r0 = (double) r9     // Catch: java.lang.Exception -> L9f
            r2 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            r9 = 2
            double r0 = com.mbridge.msdk.dycreator.e.c.a(r0, r2, r9)     // Catch: java.lang.Exception -> L9f
            android.widget.LinearLayout$LayoutParams r9 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Exception -> L9f
            r2 = -2
            android.content.Context r3 = r8.getContext()     // Catch: java.lang.Exception -> L9f
            r4 = 1106247680(0x41f00000, float:30.0)
            int r3 = com.mbridge.msdk.dycreator.e.c.a(r3, r4)     // Catch: java.lang.Exception -> L9f
            r9.<init>(r2, r3)     // Catch: java.lang.Exception -> L9f
            r2 = 15
            r3 = 0
            r9.setMargins(r2, r3, r3, r3)     // Catch: java.lang.Exception -> L9f
            android.widget.TextView r2 = new android.widget.TextView     // Catch: java.lang.Exception -> L9f
            android.content.Context r4 = r8.getContext()     // Catch: java.lang.Exception -> L9f
            r2.<init>(r4)     // Catch: java.lang.Exception -> L9f
            r4 = 1
            android.graphics.Typeface r4 = android.graphics.Typeface.defaultFromStyle(r4)     // Catch: java.lang.Exception -> L9f
            r2.setTypeface(r4)     // Catch: java.lang.Exception -> L9f
            r4 = 17
            r2.setGravity(r4)     // Catch: java.lang.Exception -> L9f
            java.lang.String r4 = "#FF000000"
            int r4 = android.graphics.Color.parseColor(r4)     // Catch: java.lang.Exception -> L9f
            r2.setTextColor(r4)     // Catch: java.lang.Exception -> L9f
            r4 = 1092616192(0x41200000, float:10.0)
            r2.setTextSize(r4)     // Catch: java.lang.Exception -> L9f
            android.content.res.Resources r4 = r8.getResources()     // Catch: java.lang.Exception -> L9f
            android.content.Context r5 = r8.getContext()     // Catch: java.lang.Exception -> L9f
            java.lang.String r6 = "mbridge_reward_user"
            java.lang.String r7 = "drawable"
            int r5 = com.mbridge.msdk.foundation.tools.s.a(r5, r6, r7)     // Catch: java.lang.Exception -> L9f
            android.graphics.drawable.Drawable r4 = r4.getDrawable(r5)     // Catch: java.lang.Exception -> L9f
            if (r4 == 0) goto L69
            int r5 = r4.getMinimumWidth()     // Catch: java.lang.Exception -> L9f
            int r6 = r4.getMinimumHeight()     // Catch: java.lang.Exception -> L9f
            r4.setBounds(r3, r3, r5, r6)     // Catch: java.lang.Exception -> L9f
        L69:
            r3 = 0
            r2.setCompoundDrawables(r3, r3, r4, r3)     // Catch: java.lang.Exception -> L9f
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L9f
            java.lang.String r3 = r3.d()     // Catch: java.lang.Exception -> L9f
            android.content.res.Resources r4 = r8.getResources()     // Catch: java.lang.Exception -> L9f
            java.lang.String r5 = "mbridge_reward_heat_count_unit"
            java.lang.String r6 = "string"
            int r3 = r4.getIdentifier(r5, r6, r3)     // Catch: java.lang.Exception -> L9f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L9f
            r4.<init>()     // Catch: java.lang.Exception -> L9f
            r4.append(r0)     // Catch: java.lang.Exception -> L9f
            android.content.res.Resources r0 = r8.getResources()     // Catch: java.lang.Exception -> L9f
            java.lang.String r0 = r0.getString(r3)     // Catch: java.lang.Exception -> L9f
            r4.append(r0)     // Catch: java.lang.Exception -> L9f
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> L9f
            r2.setText(r0)     // Catch: java.lang.Exception -> L9f
            r8.addView(r2, r9)     // Catch: java.lang.Exception -> L9f
            goto La9
        L9f:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r0 = "MBHeatLevelLayoutView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r9)
        La9:
            return
    }
}
