package com.tkay.expressad.video.dynview.widget;

import android.animation.AnimatorSet;
import android.content.Context;
import android.util.AttributeSet;
import android.view.View;
import android.widget.RelativeLayout;

/* JADX INFO: loaded from: classes3.dex */
public class TYRelativeLayout extends RelativeLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private boolean f7265a;
    private AnimatorSet b;
    private boolean c;

    public TYRelativeLayout(Context context) {
        super(context);
    }

    public TYRelativeLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYRelativeLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setAnimatorSet(AnimatorSet animatorSet) {
        this.b = animatorSet;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        AnimatorSet animatorSet = this.b;
        if (animatorSet != null) {
            try {
                animatorSet.start();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        if (!this.f7265a) {
            this.f7265a = true;
        }
        AnimatorSet animatorSet = this.b;
        if (animatorSet != null) {
            try {
                animatorSet.cancel();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override // android.view.View
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
    }
}
