package com.tkay.expressad.shake;

public class MBShakeView extends android.widget.LinearLayout {
    private static final java.lang.String a = "MBSplashShakeView";
    private android.widget.ImageView b;
    private android.view.animation.Animation c;

    public MBShakeView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MBShakeView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public MBShakeView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public MBShakeView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    private java.lang.String a(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L1a
            android.content.Context r4 = r3.getContext()
            android.content.Context r0 = r3.getContext()
            java.lang.String r1 = "tkay_cm_shake_view_view_other_app"
            java.lang.String r2 = "string"
            int r0 = com.tkay.expressad.foundation.h.i.a(r0, r1, r2)
            java.lang.String r4 = r4.getString(r0)
        L1a:
            return r4
    }

    private void a() {
            r8 = this;
            android.view.animation.RotateAnimation r7 = new android.view.animation.RotateAnimation
            r1 = -1054867456(0xffffffffc1200000, float:-10.0)
            r2 = 1092616192(0x41200000, float:10.0)
            r3 = 1
            r4 = 1056964608(0x3f000000, float:0.5)
            r5 = 1
            r6 = 1056964608(0x3f000000, float:0.5)
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r8.c = r7
            r0 = 100
            r7.setDuration(r0)
            android.view.animation.Animation r0 = r8.c
            r1 = 2
            r0.setRepeatMode(r1)
            android.view.animation.Animation r0 = r8.c
            r1 = -1
            r0.setRepeatCount(r1)
            android.widget.ImageView r0 = r8.b
            android.view.animation.Animation r1 = r8.c
            r0.startAnimation(r1)
            return
    }

    private static void a(android.view.View r2) {
            java.lang.String r0 = "#80000000"
            int r0 = android.graphics.Color.parseColor(r0)
            android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
            r1.<init>()
            r1.setColor(r0)
            r0 = 1128792064(0x43480000, float:200.0)
            r1.setCornerRadius(r0)
            r2.setBackgroundDrawable(r1)
            return
    }

    public void initView(java.lang.String r2) {
            r1 = this;
            r0 = 0
            r1.initView(r2, r0)
            return
    }

    public void initView(java.lang.String r13, boolean r14) {
            r12 = this;
            r0 = 1
            r12.setOrientation(r0)
            r12.setGravity(r0)
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r12.getContext()
            r0.<init>(r1)
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r2 = r12.getContext()
            r3 = 1114636288(0x42700000, float:60.0)
            r4 = 1117782016(0x42a00000, float:80.0)
            if (r14 == 0) goto L1e
            r5 = r3
            goto L1f
        L1e:
            r5 = r4
        L1f:
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            android.content.Context r5 = r12.getContext()
            if (r14 == 0) goto L2a
            goto L2b
        L2a:
            r3 = r4
        L2b:
            int r3 = com.tkay.expressad.foundation.h.t.b(r5, r3)
            r1.<init>(r2, r3)
            r0.setLayoutParams(r1)
            java.lang.String r1 = "#80000000"
            int r1 = android.graphics.Color.parseColor(r1)
            android.graphics.drawable.GradientDrawable r2 = new android.graphics.drawable.GradientDrawable
            r2.<init>()
            r2.setColor(r1)
            r1 = 1128792064(0x43480000, float:200.0)
            r2.setCornerRadius(r1)
            r0.setBackgroundDrawable(r2)
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r12.getContext()
            r1.<init>(r2)
            r12.b = r1
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            android.content.Context r2 = r12.getContext()
            r3 = 1109393408(0x42200000, float:40.0)
            r4 = 1101004800(0x41a00000, float:20.0)
            if (r14 == 0) goto L64
            r5 = r4
            goto L65
        L64:
            r5 = r3
        L65:
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r5)
            android.content.Context r5 = r12.getContext()
            if (r14 == 0) goto L70
            r3 = r4
        L70:
            int r3 = com.tkay.expressad.foundation.h.t.b(r5, r3)
            r1.<init>(r2, r3)
            r2 = 17
            r1.gravity = r2
            android.widget.ImageView r3 = r12.b
            r3.setLayoutParams(r1)
            android.content.res.Resources r1 = r12.getResources()
            com.tkay.expressad.foundation.b.b r3 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r3 = r3.a()
            java.lang.String r5 = "tkay_splash_btn_shake"
            java.lang.String r6 = "drawable"
            int r1 = r1.getIdentifier(r5, r6, r3)
            android.widget.ImageView r3 = r12.b
            r3.setImageResource(r1)
            android.widget.FrameLayout r1 = new android.widget.FrameLayout
            android.content.Context r3 = r12.getContext()
            r1.<init>(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r5 = -2
            r3.<init>(r5, r5)
            r1.setLayoutParams(r3)
            r1.addView(r0)
            android.widget.ImageView r0 = r12.b
            r1.addView(r0)
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r3 = r12.getContext()
            r0.<init>(r3)
            android.widget.LinearLayout$LayoutParams r3 = new android.widget.LinearLayout$LayoutParams
            r3.<init>(r5, r5)
            android.content.Context r6 = r12.getContext()
            r7 = 1092616192(0x41200000, float:10.0)
            int r6 = com.tkay.expressad.foundation.h.t.b(r6, r7)
            r3.topMargin = r6
            r0.setLayoutParams(r3)
            r0.setGravity(r2)
            android.content.Context r3 = r12.getContext()
            android.content.res.Resources r3 = r3.getResources()
            android.content.res.Configuration r3 = r3.getConfiguration()
            java.util.Locale r3 = r3.locale
            r3.getLanguage()
            android.content.Context r3 = r12.getContext()
            android.content.Context r6 = r12.getContext()
            java.lang.String r7 = "string"
            java.lang.String r8 = "tkay_cm_shake_view_hint_text"
            int r6 = com.tkay.expressad.foundation.h.i.a(r6, r8, r7)
            java.lang.String r3 = r3.getString(r6)
            r0.setText(r3)
            r3 = 1098907648(0x41800000, float:16.0)
            if (r14 == 0) goto L100
            r4 = r3
        L100:
            r0.setTextSize(r4)
            r4 = -1
            r0.setTextColor(r4)
            r6 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r8 = 1090519040(0x41000000, float:8.0)
            r9 = 1077936128(0x40400000, float:3.0)
            r0.setShadowLayer(r8, r9, r9, r6)
            boolean r10 = android.text.TextUtils.isEmpty(r13)
            if (r10 == 0) goto L128
            android.content.Context r13 = r12.getContext()
            android.content.Context r10 = r12.getContext()
            java.lang.String r11 = "tkay_cm_shake_view_view_other_app"
            int r7 = com.tkay.expressad.foundation.h.i.a(r10, r11, r7)
            java.lang.String r13 = r13.getString(r7)
        L128:
            android.widget.TextView r7 = new android.widget.TextView
            android.content.Context r10 = r12.getContext()
            r7.<init>(r10)
            android.widget.LinearLayout$LayoutParams r10 = new android.widget.LinearLayout$LayoutParams
            r10.<init>(r5, r5)
            android.content.Context r5 = r12.getContext()
            r11 = 1084227584(0x40a00000, float:5.0)
            int r5 = com.tkay.expressad.foundation.h.t.b(r5, r11)
            r10.topMargin = r5
            r7.setLayoutParams(r10)
            r7.setGravity(r2)
            r7.setText(r13)
            if (r14 == 0) goto L14f
            r3 = 1094713344(0x41400000, float:12.0)
        L14f:
            r7.setTextSize(r3)
            r7.setTextColor(r4)
            r7.setShadowLayer(r8, r9, r9, r6)
            r12.addView(r1)
            r12.addView(r0)
            r12.addView(r7)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r8 = this;
            super.onAttachedToWindow()
            android.view.animation.RotateAnimation r7 = new android.view.animation.RotateAnimation
            r1 = -1054867456(0xffffffffc1200000, float:-10.0)
            r2 = 1092616192(0x41200000, float:10.0)
            r3 = 1
            r4 = 1056964608(0x3f000000, float:0.5)
            r5 = 1
            r6 = 1056964608(0x3f000000, float:0.5)
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r8.c = r7
            r0 = 100
            r7.setDuration(r0)
            android.view.animation.Animation r0 = r8.c
            r1 = 2
            r0.setRepeatMode(r1)
            android.view.animation.Animation r0 = r8.c
            r1 = -1
            r0.setRepeatCount(r1)
            android.widget.ImageView r0 = r8.b
            android.view.animation.Animation r1 = r8.c
            r0.startAnimation(r1)
            return
    }
}
