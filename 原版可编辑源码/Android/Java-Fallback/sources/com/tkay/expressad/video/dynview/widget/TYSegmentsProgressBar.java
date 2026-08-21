package com.tkay.expressad.video.dynview.widget;

public class TYSegmentsProgressBar extends android.widget.LinearLayout {
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


    public TYSegmentsProgressBar(android.content.Context r2) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r2 = "TYSegmentsProgressBar"
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

    public TYSegmentsProgressBar(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = "TYSegmentsProgressBar"
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

    public TYSegmentsProgressBar(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = "TYSegmentsProgressBar"
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

    public TYSegmentsProgressBar(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.lang.String r1 = "TYSegmentsProgressBar"
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
            goto L38
        L22:
            r1 = move-exception
            int r2 = r5.b
            r0.append(r2)
            java.lang.String r2 = "videos, the"
            r0.append(r2)
            r0.append(r6)
            java.lang.String r6 = " is playing."
            r0.append(r6)
            r1.getMessage()
        L38:
            return r0
    }

    private void a() {
            r14 = this;
            int r0 = r14.c     // Catch: java.lang.Throwable -> L163
            java.lang.String r1 = "string"
            r2 = 1
            if (r0 != r2) goto L26
            r14.setOrientation(r2)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = r14.k     // Catch: java.lang.Throwable -> L163
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L163
            if (r0 == 0) goto L26
            android.content.Context r0 = r14.getContext()     // Catch: java.lang.Throwable -> L163
            android.content.Context r3 = r14.getContext()     // Catch: java.lang.Throwable -> L163
            java.lang.String r4 = "tkay_cm_segment_process_bar_hint_text"
            int r3 = com.tkay.expressad.foundation.h.i.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = r0.getString(r3)     // Catch: java.lang.Throwable -> L163
            r14.k = r0     // Catch: java.lang.Throwable -> L163
        L26:
            int r0 = r14.c     // Catch: java.lang.Throwable -> L163
            r3 = 2
            r4 = 0
            if (r0 != r3) goto L4b
            r14.setOrientation(r4)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = r14.k     // Catch: java.lang.Throwable -> L163
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L163
            if (r0 == 0) goto L4b
            android.content.Context r0 = r14.getContext()     // Catch: java.lang.Throwable -> L163
            android.content.Context r5 = r14.getContext()     // Catch: java.lang.Throwable -> L163
            java.lang.String r6 = "tkay_cm_segment_process_bar_hint_text_lite"
            int r1 = com.tkay.expressad.foundation.h.i.a(r5, r6, r1)     // Catch: java.lang.Throwable -> L163
            java.lang.String r0 = r0.getString(r1)     // Catch: java.lang.Throwable -> L163
            r14.k = r0     // Catch: java.lang.Throwable -> L163
        L4b:
            java.util.List<android.widget.ProgressBar> r0 = r14.i     // Catch: java.lang.Throwable -> L163
            r0.clear()     // Catch: java.lang.Throwable -> L163
            r14.removeAllViews()     // Catch: java.lang.Throwable -> L163
            android.graphics.drawable.GradientDrawable r0 = c()     // Catch: java.lang.Throwable -> L163
            r14.setBackgroundDrawable(r0)     // Catch: java.lang.Throwable -> L163
            android.widget.TextView r0 = new android.widget.TextView     // Catch: java.lang.Throwable -> L163
            android.content.Context r1 = r14.getContext()     // Catch: java.lang.Throwable -> L163
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L163
            r14.j = r0     // Catch: java.lang.Throwable -> L163
            r1 = -1
            r0.setTextColor(r1)     // Catch: java.lang.Throwable -> L163
            android.widget.TextView r0 = r14.j     // Catch: java.lang.Throwable -> L163
            r5 = 1094713344(0x41400000, float:12.0)
            r0.setTextSize(r5)     // Catch: java.lang.Throwable -> L163
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L163
            r5 = -2
            r0.<init>(r5, r5)     // Catch: java.lang.Throwable -> L163
            android.widget.TextView r5 = r14.j     // Catch: java.lang.Throwable -> L163
            r5.setLayoutParams(r0)     // Catch: java.lang.Throwable -> L163
            int r5 = r14.c     // Catch: java.lang.Throwable -> L163
            r6 = 5
            r7 = 15
            if (r5 != r2) goto L8f
            r0.gravity = r6     // Catch: java.lang.Throwable -> L163
            android.widget.TextView r0 = r14.j     // Catch: java.lang.Throwable -> L163
            int r5 = r14.d     // Catch: java.lang.Throwable -> L163
            int r5 = r5 / r3
            int r8 = r14.d     // Catch: java.lang.Throwable -> L163
            int r8 = r8 / r3
            r0.setPadding(r5, r7, r8, r6)     // Catch: java.lang.Throwable -> L163
        L8f:
            int r0 = r14.c     // Catch: java.lang.Throwable -> L163
            r5 = 16
            if (r0 != r3) goto La5
            android.widget.TextView r0 = r14.j     // Catch: java.lang.Throwable -> L163
            r0.setGravity(r5)     // Catch: java.lang.Throwable -> L163
            android.widget.TextView r0 = r14.j     // Catch: java.lang.Throwable -> L163
            int r8 = r14.d     // Catch: java.lang.Throwable -> L163
            int r8 = r8 / r3
            int r9 = r14.d     // Catch: java.lang.Throwable -> L163
            int r9 = r9 / r3
            r0.setPadding(r8, r4, r9, r4)     // Catch: java.lang.Throwable -> L163
        La5:
            r0 = 0
            android.content.Context r8 = r14.getContext()     // Catch: java.lang.Throwable -> Ld8
            java.lang.String r9 = "tkay_reward_video_icon"
            java.lang.String r10 = "drawable"
            int r8 = com.tkay.expressad.foundation.h.i.a(r8, r9, r10)     // Catch: java.lang.Throwable -> Ld8
            if (r8 == 0) goto Ldc
            android.content.Context r9 = r14.getContext()     // Catch: java.lang.Throwable -> Ld8
            android.content.res.Resources r9 = r9.getResources()     // Catch: java.lang.Throwable -> Ld8
            android.graphics.drawable.Drawable r8 = r9.getDrawable(r8)     // Catch: java.lang.Throwable -> Ld8
            if (r8 == 0) goto Ldc
            int r9 = r8.getMinimumWidth()     // Catch: java.lang.Throwable -> Ld8
            int r10 = r8.getMinimumHeight()     // Catch: java.lang.Throwable -> Ld8
            r8.setBounds(r4, r4, r9, r10)     // Catch: java.lang.Throwable -> Ld8
            android.widget.TextView r9 = r14.j     // Catch: java.lang.Throwable -> Ld8
            r9.setCompoundDrawables(r8, r0, r0, r0)     // Catch: java.lang.Throwable -> Ld8
            android.widget.TextView r8 = r14.j     // Catch: java.lang.Throwable -> Ld8
            r8.setCompoundDrawablePadding(r6)     // Catch: java.lang.Throwable -> Ld8
            goto Ldc
        Ld8:
            r6 = move-exception
            r6.getMessage()     // Catch: java.lang.Throwable -> L163
        Ldc:
            android.widget.TextView r6 = r14.j     // Catch: java.lang.Throwable -> L163
            int r8 = r14.f     // Catch: java.lang.Throwable -> L163
            java.lang.StringBuilder r8 = r14.a(r8)     // Catch: java.lang.Throwable -> L163
            r6.setText(r8)     // Catch: java.lang.Throwable -> L163
            android.widget.LinearLayout r6 = new android.widget.LinearLayout     // Catch: java.lang.Throwable -> L163
            android.content.Context r8 = r14.getContext()     // Catch: java.lang.Throwable -> L163
            r6.<init>(r8)     // Catch: java.lang.Throwable -> L163
            r6.setOrientation(r4)     // Catch: java.lang.Throwable -> L163
            android.widget.LinearLayout$LayoutParams r8 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L163
            r9 = 25
            r8.<init>(r1, r9)     // Catch: java.lang.Throwable -> L163
            r6.setLayoutParams(r8)     // Catch: java.lang.Throwable -> L163
            r1 = r4
        Lfe:
            int r10 = r14.b     // Catch: java.lang.Throwable -> L163
            r11 = 1065353216(0x3f800000, float:1.0)
            if (r1 >= r10) goto L13e
            android.widget.ProgressBar r10 = new android.widget.ProgressBar     // Catch: java.lang.Throwable -> L163
            android.content.Context r12 = r14.getContext()     // Catch: java.lang.Throwable -> L163
            r13 = 16842872(0x1010078, float:2.3693894E-38)
            r10.<init>(r12, r0, r13)     // Catch: java.lang.Throwable -> L163
            r12 = 100
            r10.setMax(r12)     // Catch: java.lang.Throwable -> L163
            r10.setProgress(r4)     // Catch: java.lang.Throwable -> L163
            android.graphics.drawable.LayerDrawable r12 = r14.b()     // Catch: java.lang.Throwable -> L163
            r10.setProgressDrawable(r12)     // Catch: java.lang.Throwable -> L163
            android.widget.LinearLayout$LayoutParams r12 = new android.widget.LinearLayout$LayoutParams     // Catch: java.lang.Throwable -> L163
            r13 = 20
            r12.<init>(r4, r13, r11)     // Catch: java.lang.Throwable -> L163
            int r11 = r14.d     // Catch: java.lang.Throwable -> L163
            int r11 = r11 / r3
            r12.leftMargin = r11     // Catch: java.lang.Throwable -> L163
            int r11 = r14.d     // Catch: java.lang.Throwable -> L163
            int r11 = r11 / r3
            r12.rightMargin = r11     // Catch: java.lang.Throwable -> L163
            r10.setLayoutParams(r12)     // Catch: java.lang.Throwable -> L163
            r6.addView(r10)     // Catch: java.lang.Throwable -> L163
            java.util.List<android.widget.ProgressBar> r11 = r14.i     // Catch: java.lang.Throwable -> L163
            r11.add(r10)     // Catch: java.lang.Throwable -> L163
            int r1 = r1 + 1
            goto Lfe
        L13e:
            int r0 = r14.c     // Catch: java.lang.Throwable -> L163
            if (r0 != r2) goto L14f
            r0 = 10
            r14.setPadding(r7, r0, r7, r9)     // Catch: java.lang.Throwable -> L163
            android.widget.TextView r0 = r14.j     // Catch: java.lang.Throwable -> L163
            r14.addView(r0)     // Catch: java.lang.Throwable -> L163
            r14.addView(r6)     // Catch: java.lang.Throwable -> L163
        L14f:
            int r0 = r14.c     // Catch: java.lang.Throwable -> L163
            if (r0 != r3) goto L162
            r14.setPadding(r7, r4, r7, r9)     // Catch: java.lang.Throwable -> L163
            r8.gravity = r5     // Catch: java.lang.Throwable -> L163
            r8.weight = r11     // Catch: java.lang.Throwable -> L163
            r14.addView(r6)     // Catch: java.lang.Throwable -> L163
            android.widget.TextView r0 = r14.j     // Catch: java.lang.Throwable -> L163
            r14.addView(r0)     // Catch: java.lang.Throwable -> L163
        L162:
            return
        L163:
            r0 = move-exception
            r0.getMessage()
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

    private static android.graphics.drawable.GradientDrawable c() {
            android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
            r0.<init>()
            r1 = 0
            r0.setGradientType(r1)
            r2 = 1
            r0.setDither(r2)
            int r3 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L24
            r4 = 16
            if (r3 < r4) goto L24
            android.graphics.drawable.GradientDrawable$Orientation r3 = android.graphics.drawable.GradientDrawable.Orientation.TOP_BOTTOM     // Catch: java.lang.Throwable -> L24
            r0.setOrientation(r3)     // Catch: java.lang.Throwable -> L24
            r3 = 2
            int[] r3 = new int[r3]     // Catch: java.lang.Throwable -> L24
            r3[r1] = r1     // Catch: java.lang.Throwable -> L24
            r1 = 1291845632(0x4d000000, float:1.3421773E8)
            r3[r2] = r1     // Catch: java.lang.Throwable -> L24
            r0.setColors(r3)     // Catch: java.lang.Throwable -> L24
        L24:
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
            com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar$1 r1 = new com.tkay.expressad.video.dynview.widget.TYSegmentsProgressBar$1
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
            if (r3 <= r2) goto L31
            r1.f = r3     // Catch: java.lang.Throwable -> L32
            android.widget.TextView r2 = r1.j     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L31
            android.widget.TextView r2 = r1.j     // Catch: java.lang.Throwable -> L32
            java.lang.StringBuilder r3 = r1.a(r3)     // Catch: java.lang.Throwable -> L32
            r2.setText(r3)     // Catch: java.lang.Throwable -> L32
        L31:
            return
        L32:
            r2 = move-exception
            r2.getMessage()
            return
    }
}
