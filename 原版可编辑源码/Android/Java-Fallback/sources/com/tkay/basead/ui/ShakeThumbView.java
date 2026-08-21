package com.tkay.basead.ui;

public class ShakeThumbView extends com.tkay.basead.ui.BaseShakeView {
    private android.widget.ImageView c;

    public ShakeThumbView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public ShakeThumbView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public ShakeThumbView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public ShakeThumbView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    private void a(android.view.View r4) {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            r1 = 1118830592(0x42b00000, float:88.0)
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
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r6.getContext()
            r1.<init>(r2)
            r6.c = r1
            android.widget.LinearLayout$LayoutParams r1 = new android.widget.LinearLayout$LayoutParams
            android.content.Context r2 = r6.getContext()
            r3 = 1119092736(0x42b40000, float:90.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            android.content.Context r4 = r6.getContext()
            int r3 = com.tkay.core.common.l.h.a(r4, r3)
            r1.<init>(r2, r3)
            android.widget.ImageView r2 = r6.c
            r2.setLayoutParams(r1)
            android.widget.ImageView r1 = r6.c
            android.content.Context r2 = r6.getContext()
            r3 = 1118830592(0x42b00000, float:88.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            java.lang.String r3 = "#99000000"
            int r3 = android.graphics.Color.parseColor(r3)
            android.graphics.drawable.GradientDrawable r4 = new android.graphics.drawable.GradientDrawable
            r4.<init>()
            r4.setColor(r3)
            float r2 = (float) r2
            r4.setCornerRadius(r2)
            r1.setBackgroundDrawable(r4)
            android.widget.ImageView r1 = new android.widget.ImageView
            android.content.Context r2 = r6.getContext()
            r1.<init>(r2)
            r6.a = r1
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            android.content.Context r2 = r6.getContext()
            r3 = 1109393408(0x42200000, float:40.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            android.content.Context r4 = r6.getContext()
            int r3 = com.tkay.core.common.l.h.a(r4, r3)
            r1.<init>(r2, r3)
            r2 = 49
            r1.gravity = r2
            android.content.Context r2 = r6.getContext()
            r3 = 1094713344(0x41400000, float:12.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            r1.topMargin = r2
            android.widget.ImageView r2 = r6.a
            r2.setLayoutParams(r1)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = "myoffer_shake_icon"
            java.lang.String r3 = "drawable"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            android.widget.ImageView r2 = r6.a
            r2.setImageResource(r1)
            android.widget.TextView r1 = new android.widget.TextView
            android.content.Context r2 = r6.getContext()
            r1.<init>(r2)
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -2
            r2.<init>(r3, r3)
            r4 = 81
            r2.gravity = r4
            android.content.Context r4 = r6.getContext()
            r5 = 1095761920(0x41500000, float:13.0)
            int r4 = com.tkay.core.common.l.h.a(r4, r5)
            r2.bottomMargin = r4
            r1.setLayoutParams(r2)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            java.lang.String r4 = "myoffer_shake_simple_title"
            java.lang.String r5 = "string"
            int r2 = com.tkay.core.common.l.h.a(r2, r4, r5)
            r1.setText(r2)
            r2 = 1093664768(0x41300000, float:11.0)
            r1.setTextSize(r0, r2)
            r0 = -1
            r1.setTextColor(r0)
            android.widget.FrameLayout r0 = new android.widget.FrameLayout
            android.content.Context r2 = r6.getContext()
            r0.<init>(r2)
            android.widget.LinearLayout$LayoutParams r2 = new android.widget.LinearLayout$LayoutParams
            r2.<init>(r3, r3)
            r0.setLayoutParams(r2)
            android.widget.ImageView r2 = r6.c
            r0.addView(r2)
            android.widget.ImageView r2 = r6.a
            r0.addView(r2)
            r0.addView(r1)
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
            android.widget.ImageView r0 = r1.a     // Catch: java.lang.Throwable -> La
            r0.setOnClickListener(r2)     // Catch: java.lang.Throwable -> La
            android.widget.ImageView r0 = r1.c     // Catch: java.lang.Throwable -> La
            r0.setOnClickListener(r2)     // Catch: java.lang.Throwable -> La
        La:
            return
    }
}
