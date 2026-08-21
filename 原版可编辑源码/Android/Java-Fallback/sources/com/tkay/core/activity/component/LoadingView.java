package com.tkay.core.activity.component;

public class LoadingView extends android.widget.ImageView {
    public LoadingView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a()
            return
    }

    public LoadingView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a()
            return
    }

    public LoadingView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a()
            return
    }

    private void a() {
            r4 = this;
            android.content.res.Resources r0 = r4.getResources()
            android.content.Context r1 = r4.getContext()
            java.lang.String r2 = "core_loading"
            java.lang.String r3 = "drawable"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            android.graphics.drawable.Drawable r0 = r0.getDrawable(r1)
            r4.setImageDrawable(r0)
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L27
            r1 = 19
            r2 = 0
            if (r0 < r1) goto L23
            r0 = 2
            r4.setLayerType(r0, r2)     // Catch: java.lang.Exception -> L27
            goto L27
        L23:
            r0 = 1
            r4.setLayerType(r0, r2)     // Catch: java.lang.Exception -> L27
        L27:
            a(r4)
            return
    }

    private static void a(android.view.View r8) {
            android.view.animation.RotateAnimation r7 = new android.view.animation.RotateAnimation
            r1 = 0
            r2 = 1135869952(0x43b40000, float:360.0)
            r3 = 1
            r4 = 1056964608(0x3f000000, float:0.5)
            r5 = 1
            r6 = 1056964608(0x3f000000, float:0.5)
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            android.view.animation.LinearInterpolator r0 = new android.view.animation.LinearInterpolator
            r0.<init>()
            r1 = -1
            r7.setRepeatCount(r1)
            r7.setInterpolator(r0)
            r0 = 1000(0x3e8, double:4.94E-321)
            r7.setDuration(r0)
            r8.startAnimation(r7)
            return
    }

    public void startAnimation() {
            r0 = this;
            a(r0)
            return
    }
}
