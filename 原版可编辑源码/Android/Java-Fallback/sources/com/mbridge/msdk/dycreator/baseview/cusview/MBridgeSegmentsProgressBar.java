package com.mbridge.msdk.dycreator.baseview.cusview;

public class MBridgeSegmentsProgressBar extends android.widget.LinearLayout {
    private final java.lang.String a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private java.util.List<android.widget.ProgressBar> i;
    private android.widget.TextView j;
    private java.lang.String k;
    private boolean l;


    public MBridgeSegmentsProgressBar(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r2 = "MBridgeSegmentsProgressBar"
            r1.a = r2
            r2 = 1
            r1.c = r2
            r0 = 20
            r1.d = r0
            r0 = 10
            r1.e = r0
            r1.f = r2
            r2 = -1711276033(0xffffffff99ffffff, float:-2.6469778E-23)
            r1.g = r2
            r2 = -1
            r1.h = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.i = r2
            r2 = 0
            r1.l = r2
            return
    }

    public MBridgeSegmentsProgressBar(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "MBridgeSegmentsProgressBar"
            r0.a = r1
            r1 = 1
            r0.c = r1
            r2 = 20
            r0.d = r2
            r2 = 10
            r0.e = r2
            r0.f = r1
            r1 = -1711276033(0xffffffff99ffffff, float:-2.6469778E-23)
            r0.g = r1
            r1 = -1
            r0.h = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.i = r1
            r1 = 0
            r0.l = r1
            return
    }

    public MBridgeSegmentsProgressBar(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = "MBridgeSegmentsProgressBar"
            r0.a = r1
            r1 = 1
            r0.c = r1
            r2 = 20
            r0.d = r2
            r2 = 10
            r0.e = r2
            r0.f = r1
            r1 = -1711276033(0xffffffff99ffffff, float:-2.6469778E-23)
            r0.g = r1
            r1 = -1
            r0.h = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.i = r1
            r1 = 0
            r0.l = r1
            return
    }

    public MBridgeSegmentsProgressBar(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.lang.String r1 = "MBridgeSegmentsProgressBar"
            r0.a = r1
            r1 = 1
            r0.c = r1
            r2 = 20
            r0.d = r2
            r2 = 10
            r0.e = r2
            r0.f = r1
            r1 = -1711276033(0xffffffff99ffffff, float:-2.6469778E-23)
            r0.g = r1
            r1 = -1
            r0.h = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.i = r1
            r1 = 0
            r0.l = r1
            return
    }

    private java.lang.StringBuilder a(int r6) {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r5.k     // Catch: java.lang.Throwable -> L22
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L22
            r3 = 0
            java.lang.Integer r4 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L22
            r2[r3] = r4     // Catch: java.lang.Throwable -> L22
            r3 = 1
            int r4 = r5.b     // Catch: java.lang.Throwable -> L22
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L22
            r2[r3] = r4     // Catch: java.lang.Throwable -> L22
            java.lang.String r1 = java.lang.String.format(r1, r2)     // Catch: java.lang.Throwable -> L22
            r0.append(r1)     // Catch: java.lang.Throwable -> L22
            goto L3e
        L22:
            r1 = move-exception
            int r2 = r5.b
            r0.append(r2)
            java.lang.String r2 = "videos, the"
            r0.append(r2)
            r0.append(r6)
            java.lang.String r6 = " is playing."
            r0.append(r6)
            java.lang.String r6 = r1.getMessage()
            java.lang.String r1 = "MBridgeSegmentsProgressBar"
            com.mbridge.msdk.foundation.tools.z.d(r1, r6)
        L3e:
            return r0
    }

    private void a() {
            r15 = this;
            java.lang.String r0 = "MBridgeSegmentsProgressBar"
            android.content.Context r1 = r15.getContext()     // Catch: java.lang.Throwable -> L1d
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> L1d
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> L1d
            java.util.Locale r1 = r1.locale     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = r1.getLanguage()     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = "zh"
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L1d
            r15.l = r1     // Catch: java.lang.Throwable -> L1d
            goto L25
        L1d:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L25:
            int r1 = r15.c     // Catch: java.lang.Throwable -> L178
            r2 = 1
            if (r1 != r2) goto L40
            r15.setOrientation(r2)     // Catch: java.lang.Throwable -> L178
            java.lang.String r1 = r15.k     // Catch: java.lang.Throwable -> L178
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L178
            if (r1 == 0) goto L40
            boolean r1 = r15.l     // Catch: java.lang.Throwable -> L178
            if (r1 == 0) goto L3c
            java.lang.String r1 = "正在播放第%s个，共%s个视频"
            goto L3e
        L3c:
            java.lang.String r1 = "The %s is playing, %s videos."
        L3e:
            r15.k = r1     // Catch: java.lang.Throwable -> L178
        L40:
            int r1 = r15.c     // Catch: java.lang.Throwable -> L178
            r3 = 2
            r4 = 0
            if (r1 != r3) goto L5c
            r15.setOrientation(r4)     // Catch: java.lang.Throwable -> L178
            java.lang.String r1 = r15.k     // Catch: java.lang.Throwable -> L178
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L178
            if (r1 == 0) goto L5c
            boolean r1 = r15.l     // Catch: java.lang.Throwable -> L178
            if (r1 == 0) goto L58
            java.lang.String r1 = "广告 %s/%s"
            goto L5a
        L58:
            java.lang.String r1 = "ADS %s/%s"
        L5a:
            r15.k = r1     // Catch: java.lang.Throwable -> L178
        L5c:
            java.util.List<android.widget.ProgressBar> r1 = r15.i     // Catch: java.lang.Throwable -> L178
            r1.clear()     // Catch: java.lang.Throwable -> L178
            r15.removeAllViews()     // Catch: java.lang.Throwable -> L178
            android.graphics.drawable.GradientDrawable r1 = r15.c()     // Catch: java.lang.Throwable -> L178
            r15.setBackground(r1)     // Catch: java.lang.Throwable -> L178
            android.widget.TextView r1 = new android.widget.TextView     // Catch: java.lang.Throwable -> L178
            android.content.Context r5 = r15.getContext()     // Catch: java.lang.Throwable -> L178
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L178
            r15.j = r1     // Catch: java.lang.Throwable -> L178
            r5 = -1
            r1.setTextColor(r5)     // Catch: java.lang.Throwable -> L178
            android.widget.TextView r1 = r15.j     // Catch: java.lang.Throwable -> L178
            r6 = 1094713344(0x41400000, float:12.0)
            r1.setTextSize(r6)     // Catch: java.lang.Throwable -> L178
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L178
            r6 = -2
            r1.<init>(r6, r6)     // Catch: java.lang.Throwable -> L178
            android.widget.TextView r6 = r15.j     // Catch: java.lang.Throwable -> L178
            r6.setLayoutParams(r1)     // Catch: java.lang.Throwable -> L178
            int r6 = r15.c     // Catch: java.lang.Throwable -> L178
            r7 = 5
            r8 = 15
            if (r6 != r2) goto La0
            r1.gravity = r7     // Catch: java.lang.Throwable -> L178
            android.widget.TextView r1 = r15.j     // Catch: java.lang.Throwable -> L178
            int r6 = r15.d     // Catch: java.lang.Throwable -> L178
            int r6 = r6 / r3
            int r9 = r15.d     // Catch: java.lang.Throwable -> L178
            int r9 = r9 / r3
            r1.setPadding(r6, r8, r9, r7)     // Catch: java.lang.Throwable -> L178
        La0:
            int r1 = r15.c     // Catch: java.lang.Throwable -> L178
            r6 = 16
            if (r1 != r3) goto Lb6
            android.widget.TextView r1 = r15.j     // Catch: java.lang.Throwable -> L178
            r1.setGravity(r6)     // Catch: java.lang.Throwable -> L178
            android.widget.TextView r1 = r15.j     // Catch: java.lang.Throwable -> L178
            int r9 = r15.d     // Catch: java.lang.Throwable -> L178
            int r9 = r9 / r3
            int r10 = r15.d     // Catch: java.lang.Throwable -> L178
            int r10 = r10 / r3
            r1.setPadding(r9, r4, r10, r4)     // Catch: java.lang.Throwable -> L178
        Lb6:
            r1 = 0
            android.content.Context r9 = r15.getContext()     // Catch: java.lang.Throwable -> Le9
            java.lang.String r10 = "mbridge_reward_video_icon"
            java.lang.String r11 = "drawable"
            int r9 = com.mbridge.msdk.foundation.tools.s.a(r9, r10, r11)     // Catch: java.lang.Throwable -> Le9
            if (r9 == 0) goto Lf1
            android.content.Context r10 = r15.getContext()     // Catch: java.lang.Throwable -> Le9
            android.content.res.Resources r10 = r10.getResources()     // Catch: java.lang.Throwable -> Le9
            android.graphics.drawable.Drawable r9 = r10.getDrawable(r9)     // Catch: java.lang.Throwable -> Le9
            if (r9 == 0) goto Lf1
            int r10 = r9.getMinimumWidth()     // Catch: java.lang.Throwable -> Le9
            int r11 = r9.getMinimumHeight()     // Catch: java.lang.Throwable -> Le9
            r9.setBounds(r4, r4, r10, r11)     // Catch: java.lang.Throwable -> Le9
            android.widget.TextView r10 = r15.j     // Catch: java.lang.Throwable -> Le9
            r10.setCompoundDrawables(r9, r1, r1, r1)     // Catch: java.lang.Throwable -> Le9
            android.widget.TextView r9 = r15.j     // Catch: java.lang.Throwable -> Le9
            r9.setCompoundDrawablePadding(r7)     // Catch: java.lang.Throwable -> Le9
            goto Lf1
        Le9:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L178
            com.mbridge.msdk.foundation.tools.z.d(r0, r7)     // Catch: java.lang.Throwable -> L178
        Lf1:
            android.widget.TextView r7 = r15.j     // Catch: java.lang.Throwable -> L178
            int r9 = r15.f     // Catch: java.lang.Throwable -> L178
            java.lang.StringBuilder r9 = r15.a(r9)     // Catch: java.lang.Throwable -> L178
            r7.setText(r9)     // Catch: java.lang.Throwable -> L178
            android.widget.LinearLayout r7 = new android.widget.LinearLayout     // Catch: java.lang.Throwable -> L178
            android.content.Context r9 = r15.getContext()     // Catch: java.lang.Throwable -> L178
            r7.<init>(r9)     // Catch: java.lang.Throwable -> L178
            r7.setOrientation(r4)     // Catch: java.lang.Throwable -> L178
            android.widget.LinearLayout$LayoutParams r9 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L178
            r10 = 25
            r9.<init>(r5, r10)     // Catch: java.lang.Throwable -> L178
            r7.setLayoutParams(r9)     // Catch: java.lang.Throwable -> L178
            r5 = r4
        L113:
            int r11 = r15.b     // Catch: java.lang.Throwable -> L178
            r12 = 1065353216(0x3f800000, float:1.0)
            if (r5 >= r11) goto L153
            android.widget.ProgressBar r11 = new android.widget.ProgressBar     // Catch: java.lang.Throwable -> L178
            android.content.Context r13 = r15.getContext()     // Catch: java.lang.Throwable -> L178
            r14 = 16842872(0x1010078, float:2.3693894E-38)
            r11.<init>(r13, r1, r14)     // Catch: java.lang.Throwable -> L178
            r13 = 100
            r11.setMax(r13)     // Catch: java.lang.Throwable -> L178
            r11.setProgress(r4)     // Catch: java.lang.Throwable -> L178
            android.graphics.drawable.LayerDrawable r13 = r15.b()     // Catch: java.lang.Throwable -> L178
            r11.setProgressDrawable(r13)     // Catch: java.lang.Throwable -> L178
            android.widget.LinearLayout$LayoutParams r13 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L178
            r14 = 20
            r13.<init>(r4, r14, r12)     // Catch: java.lang.Throwable -> L178
            int r12 = r15.d     // Catch: java.lang.Throwable -> L178
            int r12 = r12 / r3
            r13.leftMargin = r12     // Catch: java.lang.Throwable -> L178
            int r12 = r15.d     // Catch: java.lang.Throwable -> L178
            int r12 = r12 / r3
            r13.rightMargin = r12     // Catch: java.lang.Throwable -> L178
            r11.setLayoutParams(r13)     // Catch: java.lang.Throwable -> L178
            r7.addView(r11)     // Catch: java.lang.Throwable -> L178
            java.util.List<android.widget.ProgressBar> r12 = r15.i     // Catch: java.lang.Throwable -> L178
            r12.add(r11)     // Catch: java.lang.Throwable -> L178
            int r5 = r5 + 1
            goto L113
        L153:
            int r1 = r15.c     // Catch: java.lang.Throwable -> L178
            if (r1 != r2) goto L164
            r1 = 10
            r15.setPadding(r8, r1, r8, r10)     // Catch: java.lang.Throwable -> L178
            android.widget.TextView r1 = r15.j     // Catch: java.lang.Throwable -> L178
            r15.addView(r1)     // Catch: java.lang.Throwable -> L178
            r15.addView(r7)     // Catch: java.lang.Throwable -> L178
        L164:
            int r1 = r15.c     // Catch: java.lang.Throwable -> L178
            if (r1 != r3) goto L180
            r15.setPadding(r8, r4, r8, r10)     // Catch: java.lang.Throwable -> L178
            r9.gravity = r6     // Catch: java.lang.Throwable -> L178
            r9.weight = r12     // Catch: java.lang.Throwable -> L178
            r15.addView(r7)     // Catch: java.lang.Throwable -> L178
            android.widget.TextView r1 = r15.j     // Catch: java.lang.Throwable -> L178
            r15.addView(r1)     // Catch: java.lang.Throwable -> L178
            goto L180
        L178:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L180:
            return
    }

    private android.graphics.drawable.LayerDrawable b() {
            r7 = this;
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r1 = 0
            r0.setShape(r1)
            int r2 = r7.e
            float r2 = (float) r2
            r0.setCornerRadius(r2)
            int r2 = r7.g
            r0.setColor(r2)
            android.graphics.drawable.GradientDrawable r2 = new android.graphics.drawable.GradientDrawable
            r2.<init>()
            r2.setShape(r1)
            int r3 = r7.e
            float r3 = (float) r3
            r2.setCornerRadius(r3)
            int r3 = r7.h
            r2.setColor(r3)
            android.graphics.drawable.ScaleDrawable r3 = new android.graphics.drawable.ScaleDrawable
            r4 = 3
            r5 = 1065353216(0x3f800000, float:1.0)
            r6 = -1082130432(0xffffffffbf800000, float:-1.0)
            r3.<init>(r2, r4, r5, r6)
            android.graphics.drawable.LayerDrawable r2 = new android.graphics.drawable.LayerDrawable
            r4 = 2
            android.graphics.drawable.Drawable[] r4 = new android.graphics.drawable.Drawable[r4]
            r4[r1] = r0
            r0 = 1
            r4[r0] = r3
            r2.<init>(r4)
            r3 = 16908288(0x1020000, float:2.387723E-38)
            r2.setId(r1, r3)
            r1 = 16908301(0x102000d, float:2.3877265E-38)
            r2.setId(r0, r1)
            return r2
    }

    private android.graphics.drawable.GradientDrawable c() {
            r2 = this;
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r1 = 0
            r0.setGradientType(r1)
            android.graphics.drawable.GradientDrawable$Orientation r1 = android.graphics.drawable.GradientDrawable.Orientation.TOP_BOTTOM
            r0.setOrientation(r1)
            r1 = 1
            r0.setDither(r1)
            r1 = 2
            int[] r1 = new int[r1]
            r1 = {x001c: FILL_ARRAY_DATA , data: [0, 1291845632} // fill-array
            r0.setColors(r1)
            return r0
    }

    public void dismiss() {
            r3 = this;
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 0
            r0.<init>(r1, r2)
            r1 = 1000(0x3e8, double:4.94E-321)
            r0.setDuration(r1)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar$1 r1 = new com.mbridge.msdk.dycreator.baseview.cusview.MBridgeSegmentsProgressBar$1
            r1.<init>(r3)
            r0.setAnimationListener(r1)
            r3.startAnimation(r0)
            return
    }

    public void init(int r1, int r2) {
            r0 = this;
            r0.b = r1
            r0.c = r2
            r0.a()
            return
    }

    public void init(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.b = r1
            r0.c = r2
            r0.h = r3
            r0.g = r4
            r0.a()
            return
    }

    public void init(int r1, int r2, int r3, int r4, int r5, int r6) {
            r0 = this;
            r0.b = r1
            r0.c = r2
            r0.h = r3
            r0.g = r4
            r0.d = r5
            r0.e = r6
            r0.a()
            return
    }

    public void setIndicatorText(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setProgress(int r2, int r3) {
            r1 = this;
            java.util.List<android.widget.ProgressBar> r0 = r1.i     // Catch: java.lang.Throwable -> L32
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L32
            if (r0 != 0) goto L9
            return
        L9:
            java.util.List<android.widget.ProgressBar> r0 = r1.i     // Catch: java.lang.Throwable -> L32
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L32
            if (r3 >= r0) goto L1c
            java.util.List<android.widget.ProgressBar> r0 = r1.i     // Catch: java.lang.Throwable -> L32
            java.lang.Object r0 = r0.get(r3)     // Catch: java.lang.Throwable -> L32
            android.widget.ProgressBar r0 = (android.widget.ProgressBar) r0     // Catch: java.lang.Throwable -> L32
            r0.setProgress(r2)     // Catch: java.lang.Throwable -> L32
        L1c:
            int r3 = r3 + 1
            int r2 = r1.f     // Catch: java.lang.Throwable -> L32
            if (r3 <= r2) goto L3c
            r1.f = r3     // Catch: java.lang.Throwable -> L32
            android.widget.TextView r2 = r1.j     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L3c
            android.widget.TextView r2 = r1.j     // Catch: java.lang.Throwable -> L32
            java.lang.StringBuilder r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L32
            r2.setText(r3)     // Catch: java.lang.Throwable -> L32
            goto L3c
        L32:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r3 = "MBridgeSegmentsProgressBar"
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L3c:
            return
    }
}
