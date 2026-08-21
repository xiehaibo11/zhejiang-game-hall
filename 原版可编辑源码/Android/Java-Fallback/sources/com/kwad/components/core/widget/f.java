package com.kwad.components.core.widget;

public final class f extends android.widget.FrameLayout {
    private boolean Zc;
    protected com.kwad.components.core.widget.g hA;
    protected boolean hT;
    protected android.content.Context mContext;

    public f(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.mContext = r1
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            r0.hT = r1
            return
    }

    private void sw() {
            r2 = this;
            boolean r0 = com.kwad.sdk.utils.ai.IN()
            boolean r1 = r2.Zc
            if (r1 == 0) goto L17
            boolean r1 = r2.hT
            if (r0 == r1) goto L17
            r2.hT = r0
            com.kwad.components.core.widget.g r1 = r2.hA
            if (r1 == 0) goto L17
            r0 = r0 ^ 1
            r1.j(r0)
        L17:
            return
    }

    @Override
    protected final void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            r0.sw()
            return
    }

    @Override
    protected final void onWindowVisibilityChanged(int r1) {
            r0 = this;
            super.onWindowVisibilityChanged(r1)
            if (r1 != 0) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 0
        L8:
            r0.Zc = r1
            r0.sw()
            return
    }

    public final void setOrientationChangeListener(com.kwad.components.core.widget.g r1) {
            r0 = this;
            r0.hA = r1
            return
    }
}
