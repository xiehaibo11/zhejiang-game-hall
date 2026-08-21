package com.kwad.components.ad.splashscreen.widget;

public abstract class b extends com.kwad.sdk.widget.KSFrameLayout {
    private android.animation.Animator Fj;
    private boolean Fk;


    public b(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r0, r1)
            return
    }

    public b(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public b(android.content.Context r2, android.util.AttributeSet r3, int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            r0 = 0
            r1.Fk = r0
            r1.a(r2, r3, r4)
            r1.ll()
            return
    }

    static boolean a(com.kwad.components.ad.splashscreen.widget.b r0) {
            boolean r0 = r0.Fk
            return r0
    }

    static android.animation.Animator b(com.kwad.components.ad.splashscreen.widget.b r0) {
            android.animation.Animator r0 = r0.Fj
            return r0
    }

    protected void a(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            return
    }

    @Override
    public final void ab() {
            r1 = this;
            super.ab()
            android.animation.Animator r0 = r1.Fj
            if (r0 == 0) goto La
            r0.cancel()
        La:
            return
    }

    protected abstract int getAnimationDelayTime();

    protected abstract android.view.View getInteractionView();

    protected abstract android.animation.Animator lE();

    protected abstract void lF();

    public final void lG() {
            r1 = this;
            r0 = 1
            r1.Fk = r0
            android.animation.Animator r0 = r1.Fj
            if (r0 == 0) goto La
            r0.cancel()
        La:
            return
    }

    public final void le() {
            r2 = this;
            android.animation.Animator r0 = r2.Fj
            if (r0 == 0) goto La
            r0.cancel()
            r0 = 0
            r2.Fj = r0
        La:
            android.animation.Animator r0 = r2.lE()
            r2.Fj = r0
            if (r0 == 0) goto L1f
            com.kwad.components.ad.splashscreen.widget.b$1 r1 = new com.kwad.components.ad.splashscreen.widget.b$1
            r1.<init>(r2)
            r0.addListener(r1)
            android.animation.Animator r0 = r2.Fj
            r0.start()
        L1f:
            return
    }

    protected abstract void ll();
}
