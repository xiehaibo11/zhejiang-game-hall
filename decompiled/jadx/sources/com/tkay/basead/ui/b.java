package com.tkay.basead.ui;

import android.util.TypedValue;
import android.view.ViewGroup;
import android.view.animation.LinearInterpolator;
import android.view.animation.RotateAnimation;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.RelativeLayout;
import com.tkay.core.common.l.h;
import com.tkay.expressad.foundation.h.i;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ViewGroup f5861a;
    private ImageView b;
    private int c;

    public b(ViewGroup viewGroup) {
        this.f5861a = viewGroup;
        ImageView imageView = new ImageView(this.f5861a.getContext());
        this.b = imageView;
        imageView.setId(h.a(this.f5861a.getContext(), "myoffer_loading_id", "id"));
        this.b.setImageResource(h.a(this.f5861a.getContext(), "myoffer_loading", i.c));
        this.c = (int) TypedValue.applyDimension(1, 50.0f, this.f5861a.getResources().getDisplayMetrics());
    }

    public final void a() {
        this.c = (int) TypedValue.applyDimension(1, 30.0f, this.f5861a.getResources().getDisplayMetrics());
    }

    private void d() {
        ImageView imageView = this.b;
        if (imageView != null) {
            this.f5861a.removeView(imageView);
        }
        this.f5861a.post(new AnonymousClass1());
    }

    /* JADX INFO: renamed from: com.tkay.basead.ui.b$1, reason: invalid class name */
    final class AnonymousClass1 implements Runnable {
        AnonymousClass1() {
        }

        @Override // java.lang.Runnable
        public final void run() {
            try {
                if (!(b.this.f5861a instanceof RelativeLayout)) {
                    if (b.this.f5861a instanceof FrameLayout) {
                        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(b.this.c, b.this.c);
                        layoutParams.gravity = 17;
                        b.this.f5861a.addView(b.this.b, layoutParams);
                        return;
                    }
                    return;
                }
                RelativeLayout.LayoutParams layoutParams2 = new RelativeLayout.LayoutParams(b.this.c, b.this.c);
                layoutParams2.addRule(13);
                b.this.f5861a.addView(b.this.b, layoutParams2);
            } catch (Throwable unused) {
            }
        }
    }

    public final void c() {
        if (this.b != null) {
            this.f5861a.post(new Runnable() { // from class: com.tkay.basead.ui.b.3
                @Override // java.lang.Runnable
                public final void run() {
                    try {
                        b.this.b.clearAnimation();
                        b.this.b.setAlpha(0.0f);
                        b.this.f5861a.removeView(b.this.b);
                    } catch (Throwable unused) {
                    }
                }
            });
        }
    }

    public final void b() {
        ImageView imageView = this.b;
        if (imageView != null) {
            this.f5861a.removeView(imageView);
        }
        this.f5861a.post(new AnonymousClass1());
        this.b.post(new Runnable() { // from class: com.tkay.basead.ui.b.2
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    b.this.b.setAlpha(1.0f);
                    RotateAnimation rotateAnimation = new RotateAnimation(0.0f, -360.0f, 1, 0.5f, 1, 0.5f);
                    rotateAnimation.setDuration(1000L);
                    rotateAnimation.setInterpolator(new LinearInterpolator());
                    rotateAnimation.setRepeatCount(-1);
                    b.this.b.startAnimation(rotateAnimation);
                } catch (Throwable unused) {
                }
            }
        });
    }
}
