package com.kwad.components.core.page.widget;

public final class b extends android.view.TextureView {
    public b(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            r0.printStackTrace()
            return
    }
}
