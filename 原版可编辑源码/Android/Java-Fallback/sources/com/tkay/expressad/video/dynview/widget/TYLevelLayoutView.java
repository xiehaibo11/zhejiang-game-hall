package com.tkay.expressad.video.dynview.widget;

public class TYLevelLayoutView extends android.widget.LinearLayout {
    private double a;
    private int b;
    private boolean c;

    public TYLevelLayoutView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public TYLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public TYLevelLayoutView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    private void a() {
            r14 = this;
            boolean r0 = r14.c
            r1 = 1073741824(0x40000000, float:2.0)
            r2 = -2
            r3 = 1097859072(0x41700000, float:15.0)
            r4 = 0
            r5 = 0
            if (r0 == 0) goto L42
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r6 = r14.getContext()
            int r6 = dip2px(r6, r3)
            r0.<init>(r2, r6)
            android.content.Context r6 = r14.getContext()
            int r6 = dip2px(r6, r1)
            r0.setMargins(r5, r6, r5, r5)
            android.widget.LinearLayout r6 = new android.widget.LinearLayout
            android.content.Context r7 = r14.getContext()
            r6.<init>(r7)
            r6.setOrientation(r5)
            r6.setLayoutParams(r0)
            android.widget.LinearLayout r7 = new android.widget.LinearLayout
            android.content.Context r8 = r14.getContext()
            r7.<init>(r8)
            r7.setOrientation(r5)
            r7.setLayoutParams(r0)
            goto L44
        L42:
            r6 = r4
            r7 = r6
        L44:
            r14.removeAllViews()
            java.lang.String r0 = "drawable"
            if (r7 == 0) goto Ld7
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r9 = r14.getContext()
            int r9 = dip2px(r9, r3)
            r8.<init>(r2, r9)
            android.widget.TextView r2 = new android.widget.TextView
            android.content.Context r9 = r14.getContext()
            r2.<init>(r9)
            r9 = 1
            android.graphics.Typeface r10 = android.graphics.Typeface.defaultFromStyle(r9)
            r2.setTypeface(r10)
            java.lang.String r10 = "("
            r2.setText(r10)
            java.lang.String r10 = "#5f5f5f"
            int r11 = android.graphics.Color.parseColor(r10)
            r2.setTextColor(r11)
            android.widget.TextView r11 = new android.widget.TextView
            android.content.Context r12 = r14.getContext()
            r11.<init>(r12)
            android.graphics.Typeface r12 = android.graphics.Typeface.defaultFromStyle(r9)
            r11.setTypeface(r12)
            r12 = 17
            r11.setGravity(r12)
            int r10 = android.graphics.Color.parseColor(r10)
            r11.setTextColor(r10)
            android.content.res.Resources r10 = r14.getResources()
            android.content.Context r12 = r14.getContext()
            java.lang.String r13 = "tkay_reward_user"
            int r12 = com.tkay.expressad.foundation.h.i.a(r12, r13, r0)
            android.graphics.drawable.Drawable r10 = r10.getDrawable(r12)
            int r12 = r10.getMinimumWidth()
            int r13 = r10.getMinimumHeight()
            r10.setBounds(r5, r5, r12, r13)
            r11.setCompoundDrawables(r10, r4, r4, r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            int r10 = r14.b
            r4.append(r10)
            java.lang.String r10 = " )"
            r4.append(r10)
            java.lang.String r4 = r4.toString()
            r11.setText(r4)
            android.text.TextUtils$TruncateAt r4 = android.text.TextUtils.TruncateAt.END
            r11.setEllipsize(r4)
            r11.setLines(r9)
            r7.addView(r2, r8)
            r7.addView(r11, r8)
        Ld7:
            double r8 = r14.a
            r10 = 0
            int r2 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r2 != 0) goto Le1
            r8 = 4617315517961601024(0x4014000000000000, double:5.0)
        Le1:
            r2 = r5
        Le2:
            r4 = 5
            if (r2 >= r4) goto L13e
            android.widget.ImageView r4 = new android.widget.ImageView
            android.content.Context r10 = r14.getContext()
            r4.<init>(r10)
            android.widget.LinearLayout$LayoutParams r10 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r11 = r14.getContext()
            int r11 = dip2px(r11, r3)
            android.content.Context r12 = r14.getContext()
            int r12 = dip2px(r12, r3)
            r10.<init>(r11, r12)
            double r11 = (double) r2
            int r11 = (r11 > r8 ? 1 : (r11 == r8 ? 0 : -1))
            if (r11 >= 0) goto L116
            android.content.Context r11 = r14.getContext()
            java.lang.String r12 = "tkay_download_message_dialog_star_sel"
            int r11 = com.tkay.expressad.foundation.h.i.a(r11, r12, r0)
            r4.setImageResource(r11)
            goto L123
        L116:
            android.content.Context r11 = r14.getContext()
            java.lang.String r12 = "tkay_download_message_dilaog_star_nor"
            int r11 = com.tkay.expressad.foundation.h.i.a(r11, r12, r0)
            r4.setImageResource(r11)
        L123:
            r11 = 1065353216(0x3f800000, float:1.0)
            r10.weight = r11
            android.content.Context r11 = r14.getContext()
            int r11 = dip2px(r11, r1)
            r10.setMargins(r11, r5, r5, r5)
            if (r6 == 0) goto L138
            r6.addView(r4, r10)
            goto L13b
        L138:
            r14.addView(r4, r10)
        L13b:
            int r2 = r2 + 1
            goto Le2
        L13e:
            if (r6 == 0) goto L148
            if (r6 == 0) goto L148
            r14.addView(r6)
            r14.addView(r7)
        L148:
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
