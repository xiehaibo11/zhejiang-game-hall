package com.tkay.expressad.video.dynview.widget;

import android.animation.ObjectAnimator;
import android.content.Context;
import android.util.AttributeSet;
import android.widget.TextView;

/* JADX INFO: loaded from: classes3.dex */
public class TYTextView extends TextView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private ObjectAnimator f7268a;

    public TYTextView(Context context) {
        super(context);
    }

    public TYTextView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYTextView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public void setObjectAnimator(ObjectAnimator objectAnimator) {
        this.f7268a = objectAnimator;
    }

    @Override // android.widget.TextView, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        ObjectAnimator objectAnimator = this.f7268a;
        if (objectAnimator != null) {
            try {
                objectAnimator.start();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }

    @Override // android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ObjectAnimator objectAnimator = this.f7268a;
        if (objectAnimator != null) {
            try {
                objectAnimator.cancel();
            } catch (Exception e) {
                e.printStackTrace();
            }
        }
    }
}
