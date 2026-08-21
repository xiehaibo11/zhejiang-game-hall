package com.tkay.expressad.video.dynview.widget;

import android.animation.AnimatorSet;
import android.content.Context;
import android.util.AttributeSet;
import android.widget.FrameLayout;

/* JADX INFO: loaded from: classes3.dex */
public class TYFramLayout extends FrameLayout {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private AnimatorSet f7258a;

    public TYFramLayout(Context context) {
        super(context);
    }

    public TYFramLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYFramLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setAnimatorSet(AnimatorSet animatorSet) {
        this.f7258a = animatorSet;
    }

    @Override // android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        AnimatorSet animatorSet = this.f7258a;
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
        AnimatorSet animatorSet = this.f7258a;
        if (animatorSet != null) {
            try {
                animatorSet.cancel();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
