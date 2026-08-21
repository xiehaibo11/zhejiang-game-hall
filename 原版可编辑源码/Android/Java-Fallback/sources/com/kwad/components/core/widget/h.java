package com.kwad.components.core.widget;

public final class h extends android.view.ViewOutlineProvider {
    private float Zd;

    private h(float r1) {
            r0 = this;
            r0.<init>()
            r0.Zd = r1
            return
    }

    public static void b(android.view.View r1, float r2) {
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 > 0) goto Le
            r2 = 0
            r1.setOutlineProvider(r2)
            r2 = 0
        La:
            r1.setClipToOutline(r2)
            return
        Le:
            com.kwad.components.core.widget.h r0 = new com.kwad.components.core.widget.h
            r0.<init>(r2)
            r1.setOutlineProvider(r0)
            r2 = 1
            goto La
    }

    @Override
    public final void getOutline(android.view.View r7, android.graphics.Outline r8) {
            r6 = this;
            int r3 = r7.getWidth()
            int r4 = r7.getHeight()
            float r5 = r6.Zd
            r1 = 0
            r2 = 0
            r0 = r8
            r0.setRoundRect(r1, r2, r3, r4, r5)
            return
    }
}
