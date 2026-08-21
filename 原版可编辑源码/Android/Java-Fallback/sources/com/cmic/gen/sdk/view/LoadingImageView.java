package com.cmic.gen.sdk.view;

public class LoadingImageView extends android.widget.ImageView {
    private android.view.animation.Animation a;
    private android.view.animation.LinearInterpolator b;

    public LoadingImageView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.a = r1
            r0.b = r1
            r0.a()
            return
    }

    public LoadingImageView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.a = r1
            r0.b = r1
            r0.a()
            return
    }

    public LoadingImageView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 0
            r0.a = r1
            r0.b = r1
            r0.a()
            return
    }

    protected void a() {
            r3 = this;
            android.content.Context r0 = r3.getContext()
            android.content.Context r1 = r3.getContext()
            java.lang.String r2 = "umcsdk_anim_loading"
            int r1 = com.cmic.gen.sdk.view.c.c(r1, r2)
            android.view.animation.Animation r0 = android.view.animation.AnimationUtils.loadAnimation(r0, r1)
            r3.a = r0
            android.view.animation.LinearInterpolator r0 = new android.view.animation.LinearInterpolator
            r0.<init>()
            r3.b = r0
            android.view.animation.Animation r1 = r3.a
            r1.setInterpolator(r0)
            return
    }
}
