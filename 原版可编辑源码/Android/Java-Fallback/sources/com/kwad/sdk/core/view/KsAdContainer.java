package com.kwad.sdk.core.view;

public class KsAdContainer extends android.widget.RelativeLayout {
    protected com.kwad.sdk.utils.ac.a axd;

    public KsAdContainer(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            com.kwad.sdk.utils.ac$a r1 = new com.kwad.sdk.utils.ac$a
            r1.<init>()
            r0.axd = r1
            return
    }

    public KsAdContainer(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.ac$a r1 = new com.kwad.sdk.utils.ac$a
            r1.<init>()
            r0.axd = r1
            return
    }

    public KsAdContainer(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            com.kwad.sdk.utils.ac$a r1 = new com.kwad.sdk.utils.ac$a
            r1.<init>()
            r0.axd = r1
            return
    }

    @Override
    public boolean dispatchTouchEvent(android.view.MotionEvent r4) {
            r3 = this;
            int r0 = r4.getAction()
            if (r0 == 0) goto L18
            r1 = 1
            if (r0 == r1) goto La
            goto L32
        La:
            com.kwad.sdk.utils.ac$a r0 = r3.axd
            float r1 = r4.getX()
            float r2 = r4.getY()
            r0.g(r1, r2)
            goto L32
        L18:
            com.kwad.sdk.utils.ac$a r0 = new com.kwad.sdk.utils.ac$a
            int r1 = r3.getWidth()
            int r2 = r3.getHeight()
            r0.<init>(r1, r2)
            r3.axd = r0
            float r1 = r4.getX()
            float r2 = r4.getY()
            r0.f(r1, r2)
        L32:
            boolean r4 = super.dispatchTouchEvent(r4)
            return r4
    }

    public com.kwad.sdk.utils.ac.a getTouchCoords() {
            r1 = this;
            com.kwad.sdk.utils.ac$a r0 = r1.axd
            return r0
    }
}
