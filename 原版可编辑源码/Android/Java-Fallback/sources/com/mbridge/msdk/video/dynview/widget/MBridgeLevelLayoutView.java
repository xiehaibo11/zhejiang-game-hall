package com.mbridge.msdk.video.dynview.widget;

public class MBridgeLevelLayoutView extends android.widget.LinearLayout {
    private static int d = 18;
    private double a;
    private int b;
    private boolean c;

    static {
            return
    }

    public MBridgeLevelLayoutView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBridgeLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MBridgeLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    private void a() {
            r12 = this;
            boolean r0 = r12.c
            r1 = -2
            r2 = 0
            r3 = 0
            if (r0 == 0) goto L36
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r4 = r12.getContext()
            int r5 = com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView.d
            float r5 = (float) r5
            int r4 = dip2px(r4, r5)
            r0.<init>(r1, r4)
            android.widget.LinearLayout r4 = new android.widget.LinearLayout
            android.content.Context r5 = r12.getContext()
            r4.<init>(r5)
            r4.setOrientation(r3)
            r4.setLayoutParams(r0)
            android.widget.LinearLayout r5 = new android.widget.LinearLayout
            android.content.Context r6 = r12.getContext()
            r5.<init>(r6)
            r5.setOrientation(r3)
            r5.setLayoutParams(r0)
            goto L38
        L36:
            r4 = r2
            r5 = r4
        L38:
            r12.removeAllViews()
            java.lang.String r0 = "drawable"
            if (r5 == 0) goto Lce
            android.widget.LinearLayout$LayoutParams r6 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r7 = r12.getContext()
            int r8 = com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView.d
            float r8 = (float) r8
            int r7 = dip2px(r7, r8)
            r6.<init>(r1, r7)
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r7 = r12.getContext()
            r1.<init>(r7)
            r7 = 1
            android.graphics.Typeface r8 = android.graphics.Typeface.defaultFromStyle(r7)
            r1.setTypeface(r8)
            java.lang.String r8 = "("
            r1.setText(r8)
            java.lang.String r8 = "#5f5f5f"
            int r9 = android.graphics.Color.parseColor(r8)
            r1.setTextColor(r9)
            android.widget.TextView r9 = new android.widget.TextView
            android.content.Context r10 = r12.getContext()
            r9.<init>(r10)
            android.graphics.Typeface r10 = android.graphics.Typeface.defaultFromStyle(r7)
            r9.setTypeface(r10)
            r10 = 17
            r9.setGravity(r10)
            int r8 = android.graphics.Color.parseColor(r8)
            r9.setTextColor(r8)
            android.content.res.Resources r8 = r12.getResources()
            android.content.Context r10 = r12.getContext()
            java.lang.String r11 = "mbridge_reward_user"
            int r10 = com.mbridge.msdk.foundation.tools.s.a(r10, r11, r0)
            android.graphics.drawable.Drawable r8 = r8.getDrawable(r10)
            int r10 = r8.getMinimumWidth()
            int r11 = r8.getMinimumHeight()
            r8.setBounds(r3, r3, r10, r11)
            r9.setCompoundDrawables(r8, r2, r2, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            int r8 = r12.b
            r2.append(r8)
            java.lang.String r8 = " )"
            r2.append(r8)
            java.lang.String r2 = r2.toString()
            r9.setText(r2)
            android.text.TextUtils$TruncateAt r2 = android.text.TextUtils.TruncateAt.END
            r9.setEllipsize(r2)
            r9.setLines(r7)
            r5.addView(r1, r6)
            r5.addView(r9, r6)
        Lce:
            double r1 = r12.a
            r6 = 0
            int r6 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r6 != 0) goto Ld8
            r1 = 4617315517961601024(0x4014000000000000, double:5.0)
        Ld8:
            r6 = r3
        Ld9:
            r7 = 5
            if (r6 >= r7) goto L13c
            android.widget.ImageView r7 = new android.widget.ImageView
            android.content.Context r8 = r12.getContext()
            r7.<init>(r8)
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r9 = r12.getContext()
            r10 = 1097859072(0x41700000, float:15.0)
            int r9 = dip2px(r9, r10)
            android.content.Context r10 = r12.getContext()
            int r11 = com.mbridge.msdk.video.dynview.widget.MBridgeLevelLayoutView.d
            float r11 = (float) r11
            int r10 = dip2px(r10, r11)
            r8.<init>(r9, r10)
            double r9 = (double) r6
            int r9 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r9 >= 0) goto L112
            android.content.Context r9 = r12.getContext()
            java.lang.String r10 = "mbridge_download_message_dialog_star_sel"
            int r9 = com.mbridge.msdk.foundation.tools.s.a(r9, r10, r0)
            r7.setImageResource(r9)
            goto L11f
        L112:
            android.content.Context r9 = r12.getContext()
            java.lang.String r10 = "mbridge_download_message_dilaog_star_nor"
            int r9 = com.mbridge.msdk.foundation.tools.s.a(r9, r10, r0)
            r7.setImageResource(r9)
        L11f:
            r9 = 1065353216(0x3f800000, float:1.0)
            r8.weight = r9
            android.content.Context r9 = r12.getContext()
            r10 = 1073741824(0x40000000, float:2.0)
            int r9 = dip2px(r9, r10)
            r8.setMargins(r9, r3, r3, r3)
            if (r4 == 0) goto L136
            r4.addView(r7, r8)
            goto L139
        L136:
            r12.addView(r7, r8)
        L139:
            int r6 = r6 + 1
            goto Ld9
        L13c:
            if (r4 == 0) goto L146
            if (r4 == 0) goto L146
            r12.addView(r4)
            r12.addView(r5)
        L146:
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

    public void setRating(int r3) {
            r2 = this;
            double r0 = (double) r3
            r2.a = r0
            r2.a()
            return
    }

    public void setRatingAndUser(double r3, int r5) {
            r2 = this;
            r2.a = r3
            if (r5 != 0) goto L15
            double r3 = java.lang.Math.random()
            r0 = 4621256167635550208(0x4022000000000000, double:9.0)
            double r3 = r3 * r0
            r0 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r3 = r3 + r0
            r0 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            double r3 = r3 * r0
            int r5 = (int) r3
        L15:
            r2.b = r5
            r3 = 1
            r2.c = r3
            r2.a()
            return
    }
}
