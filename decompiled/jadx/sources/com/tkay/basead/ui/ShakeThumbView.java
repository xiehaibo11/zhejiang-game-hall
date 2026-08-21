package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.util.AttributeSet;
import android.view.View;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class ShakeThumbView extends BaseShakeView {
    private ImageView c;

    public ShakeThumbView(Context context) {
        super(context);
    }

    public ShakeThumbView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public ShakeThumbView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public ShakeThumbView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
    }

    @Override // com.tkay.basead.ui.BaseShakeView
    final void a() {
        setOrientation(1);
        setGravity(1);
        this.c = new ImageView(getContext());
        this.c.setLayoutParams(new LinearLayout.LayoutParams(h.a(getContext(), 90.0f), h.a(getContext(), 90.0f)));
        ImageView imageView = this.c;
        int iA = h.a(getContext(), 88.0f);
        int color = Color.parseColor("#99000000");
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(color);
        gradientDrawable.setCornerRadius(iA);
        imageView.setBackgroundDrawable(gradientDrawable);
        this.f5760a = new ImageView(getContext());
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(h.a(getContext(), 40.0f), h.a(getContext(), 40.0f));
        layoutParams.gravity = 49;
        layoutParams.topMargin = h.a(getContext(), 12.0f);
        this.f5760a.setLayoutParams(layoutParams);
        this.f5760a.setImageResource(h.a(m.a().f(), "myoffer_shake_icon", i.c));
        TextView textView = new TextView(getContext());
        FrameLayout.LayoutParams layoutParams2 = new FrameLayout.LayoutParams(-2, -2);
        layoutParams2.gravity = 81;
        layoutParams2.bottomMargin = h.a(getContext(), 13.0f);
        textView.setLayoutParams(layoutParams2);
        textView.setText(h.a(m.a().f(), "myoffer_shake_simple_title", i.g));
        textView.setTextSize(1, 11.0f);
        textView.setTextColor(-1);
        FrameLayout frameLayout = new FrameLayout(getContext());
        frameLayout.setLayoutParams(new LinearLayout.LayoutParams(-2, -2));
        frameLayout.addView(this.c);
        frameLayout.addView(this.f5760a);
        frameLayout.addView(textView);
        addView(frameLayout);
    }

    private void a(View view) {
        int iA = h.a(getContext(), 88.0f);
        int color = Color.parseColor("#99000000");
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(color);
        gradientDrawable.setCornerRadius(iA);
        view.setBackgroundDrawable(gradientDrawable);
    }

    @Override // com.tkay.basead.ui.BaseShakeView, android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
    }

    @Override // com.tkay.basead.ui.BaseShakeView, android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
    }

    @Override // android.view.View
    public void setOnClickListener(View.OnClickListener onClickListener) {
        try {
            this.f5760a.setOnClickListener(onClickListener);
            this.c.setOnClickListener(onClickListener);
        } catch (Throwable unused) {
        }
    }
}
