package com.kwad.components.core.page.widget;

import android.content.Context;
import android.view.TextureView;

public final class b extends TextureView {
    public b(Context context) {
        super(context);
    }

    @Override
    protected final void onDetachedFromWindow() {
        try {
            super.onDetachedFromWindow();
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }
}
