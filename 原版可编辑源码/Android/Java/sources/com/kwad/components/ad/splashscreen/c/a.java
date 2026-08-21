package com.kwad.components.ad.splashscreen.c;

import android.view.View;
import com.kwad.sdk.R;

public final class a extends e implements com.kwad.sdk.widget.c {
    private View CB;
    private boolean CC;

    @Override
    public final void a(View view) {
        this.CM.c(1, view.getContext(), 53, 2);
    }

    @Override
    public final void ah() {
        super.ah();
        if (this.CM == null) {
            return;
        }
        this.CC = com.kwad.sdk.core.response.b.c.bV(this.CM.mAdTemplate);
        boolean zM = com.kwad.components.ad.splashscreen.h.m(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate));
        this.CB.setVisibility(zM ? 0 : 8);
        if (zM) {
            new com.kwad.sdk.widget.f(this.CB.getContext(), this.CB, this);
        }
    }

    @Override
    public final void b(View view) {
        com.kwad.sdk.core.e.c.d("FullScreenTouchConvertPresenter", "onSlide: enableSlickClick: " + this.CC);
        if (this.CC) {
            this.CM.c(1, view.getContext(), 153, 2);
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
        this.CB = findViewById(R.id.ksad_splash_actionbar_full_screen);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
    }
}
