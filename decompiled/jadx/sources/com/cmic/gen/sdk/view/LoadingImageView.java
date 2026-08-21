package com.cmic.gen.sdk.view;

import android.content.Context;
import android.util.AttributeSet;
import android.view.animation.Animation;
import android.view.animation.AnimationUtils;
import android.view.animation.LinearInterpolator;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes.dex */
public class LoadingImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Animation f1700a;
    private LinearInterpolator b;

    public LoadingImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.f1700a = null;
        this.b = null;
        a();
    }

    public LoadingImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.f1700a = null;
        this.b = null;
        a();
    }

    public LoadingImageView(Context context) {
        super(context);
        this.f1700a = null;
        this.b = null;
        a();
    }

    protected void a() {
        this.f1700a = AnimationUtils.loadAnimation(getContext(), c.c(getContext(), "umcsdk_anim_loading"));
        LinearInterpolator linearInterpolator = new LinearInterpolator();
        this.b = linearInterpolator;
        this.f1700a.setInterpolator(linearInterpolator);
    }
}
