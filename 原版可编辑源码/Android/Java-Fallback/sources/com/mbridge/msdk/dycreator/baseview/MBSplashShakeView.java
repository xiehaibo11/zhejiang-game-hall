package com.mbridge.msdk.dycreator.baseview;

public class MBSplashShakeView extends com.mbridge.msdk.dycreator.baseview.MBLinearLayout {
    private final java.lang.String a;
    private final java.lang.String b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final java.lang.String f;
    private android.widget.ImageView g;
    private android.view.animation.Animation h;

    public MBSplashShakeView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "浏览第三方应用"
            r0.a = r1
            java.lang.String r1 = "View"
            r0.b = r1
            java.lang.String r1 = "打开第三方应用"
            r0.c = r1
            java.lang.String r1 = "Open"
            r0.d = r1
            java.lang.String r1 = "下载第三方应用"
            r0.e = r1
            java.lang.String r1 = "Install"
            r0.f = r1
            return
    }

    public MBSplashShakeView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "浏览第三方应用"
            r0.a = r1
            java.lang.String r1 = "View"
            r0.b = r1
            java.lang.String r1 = "打开第三方应用"
            r0.c = r1
            java.lang.String r1 = "Open"
            r0.d = r1
            java.lang.String r1 = "下载第三方应用"
            r0.e = r1
            java.lang.String r1 = "Install"
            r0.f = r1
            return
    }

    public MBSplashShakeView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = "浏览第三方应用"
            r0.a = r1
            java.lang.String r1 = "View"
            r0.b = r1
            java.lang.String r1 = "打开第三方应用"
            r0.c = r1
            java.lang.String r1 = "Open"
            r0.d = r1
            java.lang.String r1 = "下载第三方应用"
            r0.e = r1
            java.lang.String r1 = "Install"
            r0.f = r1
            return
    }

    public void initView(java.lang.String r15) {
            r14 = this;
            r0 = 1
            r14.setOrientation(r0)
            r14.setGravity(r0)
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r14.getContext()
            r1.<init>(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r3 = r14.getContext()
            r4 = 1117782016(0x42a00000, float:80.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)
            android.content.Context r5 = r14.getContext()
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r5, r4)
            r2.<init>(r3, r4)
            r1.setLayoutParams(r2)
            java.lang.String r2 = "#60000000"
            int r2 = android.graphics.Color.parseColor(r2)
            android.graphics.drawable.GradientDrawable r3 = new android.graphics.drawable.GradientDrawable
            r3.<init>()
            r3.setColor(r2)
            r2 = 200(0xc8, float:2.8E-43)
            float r2 = (float) r2
            r3.setCornerRadius(r2)
            r1.setBackground(r3)
            android.widget.ImageView r2 = new android.widget.ImageView
            android.content.Context r3 = r14.getContext()
            r2.<init>(r3)
            r14.g = r2
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            android.content.Context r3 = r14.getContext()
            r4 = 1109393408(0x42200000, float:40.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r4)
            android.content.Context r5 = r14.getContext()
            int r4 = com.mbridge.msdk.foundation.tools.ae.b(r5, r4)
            r2.<init>(r3, r4)
            r3 = 17
            r2.gravity = r3
            android.widget.ImageView r4 = r14.g
            r4.setLayoutParams(r2)
            android.content.res.Resources r2 = r14.getResources()
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r4 = r4.d()
            java.lang.String r5 = "mbridge_cm_btn_shake"
            java.lang.String r6 = "drawable"
            int r2 = r2.getIdentifier(r5, r6, r4)
            android.widget.ImageView r4 = r14.g
            r4.setImageResource(r2)
            android.widget.FrameLayout r2 = new android.widget.FrameLayout
            android.content.Context r4 = r14.getContext()
            r2.<init>(r4)
            android.widget.LinearLayout$LayoutParams r4 = new android.widget.LinearLayout$LayoutParams
            r5 = -2
            r4.<init>(r5, r5)
            r2.setLayoutParams(r4)
            r2.addView(r1)
            android.widget.ImageView r1 = r14.g
            r2.addView(r1)
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r4 = r14.getContext()
            r1.<init>(r4)
            android.widget.LinearLayout$LayoutParams r4 = new android.widget.LinearLayout$LayoutParams
            r4.<init>(r5, r5)
            android.content.Context r6 = r14.getContext()
            r7 = 1092616192(0x41200000, float:10.0)
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r6, r7)
            r4.topMargin = r6
            r1.setLayoutParams(r4)
            r1.setGravity(r3)
            java.lang.String r4 = "Shake your phone"
            r1.setText(r4)
            r4 = 1098907648(0x41800000, float:16.0)
            r1.setTextSize(r4)
            r4 = -1
            r1.setTextColor(r4)
            boolean r6 = android.text.TextUtils.isEmpty(r15)
            java.lang.String r7 = "浏览第三方应用"
            java.lang.String r8 = "View"
            if (r6 != 0) goto L12d
            int r6 = r15.hashCode()
            r9 = 5
            r10 = 4
            r11 = 3
            r12 = 2
            r13 = 0
            switch(r6) {
                case -672744069: goto L112;
                case 2464362: goto L108;
                case 2666181: goto L100;
                case 855294846: goto Lf6;
                case 1383132195: goto Lec;
                case 1681333335: goto Le4;
                default: goto Le3;
            }
        Le3:
            goto L11c
        Le4:
            boolean r6 = r15.equals(r7)
            if (r6 == 0) goto L11c
            r6 = r13
            goto L11d
        Lec:
            java.lang.String r6 = "打开第三方应用"
            boolean r6 = r15.equals(r6)
            if (r6 == 0) goto L11c
            r6 = r9
            goto L11d
        Lf6:
            java.lang.String r6 = "下载第三方应用"
            boolean r6 = r15.equals(r6)
            if (r6 == 0) goto L11c
            r6 = r11
            goto L11d
        L100:
            boolean r6 = r15.equals(r8)
            if (r6 == 0) goto L11c
            r6 = r0
            goto L11d
        L108:
            java.lang.String r6 = "Open"
            boolean r6 = r15.equals(r6)
            if (r6 == 0) goto L11c
            r6 = r10
            goto L11d
        L112:
            java.lang.String r6 = "Install"
            boolean r6 = r15.equals(r6)
            if (r6 == 0) goto L11c
            r6 = r12
            goto L11d
        L11c:
            r6 = r4
        L11d:
            if (r6 == 0) goto L12a
            if (r6 == r0) goto L12a
            if (r6 == r12) goto L12a
            if (r6 == r11) goto L12a
            if (r6 == r10) goto L12a
            if (r6 == r9) goto L12a
            r0 = r13
        L12a:
            if (r0 == 0) goto L12d
            goto L14a
        L12d:
            android.content.Context r15 = r14.getContext()
            android.content.res.Resources r15 = r15.getResources()
            android.content.res.Configuration r15 = r15.getConfiguration()
            java.util.Locale r15 = r15.locale
            java.lang.String r15 = r15.getLanguage()
            java.lang.String r0 = "zh"
            boolean r15 = r15.contains(r0)
            if (r15 == 0) goto L149
            r15 = r7
            goto L14a
        L149:
            r15 = r8
        L14a:
            android.widget.TextView r0 = new android.widget.TextView
            android.content.Context r6 = r14.getContext()
            r0.<init>(r6)
            android.widget.LinearLayout$LayoutParams r6 = new android.widget.LinearLayout$LayoutParams
            r6.<init>(r5, r5)
            android.content.Context r5 = r14.getContext()
            r7 = 1084227584(0x40a00000, float:5.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r7)
            r6.topMargin = r5
            r0.setLayoutParams(r6)
            r0.setGravity(r3)
            r0.setText(r15)
            r15 = 1094713344(0x41400000, float:12.0)
            r0.setTextSize(r15)
            r0.setTextColor(r4)
            r14.addView(r2)
            r14.addView(r1)
            r14.addView(r0)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r8 = this;
            super.onAttachedToWindow()
            android.widget.ImageView r0 = r8.g
            if (r0 == 0) goto L31
            android.view.animation.RotateAnimation r0 = new android.view.animation.RotateAnimation
            r2 = -1054867456(0xffffffffc1200000, float:-10.0)
            r3 = 1092616192(0x41200000, float:10.0)
            r4 = 1
            r5 = 1056964608(0x3f000000, float:0.5)
            r6 = 1
            r7 = 1056964608(0x3f000000, float:0.5)
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r8.h = r0
            r1 = 100
            r0.setDuration(r1)
            android.view.animation.Animation r0 = r8.h
            r1 = 2
            r0.setRepeatMode(r1)
            android.view.animation.Animation r0 = r8.h
            r1 = -1
            r0.setRepeatCount(r1)
            android.widget.ImageView r0 = r8.g
            android.view.animation.Animation r1 = r8.h
            r0.startAnimation(r1)
        L31:
            return
    }
}
