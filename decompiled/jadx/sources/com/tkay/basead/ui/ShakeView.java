package com.tkay.basead.ui;

import android.content.Context;
import android.graphics.Color;
import android.graphics.drawable.GradientDrawable;
import android.util.AttributeSet;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.TextView;
import com.tkay.core.common.b.m;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public class ShakeView extends BaseShakeView {
    private ImageView c;
    private View d;

    public ShakeView(Context context) {
        super(context);
    }

    public ShakeView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public ShakeView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public ShakeView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
    }

    @Override // com.tkay.basead.ui.BaseShakeView
    final void a() {
        setOrientation(1);
        setGravity(1);
        this.c = new ImageView(getContext());
        this.c.setLayoutParams(new LinearLayout.LayoutParams(h.a(getContext(), 115.0f), h.a(getContext(), 115.0f)));
        ImageView imageView = this.c;
        int iA = h.a(getContext(), 115.0f);
        int color = Color.parseColor("#99000000");
        GradientDrawable gradientDrawable = new GradientDrawable();
        gradientDrawable.setColor(color);
        gradientDrawable.setCornerRadius(iA);
        imageView.setBackgroundDrawable(gradientDrawable);
        this.f5760a = new ImageView(getContext());
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(h.a(getContext(), 76.0f), h.a(getContext(), 76.0f));
        layoutParams.gravity = 17;
        this.f5760a.setLayoutParams(layoutParams);
        this.f5760a.setImageResource(h.a(m.a().f(), "myoffer_shake_icon", i.c));
        FrameLayout frameLayout = new FrameLayout(getContext());
        LinearLayout.LayoutParams layoutParams2 = new LinearLayout.LayoutParams(-2, -2);
        frameLayout.setLayoutParams(layoutParams2);
        frameLayout.addView(this.c);
        frameLayout.addView(this.f5760a);
        View viewInflate = LayoutInflater.from(getContext()).inflate(h.a(getContext(), "myoffer_splash_shake_hint_text", "layout"), (ViewGroup) null);
        this.d = viewInflate;
        viewInflate.setLayoutParams(layoutParams2);
        ((TextView) this.d.findViewById(h.a(m.a().f(), "tv_splash_shake_hint_text", "id"))).setText(h.a(m.a().f(), "myoffer_shake_full_title", i.g));
        addView(frameLayout);
        addView(this.d);
    }

    private void a(View view) {
        int iA = h.a(getContext(), 115.0f);
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
            this.d.setOnClickListener(onClickListener);
        } catch (Throwable unused) {
        }
    }
}
