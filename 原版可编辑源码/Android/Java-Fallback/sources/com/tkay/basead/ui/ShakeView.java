package com.tkay.basead.ui;

public class ShakeView extends com.tkay.basead.ui.BaseShakeView {
    private android.widget.ImageView c;
    private android.view.View d;

    public ShakeView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ShakeView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public ShakeView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public ShakeView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    private void a(android.view.View r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            r1 = 1122369536(0x42e60000, float:115.0)
            int r0 = com.tkay.core.common.l.h.a(r0, r1)
            java.lang.String r1 = "#99000000"
            int r1 = android.graphics.Color.parseColor(r1)
            android.graphics.drawable.GradientDrawable r2 = new android.graphics.drawable.GradientDrawable
            r2.<init>()
            r2.setColor(r1)
            float r0 = (float) r0
            r2.setCornerRadius(r0)
            r4.setBackgroundDrawable(r2)
            return
    }

    @Override
    final void a() {
            r6 = this;
            r0 = 1
            r6.setOrientation(r0)
            r6.setGravity(r0)
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r6.getContext()
            r0.<init>(r1)
            r6.c = r0
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r1 = r6.getContext()
            r2 = 1122369536(0x42e60000, float:115.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            android.content.Context r3 = r6.getContext()
            int r3 = com.tkay.core.common.l.h.a(r3, r2)
            r0.<init>(r1, r3)
            android.widget.ImageView r1 = r6.c
            r1.setLayoutParams(r0)
            android.widget.ImageView r0 = r6.c
            android.content.Context r1 = r6.getContext()
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            java.lang.String r2 = "#99000000"
            int r2 = android.graphics.Color.parseColor(r2)
            android.graphics.drawable.GradientDrawable r3 = new android.graphics.drawable.GradientDrawable
            r3.<init>()
            r3.setColor(r2)
            float r1 = (float) r1
            r3.setCornerRadius(r1)
            r0.setBackgroundDrawable(r3)
            android.widget.ImageView r0 = new android.widget.ImageView
            android.content.Context r1 = r6.getContext()
            r0.<init>(r1)
            r6.a = r0
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            android.content.Context r1 = r6.getContext()
            r2 = 1117257728(0x42980000, float:76.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            android.content.Context r3 = r6.getContext()
            int r2 = com.tkay.core.common.l.h.a(r3, r2)
            r0.<init>(r1, r2)
            r1 = 17
            r0.gravity = r1
            android.widget.ImageView r1 = r6.a
            r1.setLayoutParams(r0)
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = "myoffer_shake_icon"
            java.lang.String r2 = "drawable"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            android.widget.ImageView r1 = r6.a
            r1.setImageResource(r0)
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            android.content.Context r1 = r6.getContext()
            r0.<init>(r1)
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            r2 = -2
            r1.<init>(r2, r2)
            r0.setLayoutParams(r1)
            android.widget.ImageView r2 = r6.c
            r0.addView(r2)
            android.widget.ImageView r2 = r6.a
            r0.addView(r2)
            android.content.Context r2 = r6.getContext()
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
            android.content.Context r3 = r6.getContext()
            java.lang.String r4 = "myoffer_splash_shake_hint_text"
            java.lang.String r5 = "layout"
            int r3 = com.tkay.core.common.l.h.a(r3, r4, r5)
            r4 = 0
            android.view.View r2 = r2.inflate(r3, r4)
            r6.d = r2
            r2.setLayoutParams(r1)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = "tv_splash_shake_hint_text"
            java.lang.String r3 = "id"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            android.view.View r2 = r6.d
            android.view.View r1 = r2.findViewById(r1)
            android.widget.TextView r1 = (android.widget.TextView) r1
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            java.lang.String r3 = "myoffer_shake_full_title"
            java.lang.String r4 = "string"
            int r2 = com.tkay.core.common.l.h.a(r2, r3, r4)
            r1.setText(r2)
            r6.addView(r0)
            android.view.View r0 = r6.d
            r6.addView(r0)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r0 = this;
            super.onAttachedToWindow()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r0 = this;
            super.onDetachedFromWindow()
            return
    }

    @Override
    public void setOnClickListener(android.view.View.OnClickListener r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.a     // Catch: java.lang.Throwable -> Lf
            r0.setOnClickListener(r2)     // Catch: java.lang.Throwable -> Lf
            android.widget.ImageView r0 = r1.c     // Catch: java.lang.Throwable -> Lf
            r0.setOnClickListener(r2)     // Catch: java.lang.Throwable -> Lf
            android.view.View r0 = r1.d     // Catch: java.lang.Throwable -> Lf
            r0.setOnClickListener(r2)     // Catch: java.lang.Throwable -> Lf
        Lf:
            return
    }
}
